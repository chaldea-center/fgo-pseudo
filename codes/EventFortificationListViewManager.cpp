void __fastcall EventFortificationListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *SORT_SAVE_KEY; // x19
  ListViewSort_o *v7; // x20
  struct EventFortificationListViewManager_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A0283A & 1) == 0 )
  {
    sub_1B64A00(&EventFortificationListViewManager_TypeInfo, v1);
    sub_1B64A00(&ListViewSort_TypeInfo, v4);
    sub_1B64A00(&StringLiteral_6185/*"EventServantFatigueList"*/, v5);
    byte_4A0283A = 1;
  }
  EventFortificationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_6185/*"EventServantFatigueList"*/;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)EventFortificationListViewManager_TypeInfo->static_fields,
    StringLiteral_6185/*"EventServantFatigueList"*/,
    v2,
    v3);
  SORT_SAVE_KEY = EventFortificationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v7 = (ListViewSort_o *)sub_1B64C4C(ListViewSort_TypeInfo);
  ListViewSort___ctor_40431780(v7, SORT_SAVE_KEY, 3, 0, 0LL);
  static_fields = EventFortificationListViewManager_TypeInfo->static_fields;
  static_fields->servantSortStatus = v7;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->servantSortStatus, (int32_t)v7, v9, v10);
}


void __fastcall EventFortificationListViewManager___ctor(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall EventFortificationListViewManager__CallbackFortificationRequest(
        EventFortificationListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  EventFortificationListViewManager_o *v4; // x19
  struct System_Action_bool__UserServantEntity__o *v5; // x8
  Il2CppObject *m_target; // x4
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int64 v8; // x3
  __int64 v9; // x1
  struct UserServantEntity_o *targetInUserServantEntity; // x2
  struct System_Action_bool__UserServantEntity__o *selectAfterCallback; // x8

  v4 = this;
  if ( (byte_4A02823 & 1) == 0 )
  {
    this = (EventFortificationListViewManager_o *)sub_1B64A00(&StringLiteral_21971/*"ng"*/, result);
    byte_4A02823 = 1;
  }
  if ( !result )
    goto LABEL_11;
  this = (EventFortificationListViewManager_o *)System_String__Equals_61393452(
                                                  result,
                                                  (System_String_o *)StringLiteral_21971/*"ng"*/,
                                                  0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    this = (EventFortificationListViewManager_o *)v4->fields.fortificationConfirmDialog;
    if ( this )
    {
      FortificationConfirmDialogComponent__Close(
        (FortificationConfirmDialogComponent_o *)this,
        (const MethodInfo *)result);
      selectAfterCallback = v4->fields.selectAfterCallback;
      if ( selectAfterCallback )
      {
        targetInUserServantEntity = v4->fields.targetInUserServantEntity;
        m_target = selectAfterCallback->fields.m_target;
        original_method_info = selectAfterCallback->fields.original_method_info;
        v8 = *(_QWORD *)&selectAfterCallback->fields.extra_arg;
        v9 = 1LL;
        goto LABEL_10;
      }
    }
LABEL_11:
    sub_1B64C5C(this, result);
  }
  v5 = v4->fields.selectAfterCallback;
  if ( !v5 )
    goto LABEL_11;
  m_target = v5->fields.m_target;
  original_method_info = v5->fields.original_method_info;
  v8 = *(_QWORD *)&v5->fields.extra_arg;
  v9 = 0LL;
  targetInUserServantEntity = 0LL;
LABEL_10:
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, struct UserServantEntity_o *, __int64))m_target)(
    original_method_info,
    v9,
    targetInUserServantEntity,
    v8);
}


void __fastcall EventFortificationListViewManager__CloseFortificationConfirmDialog(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  System_Collections_Generic_List_object__o *v15; // x20
  NetworkManager_ResultCallbackFunc_o *v16; // x21
  System_Object_array *Request_object; // x0
  __int64 v18; // x1
  struct UserServantEntity_o *targetInUserServantEntity; // x9
  struct UserServantEntity_o *targetOutUserServantEntity; // x10
  EventFortificationRequest_o *v21; // x21
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x8
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x10
  __int128 v24; // q1
  int32_t fortificationIdx; // w23
  int32_t position; // w24
  __int128 *v27; // x0
  struct EventFortificationWorkItem_o *v28; // x8
  struct EventFortificationDetailEntity_o *v29; // x9
  int32_t v30; // w24
  int32_t v31; // w23
  EnterUserSvtInfo_o *v32; // x0
  Il2CppObject *v33; // x22
  int32_t v34; // w1
  int32_t v35; // w2
  int64_t v36; // x3
  struct EventFortificationDetailEntity_o *v37; // x10
  __int128 v38; // q1
  int64_t v39; // x25
  int32_t v40; // w2
  int32_t v41; // w3
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0
  int32_t eventId; // w19
  const MethodInfo *v47; // x3
  __int128 v48[2]; // [xsp+0h] [xbp-A0h] BYREF
  __int128 v49[2]; // [xsp+20h] [xbp-80h] BYREF
  __int128 v50; // [xsp+40h] [xbp-60h]
  __int128 v51; // [xsp+50h] [xbp-50h]

  if ( (byte_4A02822 & 1) == 0 )
  {
    sub_1B64A00(&EnterUserSvtInfo_TypeInfo, method);
    sub_1B64A00(&Method_EventFortificationListViewManager_CallbackFortificationRequest__, v3);
    sub_1B64A00(&Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__, v7);
    sub_1B64A00(&System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo, v8);
    sub_1B64A00(&Method_NetworkManager_getRequest_EventFortificationRequest___, v9);
    sub_1B64A00(&NetworkManager_TypeInfo, v10);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_1B64A00(&NetworkManager_ResultCallbackFunc_TypeInfo, v12);
    byte_4A02822 = 1;
  }
  v13 = Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__;
  if ( (*((_BYTE *)Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1B64A18(Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__);
  v14 = (System_Reflection_MethodBase_o *)sub_1B649E4(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 8, 0LL);
  v15 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__);
  v16 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64C4C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v16,
    (Il2CppObject *)this,
    Method_EventFortificationListViewManager_CallbackFortificationRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = (System_Object_array *)NetworkManager__getRequest_object_(
                                            v16,
                                            (const MethodInfo_2EBD2C4 *)Method_NetworkManager_getRequest_EventFortificationRequest___);
  targetInUserServantEntity = this->fields.targetInUserServantEntity;
  targetOutUserServantEntity = this->fields.targetOutUserServantEntity;
  v21 = (EventFortificationRequest_o *)Request_object;
  if ( targetInUserServantEntity )
  {
    targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
    if ( targetOutUserServantEntity )
    {
      if ( !targetFortificationWorkItem )
        goto LABEL_32;
      eventFortificationDetailEntity = targetFortificationWorkItem->fields.eventFortificationDetailEntity;
      if ( !eventFortificationDetailEntity )
        goto LABEL_32;
      v24 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.fakeValue;
      fortificationIdx = eventFortificationDetailEntity->fields.fortificationIdx;
      position = targetFortificationWorkItem->fields.position;
      v50 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.currentCryptoKey;
      v51 = v24;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v27 = v49;
      v49[0] = v50;
      v49[1] = v51;
    }
    else
    {
      if ( !targetFortificationWorkItem )
        goto LABEL_32;
      v37 = targetFortificationWorkItem->fields.eventFortificationDetailEntity;
      if ( !v37 )
        goto LABEL_32;
      v38 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.fakeValue;
      fortificationIdx = v37->fields.fortificationIdx;
      position = targetFortificationWorkItem->fields.position;
      v50 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.currentCryptoKey;
      v51 = v38;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v27 = v48;
      v48[0] = v50;
      v48[1] = v51;
    }
    v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(
            (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v27,
            0LL);
    v32 = (EnterUserSvtInfo_o *)sub_1B64C4C(EnterUserSvtInfo_TypeInfo);
    v33 = (Il2CppObject *)v32;
    v34 = fortificationIdx;
    v35 = position;
    v36 = v39;
  }
  else
  {
    if ( !targetOutUserServantEntity )
      return;
    v28 = this->fields.targetFortificationWorkItem;
    if ( !v28 || (v29 = v28->fields.eventFortificationDetailEntity) == 0LL )
LABEL_32:
      sub_1B64C5C(Request_object, v18);
    v30 = v28->fields.position;
    v31 = v29->fields.fortificationIdx;
    v32 = (EnterUserSvtInfo_o *)sub_1B64C4C(EnterUserSvtInfo_TypeInfo);
    v33 = (Il2CppObject *)v32;
    v34 = v31;
    v35 = v30;
    v36 = 0LL;
  }
  EnterUserSvtInfo___ctor(v32, v34, v35, v36, 0LL);
  if ( !v15 )
    goto LABEL_32;
  items = v15->fields._items;
  v43 = Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__;
  ++v15->fields._version;
  if ( !items )
    goto LABEL_32;
  size = v15->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      v33,
      *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
  }
  else
  {
    v45 = &items->obj.klass + size;
    v15->fields._size = size + 1;
    v45[4] = (Il2CppClass *)v33;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v45 + 4), (int32_t)v33, v40, v41);
  }
  eventId = this->fields.eventId;
  Request_object = System_Collections_Generic_List_object___ToArray(
                     v15,
                     (const MethodInfo_34B1BC0 *)Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__);
  if ( !v21 )
    goto LABEL_32;
  EventFortificationRequest__beginRequest(v21, eventId, (EnterUserSvtInfo_array *)Request_object, v47);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager__CreateList(
        EventFortificationListViewManager_o *this,
        int32_t eventId,
        FortificationConfirmDialogComponent_o *fortificationConfirmDialog,
        EventFortificationWorkItem_o *targetItem,
        System_Action_bool__UserServantEntity__o *afterCallback,
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
  __int64 v27; // x28
  __int64 sort; // x0
  const MethodInfo *v29; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3
  EventFortificationListViewManager_c *v34; // x0
  struct ListViewSort_o *servantSortStatus; // x1
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w2
  int32_t v41; // w3
  struct EventFortificationWorkItem_o **p_targetFortificationWorkItem; // x24
  struct EventFortificationWorkItem_o *v43; // x1
  int32_t v44; // w2
  int32_t v45; // w3
  int32_t v46; // w2
  int32_t v47; // w3
  int32_t v48; // w2
  int32_t v49; // w3
  struct ListViewSort_o *v50; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeButtonSprite; // x23
  System_Int32_array *v54; // x23
  Il2CppObject *MasterData_object; // x25
  Il2CppObject *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v60; // q0
  int64_t v61; // x23
  struct EventFortificationWorkItem_o *v62; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x24
  UserServantEntity_o *v64; // x27
  int32_t v65; // w21
  EventFortificationListViewItem_o *v66; // x25
  System_Func_object__bool__o *v67; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v68; // x0
  int32_t v69; // w2
  int32_t v70; // w3
  __int64 v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  __int64 v74; // x8
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8
  System_Func_object__bool__o *v76; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v77; // x0
  __int64 v78; // x29
  __int64 v79; // x28
  UserServantEntity_o *v80; // x25
  int32_t v81; // w26
  EventFortificationWorkItem_o *v82; // x27
  EventFortificationListViewItem_o *v83; // x21
  int32_t v84; // w2
  int32_t v85; // w3
  __int64 v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  __int64 v89; // x8
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v91; // x2
  const MethodInfo *v92; // x1
  EventUpValSetupInfo_o *setupInfo; // [xsp+0h] [xbp-D0h]
  struct EventFortificationWorkItem_o **v94; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v95; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v96[2]; // [xsp+30h] [xbp-A0h] BYREF

  if ( (byte_4A02816 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantClassMaster___, *(_QWORD *)&eventId);
    sub_1B64A00(&Method_DataManager_GetMasterData_UserServantMaster___, v11);
    sub_1B64A00(&Method_System_Linq_Enumerable_ToArray_UserServantEntity___, v12);
    sub_1B64A00(&Method_System_Linq_Enumerable_Where_UserServantEntity___, v13);
    sub_1B64A00(&EventFortificationListViewItem_TypeInfo, v14);
    sub_1B64A00(&EventFortificationListViewManager_TypeInfo, v15);
    sub_1B64A00(&EventUpValSetupInfo_TypeInfo, v16);
    sub_1B64A00(&System_Func_UserServantEntity__bool__TypeInfo, v17);
    sub_1B64A00(&int___TypeInfo, v18);
    sub_1B64A00(&Method_System_Collections_Generic_List_ListViewItem__Add__, v19);
    sub_1B64A00(&LocalizationManager_TypeInfo, v20);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1B64A00(&Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__0__, v23);
    sub_1B64A00(&Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__1__, v24);
    sub_1B64A00(&EventFortificationListViewManager___c__DisplayClass48_0_TypeInfo, v25);
    sub_1B64A00(&StringLiteral_11721/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v26);
    byte_4A02816 = 1;
  }
  memset(&v96[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v27 = sub_1B64C4C(EventFortificationListViewManager___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  if ( !v27 )
    goto LABEL_62;
  *(_QWORD *)(v27 + 16) = targetItem;
  v94 = (struct EventFortificationWorkItem_o **)(v27 + 16);
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v27 + 16), (int32_t)targetItem, v30, v31);
  v34 = EventFortificationListViewManager_TypeInfo;
  if ( !EventFortificationListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationListViewManager_TypeInfo);
    v34 = EventFortificationListViewManager_TypeInfo;
  }
  servantSortStatus = v34->static_fields->servantSortStatus;
  this->fields.sort = servantSortStatus;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.sort, (int32_t)servantSortStatus, v32, v33);
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_62;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_62;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)sort, 0LL, 1, 0LL, 79, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_62;
  TitleInfoControl__setBackBtnSprite_36880424((TitleInfoControl_o *)sort, 1, 0, 0, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_62;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)sort, 45, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_62;
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)sort, 0, 0LL);
  this->fields.targetInUserServantEntity = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.targetInUserServantEntity, 0, v36, v37);
  this->fields.targetOutUserServantEntity = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.targetOutUserServantEntity, 0, v38, v39);
  this->fields.eventId = eventId;
  this->fields.fortificationConfirmDialog = fortificationConfirmDialog;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&this->fields.fortificationConfirmDialog,
    (int32_t)fortificationConfirmDialog,
    v40,
    v41);
  p_targetFortificationWorkItem = &this->fields.targetFortificationWorkItem;
  v43 = *v94;
  this->fields.targetFortificationWorkItem = *v94;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.targetFortificationWorkItem, (int32_t)v43, v44, v45);
  this->fields.selectAfterCallback = afterCallback;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.selectAfterCallback, (int32_t)afterCallback, v46, v47);
  v50 = this->fields.sort;
  this->fields.modeKind = 0;
  if ( !v50 )
    goto LABEL_62;
  iconScaleKind = v50->fields.iconScaleKind;
  this->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    normalSizeSeed = this->fields.normalSizeSeed;
  }
  else if ( iconScaleKind == 2 )
  {
    normalSizeSeed = this->fields.smallSizeSeed;
  }
  else
  {
    if ( iconScaleKind != 3 )
      goto LABEL_19;
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
  }
  this->fields.seed = normalSizeSeed;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v48, v49);
