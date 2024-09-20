void __fastcall EventFortificationListViewManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *SORT_SAVE_KEY; // x19
  ListViewSort_o *v4; // x20
  struct EventFortificationListViewManager_StaticFields *static_fields; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5EF03 & 1) == 0 )
  {
    sub_1B885B0(&EventFortificationListViewManager_TypeInfo);
    sub_1B885B0(&ListViewSort_TypeInfo);
    sub_1B885B0(&StringLiteral_6211/*"EventServantFatigueList"*/);
    byte_4A5EF03 = 1;
  }
  EventFortificationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_6211/*"EventServantFatigueList"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventFortificationListViewManager_TypeInfo->static_fields,
    StringLiteral_6211/*"EventServantFatigueList"*/,
    v1,
    v2);
  SORT_SAVE_KEY = EventFortificationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v4 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
  ListViewSort___ctor_40759068(v4, SORT_SAVE_KEY, 3, 0, 0LL);
  static_fields = EventFortificationListViewManager_TypeInfo->static_fields;
  static_fields->servantSortStatus = v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->servantSortStatus, (int32_t)v4, v6, v7);
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
  if ( (byte_4A5EEEB & 1) == 0 )
  {
    this = (EventFortificationListViewManager_o *)sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5EEEB = 1;
  }
  if ( !result )
    goto LABEL_11;
  this = (EventFortificationListViewManager_o *)System_String__Equals_61715348(
                                                  result,
                                                  (System_String_o *)StringLiteral_22055/*"ng"*/,
                                                  0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    this = (EventFortificationListViewManager_o *)v4->fields.fortificationConfirmDialog;
    if ( this )
    {
      FortificationConfirmDialogComponent__Close((FortificationConfirmDialogComponent_o *)this, 0LL);
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
    sub_1B8880C(this, result);
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
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Collections_Generic_List_object__o *v5; // x20
  NetworkManager_ResultCallbackFunc_o *v6; // x21
  System_Object_array *Request_object; // x0
  __int64 v8; // x1
  struct UserServantEntity_o *targetInUserServantEntity; // x9
  struct UserServantEntity_o *targetOutUserServantEntity; // x10
  EventFortificationRequest_o *v11; // x21
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x8
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x10
  __int128 v14; // q1
  int32_t fortificationIdx; // w24
  int32_t position; // w25
  __int128 *v17; // x0
  struct EventFortificationWorkItem_o *v18; // x8
  struct EventFortificationDetailEntity_o *v19; // x9
  int32_t v20; // w24
  int32_t v21; // w23
  __int64 v22; // x22
  int32_t v23; // w2
  int32_t v24; // w3
  struct EventFortificationDetailEntity_o *v25; // x10
  __int128 v26; // q1
  int64_t v27; // x23
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  int32_t eventId; // w19
  const MethodInfo *v33; // x3
  __int128 v34[2]; // [xsp+0h] [xbp-A0h] BYREF
  __int128 v35[2]; // [xsp+20h] [xbp-80h] BYREF
  __int128 v36; // [xsp+40h] [xbp-60h]
  __int128 v37; // [xsp+50h] [xbp-50h]

  if ( (byte_4A5EEEA & 1) == 0 )
  {
    sub_1B885B0(&EnterUserSvtInfo_TypeInfo);
    sub_1B885B0(&Method_EventFortificationListViewManager_CallbackFortificationRequest__);
    sub_1B885B0(&Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo);
    sub_1B885B0(&Method_NetworkManager_getRequest_EventFortificationRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4A5EEEA = 1;
  }
  v3 = Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__;
  if ( (*((_BYTE *)Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__);
  v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_EventFortificationListViewManager_CallbackFortificationRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = (System_Object_array *)NetworkManager__getRequest_object_(
                                            v6,
                                            (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_EventFortificationRequest___);
  targetInUserServantEntity = this->fields.targetInUserServantEntity;
  targetOutUserServantEntity = this->fields.targetOutUserServantEntity;
  v11 = (EventFortificationRequest_o *)Request_object;
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
      v14 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.fakeValue;
      fortificationIdx = eventFortificationDetailEntity->fields.fortificationIdx;
      position = targetFortificationWorkItem->fields.position;
      v36 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.currentCryptoKey;
      v37 = v14;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v17 = v35;
      v35[0] = v36;
      v35[1] = v37;
    }
    else
    {
      if ( !targetFortificationWorkItem )
        goto LABEL_32;
      v25 = targetFortificationWorkItem->fields.eventFortificationDetailEntity;
      if ( !v25 )
        goto LABEL_32;
      v26 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.fakeValue;
      fortificationIdx = v25->fields.fortificationIdx;
      position = targetFortificationWorkItem->fields.position;
      v36 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.currentCryptoKey;
      v37 = v26;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v17 = v34;
      v34[0] = v36;
      v34[1] = v37;
    }
    v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
            (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v17,
            0LL);
    v22 = sub_1B887FC(EnterUserSvtInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v22, 0LL);
    *(_DWORD *)(v22 + 16) = fortificationIdx;
    *(_DWORD *)(v22 + 20) = position;
    *(_QWORD *)(v22 + 24) = v27;
    if ( !v5 )
      goto LABEL_32;
  }
  else
  {
    if ( !targetOutUserServantEntity )
      return;
    v18 = this->fields.targetFortificationWorkItem;
    if ( !v18 )
      goto LABEL_32;
    v19 = v18->fields.eventFortificationDetailEntity;
    if ( !v19
      || (v20 = v18->fields.position,
          v21 = v19->fields.fortificationIdx,
          v22 = sub_1B887FC(EnterUserSvtInfo_TypeInfo),
          System_Object___ctor((Il2CppObject *)v22, 0LL),
          *(_DWORD *)(v22 + 16) = v21,
          *(_DWORD *)(v22 + 20) = v20,
          *(_QWORD *)(v22 + 24) = 0LL,
          !v5) )
    {
LABEL_32:
      sub_1B8880C(Request_object, v8);
    }
  }
  items = v5->fields._items;
  v29 = Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__;
  ++v5->fields._version;
  if ( !items )
    goto LABEL_32;
  size = v5->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v22,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    v31 = &items->obj.klass + size;
    v5->fields._size = size + 1;
    v31[4] = (Il2CppClass *)v22;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v31 + 4), v22, v23, v24);
  }
  eventId = this->fields.eventId;
  Request_object = System_Collections_Generic_List_object___ToArray(
                     v5,
                     (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__);
  if ( !v11 )
    goto LABEL_32;
  EventFortificationRequest__beginRequest(v11, eventId, (EnterUserSvtInfo_array *)Request_object, v33);
}


void __fastcall EventFortificationListViewManager__CreateList(
        EventFortificationListViewManager_o *this,
        int32_t eventId,
        FortificationConfirmDialogComponent_o *fortificationConfirmDialog,
        EventFortificationWorkItem_o *targetItem,
        System_Action_bool__UserServantEntity__o *afterCallback,
        const MethodInfo *method)
{
  __int64 v11; // x21
  __int64 sort; // x0
  const MethodInfo *v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  EventFortificationListViewManager_c *v18; // x0
  struct ListViewSort_o *servantSortStatus; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3
  struct EventFortificationWorkItem_o **p_targetFortificationWorkItem; // x24
  struct EventFortificationWorkItem_o *v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3
  struct ListViewSort_o *v34; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeButtonSprite; // x23
  System_Int32_array *v38; // x23
  Il2CppObject *MasterData_object; // x25
  Il2CppObject *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v44; // q0
  int64_t v45; // x23
  struct EventFortificationWorkItem_o *v46; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x24
  UserServantEntity_o *v48; // x27
  int32_t v49; // w28
  EventFortificationListViewItem_o *v50; // x25
  const MethodInfo *v51; // x6
  System_Func_object__bool__o *v52; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  __int64 v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  __int64 v59; // x8
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8
  System_Func_object__bool__o *v61; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x0
  __int64 v63; // x28
  __int64 v64; // x29
  UserServantEntity_o *v65; // x25
  int32_t v66; // w26
  EventFortificationWorkItem_o *v67; // x27
  EventFortificationListViewItem_o *v68; // x21
  const MethodInfo *v69; // x6
  int32_t v70; // w2
  int32_t v71; // w3
  __int64 v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  __int64 v75; // x8
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v77; // x2
  const MethodInfo *v78; // x1
  EventUpValSetupInfo_o *setupInfo; // [xsp+0h] [xbp-D0h]
  struct EventFortificationWorkItem_o **v80; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82[2]; // [xsp+30h] [xbp-A0h] BYREF

  if ( (byte_4A5EEDE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_UserServantEntity___);
    sub_1B885B0(&EventFortificationListViewItem_TypeInfo);
    sub_1B885B0(&EventFortificationListViewManager_TypeInfo);
    sub_1B885B0(&EventUpValSetupInfo_TypeInfo);
    sub_1B885B0(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__0__);
    sub_1B885B0(&Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__1__);
    sub_1B885B0(&EventFortificationListViewManager___c__DisplayClass48_0_TypeInfo);
    sub_1B885B0(&StringLiteral_11772/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_4A5EEDE = 1;
  }
  memset(&v82[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v11 = sub_1B887FC(EventFortificationListViewManager___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_62;
  *(_QWORD *)(v11 + 16) = targetItem;
  v80 = (struct EventFortificationWorkItem_o **)(v11 + 16);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)targetItem, v14, v15);
  v18 = EventFortificationListViewManager_TypeInfo;
  if ( !EventFortificationListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationListViewManager_TypeInfo);
    v18 = EventFortificationListViewManager_TypeInfo;
  }
  servantSortStatus = v18->static_fields->servantSortStatus;
  this->fields.sort = servantSortStatus;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.sort, (int32_t)servantSortStatus, v16, v17);
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
  TitleInfoControl__setBackBtnSprite_37184884((TitleInfoControl_o *)sort, 1, 0, 0, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_62;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)sort, 45, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_62;
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)sort, 0, 0LL);
  this->fields.targetInUserServantEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.targetInUserServantEntity, 0, v20, v21);
  this->fields.targetOutUserServantEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.targetOutUserServantEntity, 0, v22, v23);
  this->fields.eventId = eventId;
  this->fields.fortificationConfirmDialog = fortificationConfirmDialog;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.fortificationConfirmDialog,
    (int32_t)fortificationConfirmDialog,
    v24,
    v25);
  p_targetFortificationWorkItem = &this->fields.targetFortificationWorkItem;
  v27 = *v80;
  this->fields.targetFortificationWorkItem = *v80;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.targetFortificationWorkItem, (int32_t)v27, v28, v29);
  this->fields.selectAfterCallback = afterCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.selectAfterCallback, (int32_t)afterCallback, v30, v31);
  v34 = this->fields.sort;
  this->fields.modeKind = 0;
  if ( !v34 )
    goto LABEL_62;
  iconScaleKind = v34->fields.iconScaleKind;
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v32, v33);
LABEL_19:
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_62;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  sort = (__int64)ListViewSort__GetScaleKindSpriteName((ListViewSort_o *)sort, this->fields.scaleType, 0LL);
  if ( !scaleChangeButtonSprite )
    goto LABEL_62;
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL);
  sort = sub_1B88658(int___TypeInfo, 1LL);
  if ( !sort )
    goto LABEL_62;
  v38 = (System_Int32_array *)sort;
  if ( !*(_DWORD *)(sort + 24) )
LABEL_56:
    sub_1B88814(sort, v13);
  *(_DWORD *)(sort + 32) = eventId;
  setupInfo = (EventUpValSetupInfo_o *)sub_1B887FC(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_38910068(setupInfo, v38, 1, 0, 0, 0LL);
  sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_62;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)sort,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_62;
  v40 = DataManager__GetMasterData_object_(
          (DataManager_o *)sort,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  *(_QWORD *)(v11 + 24) = v40;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)v40, v41, v42);
  if ( !*p_targetFortificationWorkItem )
    goto LABEL_62;
  userServantEntity = (*p_targetFortificationWorkItem)->fields.userServantEntity;
  if ( userServantEntity )
  {
    v44 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v82[1].fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v82[1].fields.fakeValue = v44;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v82, -1LL, 0LL);
    v82[1] = v82[0];
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v81 = v82[1];
  sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v81, 0LL);
  if ( !MasterData_object )
    goto LABEL_62;
  v45 = sort;
  sort = (__int64)UserServantMaster__getOrganizationList((UserServantMaster_o *)MasterData_object, 0LL);
  v46 = *v80;
  if ( !*v80 )
    goto LABEL_62;
  v47 = (System_Collections_Generic_IEnumerable_TSource__o *)sort;
  if ( !v46->fields.isSvtDataSetInMaster )
  {
    eventFortificationDetailEntity = v46->fields.eventFortificationDetailEntity;
    if ( !eventFortificationDetailEntity )
      goto LABEL_62;
    if ( eventFortificationDetailEntity->fields.classId )
    {
      v61 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_UserServantEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v61,
        (Il2CppObject *)v11,
        Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__0__,
        0LL);
      v62 = System_Linq_Enumerable__Where_object_(
              v47,
              (System_Func_TSource__bool__o *)v61,
              (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
      sort = (__int64)System_Linq_Enumerable__ToArray_object_(
                        v62,
                        (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
      v47 = (System_Collections_Generic_IEnumerable_TSource__o *)sort;
    }
LABEL_46:
    if ( !v47 )
      goto LABEL_62;
    goto LABEL_47;
  }
  v48 = v46->fields.userServantEntity;
  v49 = this->fields.eventId;
  v50 = (EventFortificationListViewItem_o *)sub_1B887FC(EventFortificationListViewItem_TypeInfo);
  EventFortificationListViewItem___ctor(v50, v48, v49, v45, setupInfo, v46, v51);
  v52 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v52,
    (Il2CppObject *)v11,
    Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__1__,
    0LL);
  v53 = System_Linq_Enumerable__Where_object_(
          v47,
          (System_Func_TSource__bool__o *)v52,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
  sort = (__int64)System_Linq_Enumerable__ToArray_object_(
                    v53,
                    (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
  if ( !*(_QWORD *)(v11 + 16) )
    goto LABEL_62;
  v47 = (System_Collections_Generic_IEnumerable_TSource__o *)sort;
  sort = EventFortificationWorkItem__get_IsNpc(*(EventFortificationWorkItem_o **)(v11 + 16), v13);
  if ( (sort & 1) == 0 )
    goto LABEL_46;
  sort = (__int64)this->fields.itemList;
  if ( !sort )
    goto LABEL_62;
  v56 = *(_QWORD *)(sort + 16);
  v57 = Method_System_Collections_Generic_List_ListViewItem__Add__;
  ++*(_DWORD *)(sort + 28);
  if ( !v56 )
    goto LABEL_62;
  v58 = *(int *)(sort + 24);
  if ( (unsigned int)v58 >= *(_DWORD *)(v56 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)sort,
      (Il2CppObject *)v50,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
    if ( !v47 )
      goto LABEL_62;
  }
  else
  {
    v59 = v56 + 8 * v58;
    *(_DWORD *)(sort + 24) = v58 + 1;
    *(_QWORD *)(v59 + 32) = v50;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v59 + 32), (int32_t)v50, v54, v55);
    if ( !v47 )
      goto LABEL_62;
  }
LABEL_47:
  if ( (int)v47[1].monitor >= 1 )
  {
    v63 = 0LL;
    v64 = (unsigned int)v47[1].monitor - 1LL;
    while ( 1 )
    {
      v65 = (UserServantEntity_o *)*((_QWORD *)&v47[2].klass + v63);
      v66 = this->fields.eventId;
      v67 = *v80;
      v68 = (EventFortificationListViewItem_o *)sub_1B887FC(EventFortificationListViewItem_TypeInfo);
      EventFortificationListViewItem___ctor(v68, v65, v66, v45, setupInfo, v67, v69);
      sort = (__int64)this->fields.itemList;
      if ( !sort )
        break;
      v72 = *(_QWORD *)(sort + 16);
      v73 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(sort + 28);
      if ( !v72 )
        break;
      v74 = *(int *)(sort + 24);
      if ( (unsigned int)v74 >= *(_DWORD *)(v72 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)sort,
          (Il2CppObject *)v68,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
      }
      else
      {
        v75 = v72 + 8 * v74;
        *(_DWORD *)(sort + 24) = v74 + 1;
        *(_QWORD *)(v75 + 32) = v68;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v75 + 32), (int32_t)v68, v70, v71);
      }
      if ( v64 == v63 )
        goto LABEL_57;
      if ( ++v63 >= (unsigned __int64)LODWORD(v47[1].monitor) )
        goto LABEL_56;
    }
LABEL_62:
    sub_1B8880C(sort, v13);
  }
LABEL_57:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11772/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_62;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0LL);
  EventFortificationListViewManager__SetStatusKind(this, this->fields.modeKind, v77);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  EventFortificationListViewManager__SetFilterButtonImage(this, v78);
}


void __fastcall EventFortificationListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  EventFortificationListViewManager_c *v2; // x0
  ListViewSort_o *servantSortStatus; // x0

  if ( (byte_4A5EEDA & 1) == 0 )
  {
    sub_1B885B0(&EventFortificationListViewManager_TypeInfo);
    byte_4A5EEDA = 1;
  }
  v2 = EventFortificationListViewManager_TypeInfo;
  if ( !EventFortificationListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationListViewManager_TypeInfo);
    v2 = EventFortificationListViewManager_TypeInfo;
  }
  servantSortStatus = v2->static_fields->servantSortStatus;
  if ( !servantSortStatus )
    sub_1B8880C(0LL, v1);
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
    sub_1B8880C(0LL, v3);
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
  EventFortificationListViewManager__SetMode_45598000(this, 2, v6);
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
  EventFortificationListViewManager__SetMode_45598000(this, 2, v6);
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
  EventFortificationListViewManager__SetMode_45598000(this, 2, v6);
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
  EventFortificationListViewManager__SetMode_45598000(this, 2, v5);
}


void __fastcall EventFortificationListViewManager__EndPushRequest(
        EventFortificationListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  EventFortificationListViewManager__ModifyList(this, 0, method);
  EventFortificationListViewManager__SetMode_45598000(this, 2, v4);
}


void __fastcall EventFortificationListViewManager__EndSelectFilterKind(
        EventFortificationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4A5EEF1 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5EEF1 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    EventFortificationListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v7);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall EventFortificationListViewManager__EndSelectSortKind(
        EventFortificationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A5EEF5 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5EEF5 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v6);
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

  if ( (byte_4A5EEEE & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5EEEE = 1;
  }
  EventFortificationListViewManager__RefreshListDisp(this, (const MethodInfo *)isDecide);
  EventFortificationListViewManager__ModifyList(this, 0, v4);
  EventFortificationListViewManager__SetMode_45598000(this, 2, v5);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v7);
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
    sub_1B88554(p_requestCallback, 0, (int32_t)method, v3);
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
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w25
  int32_t v7; // w22
  int64_t v8; // x21
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__c *klass; // x8
  Il2CppClass *parent; // x23
  Il2CppClass *declaringType; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4A5EEEF & 1) == 0 )
  {
    sub_1B885B0(&EventFortificationListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5EEEF = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_16;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    v8 = 0LL;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v7,
                                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
      *(_QWORD *)&v14.fields.currentCryptoKey = declaringType;
      *(_QWORD *)&v14.fields.fakeValue = parent;
      ++v7;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v14, 0LL) == svtId )
        ++v8;
      if ( size == v7 )
        return v8;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_16:
    sub_1B8880C(itemList, *(_QWORD *)&svtId);
  }
  return 0LL;
}