LABEL_19:
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_62;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  sort = (__int64)ListViewSort__GetScaleKindSpriteName((ListViewSort_o *)sort, this->fields.scaleType, 0LL);
  if ( !scaleChangeButtonSprite )
    goto LABEL_62;
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL);
  sort = sub_1B64AA8(int___TypeInfo, 1LL);
  if ( !sort )
    goto LABEL_62;
  v54 = (System_Int32_array *)sort;
  if ( !*(_DWORD *)(sort + 24) )
LABEL_56:
    sub_1B64C64(sort, v29);
  *(_DWORD *)(sort + 32) = eventId;
  setupInfo = (EventUpValSetupInfo_o *)sub_1B64C4C(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_38597476(setupInfo, v54, 1, 0, 0, 0LL);
  sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_62;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)sort,
                        (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_62;
  v56 = DataManager__GetMasterData_object_(
          (DataManager_o *)sort,
          (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  *(_QWORD *)(v27 + 24) = v56;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v27 + 24), (int32_t)v56, v57, v58);
  if ( !*p_targetFortificationWorkItem )
    goto LABEL_62;
  userServantEntity = (*p_targetFortificationWorkItem)->fields.userServantEntity;
  if ( userServantEntity )
  {
    v60 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v96[1].fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v96[1].fields.fakeValue = v60;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v96, -1LL, 0LL);
    v96[1] = v96[0];
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v95 = v96[1];
  sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v95, 0LL);
  if ( !MasterData_object )
    goto LABEL_62;
  v61 = sort;
  sort = (__int64)UserServantMaster__getOrganizationList((UserServantMaster_o *)MasterData_object, 0LL);
  v62 = *v94;
  if ( !*v94 )
    goto LABEL_62;
  v63 = (System_Collections_Generic_IEnumerable_TSource__o *)sort;
  if ( !v62->fields.isSvtDataSetInMaster )
  {
    eventFortificationDetailEntity = v62->fields.eventFortificationDetailEntity;
    if ( !eventFortificationDetailEntity )
      goto LABEL_62;
    if ( eventFortificationDetailEntity->fields.classId )
    {
      v76 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_UserServantEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v76,
        (Il2CppObject *)v27,
        Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__0__,
        0LL);
      v77 = System_Linq_Enumerable__Where_object_(
              v63,
              (System_Func_TSource__bool__o *)v76,
              (const MethodInfo_2E79990 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
      sort = (__int64)System_Linq_Enumerable__ToArray_object_(
                        v77,
                        (const MethodInfo_2E73CB8 *)Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
      v63 = (System_Collections_Generic_IEnumerable_TSource__o *)sort;
    }
LABEL_46:
    if ( !v63 )
      goto LABEL_62;
    goto LABEL_47;
  }
  v64 = v62->fields.userServantEntity;
  v65 = this->fields.eventId;
  v66 = (EventFortificationListViewItem_o *)sub_1B64C4C(EventFortificationListViewItem_TypeInfo);
  EventFortificationListViewItem___ctor(v66, v64, v65, v61, setupInfo, v62, 0LL);
  v67 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v67,
    (Il2CppObject *)v27,
    Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__1__,
    0LL);
  v68 = System_Linq_Enumerable__Where_object_(
          v63,
          (System_Func_TSource__bool__o *)v67,
          (const MethodInfo_2E79990 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
  sort = (__int64)System_Linq_Enumerable__ToArray_object_(
                    v68,
                    (const MethodInfo_2E73CB8 *)Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
  if ( !*(_QWORD *)(v27 + 16) )
    goto LABEL_62;
  v63 = (System_Collections_Generic_IEnumerable_TSource__o *)sort;
  sort = EventFortificationWorkItem__get_IsNpc(*(EventFortificationWorkItem_o **)(v27 + 16), v29);
  if ( (sort & 1) == 0 )
    goto LABEL_46;
  sort = (__int64)this->fields.itemList;
  if ( !sort )
    goto LABEL_62;
  v71 = *(_QWORD *)(sort + 16);
  v72 = Method_System_Collections_Generic_List_ListViewItem__Add__;
  ++*(_DWORD *)(sort + 28);
  if ( !v71 )
    goto LABEL_62;
  v73 = *(int *)(sort + 24);
  if ( (unsigned int)v73 >= *(_DWORD *)(v71 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)sort,
      (Il2CppObject *)v66,
      *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
    if ( !v63 )
      goto LABEL_62;
  }
  else
  {
    v74 = v71 + 8 * v73;
    *(_DWORD *)(sort + 24) = v73 + 1;
    *(_QWORD *)(v74 + 32) = v66;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v74 + 32), (int32_t)v66, v69, v70);
    if ( !v63 )
      goto LABEL_62;
  }
LABEL_47:
  if ( (int)v63[1].monitor >= 1 )
  {
    v78 = 0LL;
    v79 = (unsigned int)v63[1].monitor - 1LL;
    while ( 1 )
    {
      v80 = (UserServantEntity_o *)*((_QWORD *)&v63[2].klass + v78);
      v81 = this->fields.eventId;
      v82 = *v94;
      v83 = (EventFortificationListViewItem_o *)sub_1B64C4C(EventFortificationListViewItem_TypeInfo);
      EventFortificationListViewItem___ctor(v83, v80, v81, v61, setupInfo, v82, 0LL);
      sort = (__int64)this->fields.itemList;
      if ( !sort )
        break;
      v86 = *(_QWORD *)(sort + 16);
      v87 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(sort + 28);
      if ( !v86 )
        break;
      v88 = *(int *)(sort + 24);
      if ( (unsigned int)v88 >= *(_DWORD *)(v86 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)sort,
          (Il2CppObject *)v83,
          *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
      }
      else
      {
        v89 = v86 + 8 * v88;
        *(_DWORD *)(sort + 24) = v88 + 1;
        *(_QWORD *)(v89 + 32) = v83;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v89 + 32), (int32_t)v83, v84, v85);
      }
      if ( v79 == v78 )
        goto LABEL_57;
      if ( ++v78 >= (unsigned __int64)LODWORD(v63[1].monitor) )
        goto LABEL_56;
    }
LABEL_62:
    sub_1B64C5C(sort, v29);
  }
LABEL_57:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11721/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_62;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0LL);
  EventFortificationListViewManager__SetStatusKind(this, this->fields.modeKind, v91);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  EventFortificationListViewManager__SetFilterButtonImage(this, v92);
}


void __fastcall EventFortificationListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  EventFortificationListViewManager_c *v2; // x0
  ListViewSort_o *servantSortStatus; // x0

  if ( (byte_4A02812 & 1) == 0 )
  {
    sub_1B64A00(&EventFortificationListViewManager_TypeInfo, v1);
    byte_4A02812 = 1;
  }
  v2 = EventFortificationListViewManager_TypeInfo;
  if ( !EventFortificationListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationListViewManager_TypeInfo);
    v2 = EventFortificationListViewManager_TypeInfo;
  }
  servantSortStatus = v2->static_fields->servantSortStatus;
  if ( !servantSortStatus )
    sub_1B64C5C(0LL, v1);
  ListViewSort__DeleteContinueData(servantSortStatus, 0LL);
}


void __fastcall EventFortificationListViewManager__DestroyList(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_1B64C5C(0LL, v3);
  ListViewSort__Save(sort, 0LL);
}


void __fastcall EventFortificationListViewManager__EndClickTabChoice(
        EventFortificationListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  EventFortificationListViewManager__SetStatusKind(this, 2, method);
  EventFortificationListViewManager__RefreshListDisp(this, v4);
  EventFortificationListViewManager__ModifyList(this, 0, v5);
  EventFortificationListViewManager__SetMode_45233104(this, 2, v6);
}


void __fastcall EventFortificationListViewManager__EndClickTabLock(
        EventFortificationListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  EventFortificationListViewManager__SetStatusKind(this, 1, method);
  EventFortificationListViewManager__RefreshListDisp(this, v4);
  EventFortificationListViewManager__ModifyList(this, 0, v5);
  EventFortificationListViewManager__SetMode_45233104(this, 2, v6);
}


void __fastcall EventFortificationListViewManager__EndClickTabPush(
        EventFortificationListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  EventFortificationListViewManager__SetStatusKind(this, 3, method);
  EventFortificationListViewManager__RefreshListDisp(this, v4);
  EventFortificationListViewManager__ModifyList(this, 0, v5);
  EventFortificationListViewManager__SetMode_45233104(this, 2, v6);
}


void __fastcall EventFortificationListViewManager__EndClickTabStatus(
        EventFortificationListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  EventFortificationListViewManager__SetStatusKind(this, 0, method);
  EventFortificationListViewManager__ModifyList(this, 0, v4);
  EventFortificationListViewManager__SetMode_45233104(this, 2, v5);
}


void __fastcall EventFortificationListViewManager__EndPushRequest(
        EventFortificationListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  EventFortificationListViewManager__ModifyList(this, 0, method);
  EventFortificationListViewManager__SetMode_45233104(this, 2, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager__EndSelectFilterKind(
        EventFortificationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4A02828 & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4A02828 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    EventFortificationListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64C5C(0LL, v7);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager__EndSelectSortKind(
        EventFortificationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A0282C & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4A0282C = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64C5C(0LL, v6);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager__EndShowServant(
        EventFortificationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4A02825 & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4A02825 = 1;
  }
  EventFortificationListViewManager__RefreshListDisp(this, (const MethodInfo *)isDecide);
  EventFortificationListViewManager__ModifyList(this, 0, v4);
  EventFortificationListViewManager__SetMode_45233104(this, 2, v5);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64C5C(0LL, v7);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall EventFortificationListViewManager__EndStatusSync(
        EventFortificationListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct EventFortificationListViewManager_RequestCallbackFunc_o *requestCallback; // x19
  ServantStatusBattleListViewItem_o *p_requestCallback; // x0

  requestCallback = this->fields.requestCallback;
  if ( requestCallback )
  {
    p_requestCallback = (ServantStatusBattleListViewItem_o *)&this->fields.requestCallback;
    p_requestCallback->klass = 0LL;
    sub_1B649A4(p_requestCallback, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))requestCallback->fields.m_target)(
      requestCallback->fields.original_method_info,
      1LL,
      *(_QWORD *)&requestCallback->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventFortificationListViewManager__GetAmountSortValue(
        EventFortificationListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w25
  int32_t v10; // w22
  int64_t v11; // x21
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__c *klass; // x8
  Il2CppClass *parent; // x23
  Il2CppClass *declaringType; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4A02826 & 1) == 0 )
  {
    sub_1B64A00(&EventFortificationListViewItem_TypeInfo, *(_QWORD *)&svtId);
    sub_1B64A00(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4A02826 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_16;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v10 = 0;
    v11 = 0LL;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v10,
                                                                (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      methodPtr_low = LOBYTE(EventFortificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
        break;
      if ( (EventFortificationListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != EventFortificationListViewItem_TypeInfo )
        break;
      klass = itemList[3].klass;
      if ( !klass )
        break;
      declaringType = klass->_1.declaringType;
      parent = klass->_1.parent;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v17.fields.currentCryptoKey = declaringType;
      *(_QWORD *)&v17.fields.fakeValue = parent;
      ++v10;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v17, 0LL) == svtId )
        ++v11;
      if ( size == v10 )
        return v11;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_16:
    sub_1B64C5C(itemList, *(_QWORD *)&svtId);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
EventFortificationListViewItem_o *__fastcall EventFortificationListViewManager__GetItem(
        EventFortificationListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  EventFortificationListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A0281D & 1) == 0 )
  {
    sub_1B64A00(&EventFortificationListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_1B64A00(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4A0281D = 1;
  }
  result = (EventFortificationListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EventFortificationListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(EventFortificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (EventFortificationListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != EventFortificationListViewItem_TypeInfo )
          return 0LL;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
}


bool __fastcall EventFortificationListViewManager__GetSwapChoiceList(
        EventFortificationListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_long__o *v15; // x23
  System_Collections_Generic_List_long__o *v16; // x22
  int64_t v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  int64_t itemList; // x0
  int v21; // w25
  int32_t v22; // w24
  __int64 methodPtr_low; // x10
  __int64 v24; // x8
  __int128 v25; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x8
  __int128 v30; // q0
  struct System_Int64_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  __int64 v34; // x8
  System_Collections_Generic_List_long__o *v35; // x0
  int v36; // w21
  System_Int64_array *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_Int64_array *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t v43; // w1
  System_Int64_array **v44; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+40h] [xbp-80h]

  if ( (byte_4A02830 & 1) == 0 )
  {
    sub_1B64A00(&EventFortificationListViewItem_TypeInfo, choiceList);
    sub_1B64A00(&Method_System_Collections_Generic_List_long__Add__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_long__get_Count__, v10);
    sub_1B64A00(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_1B64A00(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_1B64A00(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    byte_4A02830 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1B64C4C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_3497114 *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1B64C4C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_3497114 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v21 = *(_DWORD *)(itemList + 24);
  if ( v21 >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v22,
                            (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(EventFortificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(EventFortificationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != EventFortificationListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v24 = *(_QWORD *)(itemList + 120);
      if ( v24 && *(_BYTE *)(itemList + 193) )
      {
        if ( *(_BYTE *)(itemList + 162) )
        {
          v25 = *(_OWORD *)(v24 + 32);
          *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
          *(_OWORD *)&v48.fields.fakeValue = v25;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v47 = v48;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v47, 0LL);
          if ( !v16 )
            goto LABEL_37;
          items = v16->fields._items;
          v27 = Method_System_Collections_Generic_List_long__Add__;
          ++v16->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v16->fields._size;
          v17 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v34 = v27[4];
            v35 = v16;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v35,
              v17,
              *(const MethodInfo_3497968 **)(*(_QWORD *)(v34 + 192) + 112LL));
            goto LABEL_28;
          }
          v29 = &items->obj.klass + size;
          v16->fields._size = size + 1;
        }
        else
        {
          v30 = *(_OWORD *)(v24 + 32);
          *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
          *(_OWORD *)&v48.fields.fakeValue = v30;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v46 = v48;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v46, 0LL);
          if ( !v15 )
            goto LABEL_37;
          v31 = v15->fields._items;
          v32 = Method_System_Collections_Generic_List_long__Add__;
          ++v15->fields._version;
          if ( !v31 )
            goto LABEL_37;
          v33 = v15->fields._size;
          v17 = itemList;
          if ( (unsigned int)v33 >= v31->max_length )
          {
            v34 = v32[4];
            v35 = v15;
            goto LABEL_27;
          }
          v29 = &v31->obj.klass + v33;
          v15->fields._size = v33 + 1;
        }
        v29[4] = (Il2CppClass *)v17;
      }
LABEL_28:
      if ( v21 == ++v22 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v15 || !v16 )
LABEL_37:
    sub_1B64C5C(itemList, v17);
  v36 = v16->fields._size + v15->fields._size;
  if ( v36 < 1 )
  {
    *choiceList = 0LL;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)choiceList, 0, v18, v19);
    v44 = unchoiceList;
    v43 = 0;
    *unchoiceList = 0LL;
  }
  else
  {
    v37 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_34994C0 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v37;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)choiceList, (int32_t)v37, v38, v39);
    v40 = System_Collections_Generic_List_long___ToArray(
            v16,
            (const MethodInfo_34994C0 *)Method_System_Collections_Generic_List_long__ToArray__);
    v43 = (int)v40;
    *unchoiceList = v40;
    v44 = unchoiceList;
  }
  sub_1B649A4((ServantStatusBattleListViewItem_o *)v44, v43, v41, v42);
  return v36 > 0;
}


bool __fastcall EventFortificationListViewManager__GetSwapLockList(
        EventFortificationListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_long__o *v15; // x23
  System_Collections_Generic_List_long__o *v16; // x22
  int64_t v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  int64_t itemList; // x0
  int v21; // w25
  int32_t v22; // w24
  __int64 methodPtr_low; // x10
  __int64 v24; // x8
  __int128 v25; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x8
  __int128 v30; // q0
  struct System_Int64_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  __int64 v34; // x8
  System_Collections_Generic_List_long__o *v35; // x0
  int v36; // w21
  System_Int64_array *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_Int64_array *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t v43; // w1
  System_Int64_array **v44; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+40h] [xbp-80h]

  if ( (byte_4A0282F & 1) == 0 )
  {
    sub_1B64A00(&EventFortificationListViewItem_TypeInfo, lockList);
    sub_1B64A00(&Method_System_Collections_Generic_List_long__Add__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_long__get_Count__, v10);
    sub_1B64A00(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_1B64A00(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_1B64A00(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    byte_4A0282F = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1B64C4C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_3497114 *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1B64C4C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_3497114 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v21 = *(_DWORD *)(itemList + 24);
  if ( v21 >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v22,
                            (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(EventFortificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(EventFortificationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != EventFortificationListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v24 = *(_QWORD *)(itemList + 120);
      if ( v24 && *(_BYTE *)(itemList + 192) )
      {
        if ( *(_BYTE *)(itemList + 161) )
        {
          v25 = *(_OWORD *)(v24 + 32);
          *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
          *(_OWORD *)&v48.fields.fakeValue = v25;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v47 = v48;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v47, 0LL);
          if ( !v16 )
            goto LABEL_37;
          items = v16->fields._items;
          v27 = Method_System_Collections_Generic_List_long__Add__;
          ++v16->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v16->fields._size;
          v17 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v34 = v27[4];
            v35 = v16;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v35,
              v17,
              *(const MethodInfo_3497968 **)(*(_QWORD *)(v34 + 192) + 112LL));
            goto LABEL_28;
          }
          v29 = &items->obj.klass + size;
          v16->fields._size = size + 1;
        }
        else
        {
          v30 = *(_OWORD *)(v24 + 32);
          *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
          *(_OWORD *)&v48.fields.fakeValue = v30;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v46 = v48;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v46, 0LL);
          if ( !v15 )
            goto LABEL_37;
          v31 = v15->fields._items;
          v32 = Method_System_Collections_Generic_List_long__Add__;
          ++v15->fields._version;
          if ( !v31 )
            goto LABEL_37;
          v33 = v15->fields._size;
          v17 = itemList;
          if ( (unsigned int)v33 >= v31->max_length )
          {
            v34 = v32[4];
            v35 = v15;
            goto LABEL_27;
          }
          v29 = &v31->obj.klass + v33;
          v15->fields._size = v33 + 1;
        }
        v29[4] = (Il2CppClass *)v17;
      }
LABEL_28:
      if ( v21 == ++v22 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v15 || !v16 )
LABEL_37:
    sub_1B64C5C(itemList, v17);
  v36 = v16->fields._size + v15->fields._size;
  if ( v36 < 1 )
  {
    *lockList = 0LL;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)lockList, 0, v18, v19);
    v44 = unlockList;
    v43 = 0;
    *unlockList = 0LL;
  }
  else
  {
    v37 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_34994C0 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v37;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)lockList, (int32_t)v37, v38, v39);
    v40 = System_Collections_Generic_List_long___ToArray(
            v16,
            (const MethodInfo_34994C0 *)Method_System_Collections_Generic_List_long__ToArray__);
    v43 = (int)v40;
    *unlockList = v40;
    v44 = unlockList;
  }
  sub_1B649A4((ServantStatusBattleListViewItem_o *)v44, v43, v41, v42);
  return v36 > 0;
}


void __fastcall EventFortificationListViewManager__InitBackListView(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  EventFortificationListViewManager__StatusRequest(this, 0LL, v2);
  EventFortificationListViewManager__SetStatusKind(this, 0, v4);
}


void __fastcall EventFortificationListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  EventFortificationListViewManager_c *v2; // x0
  ListViewSort_o *servantSortStatus; // x0

  if ( (byte_4A02813 & 1) == 0 )
  {
    sub_1B64A00(&EventFortificationListViewManager_TypeInfo, v1);
    byte_4A02813 = 1;
  }
  v2 = EventFortificationListViewManager_TypeInfo;
  if ( !EventFortificationListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationListViewManager_TypeInfo);
    v2 = EventFortificationListViewManager_TypeInfo;
  }
  servantSortStatus = v2->static_fields->servantSortStatus;
  if ( !servantSortStatus )
    sub_1B64C5C(0LL, v1);
  ListViewSort__InitLoad(servantSortStatus, 0LL);
}


void __fastcall EventFortificationListViewManager__ModifyItem(
        EventFortificationListViewManager_o *this,
        int64_t usrSvtId,
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
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x19
  _BOOL8 v17; // x0
  __int64 v18; // x1
  __int64 methodPtr_low; // x11
  EventFortificationListViewItem_o *current; // x20
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v22; // q0
  int64_t v23; // x0
  Il2CppObject v24; // q0
  UnityEngine_Object_o *viewObject; // x21
  __int64 v26; // x1
  struct ListViewObject_o *v27; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_4A0281A & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId);
    sub_1B64A00(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_1B64A00(&EventFortificationListViewItem_TypeInfo, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v11);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4A0281A = 1;
  }
  memset(&v31, 0, sizeof(v31));
  if ( this->fields.itemList )
  {
    UserGameMaster__getSelfUserGame(0LL);
    if ( usrSvtId < 1 )
    {
      Entity = 0LL;
    }
    else
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_37;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_37;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 usrSvtId,
                 (const MethodInfo_30D6944 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( Instance )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v30,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      *(_OWORD *)&v31.fields._list = *(_OWORD *)&v30.fields.currentCryptoKey;
      v31.fields._current = (Il2CppObject *)v30.fields.fakeValue;
      while ( 1 )
      {
        v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v31,
                (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v17 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v31,
            (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v31.fields._current
          && (methodPtr_low = LOBYTE(EventFortificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(v31.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
        {
          if ( (EventFortificationListViewItem_c *)v31.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == EventFortificationListViewItem_TypeInfo )
            current = (EventFortificationListViewItem_o *)v31.fields._current;
          else
            current = 0LL;
          if ( Entity )
          {
LABEL_15:
            if ( !current )
              sub_1B64C5C(v17, v18);
            userServantEntity = current->fields.userServantEntity;
            if ( !userServantEntity )
              sub_1B64C5C(v17, v18);
            v22 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v30.fields.fakeValue = v22;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v29 = v30;
            v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v29, 0LL);
            v24 = Entity[2];
            *(Il2CppObject *)&v28.fields.currentCryptoKey = Entity[1];
            *(Il2CppObject *)&v28.fields.fakeValue = v24;
            if ( v23 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v28, 0LL) )
              EventFortificationListViewItem__ModifyItem(current, (UserServantEntity_o *)Entity, 0LL);
            goto LABEL_26;
          }
        }
        else
        {
          current = 0LL;
          if ( Entity )
            goto LABEL_15;
        }
        if ( !current )
          sub_1B64C5C(v17, v18);
LABEL_26:
        viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
        {
          v27 = current->fields.viewObject;
          if ( !v27 )
            sub_1B64C5C(0LL, v26);
          ((void (__fastcall *)(struct ListViewObject_o *, EventFortificationListViewItem_o *, Il2CppMethodPointer))v27->klass->vtable._5_SetItem.method)(
            v27,
            current,
            v27->klass->vtable._6_SetItem.methodPtr);
        }
      }
    }
LABEL_37:
    sub_1B64C5C(Instance, v14);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager__ModifyList(
        EventFortificationListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t sort; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 v12; // x25
  int64_t v13; // x20
  int size; // w28
  unsigned int v15; // w26
  __int64 v16; // x8
  __int128 v17; // q0
  int64_t v18; // x22
  int32_t v19; // w23
  int64_t v20; // x24
  __int64 methodPtr_low; // x10
  __int64 v22; // x8
  __int128 v23; // q0
  __int64 v24; // x8
  __int128 v25; // q0
  int64_t v26; // x0
  const MethodInfo *v27; // x4
  bool isIconSizeChangea; // [xsp+Ch] [xbp-E4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+70h] [xbp-80h]

  if ( (byte_4A0281C & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_UserServantMaster___, isIconSizeChange);
    sub_1B64A00(&EventFortificationListViewItem_TypeInfo, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4A0281C = 1;
  }
  sort = (int64_t)this->fields.sort;
  if ( !sort )
    goto LABEL_33;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  sort = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_33;
  sort = (int64_t)DataManager__GetMasterData_object_(
                    (DataManager_o *)sort,
                    (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !sort )
    goto LABEL_33;
  sort = (int64_t)UserServantMaster__getOrganizationList((UserServantMaster_o *)sort, 0LL);
  if ( !sort )
    goto LABEL_33;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  v12 = *(_QWORD *)(sort + 24);
  v13 = sort;
  if ( (int)v12 >= 1 )
  {
    size = itemList->fields._size;
    v15 = 0;
    isIconSizeChangea = isIconSizeChange;
    while ( 1 )
    {
      v16 = *(_QWORD *)(v13 + 8LL * (int)v15 + 32);
      if ( !v16 )
        break;
      v17 = *(_OWORD *)(v16 + 32);
      *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
      *(_OWORD *)&v32.fields.fakeValue = v17;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v31 = v32;
      sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v31, 0LL);
      if ( size >= 1 )
      {
        v18 = sort;
        v19 = 0;
        while ( 1 )
        {
          sort = (int64_t)this->fields.itemList;
          if ( !sort )
            goto LABEL_33;
          sort = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)sort,
                            v19,
                            (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !sort )
            goto LABEL_33;
          v20 = sort;
          methodPtr_low = LOBYTE(EventFortificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)sort + 304LL) < (unsigned int)methodPtr_low
            || *(EventFortificationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)sort + 200LL) + 8 * methodPtr_low - 8) != EventFortificationListViewItem_TypeInfo )
          {
            goto LABEL_33;
          }
          v22 = *(_QWORD *)(sort + 120);
          if ( v22 )
          {
            v23 = *(_OWORD *)(v22 + 32);
            *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)(v22 + 16);
            *(_OWORD *)&v32.fields.fakeValue = v23;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v30 = v32;
            sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v30, 0LL);
            if ( sort == v18 )
              break;
          }
          if ( size == ++v19 )
            goto LABEL_29;
        }
        v24 = *(_QWORD *)(v20 + 120);
        if ( !v24 )
          break;
        v25 = *(_OWORD *)(v24 + 32);
        *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
        *(_OWORD *)&v32.fields.fakeValue = v25;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v29 = v32;
        v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v29, 0LL);
        EventFortificationListViewManager__ModifyLockItem(this, v26, 1, isIconSizeChangea, v27);
      }
LABEL_29:
      if ( ++v15 == (_DWORD)v12 )
        return;
      if ( v15 >= *(_DWORD *)(v13 + 24) )
        sub_1B64C64(sort, isIconSizeChange);
    }
LABEL_33:
    sub_1B64C5C(sort, isIconSizeChange);
  }
}


void __fastcall EventFortificationListViewManager__ModifyLockItem(
        EventFortificationListViewManager_o *this,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
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
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x21
  bool v21; // w24
  int64_t v22; // x0
  __int64 v23; // x1
  __int64 methodPtr_low; // x11
  EventFortificationListViewItem_o *current; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v27; // q0
  int64_t v28; // x0
  Il2CppObject v29; // q0
  int64_t v30; // x23
  UnityEngine_Object_o *viewObject; // x23
  __int64 v32; // x1
  struct ListViewObject_o *v33; // x0
  __int64 v34; // x1
  ListViewObject_o *v35; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4A0281B & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId);
    sub_1B64A00(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v10);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v11);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v12);
    sub_1B64A00(&EventFortificationListViewItem_TypeInfo, v13);
    sub_1B64A00(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v14);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v15);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4A0281B = 1;
  }
  memset(&v39, 0, sizeof(v39));
  if ( this->fields.itemList )
  {
    UserGameMaster__getSelfUserGame(0LL);
    if ( usrSvtId < 1 )
    {
      Entity = 0LL;
    }
    else
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_45;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_45;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 usrSvtId,
                 (const MethodInfo_30D6944 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( Instance )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v38,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      *(_OWORD *)&v39.fields._list = *(_OWORD *)&v38.fields.currentCryptoKey;
      v39.fields._current = (Il2CppObject *)v38.fields.fakeValue;
      v21 = !isIconSizeChange && isInit;
      while ( 1 )
      {
        v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v39,
                (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v22 & 1) == 0 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v39,
            (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v39.fields._current
          && (methodPtr_low = LOBYTE(EventFortificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(v39.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
        {
          if ( (EventFortificationListViewItem_c *)v39.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == EventFortificationListViewItem_TypeInfo )
            current = (EventFortificationListViewItem_o *)v39.fields._current;
          else
            current = 0LL;
          if ( !Entity )
            goto LABEL_26;
        }
        else
        {
          current = 0LL;
          if ( !Entity )
            goto LABEL_26;
        }
        if ( !current )
          sub_1B64C5C(v22, v23);
        userServantEntity = current->fields.userServantEntity;
        if ( !userServantEntity )
          sub_1B64C5C(v22, v23);
        v27 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v38.fields.fakeValue = v27;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v37 = v38;
        v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v37, 0LL);
        v29 = Entity[2];
        v30 = v28;
        *(Il2CppObject *)&v36.fields.currentCryptoKey = Entity[1];
        *(Il2CppObject *)&v36.fields.fakeValue = v29;
        v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v36, 0LL);
        if ( v30 == v22 )
          EventFortificationListViewItem__SetUserServantEntity(current, (UserServantEntity_o *)Entity, 0LL);
LABEL_26:
        if ( v21 )
        {
          if ( !current )
            sub_1B64C5C(v22, v23);
          EventFortificationListViewItem__ModifyLockItem(current, 0LL);
          EventFortificationListViewItem__ModifyChoiceItem(current, 0LL);
          EventFortificationListViewItem__ModifyPushItem(current, 0LL);
        }
        else if ( !current )
        {
          sub_1B64C5C(v22, v23);
        }
        viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
        {
          v33 = current->fields.viewObject;
          if ( !v33 )
            sub_1B64C5C(0LL, v32);
          ((void (__fastcall *)(struct ListViewObject_o *, EventFortificationListViewItem_o *, Il2CppMethodPointer))v33->klass->vtable._5_SetItem.method)(
            v33,
            current,
            v33->klass->vtable._6_SetItem.methodPtr);
          if ( isIconSizeChange )
          {
            v35 = current->fields.viewObject;
            if ( !v35 )
              sub_1B64C5C(0LL, v34);
            ListViewObject__SetItemSeed(v35, (ListViewItem_o *)current, this->fields.seed, 0LL);
          }
        }
      }
    }
LABEL_45:
    sub_1B64C5C(Instance, v18);
  }
}


void __fastcall EventFortificationListViewManager__OnClickBack(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  struct System_Action_bool__UserServantEntity__o *selectAfterCallback; // x20

  if ( (byte_4A02836 & 1) == 0 )
  {
    sub_1B64A00(&Method_EventFortificationListViewManager_OnClickBack__, method);
    byte_4A02836 = 1;
  }
  v3 = Method_EventFortificationListViewManager_OnClickBack__;
  if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B64A18(Method_EventFortificationListViewManager_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B649E4(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
  selectAfterCallback = this->fields.selectAfterCallback;
  if ( selectAfterCallback )
  {
    this->fields.selectAfterCallback = 0LL;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.selectAfterCallback, 0, v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))selectAfterCallback->fields.m_target)(
      selectAfterCallback->fields.original_method_info,
      0LL,
      0LL,
      *(_QWORD *)&selectAfterCallback->fields.extra_arg);
  }
}