bool __fastcall EventFortificationListViewManager__GetFocusItemIndex(
        EventFortificationListViewManager_o *this,
        int32_t *index,
        System_Collections_Generic_List_ListViewItem__o *list,
        int32_t sum,
        const MethodInfo *method)
{
  int32_t v8; // w22
  __int64 methodPtr_low; // x10

  if ( (byte_4A5EEED & 1) == 0 )
  {
    sub_1B885B0(&EventFortificationListViewItem_TypeInfo);
    this = (EventFortificationListViewManager_o *)sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4A5EEED = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_14:
      sub_1B8880C(this, index);
    v8 = 0;
    while ( 1 )
    {
      this = (EventFortificationListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                      (System_Collections_Generic_List_object__o *)list,
                                                      v8,
                                                      (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        goto LABEL_14;
      methodPtr_low = LOBYTE(EventFortificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventFortificationListViewItem_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != EventFortificationListViewItem_TypeInfo )
      {
        goto LABEL_14;
      }
      if ( EventFortificationListViewItem__get_IsBaseSvt(
             (EventFortificationListViewItem_o *)this,
             (const MethodInfo *)index) )
      {
        break;
      }
      if ( sum == ++v8 )
        return 1;
    }
    *index = v8;
  }
  return 1;
}


EventFortificationListViewItem_o *__fastcall EventFortificationListViewManager__GetItem(
        EventFortificationListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  EventFortificationListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A5EEE5 & 1) == 0 )
  {
    sub_1B885B0(&EventFortificationListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4A5EEE5 = 1;
  }
  result = (EventFortificationListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EventFortificationListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  System_Collections_Generic_List_long__o *v7; // x23
  System_Collections_Generic_List_long__o *v8; // x22
  int64_t v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int64_t itemList; // x0
  int v13; // w25
  int32_t v14; // w24
  __int64 methodPtr_low; // x10
  __int64 v16; // x8
  __int128 v17; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x8
  __int128 v22; // q0
  struct System_Int64_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  System_Collections_Generic_List_long__o *v27; // x0
  int v28; // w21
  System_Int64_array *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_Int64_array *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w1
  System_Int64_array **v36; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+40h] [xbp-80h]

  if ( (byte_4A5EEF9 & 1) == 0 )
  {
    sub_1B885B0(&EventFortificationListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5EEF9 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v13 = *(_DWORD *)(itemList + 24);
  if ( v13 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v14,
                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(EventFortificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(EventFortificationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != EventFortificationListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v16 = *(_QWORD *)(itemList + 120);
      if ( v16 && *(_BYTE *)(itemList + 193) )
      {
        if ( *(_BYTE *)(itemList + 162) )
        {
          v17 = *(_OWORD *)(v16 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v17;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v39 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v39, 0LL);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v19 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v9 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v26 = v19[4];
            v27 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v27,
              v9,
              *(const MethodInfo_34E5868 **)(*(_QWORD *)(v26 + 192) + 112LL));
            goto LABEL_28;
          }
          v21 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v22 = *(_OWORD *)(v16 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v22;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v38 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v38, 0LL);
          if ( !v7 )
            goto LABEL_37;
          v23 = v7->fields._items;
          v24 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v23 )
            goto LABEL_37;
          v25 = v7->fields._size;
          v9 = itemList;
          if ( (unsigned int)v25 >= v23->max_length )
          {
            v26 = v24[4];
            v27 = v7;
            goto LABEL_27;
          }
          v21 = &v23->obj.klass + v25;
          v7->fields._size = v25 + 1;
        }
        v21[4] = (Il2CppClass *)v9;
      }
LABEL_28:
      if ( v13 == ++v14 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1B8880C(itemList, v9);
  v28 = v8->fields._size + v7->fields._size;
  if ( v28 < 1 )
  {
    *choiceList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)choiceList, 0, v10, v11);
    v36 = unchoiceList;
    v35 = 0;
    *unchoiceList = 0LL;
  }
  else
  {
    v29 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v29;
    sub_1B88554((ServantStatusBattleListViewItem_o *)choiceList, (int32_t)v29, v30, v31);
    v32 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
    v35 = (int)v32;
    *unchoiceList = v32;
    v36 = unchoiceList;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)v36, v35, v33, v34);
  return v28 > 0;
}


bool __fastcall EventFortificationListViewManager__GetSwapLockList(
        EventFortificationListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x23
  System_Collections_Generic_List_long__o *v8; // x22
  int64_t v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int64_t itemList; // x0
  int v13; // w25
  int32_t v14; // w24
  __int64 methodPtr_low; // x10
  __int64 v16; // x8
  __int128 v17; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x8
  __int128 v22; // q0
  struct System_Int64_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  System_Collections_Generic_List_long__o *v27; // x0
  int v28; // w21
  System_Int64_array *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_Int64_array *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w1
  System_Int64_array **v36; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+40h] [xbp-80h]

  if ( (byte_4A5EEF8 & 1) == 0 )
  {
    sub_1B885B0(&EventFortificationListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5EEF8 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v13 = *(_DWORD *)(itemList + 24);
  if ( v13 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v14,
                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(EventFortificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(EventFortificationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != EventFortificationListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v16 = *(_QWORD *)(itemList + 120);
      if ( v16 && *(_BYTE *)(itemList + 192) )
      {
        if ( *(_BYTE *)(itemList + 161) )
        {
          v17 = *(_OWORD *)(v16 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v17;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v39 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v39, 0LL);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v19 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v9 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v26 = v19[4];
            v27 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v27,
              v9,
              *(const MethodInfo_34E5868 **)(*(_QWORD *)(v26 + 192) + 112LL));
            goto LABEL_28;
          }
          v21 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v22 = *(_OWORD *)(v16 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v22;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v38 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v38, 0LL);
          if ( !v7 )
            goto LABEL_37;
          v23 = v7->fields._items;
          v24 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v23 )
            goto LABEL_37;
          v25 = v7->fields._size;
          v9 = itemList;
          if ( (unsigned int)v25 >= v23->max_length )
          {
            v26 = v24[4];
            v27 = v7;
            goto LABEL_27;
          }
          v21 = &v23->obj.klass + v25;
          v7->fields._size = v25 + 1;
        }
        v21[4] = (Il2CppClass *)v9;
      }
LABEL_28:
      if ( v13 == ++v14 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1B8880C(itemList, v9);
  v28 = v8->fields._size + v7->fields._size;
  if ( v28 < 1 )
  {
    *lockList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)lockList, 0, v10, v11);
    v36 = unlockList;
    v35 = 0;
    *unlockList = 0LL;
  }
  else
  {
    v29 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v29;
    sub_1B88554((ServantStatusBattleListViewItem_o *)lockList, (int32_t)v29, v30, v31);
    v32 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
    v35 = (int)v32;
    *unlockList = v32;
    v36 = unlockList;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)v36, v35, v33, v34);
  return v28 > 0;
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

  if ( (byte_4A5EEDB & 1) == 0 )
  {
    sub_1B885B0(&EventFortificationListViewManager_TypeInfo);
    byte_4A5EEDB = 1;
  }
  v2 = EventFortificationListViewManager_TypeInfo;
  if ( !EventFortificationListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationListViewManager_TypeInfo);
    v2 = EventFortificationListViewManager_TypeInfo;
  }
  servantSortStatus = v2->static_fields->servantSortStatus;
  if ( !servantSortStatus )
    sub_1B8880C(0LL, v1);
  ListViewSort__InitLoad(servantSortStatus, 0LL);
}


void __fastcall EventFortificationListViewManager__ModifyItem(
        EventFortificationListViewManager_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x19
  _BOOL8 v8; // x0
  __int64 v9; // x1
  __int64 methodPtr_low; // x11
  EventFortificationListViewItem_o *current; // x20
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v13; // q0
  int64_t v14; // x0
  Il2CppObject v15; // q0
  const MethodInfo *v16; // x2
  UnityEngine_Object_o *viewObject; // x21
  __int64 v18; // x1
  struct ListViewObject_o *v19; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_4A5EEE2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&EventFortificationListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EEE2 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  if ( this->fields.itemList )
  {
    UserGameMaster__getSelfUserGame(0LL);
    if ( usrSvtId < 1 )
    {
      Entity = 0LL;
    }
    else
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_37;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_37;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 usrSvtId,
                 (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( Instance )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v22,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      *(_OWORD *)&v23.fields._list = *(_OWORD *)&v22.fields.currentCryptoKey;
      v23.fields._current = (Il2CppObject *)v22.fields.fakeValue;
      while ( 1 )
      {
        v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v23,
               (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v8 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v23,
            (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v23.fields._current
          && (methodPtr_low = LOBYTE(EventFortificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(v23.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
        {
          if ( (EventFortificationListViewItem_c *)v23.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == EventFortificationListViewItem_TypeInfo )
            current = (EventFortificationListViewItem_o *)v23.fields._current;
          else
            current = 0LL;
          if ( Entity )
          {
LABEL_15:
            if ( !current )
              sub_1B8880C(v8, v9);
            userServantEntity = current->fields.userServantEntity;
            if ( !userServantEntity )
              sub_1B8880C(v8, v9);
            v13 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v22.fields.fakeValue = v13;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v21 = v22;
            v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v21, 0LL);
            v15 = Entity[2];
            *(Il2CppObject *)&v20.fields.currentCryptoKey = Entity[1];
            *(Il2CppObject *)&v20.fields.fakeValue = v15;
            if ( v14 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v20, 0LL) )
              EventFortificationListViewItem__ModifyItem(current, (UserServantEntity_o *)Entity, v16);
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
          sub_1B8880C(v8, v9);
LABEL_26:
        viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
        {
          v19 = current->fields.viewObject;
          if ( !v19 )
            sub_1B8880C(0LL, v18);
          ((void (__fastcall *)(struct ListViewObject_o *, EventFortificationListViewItem_o *, Il2CppMethodPointer))v19->klass->vtable._5_SetItem.method)(
            v19,
            current,
            v19->klass->vtable._6_SetItem.methodPtr);
        }
      }
    }
LABEL_37:
    sub_1B8880C(Instance, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager__ModifyList(
        EventFortificationListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  int64_t sort; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 v7; // x25
  int64_t v8; // x20
  int size; // w28
  unsigned int v10; // w26
  __int64 v11; // x8
  __int128 v12; // q0
  int64_t v13; // x22
  int32_t v14; // w23
  int64_t v15; // x24
  __int64 methodPtr_low; // x10
  __int64 v17; // x8
  __int128 v18; // q0
  __int64 v19; // x8
  __int128 v20; // q0
  int64_t v21; // x0
  const MethodInfo *v22; // x4
  bool isIconSizeChangea; // [xsp+Ch] [xbp-E4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+70h] [xbp-80h]

  if ( (byte_4A5EEE4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&EventFortificationListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EEE4 = 1;
  }
  sort = (int64_t)this->fields.sort;
  if ( !sort )
    goto LABEL_33;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  sort = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_33;
  sort = (int64_t)DataManager__GetMasterData_object_(
                    (DataManager_o *)sort,
                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !sort )
    goto LABEL_33;
  sort = (int64_t)UserServantMaster__getOrganizationList((UserServantMaster_o *)sort, 0LL);
  if ( !sort )
    goto LABEL_33;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  v7 = *(_QWORD *)(sort + 24);
  v8 = sort;
  if ( (int)v7 >= 1 )
  {
    size = itemList->fields._size;
    v10 = 0;
    isIconSizeChangea = isIconSizeChange;
    while ( 1 )
    {
      v11 = *(_QWORD *)(v8 + 8LL * (int)v10 + 32);
      if ( !v11 )
        break;
      v12 = *(_OWORD *)(v11 + 32);
      *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(v11 + 16);
      *(_OWORD *)&v27.fields.fakeValue = v12;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v26 = v27;
      sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v26, 0LL);
      if ( size >= 1 )
      {
        v13 = sort;
        v14 = 0;
        while ( 1 )
        {
          sort = (int64_t)this->fields.itemList;
          if ( !sort )
            goto LABEL_33;
          sort = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)sort,
                            v14,
                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !sort )
            goto LABEL_33;
          v15 = sort;
          methodPtr_low = LOBYTE(EventFortificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)sort + 304LL) < (unsigned int)methodPtr_low
            || *(EventFortificationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)sort + 200LL) + 8 * methodPtr_low - 8) != EventFortificationListViewItem_TypeInfo )
          {
            goto LABEL_33;
          }
          v17 = *(_QWORD *)(sort + 120);
          if ( v17 )
          {
            v18 = *(_OWORD *)(v17 + 32);
            *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(v17 + 16);
            *(_OWORD *)&v27.fields.fakeValue = v18;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v25 = v27;
            sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v25, 0LL);
            if ( sort == v13 )
              break;
          }
          if ( size == ++v14 )
            goto LABEL_29;
        }
        v19 = *(_QWORD *)(v15 + 120);
        if ( !v19 )
          break;
        v20 = *(_OWORD *)(v19 + 32);
        *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(v19 + 16);
        *(_OWORD *)&v27.fields.fakeValue = v20;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v24 = v27;
        v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v24, 0LL);
        EventFortificationListViewManager__ModifyLockItem(this, v21, 1, isIconSizeChangea, v22);
      }
LABEL_29:
      if ( ++v10 == (_DWORD)v7 )
        return;
      if ( v10 >= *(_DWORD *)(v8 + 24) )
        sub_1B88814(sort, isIconSizeChange);
    }
LABEL_33:
    sub_1B8880C(sort, isIconSizeChange);
  }
}


void __fastcall EventFortificationListViewManager__ModifyLockItem(
        EventFortificationListViewManager_o *this,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x21
  bool v11; // w20
  int64_t v12; // x0
  const MethodInfo *v13; // x1
  __int64 methodPtr_low; // x11
  Il2CppObject *current; // x22
  _OWORD *monitor; // x8
  __int128 v17; // q0
  int64_t v18; // x0
  Il2CppObject v19; // q0
  int64_t v20; // x24
  int32_t v21; // w2
  int32_t v22; // w3
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x1
  UnityEngine_Object_o *v26; // x23
  __int64 v27; // x1
  void *v28; // x0
  __int64 v29; // x1
  ListViewObject_o *v30; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+50h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+70h] [xbp-80h] BYREF

  if ( (byte_4A5EEE3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&EventFortificationListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EEE3 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  if ( this->fields.itemList )
  {
    UserGameMaster__getSelfUserGame(0LL);
    if ( usrSvtId < 1 )
    {
      Entity = 0LL;
    }
    else
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_45;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_45;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 usrSvtId,
                 (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( Instance )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v34,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v11 = !isIconSizeChange && isInit;
      *(_OWORD *)&v35.fields._list = *(_OWORD *)&v34.fields.currentCryptoKey;
      v35.fields._current = (Il2CppObject *)v34.fields.fakeValue;
      while ( 1 )
      {
        v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v35,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v12 & 1) == 0 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v35,
            (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v35.fields._current
          && (methodPtr_low = LOBYTE(EventFortificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(v35.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
        {
          if ( (EventFortificationListViewItem_c *)v35.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == EventFortificationListViewItem_TypeInfo )
            current = v35.fields._current;
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
          sub_1B8880C(v12, v13);
        monitor = current[7].monitor;
        if ( !monitor )
          sub_1B8880C(v12, v13);
        v17 = monitor[2];
        *(_OWORD *)&v34.fields.currentCryptoKey = monitor[1];
        *(_OWORD *)&v34.fields.fakeValue = v17;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v33 = v34;
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v33, 0LL);
        v19 = Entity[2];
        v20 = v18;
        *(Il2CppObject *)&v32.fields.currentCryptoKey = Entity[1];
        *(Il2CppObject *)&v32.fields.fakeValue = v19;
        v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v32, 0LL);
        if ( v20 == v12 )
        {
          current[7].monitor = Entity;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&current[7].monitor, (int32_t)Entity, v21, v22);
          LODWORD(current[18].klass) = -1;
          v12 = EventFortificationListViewItem__CheckFortificationAppointment(
                  (EventFortificationListViewItem_o *)current,
                  v23);
          BYTE4(current[17].klass) = v12 & 1;
        }
LABEL_26:
        if ( v11 )
        {
          if ( !current )
            sub_1B8880C(v12, v13);
          EventFortificationListViewItem__ModifyLockItem((EventFortificationListViewItem_o *)current, v13);
          EventFortificationListViewItem__ModifyChoiceItem((EventFortificationListViewItem_o *)current, v24);
          EventFortificationListViewItem__ModifyPushItem((EventFortificationListViewItem_o *)current, v25);
        }
        else if ( !current )
        {
          sub_1B8880C(v12, v13);
        }
        v26 = (UnityEngine_Object_o *)current[6].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v26, 0LL, 0LL) )
        {
          v28 = current[6].monitor;
          if ( !v28 )
            sub_1B8880C(0LL, v27);
          (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v28 + 392LL))(
            v28,
            current,
            *(_QWORD *)(*(_QWORD *)v28 + 400LL));
          if ( isIconSizeChange )
          {
            v30 = (ListViewObject_o *)current[6].monitor;
            if ( !v30 )
              sub_1B8880C(0LL, v29);
            ListViewObject__SetItemSeed(v30, (ListViewItem_o *)current, this->fields.seed, 0LL);
          }
        }
      }
    }
LABEL_45:
    sub_1B8880C(Instance, v8);
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

  if ( (byte_4A5EEFF & 1) == 0 )
  {
    sub_1B885B0(&Method_EventFortificationListViewManager_OnClickBack__);
    byte_4A5EEFF = 1;
  }
  v3 = Method_EventFortificationListViewManager_OnClickBack__;
  if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_EventFortificationListViewManager_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
  selectAfterCallback = this->fields.selectAfterCallback;
  if ( selectAfterCallback )
  {
    this->fields.selectAfterCallback = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.selectAfterCallback, 0, v5, v6);
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

  if ( (byte_4A5EEF2 & 1) == 0 )
  {
    sub_1B885B0(&Method_EventFortificationListViewManager_OnClickBonusFilterKind__);
    byte_4A5EEF2 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EventFortificationListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_EventFortificationListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B8880C(0LL, v5);
    ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, 0, 0LL, 0LL);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall EventFortificationListViewManager__OnClickChoiceTab(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  EventFortificationListViewManager_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  if ( (byte_4A5EEFC & 1) == 0 )
  {
    sub_1B885B0(&Method_EventFortificationListViewManager_EndClickTabChoice__);
    sub_1B885B0(&Method_EventFortificationListViewManager_OnClickChoiceTab__);
    sub_1B885B0(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
    byte_4A5EEFC = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    v3 = Method_EventFortificationListViewManager_OnClickChoiceTab__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickChoiceTab__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_EventFortificationListViewManager_OnClickChoiceTab__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v6 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_1B887FC(EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
      EventFortificationListViewManager_RequestCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager_EndClickTabChoice__,
        v7);
      EventFortificationListViewManager__StatusRequest(this, v6, v8);
    }
    else
    {
      EventFortificationListViewManager__SetStatusKind(this, 2, v5);
      EventFortificationListViewManager__RefreshListDisp(this, v9);
      EventFortificationListViewManager__ModifyList(this, 0, v10);
      EventFortificationListViewManager__SetMode_45598000(this, 2, v11);
    }
  }
}


void __fastcall EventFortificationListViewManager__OnClickCollectLock(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  EventFortificationListViewManager_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  if ( (byte_4A5EEFB & 1) == 0 )
  {
    sub_1B885B0(&Method_EventFortificationListViewManager_EndClickTabLock__);
    sub_1B885B0(&Method_EventFortificationListViewManager_OnClickCollectLock__);
    sub_1B885B0(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
    byte_4A5EEFB = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    v3 = Method_EventFortificationListViewManager_OnClickCollectLock__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickCollectLock__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_EventFortificationListViewManager_OnClickCollectLock__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v6 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_1B887FC(EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
      EventFortificationListViewManager_RequestCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager_EndClickTabLock__,
        v7);
      EventFortificationListViewManager__StatusRequest(this, v6, v8);
    }
    else
    {
      EventFortificationListViewManager__SetStatusKind(this, 1, v5);
      EventFortificationListViewManager__RefreshListDisp(this, v9);
      EventFortificationListViewManager__ModifyList(this, 0, v10);
      EventFortificationListViewManager__SetMode_45598000(this, 2, v11);
    }
  }
}


void __fastcall EventFortificationListViewManager__OnClickFilterKind(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v7; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4A5EEF0 & 1) == 0 )
  {
    sub_1B885B0(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_EventFortificationListViewManager_EndSelectFilterKind__);
    sub_1B885B0(&Method_EventFortificationListViewManager_OnClickFilterKind__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5EEF0 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EventFortificationListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_EventFortificationListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1B887FC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_EventFortificationListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v7 )
      sub_1B8880C(v9, v10);
    CommonUI__OpenServantFilterSelectMenu(v7, 1, sort, v8, 0, 0LL);
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
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  EventFortificationListViewManager_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_4A5EEFA & 1) == 0 )
  {
    sub_1B885B0(&Method_EventFortificationListViewManager_EndClickTabStatus__);
    sub_1B885B0(&Method_EventFortificationListViewManager_OnClickNormalStatus__);
    sub_1B885B0(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
    byte_4A5EEFA = 1;
  }
  if ( this->fields.modeKind )
  {
    v3 = Method_EventFortificationListViewManager_OnClickNormalStatus__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickNormalStatus__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_EventFortificationListViewManager_OnClickNormalStatus__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    v5 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_1B887FC(EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
    EventFortificationListViewManager_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_EventFortificationListViewManager_EndClickTabStatus__,
      v6);
    EventFortificationListViewManager__StatusRequest(this, v5, v7);
  }
}