void __fastcall EventFortificationListViewManager__OnClickBonusFilterKind(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_4A02829 & 1) == 0 )
  {
    sub_1B64A00(&Method_EventFortificationListViewManager_OnClickBonusFilterKind__, method);
    byte_4A02829 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EventFortificationListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B64A18(Method_EventFortificationListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B649E4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B64C5C(0LL, v5);
    ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, 0, 0LL, 0LL);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall EventFortificationListViewManager__OnClickChoiceTab(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  EventFortificationListViewManager_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2

  if ( (byte_4A02833 & 1) == 0 )
  {
    sub_1B64A00(&Method_EventFortificationListViewManager_EndClickTabChoice__, method);
    sub_1B64A00(&Method_EventFortificationListViewManager_OnClickChoiceTab__, v3);
    sub_1B64A00(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo, v4);
    byte_4A02833 = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    v5 = Method_EventFortificationListViewManager_OnClickChoiceTab__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickChoiceTab__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B64A18(Method_EventFortificationListViewManager_OnClickChoiceTab__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B649E4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v8 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_1B64C4C(EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
      EventFortificationListViewManager_RequestCallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager_EndClickTabChoice__,
        v9);
      EventFortificationListViewManager__StatusRequest(this, v8, v10);
    }
    else
    {
      EventFortificationListViewManager__SetStatusKind(this, 2, v7);
      EventFortificationListViewManager__RefreshListDisp(this, v11);
      EventFortificationListViewManager__ModifyList(this, 0, v12);
      EventFortificationListViewManager__SetMode_45233104(this, 2, v13);
    }
  }
}


void __fastcall EventFortificationListViewManager__OnClickCollectLock(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  EventFortificationListViewManager_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2

  if ( (byte_4A02832 & 1) == 0 )
  {
    sub_1B64A00(&Method_EventFortificationListViewManager_EndClickTabLock__, method);
    sub_1B64A00(&Method_EventFortificationListViewManager_OnClickCollectLock__, v3);
    sub_1B64A00(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo, v4);
    byte_4A02832 = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    v5 = Method_EventFortificationListViewManager_OnClickCollectLock__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickCollectLock__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B64A18(Method_EventFortificationListViewManager_OnClickCollectLock__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B649E4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v8 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_1B64C4C(EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
      EventFortificationListViewManager_RequestCallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager_EndClickTabLock__,
        v9);
      EventFortificationListViewManager__StatusRequest(this, v8, v10);
    }
    else
    {
      EventFortificationListViewManager__SetStatusKind(this, 1, v7);
      EventFortificationListViewManager__RefreshListDisp(this, v11);
      EventFortificationListViewManager__ModifyList(this, 0, v12);
      EventFortificationListViewManager__SetMode_45233104(this, 2, v13);
    }
  }
}


void __fastcall EventFortificationListViewManager__OnClickFilterKind(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v10; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_4A02827 & 1) == 0 )
  {
    sub_1B64A00(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1B64A00(&Method_EventFortificationListViewManager_EndSelectFilterKind__, v3);
    sub_1B64A00(&Method_EventFortificationListViewManager_OnClickFilterKind__, v4);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4A02827 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_EventFortificationListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B64A18(Method_EventFortificationListViewManager_OnClickFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B649E4(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1B64C4C(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_EventFortificationListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v10 )
      sub_1B64C5C(v12, v13);
    CommonUI__OpenServantFilterSelectMenu(v10, 1, sort, v11, 0, 0LL);
  }
}


void __fastcall EventFortificationListViewManager__OnClickListView(
        EventFortificationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventFortificationListViewManager__OnClickNormalStatus(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  EventFortificationListViewManager_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4A02831 & 1) == 0 )
  {
    sub_1B64A00(&Method_EventFortificationListViewManager_EndClickTabStatus__, method);
    sub_1B64A00(&Method_EventFortificationListViewManager_OnClickNormalStatus__, v3);
    sub_1B64A00(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo, v4);
    byte_4A02831 = 1;
  }
  if ( this->fields.modeKind )
  {
    v5 = Method_EventFortificationListViewManager_OnClickNormalStatus__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickNormalStatus__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B64A18(Method_EventFortificationListViewManager_OnClickNormalStatus__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B649E4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v7 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_1B64C4C(EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
    EventFortificationListViewManager_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_EventFortificationListViewManager_EndClickTabStatus__,
      v8);
    EventFortificationListViewManager__StatusRequest(this, v7, v9);
  }
}


void __fastcall EventFortificationListViewManager__OnClickPushTab(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  EventFortificationListViewManager_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2

  if ( (byte_4A02834 & 1) == 0 )
  {
    sub_1B64A00(&Method_EventFortificationListViewManager_EndClickTabPush__, method);
    sub_1B64A00(&Method_EventFortificationListViewManager_OnClickPushTab__, v3);
    sub_1B64A00(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo, v4);
    byte_4A02834 = 1;
  }
  if ( this->fields.modeKind != 3 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v5 = Method_EventFortificationListViewManager_OnClickPushTab__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickPushTab__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B64A18(Method_EventFortificationListViewManager_OnClickPushTab__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B649E4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v8 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_1B64C4C(EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
      EventFortificationListViewManager_RequestCallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager_EndClickTabPush__,
        v9);
      EventFortificationListViewManager__StatusRequest(this, v8, v10);
    }
    else
    {
      EventFortificationListViewManager__SetStatusKind(this, 3, v7);
      EventFortificationListViewManager__RefreshListDisp(this, v11);
      EventFortificationListViewManager__ModifyList(this, 0, v12);
      EventFortificationListViewManager__SetMode_45233104(this, 2, v13);
    }
  }
}


void __fastcall EventFortificationListViewManager__OnClickScaleChange(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  EventFortificationListViewManager_o *v10; // x0
  int v11; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  ListViewSort_o *sort; // x0
  int32_t v14; // w1
  UISprite_o *scaleChangeButtonSprite; // x20
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2

  if ( (byte_4A02837 & 1) == 0 )
  {
    sub_1B64A00(&Method_EventFortificationListViewManager_OnClickScaleChange__, method);
    byte_4A02837 = 1;
  }
  v3 = Method_EventFortificationListViewManager_OnClickScaleChange__;
  if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B64A18(Method_EventFortificationListViewManager_OnClickScaleChange__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B649E4(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v10 = this;
    v11 = 2;
    goto LABEL_11;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v10 = this;
    v11 = 3;
    goto LABEL_11;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v10 = this;
    v11 = 1;
LABEL_11:
    v10->fields.seed = smallSizeSeed;
    p_seed = &v10->fields.seed;
    *((_DWORD *)p_seed + 106) = v11;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)p_seed, (int32_t)smallSizeSeed, v6, v7);
  }
  sort = this->fields.sort;
  if ( !sort
    || (v14 = this->fields.scaleType,
        sort->fields.iconScaleKind = v14,
        scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, v14, 0LL),
        !scaleChangeButtonSprite) )
  {
    sub_1B64C5C(sort, v5);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL);
  EventFortificationListViewManager__ModifyList(this, 1, v16);
  EventFortificationListViewManager__SetMode_45233104(this, 2, v17);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall EventFortificationListViewManager__OnClickSelectObject(
        EventFortificationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ListViewObject_o *v3; // x20
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
  int64_t fortificationConfirmDialog; // x0
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  __int64 methodPtr_low; // x10
  ListViewObject_o **p_targetInUserServantEntity; // x23
  EventFortificationListViewItem_o *Item; // x20
  int32_t v26; // w2
  int32_t v27; // w3
  ListViewObject_o **p_targetOutUserServantEntity; // x24
  int32_t v29; // w2
  int32_t v30; // w3
  System_Collections_Generic_List_object__o *v31; // x22
  System_Collections_Generic_List_int__o *v32; // x21
  int32_t v33; // w2
  int32_t v34; // w3
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v37; // q1
  struct UserServantEntity_o *v38; // x8
  __int128 v39; // q0
  int64_t v40; // x25
  int32_t v41; // w2
  int32_t v42; // w3
  struct EventFortificationWorkItem_o *v43; // x8
  ListViewObject_o *v44; // x1
  int32_t v45; // w2
  int32_t v46; // w3
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  Il2CppClass **v50; // x0
  ListViewObject_o *v51; // x1
  int32_t v52; // w2
  int32_t v53; // w3
  struct System_Object_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  Il2CppClass **v57; // x0
  struct UserServantEntity_o *v58; // x8
  __int128 v59; // q0
  struct UserServantEntity_o *v60; // x8
  __int128 v61; // q0
  int32_t v62; // w2
  int32_t v63; // w3
  struct UserServantEntity_o *v64; // x1
  int32_t v65; // w2
  int32_t v66; // w3
  struct EventFortificationWorkItem_o *v67; // x8
  ListViewObject_o *v68; // x1
  int32_t v69; // w2
  int32_t v70; // w3
  struct System_Object_array *v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  Il2CppClass **v74; // x0
  struct System_Int32_array *v75; // x8
  _QWORD *v76; // x9
  __int64 v77; // x10
  struct FortificationConfirmDialogComponent_o *v78; // x23
  System_Object_array *v79; // x22
  System_Int32_array *v80; // x21
  System_String_o *TargetTeamName; // x24
  System_String_o *TargetDetailName; // x25
  int32_t TargetWorkType; // w20
  System_Action_o *v84; // x26
  FortificationConfirmDialogComponent_o *v85; // x0
  int32_t v86; // w1
  struct System_Int32_array *v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  struct FortificationConfirmDialogComponent_o *v90; // x23
  int32_t v91; // w2
  int32_t v92; // w3
  struct System_Int32_array *v93; // x8
  _QWORD *v94; // x9
  __int64 v95; // x10
  struct System_Object_array *v96; // x8
  _QWORD *v97; // x9
  __int64 v98; // x10
  Il2CppClass **v99; // x0
  struct System_Int32_array *v100; // x8
  _QWORD *v101; // x9
  __int64 v102; // x10
  const MethodInfo *v103; // [xsp+0h] [xbp-100h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v104; // [xsp+10h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v105; // [xsp+30h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v106; // [xsp+50h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v107; // [xsp+70h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v108; // [xsp+90h] [xbp-70h]

  v3 = obj;
  if ( (byte_4A02821 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, obj);
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantClassMaster___, v5);
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1B64A00(&Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__, v7);
    sub_1B64A00(&Method_EventFortificationListViewManager_OnClickSelectObject__, v8);
    sub_1B64A00(&EventFortificationListViewObject_TypeInfo, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_1B64A00(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v11);
    sub_1B64A00(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v12);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__ToArray__, v13);
    sub_1B64A00(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_1B64A00(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v15);
    sub_1B64A00(&System_Collections_Generic_List_int__TypeInfo, v16);
    sub_1B64A00(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v17);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_4A02821 = 1;
  }
  fortificationConfirmDialog = (int64_t)this->fields.fortificationConfirmDialog;
  if ( !fortificationConfirmDialog )
    goto LABEL_77;
  fortificationConfirmDialog = (int64_t)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)fortificationConfirmDialog,
                                          0LL);
  if ( !fortificationConfirmDialog )
    goto LABEL_77;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fortificationConfirmDialog, 1, 0LL);
  v21 = Method_EventFortificationListViewManager_OnClickSelectObject__;
  if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickSelectObject__ + 83) & 2) != 0 )
    v21 = (_QWORD *)sub_1B64A18(Method_EventFortificationListViewManager_OnClickSelectObject__);
  v22 = (System_Reflection_MethodBase_o *)sub_1B649E4(v21, v21[4]);
  OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0LL);
  if ( !v3 )
    goto LABEL_77;
  methodPtr_low = LOBYTE(EventFortificationListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v3->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    goto LABEL_77;
  if ( (EventFortificationListViewObject_c *)v3->klass->_2.typeHierarchy[methodPtr_low - 1] != EventFortificationListViewObject_TypeInfo )
    goto LABEL_77;
  p_targetInUserServantEntity = (ListViewObject_o **)&this->fields.targetInUserServantEntity;
  Item = EventFortificationListViewObject__GetItem((EventFortificationListViewObject_o *)v3, (const MethodInfo *)obj);
  this->fields.targetInUserServantEntity = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.targetInUserServantEntity, 0, v26, v27);
  p_targetOutUserServantEntity = (ListViewObject_o **)&this->fields.targetOutUserServantEntity;
  this->fields.targetOutUserServantEntity = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.targetOutUserServantEntity, 0, v29, v30);
  fortificationConfirmDialog = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fortificationConfirmDialog )
    goto LABEL_77;
  DataManager__GetMasterData_object_(
    (DataManager_o *)fortificationConfirmDialog,
    (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantMaster___);
  fortificationConfirmDialog = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fortificationConfirmDialog )
    goto LABEL_77;
  DataManager__GetMasterData_object_(
    (DataManager_o *)fortificationConfirmDialog,
    (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  v31 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  v32 = (System_Collections_Generic_List_int__o *)sub_1B64C4C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v32,
    (const MethodInfo_3491F7C *)Method_System_Collections_Generic_List_int___ctor__);
  targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
  if ( !targetFortificationWorkItem )
    goto LABEL_77;
  userServantEntity = targetFortificationWorkItem->fields.userServantEntity;
  if ( userServantEntity )
  {
    v37 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v108.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v108.fields.fakeValue = v37;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v107 = v108;
    fortificationConfirmDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v107, 0LL);
    if ( Item )
    {
      v38 = Item->fields.userServantEntity;
      if ( v38 )
      {
        v39 = *(_OWORD *)&v38->fields.id.fields.fakeValue;
        v40 = fortificationConfirmDialog;
        *(_OWORD *)&v106.fields.currentCryptoKey = *(_OWORD *)&v38->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v106.fields.fakeValue = v39;
        fortificationConfirmDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v106, 0LL);
        v43 = this->fields.targetFortificationWorkItem;
        if ( v40 == fortificationConfirmDialog )
        {
          if ( v43 )
          {
            v44 = (ListViewObject_o *)v43->fields.userServantEntity;
            *p_targetOutUserServantEntity = v44;
            sub_1B649A4(
              (ServantStatusBattleListViewItem_o *)&this->fields.targetOutUserServantEntity,
              (int32_t)v44,
              v41,
              v42);
            if ( v31 )
            {
              obj = *p_targetOutUserServantEntity;
              items = v31->fields._items;
              v48 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v31->fields._version;
              if ( items )
              {
                size = v31->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v31,
                    (Il2CppObject *)obj,
                    *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
                }
                else
                {
                  v50 = &items->obj.klass + size;
                  v31->fields._size = size + 1;
                  v50[4] = (Il2CppClass *)obj;
                  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v50 + 4), (int32_t)obj, v45, v46);
                }
                fortificationConfirmDialog = (int64_t)this->fields.targetFortificationWorkItem;
                if ( fortificationConfirmDialog )
                {
                  fortificationConfirmDialog = EventFortificationWorkItem__get_AddPoint(
                                                 (EventFortificationWorkItem_o *)fortificationConfirmDialog,
                                                 (const MethodInfo *)obj);
                  if ( v32 )
                  {
                    v87 = v32->fields._items;
                    v88 = Method_System_Collections_Generic_List_int__Add__;
                    ++v32->fields._version;
                    if ( v87 )
                    {
                      v89 = v32->fields._size;
                      if ( (unsigned int)v89 >= v87->max_length )
                      {
                        System_Collections_Generic_List_int___AddWithResize(
                          v32,
                          fortificationConfirmDialog,
                          *(const MethodInfo_34927D0 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v32->fields._size = v89 + 1;
                        v87->m_Items[v89 + 1] = fortificationConfirmDialog;
                      }
                      v90 = this->fields.fortificationConfirmDialog;
                      v79 = System_Collections_Generic_List_object___ToArray(
                              v31,
                              (const MethodInfo_34B1BC0 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
                      v80 = System_Collections_Generic_List_int___ToArray(
                              v32,
                              (const MethodInfo_3494328 *)Method_System_Collections_Generic_List_int__ToArray__);
                      TargetTeamName = EventFortificationListViewItem__get_TargetTeamName(Item, 0LL);
                      TargetDetailName = EventFortificationListViewItem__get_TargetDetailName(Item, 0LL);
                      TargetWorkType = EventFortificationListViewItem__get_TargetWorkType(Item, 0LL);
                      v84 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
                      System_Action___ctor(
                        v84,
                        (Il2CppObject *)this,
                        (intptr_t)Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__,
                        0LL);
                      if ( v90 )
                      {
                        v86 = 1;
LABEL_74:
                        v85 = v90;
                        goto LABEL_75;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else if ( v43 )
        {
          v58 = v43->fields.userServantEntity;
          if ( !v58 )
            return;
          v59 = *(_OWORD *)&v58->fields.id.fields.fakeValue;
          *(_OWORD *)&v108.fields.currentCryptoKey = *(_OWORD *)&v58->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v108.fields.fakeValue = v59;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v105 = v108;
          fortificationConfirmDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v105, 0LL);
          v60 = Item->fields.userServantEntity;
          if ( v60 )
          {
            v61 = *(_OWORD *)&v60->fields.id.fields.fakeValue;
            *(_OWORD *)&v104.fields.currentCryptoKey = *(_OWORD *)&v60->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v104.fields.fakeValue = v61;
            if ( fortificationConfirmDialog == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(
                                                 &v104,
                                                 0LL) )
              return;
            v64 = Item->fields.userServantEntity;
            this->fields.targetInUserServantEntity = v64;
            sub_1B649A4(
              (ServantStatusBattleListViewItem_o *)&this->fields.targetInUserServantEntity,
              (int32_t)v64,
              v62,
              v63);
            v67 = this->fields.targetFortificationWorkItem;
            if ( v67 )
            {
              v68 = (ListViewObject_o *)v67->fields.userServantEntity;
              *p_targetOutUserServantEntity = v68;
              sub_1B649A4(
                (ServantStatusBattleListViewItem_o *)&this->fields.targetOutUserServantEntity,
                (int32_t)v68,
                v65,
                v66);
              if ( v31 )
              {
                obj = *p_targetOutUserServantEntity;
                v71 = v31->fields._items;
                v72 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                ++v31->fields._version;
                if ( v71 )
                {
                  v73 = v31->fields._size;
                  if ( (unsigned int)v73 >= v71->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v31,
                      (Il2CppObject *)obj,
                      *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v74 = &v71->obj.klass + v73;
                    v31->fields._size = v73 + 1;
                    v74[4] = (Il2CppClass *)obj;
                    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v74 + 4), (int32_t)obj, v69, v70);
                  }
                  fortificationConfirmDialog = (int64_t)this->fields.targetFortificationWorkItem;
                  if ( fortificationConfirmDialog )
                  {
                    fortificationConfirmDialog = EventFortificationWorkItem__get_AddPoint(
                                                   (EventFortificationWorkItem_o *)fortificationConfirmDialog,
                                                   (const MethodInfo *)obj);
                    if ( v32 )
                    {
                      v93 = v32->fields._items;
                      v94 = Method_System_Collections_Generic_List_int__Add__;
                      ++v32->fields._version;
                      if ( v93 )
                      {
                        v95 = v32->fields._size;
                        if ( (unsigned int)v95 >= v93->max_length )
                        {
                          System_Collections_Generic_List_int___AddWithResize(
                            v32,
                            fortificationConfirmDialog,
                            *(const MethodInfo_34927D0 **)(*(_QWORD *)(v94[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v32->fields._size = v95 + 1;
                          v93->m_Items[v95 + 1] = fortificationConfirmDialog;
                        }
                        obj = *p_targetInUserServantEntity;
                        v96 = v31->fields._items;
                        v97 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                        ++v31->fields._version;
                        if ( v96 )
                        {
                          v98 = v31->fields._size;
                          if ( (unsigned int)v98 >= v96->max_length )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              v31,
                              (Il2CppObject *)obj,
                              *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v99 = &v96->obj.klass + v98;
                            v31->fields._size = v98 + 1;
                            v99[4] = (Il2CppClass *)obj;
                            sub_1B649A4((ServantStatusBattleListViewItem_o *)(v99 + 4), (int32_t)obj, v91, v92);
                          }
                          fortificationConfirmDialog = EventFortificationListViewItem__get_AddPoint(Item, 0LL);
                          v100 = v32->fields._items;
                          v101 = Method_System_Collections_Generic_List_int__Add__;
                          ++v32->fields._version;
                          if ( v100 )
                          {
                            v102 = v32->fields._size;
                            if ( (unsigned int)v102 >= v100->max_length )
                            {
                              System_Collections_Generic_List_int___AddWithResize(
                                v32,
                                fortificationConfirmDialog,
                                *(const MethodInfo_34927D0 **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v32->fields._size = v102 + 1;
                              v100->m_Items[v102 + 1] = fortificationConfirmDialog;
                            }
                            v90 = this->fields.fortificationConfirmDialog;
                            v79 = System_Collections_Generic_List_object___ToArray(
                                    v31,
                                    (const MethodInfo_34B1BC0 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
                            v80 = System_Collections_Generic_List_int___ToArray(
                                    v32,
                                    (const MethodInfo_3494328 *)Method_System_Collections_Generic_List_int__ToArray__);
                            TargetTeamName = EventFortificationListViewItem__get_TargetTeamName(Item, 0LL);
                            TargetDetailName = EventFortificationListViewItem__get_TargetDetailName(Item, 0LL);
                            TargetWorkType = EventFortificationListViewItem__get_TargetWorkType(Item, 0LL);
                            v84 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
                            System_Action___ctor(
                              v84,
                              (Il2CppObject *)this,
                              (intptr_t)Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__,
                              0LL);
                            if ( v90 )
                            {
                              v86 = 2;
                              goto LABEL_74;
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
LABEL_77:
    sub_1B64C5C(fortificationConfirmDialog, obj);
  }
  if ( !Item )
    goto LABEL_77;
  v51 = (ListViewObject_o *)Item->fields.userServantEntity;
  *p_targetInUserServantEntity = v51;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.targetInUserServantEntity, (int32_t)v51, v33, v34);
  if ( !v31 )
    goto LABEL_77;
  obj = *p_targetInUserServantEntity;
  v54 = v31->fields._items;
  v55 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
  ++v31->fields._version;
  if ( !v54 )
    goto LABEL_77;
  v56 = v31->fields._size;
  if ( (unsigned int)v56 >= v54->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v31,
      (Il2CppObject *)obj,
      *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
  }
  else
  {
    v57 = &v54->obj.klass + v56;
    v31->fields._size = v56 + 1;
    v57[4] = (Il2CppClass *)obj;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v57 + 4), (int32_t)obj, v52, v53);
  }
  fortificationConfirmDialog = EventFortificationListViewItem__get_AddPoint(Item, 0LL);
  if ( !v32 )
    goto LABEL_77;
  v75 = v32->fields._items;
  v76 = Method_System_Collections_Generic_List_int__Add__;
  ++v32->fields._version;
  if ( !v75 )
    goto LABEL_77;
  v77 = v32->fields._size;
  if ( (unsigned int)v77 >= v75->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v32,
      fortificationConfirmDialog,
      *(const MethodInfo_34927D0 **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
  }
  else
  {
    v32->fields._size = v77 + 1;
    v75->m_Items[v77 + 1] = fortificationConfirmDialog;
  }
  v78 = this->fields.fortificationConfirmDialog;
  v79 = System_Collections_Generic_List_object___ToArray(
          v31,
          (const MethodInfo_34B1BC0 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
  v80 = System_Collections_Generic_List_int___ToArray(
          v32,
          (const MethodInfo_3494328 *)Method_System_Collections_Generic_List_int__ToArray__);
  TargetTeamName = EventFortificationListViewItem__get_TargetTeamName(Item, 0LL);
  TargetDetailName = EventFortificationListViewItem__get_TargetDetailName(Item, 0LL);
  TargetWorkType = EventFortificationListViewItem__get_TargetWorkType(Item, 0LL);
  v84 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
  System_Action___ctor(
    v84,
    (Il2CppObject *)this,
    (intptr_t)Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__,
    0LL);
  if ( !v78 )
    goto LABEL_77;
  v85 = v78;
  v86 = 0;
LABEL_75:
  FortificationConfirmDialogComponent__Open(
    v85,
    v86,
    (UserServantEntity_array *)v79,
    v80,
    TargetTeamName,
    TargetDetailName,
    TargetWorkType,
    v84,
    v103);
}


void __fastcall EventFortificationListViewManager__OnClickSelectPush(
        EventFortificationListViewManager_o *this,
        ListViewObject_o *obj,
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
  __int64 v25; // x19
  DataManager_o *SelfUserGame; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  __int64 methodPtr_low; // x9
  EventFortificationListViewItem_o *Item; // x0
  EventFortificationListViewItem_o **v32; // x20
  int32_t v33; // w2
  int32_t v34; // w3
  int64_t context; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v37; // q1
  _QWORD *v38; // x0
  System_Reflection_MethodBase_o *v39; // x0
  const MethodInfo *v40; // x2
  _QWORD *v41; // x0
  System_Reflection_MethodBase_o *v42; // x0
  Il2CppObject *Entity; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v44; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v47; // x25
  System_String_o *v48; // x21
  System_String_o *v49; // x22
  System_Object_array *v50; // x23
  int32_t Rarity; // w26
  int32_t v52; // w2
  int32_t v53; // w3
  Il2CppObject *v54; // x26
  int32_t v55; // w2
  int32_t v56; // w3
  Il2CppObject *v57; // x26
  int32_t v58; // w0
  int32_t v59; // w2
  int32_t v60; // w3
  Il2CppObject *v61; // x24
  int32_t v62; // w0
  int32_t v63; // w2
  int32_t v64; // w3
  Il2CppObject *v65; // x24
  int32_t v66; // w2
  int32_t v67; // w3
  Il2CppObject *v68; // x24
  EventFortificationListViewItem_o *v69; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v70; // x9
  ServantEntity_o *servantEntity; // x20
  int32_t v72; // w2
  int32_t v73; // w3
  Il2CppObject *v74; // x20
  System_String_o *v75; // x20
  System_String_o *v76; // x22
  System_String_o *v77; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v79; // x25
  __int64 v80; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+40h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16

  if ( (byte_4A02838 & 1) == 0 )
  {
    sub_1B64A00(&BalanceConfig_TypeInfo, obj);
    sub_1B64A00(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1B64A00(&Method_DataManager_GetMasterData_UserServantMaster___, v7);
    sub_1B64A00(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1B64A00(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_1B64A00(&Method_EventFortificationListViewManager_OnClickSelectPush__, v10);
    sub_1B64A00(&EventFortificationListViewObject_TypeInfo, v11);
    sub_1B64A00(&LocalizationManager_TypeInfo, v12);
    sub_1B64A00(&object___TypeInfo, v13);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_1B64A00(&Rarity_TypeInfo, v16);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1B64A00(&Method_EventFortificationListViewManager___c__DisplayClass95_0__OnClickSelectPush_b__0__, v19);
    sub_1B64A00(&EventFortificationListViewManager___c__DisplayClass95_0_TypeInfo, v20);
    sub_1B64A00(&StringLiteral_11843/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v21);
    sub_1B64A00(&StringLiteral_11841/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v22);
    sub_1B64A00(&StringLiteral_11842/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v23);
    sub_1B64A00(&StringLiteral_11844/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v24);
    byte_4A02838 = 1;
  }
  v25 = sub_1B64C4C(EventFortificationListViewManager___c__DisplayClass95_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  if ( !v25 )
    goto LABEL_62;
  *(_QWORD *)(v25 + 16) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v25 + 16), (int32_t)this, v28, v29);
  if ( !obj )
    goto LABEL_62;
  methodPtr_low = LOBYTE(EventFortificationListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventFortificationListViewObject_TypeInfo )
  {
    sub_1B64F1C(obj);
    goto LABEL_64;
  }
  Item = EventFortificationListViewObject__GetItem(
           (EventFortificationListViewObject_o *)obj,
           (const MethodInfo *)EventFortificationListViewObject_TypeInfo);
  *(_QWORD *)(v25 + 24) = Item;
  v32 = (EventFortificationListViewItem_o **)(v25 + 24);
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v25 + 24), (int32_t)Item, v33, v34);
  SelfUserGame = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_62;
  context = (int64_t)SelfUserGame->fields.context;
  if ( context )
  {
    if ( !*v32 )
      goto LABEL_62;
    userServantEntity = (*v32)->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_62;
    v37 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v82.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v82.fields.fakeValue = v37;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v81 = v82;
    if ( context == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v81, 0LL) )
      goto LABEL_14;
    v41 = Method_EventFortificationListViewManager_OnClickSelectPush__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickSelectPush__ + 83) & 2) != 0 )
      v41 = (_QWORD *)sub_1B64A18(Method_EventFortificationListViewManager_OnClickSelectPush__);
    v42 = (System_Reflection_MethodBase_o *)sub_1B649E4(v41, v41[4]);
    OverwriteAssetSoundName__PlaySystemSe(v42, 0, 0LL);
    SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_62;
    SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                      SelfUserGame,
                                      (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !SelfUserGame )
      goto LABEL_62;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
               context,
               (const MethodInfo_30D6944 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_62;
    SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                      SelfUserGame,
                                      (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_62;
    v44 = (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame;
    klass = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v83.fields.currentCryptoKey = klass;
    *(_QWORD *)&v83.fields.fakeValue = monitor;
    SelfUserGame = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v83, 0LL);
    if ( !v44 )
      goto LABEL_62;
    v47 = DataMasterBase_object__object__int___GetEntity(
            v44,
            (int32_t)SelfUserGame,
            (const MethodInfo_30D6798 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v48 = LocalizationManager__Get((System_String_o *)StringLiteral_11844/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
    v49 = LocalizationManager__Get((System_String_o *)StringLiteral_11843/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    v50 = (System_Object_array *)sub_1B64AA8(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    SelfUserGame = (DataManager_o *)Rarity__getRarityType(Rarity, 0LL);
    if ( !v50 )
LABEL_62:
      sub_1B64C5C(SelfUserGame, v27);
    v54 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = (DataManager_o *)sub_1B64B3C(SelfUserGame, v50->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( !v50->max_length )
      goto LABEL_64;
    v50->m_Items[0] = v54;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)v50->m_Items, (int32_t)v54, v52, v53);
    if ( !v47 )
      goto LABEL_62;
    SelfUserGame = (DataManager_o *)ServantEntity__getClassName((ServantEntity_o *)v47, 0LL);
    v57 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = (DataManager_o *)sub_1B64B3C(SelfUserGame, v50->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( v50->max_length <= 1 )
      goto LABEL_64;
    v50->m_Items[1] = v57;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v50->m_Items[1], (int32_t)v57, v55, v56);
    v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
            (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
            0LL);
    SelfUserGame = (DataManager_o *)ServantEntity__getName((ServantEntity_o *)v47, v58, -1, 0LL);
    v61 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = (DataManager_o *)sub_1B64B3C(SelfUserGame, v50->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( v50->max_length <= 2 )
      goto LABEL_64;
    v50->m_Items[2] = v61;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v50->m_Items[2], (int32_t)v61, v59, v60);
    if ( !*v32 )
      goto LABEL_62;
    SelfUserGame = (DataManager_o *)(*v32)->fields.userServantEntity;
    if ( !SelfUserGame )
      goto LABEL_62;
    v62 = UserServantEntity__getRarity((UserServantEntity_o *)SelfUserGame, 0LL);
    SelfUserGame = (DataManager_o *)Rarity__getRarityType(v62, 0LL);
    v65 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = (DataManager_o *)sub_1B64B3C(SelfUserGame, v50->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( v50->max_length <= 3 )
      goto LABEL_64;
    v50->m_Items[3] = v65;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v50->m_Items[3], (int32_t)v65, v63, v64);
    if ( !*v32 )
      goto LABEL_62;
    SelfUserGame = (DataManager_o *)(*v32)->fields.servantEntity;
    if ( !SelfUserGame )
      goto LABEL_62;
    SelfUserGame = (DataManager_o *)ServantEntity__getClassName((ServantEntity_o *)SelfUserGame, 0LL);
    v68 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = (DataManager_o *)sub_1B64B3C(SelfUserGame, v50->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( v50->max_length <= 4 )
      goto LABEL_64;
    v50->m_Items[4] = v68;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v50->m_Items[4], (int32_t)v68, v66, v67);
    v69 = *v32;
    if ( !*v32 )
      goto LABEL_62;
    v70 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v69->fields.userServantEntity;
    if ( !v70 )
      goto LABEL_62;
    servantEntity = v69->fields.servantEntity;
    SelfUserGame = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v70[6], 0LL);
    if ( !servantEntity )
      goto LABEL_62;
    SelfUserGame = (DataManager_o *)ServantEntity__getName(servantEntity, (int32_t)SelfUserGame, -1, 0LL);
    v74 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = (DataManager_o *)sub_1B64B3C(SelfUserGame, v50->obj.klass->_1.element_class);
      if ( !SelfUserGame )
      {
LABEL_65:
        v80 = sub_1B64C80(SelfUserGame);
        sub_1B64B28(v80, 0LL);
      }
    }
    if ( v50->max_length > 5 )
    {
      v50->m_Items[5] = v74;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&v50->m_Items[5], (int32_t)v74, v72, v73);
      v75 = System_String__Format_61399644(v49, v50, 0LL);
      v76 = LocalizationManager__Get((System_String_o *)StringLiteral_11842/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
      v77 = LocalizationManager__Get((System_String_o *)StringLiteral_11841/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v79 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64C4C(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v79,
        (Il2CppObject *)v25,
        Method_EventFortificationListViewManager___c__DisplayClass95_0__OnClickSelectPush_b__0__,
        0LL);
      SelfUserGame = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      if ( Instance )
      {
        CommonUI__OpenConfirmDialog_30347724(
          (CommonUI_o *)Instance,
          v48,
          v75,
          v76,
          v77,
          1,
          v79,
          BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
          0,
          0,
          0LL);
        return;
      }
      goto LABEL_62;
    }
LABEL_64:
    sub_1B64C64(SelfUserGame, v27);
  }
LABEL_14:
  v38 = Method_EventFortificationListViewManager_OnClickSelectPush__;
  if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickSelectPush__ + 83) & 2) != 0 )
    v38 = (_QWORD *)sub_1B64A18(Method_EventFortificationListViewManager_OnClickSelectPush__);
  v39 = (System_Reflection_MethodBase_o *)sub_1B649E4(v38, v38[4]);
  OverwriteAssetSoundName__PlaySystemSe(v39, 8, 0LL);
  EventFortificationListViewManager__PushRequest(this, *v32, v40);
}


void __fastcall EventFortificationListViewManager__OnClickSortAscendingOrder(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4A0282D & 1) == 0 )
  {
    sub_1B64A00(&Method_EventFortificationListViewManager_OnClickSortAscendingOrder__, method);
    byte_4A0282D = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EventFortificationListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B64A18(Method_EventFortificationListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B649E4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B64C5C(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall EventFortificationListViewManager__OnClickSortButton(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v10; // x21
  ServantSortSelectMenu_CallbackFunc_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_4A0282B & 1) == 0 )
  {
    sub_1B64A00(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1B64A00(&Method_EventFortificationListViewManager_EndSelectSortKind__, v3);
    sub_1B64A00(&Method_EventFortificationListViewManager_OnClickSortButton__, v4);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4A0282B = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_EventFortificationListViewManager_OnClickSortButton__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickSortButton__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B64A18(Method_EventFortificationListViewManager_OnClickSortButton__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B649E4(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1B64C4C(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_EventFortificationListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v10 )
      sub_1B64C5C(v12, v13);
    CommonUI__OpenServantSortSelectMenu(v10, 3, sort, 0, v11, 0LL);
  }
}


void __fastcall EventFortificationListViewManager__OnLongPushListView(
        EventFortificationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  const MethodInfo *v11; // x1
  UnityEngine_Behaviour_o *scrollView; // x0
  __int64 methodPtr_low; // x10
  EventFortificationListViewItem_o *Item; // x21
  UserServantEntity_o *userServantEntity; // x21
  CommonUI_o *v16; // x20
  ServantStatusDialog_EndDelegate_o *v17; // x22

  if ( (byte_4A02824 & 1) == 0 )
  {
    sub_1B64A00(&ServantStatusDialog_EndDelegate_TypeInfo, obj);
    sub_1B64A00(&Method_EventFortificationListViewManager_EndShowServant__, v5);
    sub_1B64A00(&Method_EventFortificationListViewManager_OnLongPushListView__, v6);
    sub_1B64A00(&EventFortificationListViewObject_TypeInfo, v7);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_4A02824 = 1;
  }
  if ( (unsigned int)(this->fields.modeKind - 1) >= 3 )
  {
    v9 = Method_EventFortificationListViewManager_OnLongPushListView__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1B64A18(Method_EventFortificationListViewManager_OnLongPushListView__);
    v10 = (System_Reflection_MethodBase_o *)sub_1B649E4(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_13;
    UnityEngine_Behaviour__set_enabled(scrollView, 0, 0LL);
    if ( !obj
      || (methodPtr_low = LOBYTE(EventFortificationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
      || (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventFortificationListViewObject_TypeInfo
      || (Item = EventFortificationListViewObject__GetItem((EventFortificationListViewObject_o *)obj, v11),
          scrollView = (UnityEngine_Behaviour_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          !Item)
      || (userServantEntity = Item->fields.userServantEntity,
          v16 = (CommonUI_o *)scrollView,
          v17 = (ServantStatusDialog_EndDelegate_o *)sub_1B64C4C(ServantStatusDialog_EndDelegate_TypeInfo),
          ServantStatusDialog_EndDelegate___ctor(
            v17,
            (Il2CppObject *)this,
            Method_EventFortificationListViewManager_EndShowServant__,
            0LL),
          !v16) )
    {
LABEL_13:
      sub_1B64C5C(scrollView, v11);
    }
    CommonUI__OpenServantStatusDialog_30357908(v16, 0, userServantEntity, v17, 0LL);
  }
}


void __fastcall EventFortificationListViewManager__OnMoveEnd(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  UnityEngine_Behaviour_o *v8; // x0
  struct System_Action_o *CallbackFunc2; // x20
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A02820 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    byte_4A02820 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v8 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
        if ( !v8
          || (UnityEngine_Behaviour__set_enabled(v8, 1, 0LL),
              (v8 = (UnityEngine_Behaviour_o *)this->fields.scrollView) == 0LL)
          || (((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, Il2CppClass *))v8->klass[1]._1.castClass)(
                v8,
                1LL,
                v8->klass[1]._1.declaringType),
              (v8 = (UnityEngine_Behaviour_o *)this->fields.scrollView) == 0LL) )
        {
          sub_1B64C5C(v8, v7);
        }
        UIScrollView__UpdatePosition((UIScrollView_o *)v8, 0LL);
        CallbackFunc2 = this->fields.CallbackFunc2;
        this->fields.CallbackFunc2 = 0LL;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.CallbackFunc2, 0, v10, v11);
        if ( CallbackFunc2 )
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))CallbackFunc2->fields.m_target)(
            CallbackFunc2->fields.original_method_info,
            *(_QWORD *)&CallbackFunc2->fields.extra_arg);
      }
    }
  }
}


void __fastcall EventFortificationListViewManager__PushRequest(
        EventFortificationListViewManager_o *this,
        EventFortificationListViewItem_o *selectItem,
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
  DataManager_o *limitCountSupport; // x0
  __int64 v14; // x1
  DataManager_o *v15; // x23
  struct UserServantEntity_o *userServantEntity; // x19
  UserServantCollectionMaster_o *v17; // x21
  int64_t v18; // x22
  __int64 v19; // x24
  __int64 v20; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v22; // q0
  struct System_Threading_SynchronizationContext_o *context; // x8
  UserServantEntity_Fields *p_fields; // x24
  int64_t v25; // x0
  __int128 v26; // q1
  NetworkManager_ResultCallbackFunc_o *v27; // x21
  Il2CppObject *Request_object; // x0
  __int128 v29; // q1
  CardFavoriteRequest_o *v30; // x20
  int32_t v31; // w26
  int32_t v32; // w27
  int32_t v33; // w28
  int32_t v34; // w29
  bool IsLock; // w21
  char v36; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v40; // w0
  __int64 v41; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v45; // [xsp+60h] [xbp-100h]
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // [xsp+68h] [xbp-F8h]
  int64_t v47; // [xsp+70h] [xbp-F0h]
  struct System_Threading_SynchronizationContext_o *v48; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_4A02839 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_1B64A00(&Method_EventFortificationListViewManager_EndPushRequest__, v5);
    sub_1B64A00(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6);
    sub_1B64A00(&NetworkManager_TypeInfo, v7);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1B64A00(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4A02839 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v15 = limitCountSupport;
  userServantEntity = selectItem->fields.userServantEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v15 || !userServantEntity )
    goto LABEL_18;
  v17 = (UserServantCollectionMaster_o *)limitCountSupport;
  v18 = *(_QWORD *)&v15->fields.m_CachedPtr;
  v20 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v53.fields.currentCryptoKey = v20;
  *(_QWORD *)&v53.fields.fakeValue = v19;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v53, 0LL);
  if ( !v17 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v17, v18, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v22 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  context = v15->fields.context;
  p_fields = &userServantEntity->fields;
  *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v52.fields.fakeValue = v22;
  v48 = context;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v51 = v52;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v51, 0LL);
  v26 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  masterLoadThreads = v15->fields.masterLoadThreads;
  v47 = v25;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v26;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v50, 0LL);
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64C4C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    Method_EventFortificationListViewManager_EndPushRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v27,
                     (const MethodInfo_2EBD2C4 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v29 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v30 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v49.fields.fakeValue = v29;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v49, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
                      userServantEntity->fields.imageLimitCount,
                      0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
          userServantEntity->fields.dispLimitCount,
          0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
          userServantEntity->fields.commandCardLimitCount,
          0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
          userServantEntity->fields.iconLimitCount,
          0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
          userServantEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userServantEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v36 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
                  userServantEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
                       userServantEntity->fields.randomLimitCount,
                       0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
          userServantEntity->fields.randomLimitCountSupport,
          0LL);
  v41 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v54.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v40;
  *(_QWORD *)&v54.fields.currentCryptoKey = v41;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v54, 0LL);
  if ( !v30 )
LABEL_18:
    sub_1B64C5C(limitCountSupport, v14);
  CardFavoriteRequest__beginRequest(
    v30,
    targetUsrSVtId,
    imageLimitCount,
    v31,
    v32,
    v33,
    v34,
    masterLoadThreads == (struct System_Collections_Generic_List_Thread__o *)v45,
    IsLock,
    v36 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v48 != (struct System_Threading_SynchronizationContext_o *)v47,
    0LL);
}


void __fastcall EventFortificationListViewManager__RefreshListDisp(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v5; // x1
  int32_t size; // w22
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w21

  if ( (byte_4A02817 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Count__, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Item__, v3);
    byte_4A02817 = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)EventFortificationListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !ObjectList )
    goto LABEL_9;
  size = ObjectList->fields._size;
  v7 = ObjectList;
  if ( size >= 1 )
  {
    v8 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v7,
                                                                  v8,
                                                                  (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
        ObjectList,
        this->fields.isInput,
        ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
      if ( size == ++v8 )
        return;
    }
LABEL_9:
    sub_1B64C5C(ObjectList, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager__RequestListObject(
        EventFortificationListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventFortificationListViewObject__o *ObjectList; // x0
  __int64 v12; // x1
  int32_t size; // w25
  System_Collections_Generic_List_object__o *v14; // x21
  int32_t v15; // w22
  Il2CppObject *Item; // x23
  System_Action_o *v17; // x24
  const MethodInfo *v18; // x3

  if ( (byte_4A0281F & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B64A00(&Method_EventFortificationListViewManager_OnMoveEnd__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Count__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Item__, v9);
    sub_1B64A00(&StringLiteral_9892/*"OnMoveEnd"*/, v10);
    byte_4A0281F = 1;
  }
  ObjectList = EventFortificationListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_10;
  size = ObjectList->fields._size;
  v14 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( size >= 1 )
  {
    v15 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v14,
               v15,
               (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Item__);
      v17 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_EventFortificationListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        break;
      EventFortificationListViewObject__Init_45233628((EventFortificationListViewObject_o *)Item, mode, v17, v18);
      if ( size == ++v15 )
        return;
    }
LABEL_10:
    sub_1B64C5C(ObjectList, v12);
  }
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9892/*"OnMoveEnd"*/,
    delay,
    0LL);
}


void __fastcall EventFortificationListViewManager__SetFilterButtonImage(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v6; // x8

  if ( (byte_4A0282A & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_17444/*"btn_filter_on"*/, method);
    sub_1B64A00(&StringLiteral_17443/*"btn_filter"*/, v3);
    byte_4A0282A = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1B64C5C(sort, method);
  }
  v6 = (System_String_o **)&StringLiteral_17443/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17444/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v6, 0LL);
}


void __fastcall EventFortificationListViewManager__SetHeaderMsg(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct UILabel_o *recoveryFatigueInfoMsgLabel; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x22
  System_String_o *v11; // x21
  struct EventFortificationWorkItem_o *v12; // x8
  struct EventFortificationEntity_o *eventFortificationEntity; // x9
  Il2CppObject **v14; // x9
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8
  System_String_o *v16; // x1
  UILabel_o *v17; // x0
  struct UILabel_o *v18; // x19
  __int64 *v19; // x8

  if ( (byte_4A02819 & 1) == 0 )
  {
    sub_1B64A00(&LocalizationManager_TypeInfo, method);
    sub_1B64A00(&StringLiteral_11574/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v3);
    sub_1B64A00(&StringLiteral_11572/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v4);
    sub_1B64A00(&StringLiteral_11573/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v5);
    sub_1B64A00(&StringLiteral_6436/*"FORTIFICATION_GUIDE_HELP"*/, v6);
    byte_4A02819 = 1;
  }
  switch ( this->fields.modeKind )
  {
    case 0:
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6436/*"FORTIFICATION_GUIDE_HELP"*/, 0LL);
      targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
      if ( !targetFortificationWorkItem )
        goto LABEL_28;
      v11 = (System_String_o *)v8;
      v12 = this->fields.targetFortificationWorkItem;
      if ( (byte_4A0286A & 1) == 0 )
      {
        v8 = sub_1B64A00(&StringLiteral_1/*""*/, v9);
        byte_4A0286A = 1;
        v12 = this->fields.targetFortificationWorkItem;
      }
      eventFortificationEntity = targetFortificationWorkItem->fields.eventFortificationEntity;
      v14 = eventFortificationEntity
          ? (Il2CppObject **)&eventFortificationEntity->fields.name
          : (Il2CppObject **)&StringLiteral_1/*""*/;
      if ( !v12 )
        goto LABEL_28;
      eventFortificationDetailEntity = v12->fields.eventFortificationDetailEntity;
      if ( !eventFortificationDetailEntity )
        goto LABEL_28;
      v8 = (__int64)System_String__Format_61399508(
                      v11,
                      *v14,
                      (Il2CppObject *)eventFortificationDetailEntity->fields.name,
                      0LL);
      if ( !recoveryFatigueInfoMsgLabel )
        goto LABEL_28;
      v16 = (System_String_o *)v8;
      v17 = recoveryFatigueInfoMsgLabel;
      goto LABEL_27;
    case 1:
      v18 = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = &StringLiteral_11573/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
      goto LABEL_25;
    case 2:
      v18 = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = &StringLiteral_11572/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
      goto LABEL_25;
    case 3:
      v18 = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = &StringLiteral_11574/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_25:
      v8 = (__int64)LocalizationManager__Get((System_String_o *)*v19, 0LL);
      if ( !v18 )
LABEL_28:
        sub_1B64C5C(v8, v9);
      v16 = (System_String_o *)v8;
      v17 = v18;
LABEL_27:
      UILabel__set_text(v17, v16, 0LL);
      break;
    default:
      return;
  }
}


void __fastcall EventFortificationListViewManager__SetMode(
        EventFortificationListViewManager_o *this,
        int32_t mode,
        EventFortificationListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.Callback = callback;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&this->fields.Callback,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  EventFortificationListViewManager__SetMode_45233104(this, mode, v6);
}


void __fastcall EventFortificationListViewManager__SetMode_45233104(
        EventFortificationListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int32_t v6; // w1

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  if ( (unsigned int)(mode - 1) <= 1 )
  {
    if ( mode == 1 )
      v6 = 2;
    else
      v6 = 3;
    EventFortificationListViewManager__RequestListObject(this, v6, 0.0, v5);
  }
}


void __fastcall EventFortificationListViewManager__SetMode_45233212(
        EventFortificationListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.CallbackFunc2 = callback;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&this->fields.CallbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  EventFortificationListViewManager__SetMode_45233104(this, mode, v6);
}


void __fastcall EventFortificationListViewManager__SetObjectItem(
        EventFortificationListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  EventFortificationListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4A0281E & 1) == 0 )
  {
    this = (EventFortificationListViewManager_o *)sub_1B64A00(&EventFortificationListViewObject_TypeInfo, obj);
    byte_4A0281E = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(EventFortificationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventFortificationListViewObject_TypeInfo )
  {
    sub_1B64C5C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  EventFortificationListViewObject__Init_45232980(
    (EventFortificationListViewObject_o *)obj,
    v7,
    (const MethodInfo *)item);
}


void __fastcall EventFortificationListViewManager__SetSortButtonImage(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v10; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v12; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v14; // x8
  int32_t sortKind; // w9
  System_String_o **v16; // x8
  struct ListViewSort_o *v17; // x8
  System_String_o **v18; // x9
  System_String_o **v19; // x10
  System_String_o **v20; // x8
  System_String_o **v21; // x8

  if ( (byte_4A0282E & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    sub_1B64A00(&StringLiteral_17474/*"btn_sort_up"*/, v3);
    sub_1B64A00(&StringLiteral_17561/*"btn_txt_up"*/, v4);
    sub_1B64A00(&StringLiteral_17517/*"btn_txt_new"*/, v5);
    sub_1B64A00(&StringLiteral_17507/*"btn_txt_down"*/, v6);
    sub_1B64A00(&StringLiteral_17524/*"btn_txt_old"*/, v7);
    sub_1B64A00(&StringLiteral_17471/*"btn_sort_down"*/, v8);
    byte_4A0282E = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_35;
    v12 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v12 )
      goto LABEL_35;
    UILabel__set_text(v12, (System_String_o *)sort, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_35;
    ListViewSort__SetupSortLabelLayout(sort, this->fields.sortKindLabel, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v14 = this->fields.sort;
    if ( v14 )
    {
      sortKind = v14->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17524/*"btn_txt_old"*/ : &StringLiteral_17517/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
          v17 = this->fields.sort;
          if ( v17 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v18 = (System_String_o **)&StringLiteral_17471/*"btn_sort_down"*/;
              v19 = (System_String_o **)&StringLiteral_17474/*"btn_sort_up"*/;
LABEL_31:
              if ( v17->fields.isAscendingOrder )
                v21 = v18;
              else
                v21 = v19;
              UISprite__set_spriteName((UISprite_o *)sort, *v21, 0LL);
              return;
            }
          }
        }
      }
      else
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v20 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17561/*"btn_txt_up"*/ : &StringLiteral_17507/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
          v17 = this->fields.sort;
          if ( v17 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v18 = (System_String_o **)&StringLiteral_17474/*"btn_sort_up"*/;
              v19 = (System_String_o **)&StringLiteral_17471/*"btn_sort_down"*/;
              goto LABEL_31;
            }
          }
        }
      }
    }
LABEL_35:
    sub_1B64C5C(sort, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager__SetStatusKind(
        EventFortificationListViewManager_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Behaviour_o *statusTabButton; // x0
  __int64 *v13; // x8
  __int64 *v14; // x8
  __int64 *v15; // x8
  __int64 *v16; // x8
  const MethodInfo *v17; // x1

  if ( (byte_4A02818 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_17594/*"button_push_reg"*/, *(_QWORD *)&modeKind);
    sub_1B64A00(&StringLiteral_17595/*"button_push_unreg"*/, v5);
    sub_1B64A00(&StringLiteral_17580/*"button_allchoice_reg"*/, v6);
    sub_1B64A00(&StringLiteral_17583/*"button_alllock_unreg"*/, v7);
    sub_1B64A00(&StringLiteral_17596/*"button_select_reg"*/, v8);
    sub_1B64A00(&StringLiteral_17597/*"button_select_unreg"*/, v9);
    sub_1B64A00(&StringLiteral_17582/*"button_alllock_reg"*/, v10);
    sub_1B64A00(&StringLiteral_17581/*"button_allchoice_unreg"*/, v11);
    byte_4A02818 = 1;
  }
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  this->fields.modeKind = modeKind;
  if ( !statusTabButton )
    goto LABEL_28;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
    statusTabButton,
    1LL,
    statusTabButton->klass[1]._1.byval_arg.data);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 0, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabSprite;
  if ( !statusTabButton )
    goto LABEL_28;
  v13 = &StringLiteral_17596/*"button_select_reg"*/;
  if ( modeKind )
    v13 = &StringLiteral_17597/*"button_select_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v13, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
    statusTabButton,
    0LL,
    0LL,
    statusTabButton->klass[1]._1.interfaceOffsets);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
    statusTabButton,
    1LL,
    statusTabButton->klass[1]._1.byval_arg.data);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 1, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
  if ( !statusTabButton )
    goto LABEL_28;
  v14 = &StringLiteral_17582/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v14 = &StringLiteral_17583/*"button_alllock_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v14, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
    statusTabButton,
    0LL,
    0LL,
    statusTabButton->klass[1]._1.interfaceOffsets);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
    statusTabButton,
    1LL,
    statusTabButton->klass[1]._1.byval_arg.data);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 2, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceSprite;
  if ( !statusTabButton )
    goto LABEL_28;
  v15 = &StringLiteral_17580/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v15 = &StringLiteral_17581/*"button_allchoice_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v15, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
    statusTabButton,
    0LL,
    0LL,
    statusTabButton->klass[1]._1.interfaceOffsets);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
    statusTabButton,
    1LL,
    statusTabButton->klass[1]._1.byval_arg.data);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 3, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushSprite;
  if ( !statusTabButton )
    goto LABEL_28;
  v16 = &StringLiteral_17594/*"button_push_reg"*/;
  if ( modeKind != 3 )
    v16 = &StringLiteral_17595/*"button_push_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v16, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
  if ( !statusTabButton )
LABEL_28:
    sub_1B64C5C(statusTabButton, *(_QWORD *)&modeKind);
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
    statusTabButton,
    0LL,
    0LL,
    statusTabButton->klass[1]._1.interfaceOffsets);
  EventFortificationListViewManager__SetHeaderMsg(this, v17);
}


void __fastcall EventFortificationListViewManager__StatusRequest(
        EventFortificationListViewManager_o *this,
        EventFortificationListViewManager_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t modeKind; // w8
  int32_t v10; // w2
  int32_t v11; // w3
  NetworkManager_ResultCallbackFunc_o *v12; // x20
  Il2CppObject *Request_object; // x0
  __int64 v14; // x1
  System_Int64_array *v15; // x1
  System_Int64_array *v16; // x2
  bool v17; // w4
  bool v18; // w5
  int32_t v19; // w2
  int32_t v20; // w3
  NetworkManager_ResultCallbackFunc_o *v21; // x20
  System_Int64_array *v22; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4A02835 & 1) == 0 )
  {
    sub_1B64A00(&Method_EventFortificationListViewManager_EndStatusSync__, callback);
    sub_1B64A00(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v6);
    sub_1B64A00(&NetworkManager_TypeInfo, v7);
    sub_1B64A00(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_4A02835 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v22 = 0LL;
  choiceList = 0LL;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    if ( EventFortificationListViewManager__GetSwapChoiceList(this, &choiceList, &v22, v3) )
    {
      this->fields.requestCallback = callback;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.requestCallback, (int32_t)callback, v19, v20);
      v21 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64C4C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v21,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v21,
                         (const MethodInfo_2EBD2C4 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_object )
      {
        v16 = v22;
        v15 = choiceList;
        v18 = 1;
        v17 = 0;
        goto LABEL_15;
      }
LABEL_19:
      sub_1B64C5C(Request_object, v14);
    }
  }
  else if ( modeKind == 1 && EventFortificationListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.requestCallback, (int32_t)callback, v10, v11);
    v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64C4C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v12,
      (Il2CppObject *)this,
      Method_EventFortificationListViewManager_EndStatusSync__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v12,
                       (const MethodInfo_2EBD2C4 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( Request_object )
    {
      v16 = unlockList;
      v15 = lockList;
      v17 = 1;
      v18 = 0;
LABEL_15:
      CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)Request_object, v15, v16, 0, v17, v18, 0LL);
      return;
    }
    goto LABEL_19;
  }
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      0LL,
      *(_QWORD *)&callback->fields.extra_arg);
}


void __fastcall EventFortificationListViewManager__add_Callback(
        EventFortificationListViewManager_o *this,
        EventFortificationListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *Callback; // x21
  struct EventFortificationListViewManager_CallbackFunc_o **p_Callback; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  EventFortificationListViewManager_o *v10; // x0
  EventFortificationListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4A0280E & 1) == 0 )
  {
    sub_1B64A00(&EventFortificationListViewManager_CallbackFunc_TypeInfo, value);
    byte_4A0280E = 1;
  }
  Callback = (System_Delegate_o *)this->fields.Callback;
  p_Callback = &this->fields.Callback;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(Callback, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (EventFortificationListViewManager_CallbackFunc_c *)v7->klass != EventFortificationListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1B9FEF0(p_Callback, v7, Callback);
    v9 = Callback == (System_Delegate_o *)v8;
    Callback = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B64F1C(v7);
  EventFortificationListViewManager__remove_Callback(v10, v11, v12);
}


void __fastcall EventFortificationListViewManager__add_CallbackFunc2(
        EventFortificationListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *CallbackFunc2; // x21
  struct System_Action_o **p_CallbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  EventFortificationListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4A02810 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, value);
    byte_4A02810 = 1;
  }
  CallbackFunc2 = (System_Delegate_o *)this->fields.CallbackFunc2;
  p_CallbackFunc2 = &this->fields.CallbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(CallbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1B9FEF0(p_CallbackFunc2, v7, CallbackFunc2);
    v9 = CallbackFunc2 == (System_Delegate_o *)v8;
    CallbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B64F1C(v7);
  EventFortificationListViewManager__remove_CallbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_EventFortificationListViewObject__o *__fastcall EventFortificationListViewManager__get_ClippingObjectList(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x20
  const MethodInfo *v9; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v12; // w21
  Il2CppObject *v13; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4A02815 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1B64A00(&System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo, v7);
    byte_4A02815 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_18;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v12 = 0;
    do
    {
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v12,
                                                                  (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        break;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___);
      if ( !objectList )
        break;
      v13 = (Il2CppObject *)objectList;
      objectList = (System_Collections_Generic_List_object__o *)EventFortificationListViewObject__GetItem(
                                                                  (EventFortificationListViewObject_o *)objectList,
                                                                  v9);
      if ( !objectList )
        break;
      v9 = (const MethodInfo *)objectList;
      if ( LOBYTE(objectList[2].monitor) )
      {
        objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_40394624(
                                                                    (ListViewManager_o *)this,
                                                                    (ListViewItem_o *)objectList,
                                                                    0LL);
        if ( ((unsigned __int8)objectList & 1) == 0 )
          continue;
      }
      if ( !v8 )
        break;
      items = v8->fields._items;
      v17 = Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__;
      ++v8->fields._version;
      if ( !items )
        break;
      v18 = v8->fields._size;
      if ( (unsigned int)v18 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          v13,
          *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v19 = &items->obj.klass + v18;
        v8->fields._size = v18 + 1;
        v19[4] = (Il2CppClass *)v13;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)v13, v14, v15);
      }
      if ( size == ++v12 )
        return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v8;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_18:
    sub_1B64C5C(objectList, v9);
  }
  return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v8;
}


int32_t __fastcall EventFortificationListViewManager__get_ListModeKind(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.modeKind;
}


System_Collections_Generic_List_EventFortificationListViewObject__o *__fastcall EventFortificationListViewManager__get_ObjectList(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x20
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v13; // w21
  Il2CppObject *Item; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  System_Collections_Generic_List_object__o *v20; // x1
  Il2CppClass **v21; // x0

  if ( (byte_4A02814 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1B64A00(&System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo, v7);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v8);
    byte_4A02814 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v13 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               objectList,
               v13,
               (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                  (UnityEngine_Object_o *)Item,
                                                                  0LL,
                                                                  0LL);
      if ( ((unsigned __int8)objectList & 1) != 0 )
      {
        if ( !Item )
          break;
        objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)Item,
                                                                    (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___);
        if ( !v9 )
          break;
        items = v9->fields._items;
        v18 = Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        v19 = v9->fields._size;
        v20 = objectList;
        if ( (unsigned int)v19 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)objectList,
            *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + v19;
          v9->fields._size = v19 + 1;
          v21[4] = (Il2CppClass *)v20;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v20, v15, v16);
        }
      }
      if ( size == ++v13 )
        return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v9;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_1B64C5C(objectList, v10);
  }
  return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v9;
}


void __fastcall EventFortificationListViewManager__remove_Callback(
        EventFortificationListViewManager_o *this,
        EventFortificationListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *Callback; // x21
  struct EventFortificationListViewManager_CallbackFunc_o **p_Callback; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  EventFortificationListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4A0280F & 1) == 0 )
  {
    sub_1B64A00(&EventFortificationListViewManager_CallbackFunc_TypeInfo, value);
    byte_4A0280F = 1;
  }
  Callback = (System_Delegate_o *)this->fields.Callback;
  p_Callback = &this->fields.Callback;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(Callback, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (EventFortificationListViewManager_CallbackFunc_c *)v7->klass != EventFortificationListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1B9FEF0(p_Callback, v7, Callback);
    v9 = Callback == (System_Delegate_o *)v8;
    Callback = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B64F1C(v7);
  EventFortificationListViewManager__add_CallbackFunc2(v10, v11, v12);
}


void __fastcall EventFortificationListViewManager__remove_CallbackFunc2(
        EventFortificationListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *CallbackFunc2; // x21
  struct System_Action_o **p_CallbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  const MethodInfo *v10; // x0

  if ( (byte_4A02811 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, value);
    byte_4A02811 = 1;
  }
  CallbackFunc2 = (System_Delegate_o *)this->fields.CallbackFunc2;
  p_CallbackFunc2 = &this->fields.CallbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(CallbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1B9FEF0(p_CallbackFunc2, v7, CallbackFunc2);
    v9 = CallbackFunc2 == (System_Delegate_o *)v8;
    CallbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B64F1C(v7);
  EventFortificationListViewManager__DeleteContinueData(v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager_CallbackFunc___ctor(
        EventFortificationListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64AC0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64C78(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B64B28(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19B1814;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19B17BC;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall EventFortificationListViewManager_CallbackFunc__BeginInvoke(
        EventFortificationListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v14[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v15; // [xsp+28h] [xbp-38h] BYREF
  int32_t v16; // [xsp+2Ch] [xbp-34h] BYREF

  v15 = index;
  v16 = kind;
  if ( (byte_4A0283B & 1) == 0 )
  {
    sub_1B64A00(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1B64A00(&EventFortificationListViewManager_ResultKind_TypeInfo, v9);
    byte_4A0283B = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             EventFortificationListViewManager_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&index,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1B649B4(this, v14, callback, object);
}


void __fastcall EventFortificationListViewManager_CallbackFunc__EndInvoke(
        EventFortificationListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B649B8(result, 0LL, method);
}


void __fastcall EventFortificationListViewManager_CallbackFunc__Invoke(
        EventFortificationListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t index,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    kind,
    index,
    *(_QWORD *)&this->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager_RequestCallbackFunc___ctor(
        EventFortificationListViewManager_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64AC0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64C78(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B64B28(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19B1880;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19B1838;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall EventFortificationListViewManager_RequestCallbackFunc__BeginInvoke(
        EventFortificationListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isRequest;
  if ( (byte_4A0283C & 1) == 0 )
  {
    sub_1B64A00(&bool_TypeInfo, isRequest);
    byte_4A0283C = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B649B4(this, v9, callback, object);
}


void __fastcall EventFortificationListViewManager_RequestCallbackFunc__EndInvoke(
        EventFortificationListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B649B8(result, 0LL, method);
}


void __fastcall EventFortificationListViewManager_RequestCallbackFunc__Invoke(
        EventFortificationListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isRequest,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall EventFortificationListViewManager___c__DisplayClass48_0___ctor(
        EventFortificationListViewManager___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventFortificationListViewManager___c__DisplayClass48_0___CreateList_b__0(
        EventFortificationListViewManager___c__DisplayClass48_0_o *this,
        UserServantEntity_o *data,
        const MethodInfo *method)
{
  ServantClassMaster_o *servantClassMaster; // x20
  EventFortificationListViewManager___c__DisplayClass48_0_o *v4; // x19
  struct EventFortificationWorkItem_o *targetItem; // x8
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8

  if ( !data
    || (servantClassMaster = this->fields.servantClassMaster,
        v4 = this,
        this = (EventFortificationListViewManager___c__DisplayClass48_0_o *)UserServantEntity__getSvtClassId(
                                                                              data,
                                                                              0,
                                                                              0LL),
        !servantClassMaster)
    || (this = (EventFortificationListViewManager___c__DisplayClass48_0_o *)ServantClassMaster__getSupportGroupType(
                                                                              servantClassMaster,
                                                                              (int32_t)this,
                                                                              0LL),
        (targetItem = v4->fields.targetItem) == 0LL)
    || (eventFortificationDetailEntity = targetItem->fields.eventFortificationDetailEntity) == 0LL )
  {
    sub_1B64C5C(this, data);
  }
  return (_DWORD)this == eventFortificationDetailEntity->fields.classId;
}


bool __fastcall EventFortificationListViewManager___c__DisplayClass48_0___CreateList_b__1(
        EventFortificationListViewManager___c__DisplayClass48_0_o *this,
        UserServantEntity_o *data,
        const MethodInfo *method)
{
  EventFortificationListViewManager___c__DisplayClass48_0_o *v4; // x19
  __int64 v5; // x20
  __int64 v6; // x21
  struct EventFortificationWorkItem_o *targetItem; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *userServantEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v4 = this;
  if ( (byte_4A0283D & 1) == 0 )
  {
    this = (EventFortificationListViewManager___c__DisplayClass48_0_o *)sub_1B64A00(
                                                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                          data);
    byte_4A0283D = 1;
  }
  if ( !data )
    goto LABEL_9;
  v6 = *(_QWORD *)&data->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&data->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v6;
  *(_QWORD *)&v10.fields.fakeValue = v5;
  this = (EventFortificationListViewManager___c__DisplayClass48_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
                                                                        v10,
                                                                        0LL);
  targetItem = v4->fields.targetItem;
  if ( !targetItem
    || (userServantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)targetItem->fields.userServantEntity) == 0LL )
  {
LABEL_9:
    sub_1B64C5C(this, data);
  }
  return (_DWORD)this == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(userServantEntity[5], 0LL);
}


void __fastcall EventFortificationListViewManager___c__DisplayClass95_0___ctor(
        EventFortificationListViewManager___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager___c__DisplayClass95_0___OnClickSelectPush_b__0(
        EventFortificationListViewManager___c__DisplayClass95_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  CommonUI_o *v9; // x20
  System_Action_o *_9__1; // x22
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A0283E & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, isDecide);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B64A00(&Method_EventFortificationListViewManager___c__DisplayClass95_0__OnClickSelectPush_b__1__, v6);
    byte_4A0283E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager___c__DisplayClass95_0__OnClickSelectPush_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v11, v12);
    }
    if ( v9 )
    {
      CommonUI__CloseConfirmDialog_30348004(v9, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_1B64C5C(Instance, v8);
  }
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall EventFortificationListViewManager___c__DisplayClass95_0___OnClickSelectPush_b__1(
        EventFortificationListViewManager___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1B64C5C(this, method);
  EventFortificationListViewManager__PushRequest(this->fields.__4__this, this->fields.selectItem, v2);
}