void __fastcall EventFortificationListViewManager__OnClickPushTab(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  EventFortificationListViewManager_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  if ( (byte_4A5EEFD & 1) == 0 )
  {
    sub_1B885B0(&Method_EventFortificationListViewManager_EndClickTabPush__);
    sub_1B885B0(&Method_EventFortificationListViewManager_OnClickPushTab__);
    sub_1B885B0(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
    byte_4A5EEFD = 1;
  }
  if ( this->fields.modeKind != 3 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v3 = Method_EventFortificationListViewManager_OnClickPushTab__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickPushTab__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_EventFortificationListViewManager_OnClickPushTab__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v6 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_1B887FC(EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
      EventFortificationListViewManager_RequestCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager_EndClickTabPush__,
        v7);
      EventFortificationListViewManager__StatusRequest(this, v6, v8);
    }
    else
    {
      EventFortificationListViewManager__SetStatusKind(this, 3, v5);
      EventFortificationListViewManager__RefreshListDisp(this, v9);
      EventFortificationListViewManager__ModifyList(this, 0, v10);
      EventFortificationListViewManager__SetMode_45598000(this, 2, v11);
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

  if ( (byte_4A5EF00 & 1) == 0 )
  {
    sub_1B885B0(&Method_EventFortificationListViewManager_OnClickScaleChange__);
    byte_4A5EF00 = 1;
  }
  v3 = Method_EventFortificationListViewManager_OnClickScaleChange__;
  if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_EventFortificationListViewManager_OnClickScaleChange__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
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
    sub_1B88554((ServantStatusBattleListViewItem_o *)p_seed, (int32_t)smallSizeSeed, v6, v7);
  }
  sort = this->fields.sort;
  if ( !sort
    || (v14 = this->fields.scaleType,
        sort->fields.iconScaleKind = v14,
        scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, v14, 0LL),
        !scaleChangeButtonSprite) )
  {
    sub_1B8880C(sort, v5);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL);
  EventFortificationListViewManager__ModifyList(this, 1, v16);
  EventFortificationListViewManager__SetMode_45598000(this, 2, v17);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall EventFortificationListViewManager__OnClickSelectObject(
        EventFortificationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ListViewObject_o *v3; // x20
  int64_t fortificationConfirmDialog; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 methodPtr_low; // x10
  ListViewObject_o **p_targetInUserServantEntity; // x23
  EventFortificationListViewItem_o *Item; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  ListViewObject_o **p_targetOutUserServantEntity; // x24
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_Generic_List_object__o *v16; // x22
  System_Collections_Generic_List_int__o *v17; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v22; // q1
  struct UserServantEntity_o *v23; // x8
  __int128 v24; // q0
  int64_t v25; // x25
  int32_t v26; // w2
  int32_t v27; // w3
  struct EventFortificationWorkItem_o *v28; // x8
  ListViewObject_o *v29; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  Il2CppClass **v35; // x0
  ListViewObject_o *v36; // x1
  int32_t v37; // w2
  int32_t v38; // w3
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  const MethodInfo *v43; // x2
  struct UserServantEntity_o *v44; // x8
  __int128 v45; // q0
  struct UserServantEntity_o *v46; // x8
  __int128 v47; // q0
  int32_t v48; // w2
  int32_t v49; // w3
  struct UserServantEntity_o *v50; // x1
  int32_t v51; // w2
  int32_t v52; // w3
  struct EventFortificationWorkItem_o *v53; // x8
  ListViewObject_o *v54; // x1
  int32_t v55; // w2
  int32_t v56; // w3
  struct System_Object_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  Il2CppClass **v60; // x0
  struct System_Int32_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  FortificationConfirmDialogComponent_o *v64; // x23
  System_Object_array *v65; // x22
  System_Int32_array *v66; // x21
  const MethodInfo *v67; // x1
  System_String_o *TargetTeamName; // x24
  const MethodInfo *v69; // x1
  struct EventFortificationWorkItem_o *v70; // x8
  struct EventFortificationEntity_o *eventFortificationEntity; // x8
  System_String_o *v72; // x20
  int32_t v73; // w25
  struct System_Int32_array *v74; // x8
  _QWORD *v75; // x9
  __int64 v76; // x10
  FortificationConfirmDialogComponent_o *v77; // x23
  System_Object_array *v78; // x22
  System_Int32_array *v79; // x21
  const MethodInfo *v80; // x1
  System_String_o *v81; // x24
  const MethodInfo *v82; // x1
  struct EventFortificationWorkItem_o *v83; // x8
  struct EventFortificationEntity_o *v84; // x8
  System_String_o *v85; // x20
  int32_t v86; // w25
  System_Action_o *v87; // x26
  System_Action_o *v88; // x26
  int32_t v89; // w1
  int32_t v90; // w2
  int32_t v91; // w3
  struct System_Int32_array *v92; // x8
  _QWORD *v93; // x9
  __int64 v94; // x10
  struct System_Object_array *v95; // x8
  _QWORD *v96; // x9
  __int64 v97; // x10
  Il2CppClass **v98; // x0
  const MethodInfo *v99; // x2
  struct System_Int32_array *v100; // x8
  _QWORD *v101; // x9
  __int64 v102; // x10
  const MethodInfo *v103; // x1
  const MethodInfo *v104; // x1
  struct EventFortificationWorkItem_o *v105; // x8
  struct EventFortificationEntity_o *v106; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v107; // [xsp+10h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v108; // [xsp+30h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v109; // [xsp+50h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v110; // [xsp+70h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v111; // [xsp+90h] [xbp-70h]

  v3 = obj;
  if ( (byte_4A5EEE9 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__);
    sub_1B885B0(&Method_EventFortificationListViewManager_OnClickSelectObject__);
    sub_1B885B0(&EventFortificationListViewObject_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EEE9 = 1;
  }
  fortificationConfirmDialog = (int64_t)this->fields.fortificationConfirmDialog;
  if ( !fortificationConfirmDialog )
    goto LABEL_88;
  fortificationConfirmDialog = (int64_t)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)fortificationConfirmDialog,
                                          0LL);
  if ( !fortificationConfirmDialog )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fortificationConfirmDialog, 1, 0LL);
  v6 = Method_EventFortificationListViewManager_OnClickSelectObject__;
  if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickSelectObject__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B885C8(Method_EventFortificationListViewManager_OnClickSelectObject__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B88594(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  if ( !v3 )
    goto LABEL_88;
  methodPtr_low = LOBYTE(EventFortificationListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v3->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    goto LABEL_88;
  if ( (EventFortificationListViewObject_c *)v3->klass->_2.typeHierarchy[methodPtr_low - 1] != EventFortificationListViewObject_TypeInfo )
    goto LABEL_88;
  p_targetInUserServantEntity = (ListViewObject_o **)&this->fields.targetInUserServantEntity;
  Item = EventFortificationListViewObject__GetItem((EventFortificationListViewObject_o *)v3, (const MethodInfo *)obj);
  this->fields.targetInUserServantEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.targetInUserServantEntity, 0, v11, v12);
  p_targetOutUserServantEntity = (ListViewObject_o **)&this->fields.targetOutUserServantEntity;
  this->fields.targetOutUserServantEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.targetOutUserServantEntity, 0, v14, v15);
  fortificationConfirmDialog = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fortificationConfirmDialog )
    goto LABEL_88;
  DataManager__GetMasterData_object_(
    (DataManager_o *)fortificationConfirmDialog,
    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  fortificationConfirmDialog = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fortificationConfirmDialog )
    goto LABEL_88;
  DataManager__GetMasterData_object_(
    (DataManager_o *)fortificationConfirmDialog,
    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  v16 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  v17 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
  if ( !targetFortificationWorkItem )
    goto LABEL_88;
  userServantEntity = targetFortificationWorkItem->fields.userServantEntity;
  if ( !userServantEntity )
  {
    if ( Item )
    {
      v36 = (ListViewObject_o *)Item->fields.userServantEntity;
      *p_targetInUserServantEntity = v36;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.targetInUserServantEntity, (int32_t)v36, v18, v19);
      if ( v16 )
      {
        obj = *p_targetInUserServantEntity;
        items = v16->fields._items;
        v40 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
        ++v16->fields._version;
        if ( items )
        {
          size = v16->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v16,
              (Il2CppObject *)obj,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
          }
          else
          {
            v42 = &items->obj.klass + size;
            v16->fields._size = size + 1;
            v42[4] = (Il2CppClass *)obj;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v42 + 4), (int32_t)obj, v37, v38);
          }
          fortificationConfirmDialog = EventFortificationDataLogic__CalculationGetPoint(
                                         Item->fields.userServantEntity,
                                         Item->fields.eventId,
                                         v43);
          if ( v17 )
          {
            v61 = v17->fields._items;
            v62 = Method_System_Collections_Generic_List_int__Add__;
            ++v17->fields._version;
            if ( v61 )
            {
              v63 = v17->fields._size;
              if ( (unsigned int)v63 >= v61->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v17,
                  fortificationConfirmDialog,
                  *(const MethodInfo_34E0810 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
              }
              else
              {
                v17->fields._size = v63 + 1;
                v61->m_Items[v63 + 1] = fortificationConfirmDialog;
              }
              v64 = this->fields.fortificationConfirmDialog;
              v65 = System_Collections_Generic_List_object___ToArray(
                      v16,
                      (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
              v66 = System_Collections_Generic_List_int___ToArray(
                      v17,
                      (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
              TargetTeamName = EventFortificationListViewItem__get_TargetTeamName(Item, v67);
              fortificationConfirmDialog = (int64_t)EventFortificationListViewItem__get_TargetDetailName(Item, v69);
              v70 = Item->fields.targetFortificationWorkItem;
              if ( v70 )
              {
                eventFortificationEntity = v70->fields.eventFortificationEntity;
                v72 = (System_String_o *)fortificationConfirmDialog;
                v73 = eventFortificationEntity ? eventFortificationEntity->fields.workType : 0;
                v87 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                System_Action___ctor(
                  v87,
                  (Il2CppObject *)this,
                  (intptr_t)Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__,
                  0LL);
                if ( v64 )
                {
                  FortificationConfirmDialogComponent__Open(
                    v64,
                    0,
                    (UserServantEntity_array *)v65,
                    v66,
                    TargetTeamName,
                    v72,
                    v73,
                    v87,
                    0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_88;
  }
  v22 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v111.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v111.fields.fakeValue = v22;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v110 = v111;
  fortificationConfirmDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v110, 0LL);
  if ( !Item )
    goto LABEL_88;
  v23 = Item->fields.userServantEntity;
  if ( !v23 )
    goto LABEL_88;
  v24 = *(_OWORD *)&v23->fields.id.fields.fakeValue;
  v25 = fortificationConfirmDialog;
  *(_OWORD *)&v109.fields.currentCryptoKey = *(_OWORD *)&v23->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v109.fields.fakeValue = v24;
  fortificationConfirmDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v109, 0LL);
  v28 = this->fields.targetFortificationWorkItem;
  if ( v25 != fortificationConfirmDialog )
  {
    if ( v28 )
    {
      v44 = v28->fields.userServantEntity;
      if ( !v44 )
        return;
      v45 = *(_OWORD *)&v44->fields.id.fields.fakeValue;
      *(_OWORD *)&v111.fields.currentCryptoKey = *(_OWORD *)&v44->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v111.fields.fakeValue = v45;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v108 = v111;
      fortificationConfirmDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v108, 0LL);
      v46 = Item->fields.userServantEntity;
      if ( v46 )
      {
        v47 = *(_OWORD *)&v46->fields.id.fields.fakeValue;
        *(_OWORD *)&v107.fields.currentCryptoKey = *(_OWORD *)&v46->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v107.fields.fakeValue = v47;
        if ( fortificationConfirmDialog == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                             &v107,
                                             0LL) )
          return;
        v50 = Item->fields.userServantEntity;
        this->fields.targetInUserServantEntity = v50;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this->fields.targetInUserServantEntity,
          (int32_t)v50,
          v48,
          v49);
        v53 = this->fields.targetFortificationWorkItem;
        if ( v53 )
        {
          v54 = (ListViewObject_o *)v53->fields.userServantEntity;
          *p_targetOutUserServantEntity = v54;
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&this->fields.targetOutUserServantEntity,
            (int32_t)v54,
            v51,
            v52);
          if ( v16 )
          {
            obj = *p_targetOutUserServantEntity;
            v57 = v16->fields._items;
            v58 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v16->fields._version;
            if ( v57 )
            {
              v59 = v16->fields._size;
              if ( (unsigned int)v59 >= v57->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v16,
                  (Il2CppObject *)obj,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
              }
              else
              {
                v60 = &v57->obj.klass + v59;
                v16->fields._size = v59 + 1;
                v60[4] = (Il2CppClass *)obj;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v60 + 4), (int32_t)obj, v55, v56);
              }
              fortificationConfirmDialog = (int64_t)this->fields.targetFortificationWorkItem;
              if ( fortificationConfirmDialog )
              {
                fortificationConfirmDialog = EventFortificationWorkItem__get_AddPoint(
                                               (EventFortificationWorkItem_o *)fortificationConfirmDialog,
                                               (const MethodInfo *)obj);
                if ( v17 )
                {
                  v92 = v17->fields._items;
                  v93 = Method_System_Collections_Generic_List_int__Add__;
                  ++v17->fields._version;
                  if ( v92 )
                  {
                    v94 = v17->fields._size;
                    if ( (unsigned int)v94 >= v92->max_length )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        v17,
                        fortificationConfirmDialog,
                        *(const MethodInfo_34E0810 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v17->fields._size = v94 + 1;
                      v92->m_Items[v94 + 1] = fortificationConfirmDialog;
                    }
                    obj = *p_targetInUserServantEntity;
                    v95 = v16->fields._items;
                    v96 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                    ++v16->fields._version;
                    if ( v95 )
                    {
                      v97 = v16->fields._size;
                      if ( (unsigned int)v97 >= v95->max_length )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v16,
                          (Il2CppObject *)obj,
                          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v98 = &v95->obj.klass + v97;
                        v16->fields._size = v97 + 1;
                        v98[4] = (Il2CppClass *)obj;
                        sub_1B88554((ServantStatusBattleListViewItem_o *)(v98 + 4), (int32_t)obj, v90, v91);
                      }
                      fortificationConfirmDialog = EventFortificationDataLogic__CalculationGetPoint(
                                                     Item->fields.userServantEntity,
                                                     Item->fields.eventId,
                                                     v99);
                      v100 = v17->fields._items;
                      v101 = Method_System_Collections_Generic_List_int__Add__;
                      ++v17->fields._version;
                      if ( v100 )
                      {
                        v102 = v17->fields._size;
                        if ( (unsigned int)v102 >= v100->max_length )
                        {
                          System_Collections_Generic_List_int___AddWithResize(
                            v17,
                            fortificationConfirmDialog,
                            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v17->fields._size = v102 + 1;
                          v100->m_Items[v102 + 1] = fortificationConfirmDialog;
                        }
                        v77 = this->fields.fortificationConfirmDialog;
                        v78 = System_Collections_Generic_List_object___ToArray(
                                v16,
                                (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
                        v79 = System_Collections_Generic_List_int___ToArray(
                                v17,
                                (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
                        v81 = EventFortificationListViewItem__get_TargetTeamName(Item, v103);
                        fortificationConfirmDialog = (int64_t)EventFortificationListViewItem__get_TargetDetailName(
                                                                Item,
                                                                v104);
                        v105 = Item->fields.targetFortificationWorkItem;
                        if ( v105 )
                        {
                          v106 = v105->fields.eventFortificationEntity;
                          v85 = (System_String_o *)fortificationConfirmDialog;
                          v86 = v106 ? v106->fields.workType : 0;
                          v88 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                          System_Action___ctor(
                            v88,
                            (Il2CppObject *)this,
                            (intptr_t)Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__,
                            0LL);
                          if ( v77 )
                          {
                            v89 = 2;
                            goto LABEL_86;
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
LABEL_88:
    sub_1B8880C(fortificationConfirmDialog, obj);
  }
  if ( !v28 )
    goto LABEL_88;
  v29 = (ListViewObject_o *)v28->fields.userServantEntity;
  *p_targetOutUserServantEntity = v29;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.targetOutUserServantEntity, (int32_t)v29, v26, v27);
  if ( !v16 )
    goto LABEL_88;
  obj = *p_targetOutUserServantEntity;
  v32 = v16->fields._items;
  v33 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
  ++v16->fields._version;
  if ( !v32 )
    goto LABEL_88;
  v34 = v16->fields._size;
  if ( (unsigned int)v34 >= v32->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v16,
      (Il2CppObject *)obj,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
  }
  else
  {
    v35 = &v32->obj.klass + v34;
    v16->fields._size = v34 + 1;
    v35[4] = (Il2CppClass *)obj;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)obj, v30, v31);
  }
  fortificationConfirmDialog = (int64_t)this->fields.targetFortificationWorkItem;
  if ( !fortificationConfirmDialog )
    goto LABEL_88;
  fortificationConfirmDialog = EventFortificationWorkItem__get_AddPoint(
                                 (EventFortificationWorkItem_o *)fortificationConfirmDialog,
                                 (const MethodInfo *)obj);
  if ( !v17 )
    goto LABEL_88;
  v74 = v17->fields._items;
  v75 = Method_System_Collections_Generic_List_int__Add__;
  ++v17->fields._version;
  if ( !v74 )
    goto LABEL_88;
  v76 = v17->fields._size;
  if ( (unsigned int)v76 >= v74->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v17,
      fortificationConfirmDialog,
      *(const MethodInfo_34E0810 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
  }
  else
  {
    v17->fields._size = v76 + 1;
    v74->m_Items[v76 + 1] = fortificationConfirmDialog;
  }
  v77 = this->fields.fortificationConfirmDialog;
  v78 = System_Collections_Generic_List_object___ToArray(
          v16,
          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
  v79 = System_Collections_Generic_List_int___ToArray(
          v17,
          (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
  v81 = EventFortificationListViewItem__get_TargetTeamName(Item, v80);
  fortificationConfirmDialog = (int64_t)EventFortificationListViewItem__get_TargetDetailName(Item, v82);
  v83 = Item->fields.targetFortificationWorkItem;
  if ( !v83 )
    goto LABEL_88;
  v84 = v83->fields.eventFortificationEntity;
  v85 = (System_String_o *)fortificationConfirmDialog;
  v86 = v84 ? v84->fields.workType : 0;
  v88 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v88,
    (Il2CppObject *)this,
    (intptr_t)Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__,
    0LL);
  if ( !v77 )
    goto LABEL_88;
  v89 = 1;
LABEL_86:
  FortificationConfirmDialogComponent__Open(v77, v89, (UserServantEntity_array *)v78, v79, v81, v85, v86, v88, 0LL);
}


void __fastcall EventFortificationListViewManager__OnClickSelectPush(
        EventFortificationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x19
  DataManager_o *SelfUserGame; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 methodPtr_low; // x9
  EventFortificationListViewItem_o *Item; // x0
  EventFortificationListViewItem_o **v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  int64_t context; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v17; // q1
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  const MethodInfo *v20; // x2
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  Il2CppObject *Entity; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v27; // x25
  System_String_o *v28; // x21
  System_String_o *v29; // x22
  System_Object_array *v30; // x23
  int32_t Rarity; // w26
  int32_t v32; // w2
  int32_t v33; // w3
  Il2CppObject *v34; // x26
  int32_t v35; // w2
  int32_t v36; // w3
  Il2CppObject *v37; // x26
  int32_t v38; // w0
  int32_t v39; // w2
  int32_t v40; // w3
  Il2CppObject *v41; // x24
  int32_t v42; // w0
  int32_t v43; // w2
  int32_t v44; // w3
  Il2CppObject *v45; // x24
  int32_t v46; // w2
  int32_t v47; // w3
  Il2CppObject *v48; // x24
  EventFortificationListViewItem_o *v49; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v50; // x9
  ServantEntity_o *servantEntity; // x20
  int32_t v52; // w2
  int32_t v53; // w3
  Il2CppObject *v54; // x20
  System_String_o *v55; // x20
  System_String_o *v56; // x22
  System_String_o *v57; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v59; // x25
  __int64 v60; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+40h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  if ( (byte_4A5EF01 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_EventFortificationListViewManager_OnClickSelectPush__);
    sub_1B885B0(&EventFortificationListViewObject_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Rarity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_EventFortificationListViewManager___c__DisplayClass96_0__OnClickSelectPush_b__0__);
    sub_1B885B0(&EventFortificationListViewManager___c__DisplayClass96_0_TypeInfo);
    sub_1B885B0(&StringLiteral_11894/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_11892/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_11893/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_11895/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4A5EF01 = 1;
  }
  v5 = sub_1B887FC(EventFortificationListViewManager___c__DisplayClass96_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_62;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  if ( !obj )
    goto LABEL_62;
  methodPtr_low = LOBYTE(EventFortificationListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventFortificationListViewObject_TypeInfo )
  {
    sub_1B88ACC(obj);
    goto LABEL_64;
  }
  Item = EventFortificationListViewObject__GetItem(
           (EventFortificationListViewObject_o *)obj,
           (const MethodInfo *)EventFortificationListViewObject_TypeInfo);
  *(_QWORD *)(v5 + 24) = Item;
  v12 = (EventFortificationListViewItem_o **)(v5 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)Item, v13, v14);
  SelfUserGame = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_62;
  context = (int64_t)SelfUserGame->fields.context;
  if ( context )
  {
    if ( !*v12 )
      goto LABEL_62;
    userServantEntity = (*v12)->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_62;
    v17 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v62.fields.fakeValue = v17;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v61 = v62;
    if ( context == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v61, 0LL) )
      goto LABEL_14;
    v21 = Method_EventFortificationListViewManager_OnClickSelectPush__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickSelectPush__ + 83) & 2) != 0 )
      v21 = (_QWORD *)sub_1B885C8(Method_EventFortificationListViewManager_OnClickSelectPush__);
    v22 = (System_Reflection_MethodBase_o *)sub_1B88594(v21, v21[4]);
    OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0LL);
    SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_62;
    SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                      SelfUserGame,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !SelfUserGame )
      goto LABEL_62;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
               context,
               (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_62;
    SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                      SelfUserGame,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_62;
    v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame;
    klass = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v63.fields.currentCryptoKey = klass;
    *(_QWORD *)&v63.fields.fakeValue = monitor;
    SelfUserGame = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v63, 0LL);
    if ( !v24 )
      goto LABEL_62;
    v27 = DataMasterBase_object__object__int___GetEntity(
            v24,
            (int32_t)SelfUserGame,
            (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_11895/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_11894/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    v30 = (System_Object_array *)sub_1B88658(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    SelfUserGame = (DataManager_o *)Rarity__getRarityType(Rarity, 0LL);
    if ( !v30 )
LABEL_62:
      sub_1B8880C(SelfUserGame, v7);
    v34 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = (DataManager_o *)sub_1B886EC(SelfUserGame, v30->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( !v30->max_length )
      goto LABEL_64;
    v30->m_Items[0] = v34;
    sub_1B88554((ServantStatusBattleListViewItem_o *)v30->m_Items, (int32_t)v34, v32, v33);
    if ( !v27 )
      goto LABEL_62;
    SelfUserGame = (DataManager_o *)ServantEntity__getClassName((ServantEntity_o *)v27, 0LL);
    v37 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = (DataManager_o *)sub_1B886EC(SelfUserGame, v30->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( v30->max_length <= 1 )
      goto LABEL_64;
    v30->m_Items[1] = v37;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v30->m_Items[1], (int32_t)v37, v35, v36);
    v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
            (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
            0LL);
    SelfUserGame = (DataManager_o *)ServantEntity__getName((ServantEntity_o *)v27, v38, -1, 0LL);
    v41 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = (DataManager_o *)sub_1B886EC(SelfUserGame, v30->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( v30->max_length <= 2 )
      goto LABEL_64;
    v30->m_Items[2] = v41;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v30->m_Items[2], (int32_t)v41, v39, v40);
    if ( !*v12 )
      goto LABEL_62;
    SelfUserGame = (DataManager_o *)(*v12)->fields.userServantEntity;
    if ( !SelfUserGame )
      goto LABEL_62;
    v42 = UserServantEntity__getRarity((UserServantEntity_o *)SelfUserGame, 0LL);
    SelfUserGame = (DataManager_o *)Rarity__getRarityType(v42, 0LL);
    v45 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = (DataManager_o *)sub_1B886EC(SelfUserGame, v30->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( v30->max_length <= 3 )
      goto LABEL_64;
    v30->m_Items[3] = v45;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v30->m_Items[3], (int32_t)v45, v43, v44);
    if ( !*v12 )
      goto LABEL_62;
    SelfUserGame = (DataManager_o *)(*v12)->fields.servantEntity;
    if ( !SelfUserGame )
      goto LABEL_62;
    SelfUserGame = (DataManager_o *)ServantEntity__getClassName((ServantEntity_o *)SelfUserGame, 0LL);
    v48 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = (DataManager_o *)sub_1B886EC(SelfUserGame, v30->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( v30->max_length <= 4 )
      goto LABEL_64;
    v30->m_Items[4] = v48;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v30->m_Items[4], (int32_t)v48, v46, v47);
    v49 = *v12;
    if ( !*v12 )
      goto LABEL_62;
    v50 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v49->fields.userServantEntity;
    if ( !v50 )
      goto LABEL_62;
    servantEntity = v49->fields.servantEntity;
    SelfUserGame = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v50[6], 0LL);
    if ( !servantEntity )
      goto LABEL_62;
    SelfUserGame = (DataManager_o *)ServantEntity__getName(servantEntity, (int32_t)SelfUserGame, -1, 0LL);
    v54 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = (DataManager_o *)sub_1B886EC(SelfUserGame, v30->obj.klass->_1.element_class);
      if ( !SelfUserGame )
      {
LABEL_65:
        v60 = sub_1B88830(SelfUserGame);
        sub_1B886D8(v60, 0LL);
      }
    }
    if ( v30->max_length > 5 )
    {
      v30->m_Items[5] = v54;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v30->m_Items[5], (int32_t)v54, v52, v53);
      v55 = System_String__Format_61721540(v29, v30, 0LL);
      v56 = LocalizationManager__Get((System_String_o *)StringLiteral_11893/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
      v57 = LocalizationManager__Get((System_String_o *)StringLiteral_11892/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v59 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v59,
        (Il2CppObject *)v5,
        Method_EventFortificationListViewManager___c__DisplayClass96_0__OnClickSelectPush_b__0__,
        0LL);
      SelfUserGame = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      if ( Instance )
      {
        CommonUI__OpenConfirmDialog_30494292(
          (CommonUI_o *)Instance,
          v28,
          v55,
          v56,
          v57,
          1,
          v59,
          BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
          0,
          0,
          0LL);
        return;
      }
      goto LABEL_62;
    }
LABEL_64:
    sub_1B88814(SelfUserGame, v7);
  }
LABEL_14:
  v18 = Method_EventFortificationListViewManager_OnClickSelectPush__;
  if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickSelectPush__ + 83) & 2) != 0 )
    v18 = (_QWORD *)sub_1B885C8(Method_EventFortificationListViewManager_OnClickSelectPush__);
  v19 = (System_Reflection_MethodBase_o *)sub_1B88594(v18, v18[4]);
  OverwriteAssetSoundName__PlaySystemSe(v19, 8, 0LL);
  EventFortificationListViewManager__PushRequest(this, *v12, v20);
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

  if ( (byte_4A5EEF6 & 1) == 0 )
  {
    sub_1B885B0(&Method_EventFortificationListViewManager_OnClickSortAscendingOrder__);
    byte_4A5EEF6 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EventFortificationListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_EventFortificationListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B8880C(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall EventFortificationListViewManager__OnClickSortButton(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v7; // x21
  ServantSortSelectMenu_CallbackFunc_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4A5EEF4 & 1) == 0 )
  {
    sub_1B885B0(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_EventFortificationListViewManager_EndSelectSortKind__);
    sub_1B885B0(&Method_EventFortificationListViewManager_OnClickSortButton__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5EEF4 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EventFortificationListViewManager_OnClickSortButton__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickSortButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_EventFortificationListViewManager_OnClickSortButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1B887FC(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_EventFortificationListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v7 )
      sub_1B8880C(v9, v10);
    CommonUI__OpenServantSortSelectMenu(v7, 3, sort, 0, v8, 0LL);
  }
}


void __fastcall EventFortificationListViewManager__OnLongPushListView(
        EventFortificationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1
  UnityEngine_Behaviour_o *scrollView; // x0
  __int64 methodPtr_low; // x10
  EventFortificationListViewItem_o *Item; // x21
  UserServantEntity_o *userServantEntity; // x21
  CommonUI_o *v12; // x20
  ServantStatusDialog_EndDelegate_o *v13; // x22

  if ( (byte_4A5EEEC & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1B885B0(&Method_EventFortificationListViewManager_EndShowServant__);
    sub_1B885B0(&Method_EventFortificationListViewManager_OnLongPushListView__);
    sub_1B885B0(&EventFortificationListViewObject_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5EEEC = 1;
  }
  if ( (unsigned int)(this->fields.modeKind - 1) >= 3 )
  {
    v5 = Method_EventFortificationListViewManager_OnLongPushListView__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B885C8(Method_EventFortificationListViewManager_OnLongPushListView__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_13;
    UnityEngine_Behaviour__set_enabled(scrollView, 0, 0LL);
    if ( !obj
      || (methodPtr_low = LOBYTE(EventFortificationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
      || (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventFortificationListViewObject_TypeInfo
      || (Item = EventFortificationListViewObject__GetItem((EventFortificationListViewObject_o *)obj, v7),
          scrollView = (UnityEngine_Behaviour_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          !Item)
      || (userServantEntity = Item->fields.userServantEntity,
          v12 = (CommonUI_o *)scrollView,
          v13 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo),
          ServantStatusDialog_EndDelegate___ctor(
            v13,
            (Il2CppObject *)this,
            Method_EventFortificationListViewManager_EndShowServant__,
            0LL),
          !v12) )
    {
LABEL_13:
      sub_1B8880C(scrollView, v7);
    }
    CommonUI__OpenServantStatusDialog_30504496(v12, 0, userServantEntity, v13, 0LL);
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

  if ( (byte_4A5EEE8 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EEE8 = 1;
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
          sub_1B8880C(v8, v7);
        }
        UIScrollView__UpdatePosition((UIScrollView_o *)v8, 0LL);
        CallbackFunc2 = this->fields.CallbackFunc2;
        this->fields.CallbackFunc2 = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.CallbackFunc2, 0, v10, v11);
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
  DataManager_o *limitCountSupport; // x0
  __int64 v6; // x1
  DataManager_o *v7; // x23
  struct UserServantEntity_o *userServantEntity; // x19
  UserServantCollectionMaster_o *v9; // x21
  int64_t v10; // x22
  __int64 v11; // x24
  __int64 v12; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v14; // q0
  struct System_Threading_SynchronizationContext_o *context; // x8
  UserServantEntity_Fields *p_fields; // x24
  int64_t v17; // x0
  __int128 v18; // q1
  NetworkManager_ResultCallbackFunc_o *v19; // x21
  Il2CppObject *Request_object; // x0
  __int128 v21; // q1
  CardFavoriteRequest_o *v22; // x20
  int32_t v23; // w26
  int32_t v24; // w27
  int32_t v25; // w28
  int32_t v26; // w29
  bool IsLock; // w21
  char v28; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v32; // w0
  __int64 v33; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v37; // [xsp+60h] [xbp-100h]
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // [xsp+68h] [xbp-F8h]
  int64_t v39; // [xsp+70h] [xbp-F0h]
  struct System_Threading_SynchronizationContext_o *v40; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4A5EF02 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_EventFortificationListViewManager_EndPushRequest__);
    sub_1B885B0(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EF02 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v7 = limitCountSupport;
  userServantEntity = selectItem->fields.userServantEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v7 || !userServantEntity )
    goto LABEL_18;
  v9 = (UserServantCollectionMaster_o *)limitCountSupport;
  v10 = *(_QWORD *)&v7->fields.m_CachedPtr;
  v12 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v45.fields.currentCryptoKey = v12;
  *(_QWORD *)&v45.fields.fakeValue = v11;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v45, 0LL);
  if ( !v9 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v9, v10, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v14 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  context = v7->fields.context;
  p_fields = &userServantEntity->fields;
  *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v44.fields.fakeValue = v14;
  v40 = context;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v43 = v44;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v43, 0LL);
  v18 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  masterLoadThreads = v7->fields.masterLoadThreads;
  v39 = v17;
  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v42.fields.fakeValue = v18;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v42, 0LL);
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_EventFortificationListViewManager_EndPushRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v19,
                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v21 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v22 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v21;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v41, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                      userServantEntity->fields.imageLimitCount,
                      0LL);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          userServantEntity->fields.dispLimitCount,
          0LL);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          userServantEntity->fields.commandCardLimitCount,
          0LL);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          userServantEntity->fields.iconLimitCount,
          0LL);
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          userServantEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userServantEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v28 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                  userServantEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                       userServantEntity->fields.randomLimitCount,
                       0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          userServantEntity->fields.randomLimitCountSupport,
          0LL);
  v33 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v46.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v32;
  *(_QWORD *)&v46.fields.currentCryptoKey = v33;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v46, 0LL);
  if ( !v22 )
LABEL_18:
    sub_1B8880C(limitCountSupport, v6);
  CardFavoriteRequest__beginRequest(
    v22,
    targetUsrSVtId,
    imageLimitCount,
    v23,
    v24,
    v25,
    v26,
    masterLoadThreads == (struct System_Collections_Generic_List_Thread__o *)v37,
    IsLock,
    v28 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v40 != (struct System_Threading_SynchronizationContext_o *)v39,
    0LL);
}


void __fastcall EventFortificationListViewManager__RefreshListDisp(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  int32_t size; // w22
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w21

  if ( (byte_4A5EEDF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Item__);
    byte_4A5EEDF = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)EventFortificationListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !ObjectList )
    goto LABEL_9;
  size = ObjectList->fields._size;
  v6 = ObjectList;
  if ( size >= 1 )
  {
    v7 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v6,
                                                                  v7,
                                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
        ObjectList,
        this->fields.isInput,
        ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
      if ( size == ++v7 )
        return;
    }
LABEL_9:
    sub_1B8880C(ObjectList, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager__RequestListObject(
        EventFortificationListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventFortificationListViewObject__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w25
  System_Collections_Generic_List_object__o *v10; // x21
  int32_t v11; // w22
  Il2CppObject *Item; // x23
  System_Action_o *v13; // x24
  const MethodInfo *v14; // x3

  if ( (byte_4A5EEE7 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventFortificationListViewManager_OnMoveEnd__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Item__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A5EEE7 = 1;
  }
  ObjectList = EventFortificationListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_10;
  size = ObjectList->fields._size;
  v10 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( size >= 1 )
  {
    v11 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v10,
               v11,
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Item__);
      v13 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_EventFortificationListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        break;
      EventFortificationListViewObject__Init_45598524((EventFortificationListViewObject_o *)Item, mode, v13, v14);
      if ( size == ++v11 )
        return;
    }
LABEL_10:
    sub_1B8880C(ObjectList, v8);
  }
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
    delay,
    0LL);
}


void __fastcall EventFortificationListViewManager__SetFilterButtonImage(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_4A5EEF3 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17511/*"btn_filter_on"*/);
    sub_1B885B0(&StringLiteral_17510/*"btn_filter"*/);
    byte_4A5EEF3 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1B8880C(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17510/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17511/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0LL);
}


void __fastcall EventFortificationListViewManager__SetHeaderMsg(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  struct UILabel_o *recoveryFatigueInfoMsgLabel; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x22
  System_String_o *v7; // x21
  struct EventFortificationWorkItem_o *v8; // x8
  struct EventFortificationEntity_o *eventFortificationEntity; // x9
  Il2CppObject **v10; // x9
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8
  System_String_o *v12; // x1
  UILabel_o *v13; // x0
  struct UILabel_o *v14; // x19
  __int64 *v15; // x8

  if ( (byte_4A5EEE1 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11625/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_1B885B0(&StringLiteral_11623/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_1B885B0(&StringLiteral_11624/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_1B885B0(&StringLiteral_6463/*"FORTIFICATION_GUIDE_HELP"*/);
    byte_4A5EEE1 = 1;
  }
  switch ( this->fields.modeKind )
  {
    case 0:
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = LocalizationManager__Get((System_String_o *)StringLiteral_6463/*"FORTIFICATION_GUIDE_HELP"*/, 0LL);
      targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
      if ( !targetFortificationWorkItem )
        goto LABEL_28;
      v7 = v4;
      v8 = this->fields.targetFortificationWorkItem;
      if ( (byte_4A5EF33 & 1) == 0 )
      {
        v4 = (System_String_o *)sub_1B885B0(&StringLiteral_1/*""*/);
        byte_4A5EF33 = 1;
        v8 = this->fields.targetFortificationWorkItem;
      }
      eventFortificationEntity = targetFortificationWorkItem->fields.eventFortificationEntity;
      v10 = eventFortificationEntity
          ? (Il2CppObject **)&eventFortificationEntity->fields.name
          : (Il2CppObject **)&StringLiteral_1/*""*/;
      if ( !v8 )
        goto LABEL_28;
      eventFortificationDetailEntity = v8->fields.eventFortificationDetailEntity;
      if ( !eventFortificationDetailEntity )
        goto LABEL_28;
      v4 = System_String__Format_61721404(v7, *v10, (Il2CppObject *)eventFortificationDetailEntity->fields.name, 0LL);
      if ( !recoveryFatigueInfoMsgLabel )
        goto LABEL_28;
      v12 = v4;
      v13 = recoveryFatigueInfoMsgLabel;
      goto LABEL_27;
    case 1:
      v14 = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v15 = &StringLiteral_11624/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
      goto LABEL_25;
    case 2:
      v14 = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v15 = &StringLiteral_11623/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
      goto LABEL_25;
    case 3:
      v14 = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v15 = &StringLiteral_11625/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_25:
      v4 = LocalizationManager__Get((System_String_o *)*v15, 0LL);
      if ( !v14 )
LABEL_28:
        sub_1B8880C(v4, v5);
      v12 = v4;
      v13 = v14;
LABEL_27:
      UILabel__set_text(v13, v12, 0LL);
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
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.Callback,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  EventFortificationListViewManager__SetMode_45598000(this, mode, v6);
}


void __fastcall EventFortificationListViewManager__SetMode_45598000(
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


void __fastcall EventFortificationListViewManager__SetMode_45598108(
        EventFortificationListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.CallbackFunc2 = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.CallbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  EventFortificationListViewManager__SetMode_45598000(this, mode, v6);
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
  if ( (byte_4A5EEE6 & 1) == 0 )
  {
    this = (EventFortificationListViewManager_o *)sub_1B885B0(&EventFortificationListViewObject_TypeInfo);
    byte_4A5EEE6 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(EventFortificationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventFortificationListViewObject_TypeInfo )
  {
    sub_1B8880C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  EventFortificationListViewObject__Init_45597876(
    (EventFortificationListViewObject_o *)obj,
    v7,
    (const MethodInfo *)item);
}


void __fastcall EventFortificationListViewManager__SetSortButtonImage(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v4; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v6; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v8; // x8
  int32_t sortKind; // w9
  System_String_o **v10; // x8
  struct ListViewSort_o *v11; // x8
  System_String_o **v12; // x9
  System_String_o **v13; // x10
  System_String_o **v14; // x8
  System_String_o **v15; // x8

  if ( (byte_4A5EEF7 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_17541/*"btn_sort_up"*/);
    sub_1B885B0(&StringLiteral_17628/*"btn_txt_up"*/);
    sub_1B885B0(&StringLiteral_17584/*"btn_txt_new"*/);
    sub_1B885B0(&StringLiteral_17574/*"btn_txt_down"*/);
    sub_1B885B0(&StringLiteral_17591/*"btn_txt_old"*/);
    sub_1B885B0(&StringLiteral_17538/*"btn_sort_down"*/);
    byte_4A5EEF7 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_35;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v6 )
      goto LABEL_35;
    UILabel__set_text(v6, (System_String_o *)sort, 0LL);
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
    v8 = this->fields.sort;
    if ( v8 )
    {
      sortKind = v8->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17591/*"btn_txt_old"*/ : &StringLiteral_17584/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v10, 0LL);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v12 = (System_String_o **)&StringLiteral_17538/*"btn_sort_down"*/;
              v13 = (System_String_o **)&StringLiteral_17541/*"btn_sort_up"*/;
LABEL_31:
              if ( v11->fields.isAscendingOrder )
                v15 = v12;
              else
                v15 = v13;
              UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
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
          v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17628/*"btn_txt_up"*/ : &StringLiteral_17574/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v14, 0LL);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v12 = (System_String_o **)&StringLiteral_17541/*"btn_sort_up"*/;
              v13 = (System_String_o **)&StringLiteral_17538/*"btn_sort_down"*/;
              goto LABEL_31;
            }
          }
        }
      }
    }
LABEL_35:
    sub_1B8880C(sort, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager__SetStatusKind(
        EventFortificationListViewManager_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *statusTabButton; // x0
  __int64 *v6; // x8
  __int64 *v7; // x8
  __int64 *v8; // x8
  __int64 *v9; // x8
  const MethodInfo *v10; // x1

  if ( (byte_4A5EEE0 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17661/*"button_push_reg"*/);
    sub_1B885B0(&StringLiteral_17662/*"button_push_unreg"*/);
    sub_1B885B0(&StringLiteral_17647/*"button_allchoice_reg"*/);
    sub_1B885B0(&StringLiteral_17650/*"button_alllock_unreg"*/);
    sub_1B885B0(&StringLiteral_17663/*"button_select_reg"*/);
    sub_1B885B0(&StringLiteral_17664/*"button_select_unreg"*/);
    sub_1B885B0(&StringLiteral_17649/*"button_alllock_reg"*/);
    sub_1B885B0(&StringLiteral_17648/*"button_allchoice_unreg"*/);
    byte_4A5EEE0 = 1;
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
  v6 = &StringLiteral_17663/*"button_select_reg"*/;
  if ( modeKind )
    v6 = &StringLiteral_17664/*"button_select_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v6, 0LL);
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
  v7 = &StringLiteral_17649/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v7 = &StringLiteral_17650/*"button_alllock_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v7, 0LL);
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
  v8 = &StringLiteral_17647/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v8 = &StringLiteral_17648/*"button_allchoice_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v8, 0LL);
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
  v9 = &StringLiteral_17661/*"button_push_reg"*/;
  if ( modeKind != 3 )
    v9 = &StringLiteral_17662/*"button_push_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v9, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
  if ( !statusTabButton )
LABEL_28:
    sub_1B8880C(statusTabButton, *(_QWORD *)&modeKind);
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
    statusTabButton,
    0LL,
    0LL,
    statusTabButton->klass[1]._1.interfaceOffsets);
  EventFortificationListViewManager__SetHeaderMsg(this, v10);
}


void __fastcall EventFortificationListViewManager__StatusRequest(
        EventFortificationListViewManager_o *this,
        EventFortificationListViewManager_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t modeKind; // w8
  int32_t v7; // w2
  int32_t v8; // w3
  NetworkManager_ResultCallbackFunc_o *v9; // x20
  Il2CppObject *Request_object; // x0
  __int64 v11; // x1
  System_Int64_array *v12; // x1
  System_Int64_array *v13; // x2
  bool v14; // w4
  bool v15; // w5
  int32_t v16; // w2
  int32_t v17; // w3
  NetworkManager_ResultCallbackFunc_o *v18; // x20
  System_Int64_array *v19; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4A5EEFE & 1) == 0 )
  {
    sub_1B885B0(&Method_EventFortificationListViewManager_EndStatusSync__);
    sub_1B885B0(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4A5EEFE = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v19 = 0LL;
  choiceList = 0LL;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    if ( EventFortificationListViewManager__GetSwapChoiceList(this, &choiceList, &v19, v3) )
    {
      this->fields.requestCallback = callback;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.requestCallback, (int32_t)callback, v16, v17);
      v18 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v18,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v18,
                         (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_object )
      {
        v13 = v19;
        v12 = choiceList;
        v15 = 1;
        v14 = 0;
        goto LABEL_15;
      }
LABEL_19:
      sub_1B8880C(Request_object, v11);
    }
  }
  else if ( modeKind == 1 && EventFortificationListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.requestCallback, (int32_t)callback, v7, v8);
    v9 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_EventFortificationListViewManager_EndStatusSync__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v9,
                       (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( Request_object )
    {
      v13 = unlockList;
      v12 = lockList;
      v14 = 1;
      v15 = 0;
LABEL_15:
      CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)Request_object, v12, v13, 0, v14, v15, 0LL);
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

  if ( (byte_4A5EED6 & 1) == 0 )
  {
    sub_1B885B0(&EventFortificationListViewManager_CallbackFunc_TypeInfo);
    byte_4A5EED6 = 1;
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
    v8 = sub_1BC3AA0(p_Callback, v7, Callback);
    v9 = Callback == (System_Delegate_o *)v8;
    Callback = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
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

  if ( (byte_4A5EED8 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5EED8 = 1;
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
    v8 = sub_1BC3AA0(p_CallbackFunc2, v7, CallbackFunc2);
    v9 = CallbackFunc2 == (System_Delegate_o *)v8;
    CallbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
  EventFortificationListViewManager__remove_CallbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_EventFortificationListViewObject__o *__fastcall EventFortificationListViewManager__get_ClippingObjectList(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v7; // w21
  Il2CppObject *v8; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 v13; // x10
  Il2CppClass **v14; // x0

  if ( (byte_4A5EEDD & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo);
    byte_4A5EEDD = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_18;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    do
    {
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v7,
                                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        break;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___);
      if ( !objectList )
        break;
      v8 = (Il2CppObject *)objectList;
      objectList = (System_Collections_Generic_List_object__o *)EventFortificationListViewObject__GetItem(
                                                                  (EventFortificationListViewObject_o *)objectList,
                                                                  v4);
      if ( !objectList )
        break;
      v4 = (const MethodInfo *)objectList;
      if ( LOBYTE(objectList[2].monitor) )
      {
        objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_40722428(
                                                                    (ListViewManager_o *)this,
                                                                    (ListViewItem_o *)objectList,
                                                                    0LL);
        if ( ((unsigned __int8)objectList & 1) == 0 )
          continue;
      }
      if ( !v3 )
        break;
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        break;
      v13 = v3->fields._size;
      if ( (unsigned int)v13 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          v8,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + v13;
        v3->fields._size = v13 + 1;
        v14[4] = (Il2CppClass *)v8;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 4), (int32_t)v8, v9, v10);
      }
      if ( size == ++v7 )
        return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v3;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_18:
    sub_1B8880C(objectList, v4);
  }
  return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v3;
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
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v7; // w21
  Il2CppObject *Item; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 v13; // x10
  System_Collections_Generic_List_object__o *v14; // x1
  Il2CppClass **v15; // x0

  if ( (byte_4A5EEDC & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EEDC = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               objectList,
               v7,
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                    (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___);
        if ( !v3 )
          break;
        items = v3->fields._items;
        v12 = Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        v13 = v3->fields._size;
        v14 = objectList;
        if ( (unsigned int)v13 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)objectList,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v15 = &items->obj.klass + v13;
          v3->fields._size = v13 + 1;
          v15[4] = (Il2CppClass *)v14;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v14, v9, v10);
        }
      }
      if ( size == ++v7 )
        return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v3;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_1B8880C(objectList, v4);
  }
  return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v3;
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

  if ( (byte_4A5EED7 & 1) == 0 )
  {
    sub_1B885B0(&EventFortificationListViewManager_CallbackFunc_TypeInfo);
    byte_4A5EED7 = 1;
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
    v8 = sub_1BC3AA0(p_Callback, v7, Callback);
    v9 = Callback == (System_Delegate_o *)v8;
    Callback = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
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

  if ( (byte_4A5EED9 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5EED9 = 1;
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
    v8 = sub_1BC3AA0(p_CallbackFunc2, v7, CallbackFunc2);
    v9 = CallbackFunc2 == (System_Delegate_o *)v8;
    CallbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19D3754;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D36FC;
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = index;
  v15 = kind;
  if ( (byte_4A5EF04 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&EventFortificationListViewManager_ResultKind_TypeInfo);
    byte_4A5EF04 = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(
             EventFortificationListViewManager_ResultKind_TypeInfo,
             &v15,
             *(_QWORD *)&index,
             callback,
             object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1B88564(this, v13, callback, object);
}


void __fastcall EventFortificationListViewManager_CallbackFunc__EndInvoke(
        EventFortificationListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19D37C0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D3778;
}


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
  if ( (byte_4A5EF05 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A5EF05 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall EventFortificationListViewManager_RequestCallbackFunc__EndInvoke(
        EventFortificationListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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
    sub_1B8880C(this, data);
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
  if ( (byte_4A5EF06 & 1) == 0 )
  {
    this = (EventFortificationListViewManager___c__DisplayClass48_0_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5EF06 = 1;
  }
  if ( !data )
    goto LABEL_9;
  v6 = *(_QWORD *)&data->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&data->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v6;
  *(_QWORD *)&v10.fields.fakeValue = v5;
  this = (EventFortificationListViewManager___c__DisplayClass48_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                        v10,
                                                                        0LL);
  targetItem = v4->fields.targetItem;
  if ( !targetItem
    || (userServantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)targetItem->fields.userServantEntity) == 0LL )
  {
LABEL_9:
    sub_1B8880C(this, data);
  }
  return (_DWORD)this == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(userServantEntity[5], 0LL);
}


void __fastcall EventFortificationListViewManager___c__DisplayClass96_0___ctor(
        EventFortificationListViewManager___c__DisplayClass96_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventFortificationListViewManager___c__DisplayClass96_0___OnClickSelectPush_b__0(
        EventFortificationListViewManager___c__DisplayClass96_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20
  System_Action_o *_9__1; // x22
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5EF07 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_EventFortificationListViewManager___c__DisplayClass96_0__OnClickSelectPush_b__1__);
    byte_4A5EF07 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager___c__DisplayClass96_0__OnClickSelectPush_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_30494572(v7, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_1B8880C(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall EventFortificationListViewManager___c__DisplayClass96_0___OnClickSelectPush_b__1(
        EventFortificationListViewManager___c__DisplayClass96_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1B8880C(this, method);
  EventFortificationListViewManager__PushRequest(this->fields.__4__this, this->fields.selectItem, v2);
}