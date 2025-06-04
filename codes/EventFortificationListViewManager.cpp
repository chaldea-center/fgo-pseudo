void __fastcall EventFortificationListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *SORT_SAVE_KEY; // x19
  ListViewSort_o *v5; // x20
  struct EventFortificationListViewManager_StaticFields *static_fields; // x0

  if ( (byte_4AFC4C7 & 1) == 0 )
  {
    sub_1BC3008(&EventFortificationListViewManager_TypeInfo, v1);
    sub_1BC3008(&ListViewSort_TypeInfo, v2);
    sub_1BC3008(&StringLiteral_6196/*"EventServantFatigueList"*/, v3);
    byte_4AFC4C7 = 1;
  }
  EventFortificationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_6196/*"EventServantFatigueList"*/;
  sub_1BC2FAC(EventFortificationListViewManager_TypeInfo->static_fields);
  SORT_SAVE_KEY = EventFortificationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v5 = (ListViewSort_o *)sub_1BC3254(ListViewSort_TypeInfo);
  ListViewSort___ctor_42802648(v5, SORT_SAVE_KEY, 3, 0, 0LL);
  static_fields = EventFortificationListViewManager_TypeInfo->static_fields;
  static_fields->servantSortStatus = v5;
  sub_1BC2FAC(&static_fields->servantSortStatus);
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
  if ( (byte_4AFC4AF & 1) == 0 )
  {
    this = (EventFortificationListViewManager_o *)sub_1BC3008(&StringLiteral_21997/*"ng"*/, result);
    byte_4AFC4AF = 1;
  }
  if ( !result )
    goto LABEL_11;
  this = (EventFortificationListViewManager_o *)System_String__Equals_62383952(
                                                  result,
                                                  (System_String_o *)StringLiteral_21997/*"ng"*/,
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
    sub_1BC3264(this, result);
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
  int32_t fortificationIdx; // w24
  int32_t position; // w25
  __int128 *v27; // x0
  struct EventFortificationWorkItem_o *v28; // x8
  struct EventFortificationDetailEntity_o *v29; // x9
  int32_t v30; // w24
  int32_t v31; // w23
  __int64 v32; // x22
  struct EventFortificationDetailEntity_o *v33; // x10
  __int128 v34; // q1
  int64_t v35; // x23
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  int32_t eventId; // w19
  const MethodInfo *v41; // x3
  __int128 v42[2]; // [xsp+0h] [xbp-A0h] BYREF
  __int128 v43[2]; // [xsp+20h] [xbp-80h] BYREF
  __int128 v44; // [xsp+40h] [xbp-60h]
  __int128 v45; // [xsp+50h] [xbp-50h]

  if ( (byte_4AFC4AE & 1) == 0 )
  {
    sub_1BC3008(&EnterUserSvtInfo_TypeInfo, method);
    sub_1BC3008(&Method_EventFortificationListViewManager_CallbackFortificationRequest__, v3);
    sub_1BC3008(&Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__, v7);
    sub_1BC3008(&System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo, v8);
    sub_1BC3008(&Method_NetworkManager_getRequest_EventFortificationRequest___, v9);
    sub_1BC3008(&NetworkManager_TypeInfo, v10);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_1BC3008(&NetworkManager_ResultCallbackFunc_TypeInfo, v12);
    byte_4AFC4AE = 1;
  }
  v13 = Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__;
  if ( (*((_BYTE *)Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1BC3020(Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__);
  v14 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 8, 0, 0LL);
  v15 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__);
  v16 = (NetworkManager_ResultCallbackFunc_o *)sub_1BC3254(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v16,
    (Il2CppObject *)this,
    Method_EventFortificationListViewManager_CallbackFortificationRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = (System_Object_array *)NetworkManager__getRequest_object_(
                                            v16,
                                            (const MethodInfo_3089B54 *)Method_NetworkManager_getRequest_EventFortificationRequest___);
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
      v44 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.currentCryptoKey;
      v45 = v24;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v27 = v43;
      v43[0] = v44;
      v43[1] = v45;
    }
    else
    {
      if ( !targetFortificationWorkItem )
        goto LABEL_32;
      v33 = targetFortificationWorkItem->fields.eventFortificationDetailEntity;
      if ( !v33 )
        goto LABEL_32;
      v34 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.fakeValue;
      fortificationIdx = v33->fields.fortificationIdx;
      position = targetFortificationWorkItem->fields.position;
      v44 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.currentCryptoKey;
      v45 = v34;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v27 = v42;
      v42[0] = v44;
      v42[1] = v45;
    }
    v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(
            (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v27,
            0LL);
    v32 = sub_1BC3254(EnterUserSvtInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v32, 0LL);
    *(_DWORD *)(v32 + 16) = fortificationIdx;
    *(_DWORD *)(v32 + 20) = position;
    *(_QWORD *)(v32 + 24) = v35;
    if ( !v15 )
      goto LABEL_32;
  }
  else
  {
    if ( !targetOutUserServantEntity )
      return;
    v28 = this->fields.targetFortificationWorkItem;
    if ( !v28 )
      goto LABEL_32;
    v29 = v28->fields.eventFortificationDetailEntity;
    if ( !v29
      || (v30 = v28->fields.position,
          v31 = v29->fields.fortificationIdx,
          v32 = sub_1BC3254(EnterUserSvtInfo_TypeInfo),
          System_Object___ctor((Il2CppObject *)v32, 0LL),
          *(_DWORD *)(v32 + 16) = v31,
          *(_DWORD *)(v32 + 20) = v30,
          *(_QWORD *)(v32 + 24) = 0LL,
          !v15) )
    {
LABEL_32:
      sub_1BC3264(Request_object, v18);
    }
  }
  items = v15->fields._items;
  v37 = Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__;
  ++v15->fields._version;
  if ( !items )
    goto LABEL_32;
  size = v15->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      (Il2CppObject *)v32,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
  }
  else
  {
    v39 = &items->obj.klass + size;
    v15->fields._size = size + 1;
    v39[4] = (Il2CppClass *)v32;
    sub_1BC2FAC(v39 + 4);
  }
  eventId = this->fields.eventId;
  Request_object = System_Collections_Generic_List_object___ToArray(
                     v15,
                     (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__);
  if ( !v21 )
    goto LABEL_32;
  EventFortificationRequest__beginRequest(v21, eventId, (EnterUserSvtInfo_array *)Request_object, v41);
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
  __int64 v27; // x21
  __int64 sort; // x0
  const MethodInfo *v29; // x1
  EventFortificationListViewManager_c *v30; // x0
  struct EventFortificationWorkItem_o **p_targetFortificationWorkItem; // x24
  struct ListViewSort_o *v32; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeButtonSprite; // x23
  __int64 v36; // x2
  __int64 v37; // x3
  System_Int32_array *v38; // x23
  Il2CppObject *MasterData_object; // x25
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v41; // q0
  int64_t v42; // x23
  struct EventFortificationWorkItem_o *v43; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x24
  UserServantEntity_o *v45; // x27
  int32_t v46; // w28
  EventFortificationListViewItem_o *v47; // x25
  const MethodInfo *v48; // x6
  System_Func_object__bool__o *v49; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  __int64 v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  __int64 v54; // x8
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8
  System_Func_object__bool__o *v56; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x0
  __int64 v58; // x28
  __int64 v59; // x29
  UserServantEntity_o *v60; // x25
  int32_t v61; // w26
  EventFortificationWorkItem_o *v62; // x27
  EventFortificationListViewItem_o *v63; // x21
  const MethodInfo *v64; // x6
  __int64 v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  __int64 v68; // x8
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v70; // x2
  const MethodInfo *v71; // x1
  EventUpValSetupInfo_o *setupInfo; // [xsp+0h] [xbp-D0h]
  struct EventFortificationWorkItem_o **v73; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75[2]; // [xsp+30h] [xbp-A0h] BYREF

  if ( (byte_4AFC4A2 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantClassMaster___, *(_QWORD *)&eventId);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantMaster___, v11);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_UserServantEntity___, v12);
    sub_1BC3008(&Method_System_Linq_Enumerable_Where_UserServantEntity___, v13);
    sub_1BC3008(&EventFortificationListViewItem_TypeInfo, v14);
    sub_1BC3008(&EventFortificationListViewManager_TypeInfo, v15);
    sub_1BC3008(&EventUpValSetupInfo_TypeInfo, v16);
    sub_1BC3008(&System_Func_UserServantEntity__bool__TypeInfo, v17);
    sub_1BC3008(&int___TypeInfo, v18);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__Add__, v19);
    sub_1BC3008(&LocalizationManager_TypeInfo, v20);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1BC3008(&Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__0__, v23);
    sub_1BC3008(&Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__1__, v24);
    sub_1BC3008(&EventFortificationListViewManager___c__DisplayClass48_0_TypeInfo, v25);
    sub_1BC3008(&StringLiteral_11692/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v26);
    byte_4AFC4A2 = 1;
  }
  memset(&v75[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v27 = sub_1BC3254(EventFortificationListViewManager___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  if ( !v27 )
    goto LABEL_62;
  *(_QWORD *)(v27 + 16) = targetItem;
  v73 = (struct EventFortificationWorkItem_o **)(v27 + 16);
  sub_1BC2FAC(v27 + 16);
  v30 = EventFortificationListViewManager_TypeInfo;
  if ( !EventFortificationListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationListViewManager_TypeInfo);
    v30 = EventFortificationListViewManager_TypeInfo;
  }
  this->fields.sort = v30->static_fields->servantSortStatus;
  sub_1BC2FAC(&this->fields.sort);
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_62;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_62;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)sort, 0LL, 1, 0LL, 82, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_62;
  TitleInfoControl__setBackBtnSprite_38906884((TitleInfoControl_o *)sort, 1, 0, 0, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_62;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)sort, 45, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_62;
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)sort, 0, 0LL);
  this->fields.targetInUserServantEntity = 0LL;
  sub_1BC2FAC(&this->fields.targetInUserServantEntity);
  this->fields.targetOutUserServantEntity = 0LL;
  sub_1BC2FAC(&this->fields.targetOutUserServantEntity);
  this->fields.eventId = eventId;
  this->fields.fortificationConfirmDialog = fortificationConfirmDialog;
  sub_1BC2FAC(&this->fields.fortificationConfirmDialog);
  p_targetFortificationWorkItem = &this->fields.targetFortificationWorkItem;
  this->fields.targetFortificationWorkItem = *v73;
  sub_1BC2FAC(&this->fields.targetFortificationWorkItem);
  this->fields.selectAfterCallback = afterCallback;
  sort = sub_1BC2FAC(&this->fields.selectAfterCallback);
  v32 = this->fields.sort;
  this->fields.modeKind = 0;
  if ( !v32 )
    goto LABEL_62;
  iconScaleKind = v32->fields.iconScaleKind;
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
  sub_1BC2FAC(&this->fields.seed);
LABEL_19:
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_62;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  sort = (__int64)ListViewSort__GetScaleKindSpriteName((ListViewSort_o *)sort, this->fields.scaleType, 0LL);
  if ( !scaleChangeButtonSprite )
    goto LABEL_62;
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL);
  sort = sub_1BC30B0(int___TypeInfo, 1LL);
  if ( !sort )
    goto LABEL_62;
  v38 = (System_Int32_array *)sort;
  if ( !*(_DWORD *)(sort + 24) )
LABEL_56:
    sub_1BC326C(sort, v29, v36, v37);
  *(_DWORD *)(sort + 32) = eventId;
  setupInfo = (EventUpValSetupInfo_o *)sub_1BC3254(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_40756148(setupInfo, v38, 1, 0, 0, 0LL);
  sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_62;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)sort,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantMaster___);
  sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_62;
  *(_QWORD *)(v27 + 24) = DataManager__GetMasterData_object_(
                            (DataManager_o *)sort,
                            (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  sort = sub_1BC2FAC(v27 + 24);
  if ( !*p_targetFortificationWorkItem )
    goto LABEL_62;
  userServantEntity = (*p_targetFortificationWorkItem)->fields.userServantEntity;
  if ( userServantEntity )
  {
    v41 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v75[1].fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v75[1].fields.fakeValue = v41;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v75, -1LL, 0LL);
    v75[1] = v75[0];
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v74 = v75[1];
  sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v74, 0LL);
  if ( !MasterData_object )
    goto LABEL_62;
  v42 = sort;
  sort = (__int64)UserServantMaster__getOrganizationList((UserServantMaster_o *)MasterData_object, 0LL);
  v43 = *v73;
  if ( !*v73 )
    goto LABEL_62;
  v44 = (System_Collections_Generic_IEnumerable_TSource__o *)sort;
  if ( !v43->fields.isSvtDataSetInMaster )
  {
    eventFortificationDetailEntity = v43->fields.eventFortificationDetailEntity;
    if ( !eventFortificationDetailEntity )
      goto LABEL_62;
    if ( eventFortificationDetailEntity->fields.classId )
    {
      v56 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_UserServantEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v56,
        (Il2CppObject *)v27,
        Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__0__,
        0LL);
      v57 = System_Linq_Enumerable__Where_object_(
              v44,
              (System_Func_TSource__bool__o *)v56,
              (const MethodInfo_3044F10 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
      sort = (__int64)System_Linq_Enumerable__ToArray_object_(
                        v57,
                        (const MethodInfo_303E54C *)Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
      v44 = (System_Collections_Generic_IEnumerable_TSource__o *)sort;
    }
LABEL_46:
    if ( !v44 )
      goto LABEL_62;
    goto LABEL_47;
  }
  v45 = v43->fields.userServantEntity;
  v46 = this->fields.eventId;
  v47 = (EventFortificationListViewItem_o *)sub_1BC3254(EventFortificationListViewItem_TypeInfo);
  EventFortificationListViewItem___ctor(v47, v45, v46, v42, setupInfo, v43, v48);
  v49 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v49,
    (Il2CppObject *)v27,
    Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__1__,
    0LL);
  v50 = System_Linq_Enumerable__Where_object_(
          v44,
          (System_Func_TSource__bool__o *)v49,
          (const MethodInfo_3044F10 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
  sort = (__int64)System_Linq_Enumerable__ToArray_object_(
                    v50,
                    (const MethodInfo_303E54C *)Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
  if ( !*(_QWORD *)(v27 + 16) )
    goto LABEL_62;
  v44 = (System_Collections_Generic_IEnumerable_TSource__o *)sort;
  sort = EventFortificationWorkItem__get_IsNpc(*(EventFortificationWorkItem_o **)(v27 + 16), v29);
  if ( (sort & 1) == 0 )
    goto LABEL_46;
  sort = (__int64)this->fields.itemList;
  if ( !sort )
    goto LABEL_62;
  v51 = *(_QWORD *)(sort + 16);
  v52 = Method_System_Collections_Generic_List_ListViewItem__Add__;
  ++*(_DWORD *)(sort + 28);
  if ( !v51 )
    goto LABEL_62;
  v53 = *(int *)(sort + 24);
  if ( (unsigned int)v53 >= *(_DWORD *)(v51 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)sort,
      (Il2CppObject *)v47,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
    if ( !v44 )
      goto LABEL_62;
  }
  else
  {
    v54 = v51 + 8 * v53;
    *(_DWORD *)(sort + 24) = v53 + 1;
    *(_QWORD *)(v54 + 32) = v47;
    sort = sub_1BC2FAC(v54 + 32);
    if ( !v44 )
      goto LABEL_62;
  }
LABEL_47:
  if ( (int)v44[1].monitor >= 1 )
  {
    v58 = 0LL;
    v59 = (unsigned int)v44[1].monitor - 1LL;
    while ( 1 )
    {
      v60 = (UserServantEntity_o *)*((_QWORD *)&v44[2].klass + v58);
      v61 = this->fields.eventId;
      v62 = *v73;
      v63 = (EventFortificationListViewItem_o *)sub_1BC3254(EventFortificationListViewItem_TypeInfo);
      EventFortificationListViewItem___ctor(v63, v60, v61, v42, setupInfo, v62, v64);
      sort = (__int64)this->fields.itemList;
      if ( !sort )
        break;
      v65 = *(_QWORD *)(sort + 16);
      v66 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(sort + 28);
      if ( !v65 )
        break;
      v67 = *(int *)(sort + 24);
      if ( (unsigned int)v67 >= *(_DWORD *)(v65 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)sort,
          (Il2CppObject *)v63,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
      }
      else
      {
        v68 = v65 + 8 * v67;
        *(_DWORD *)(sort + 24) = v67 + 1;
        *(_QWORD *)(v68 + 32) = v63;
        sort = sub_1BC2FAC(v68 + 32);
      }
      if ( v59 == v58 )
        goto LABEL_57;
      if ( ++v58 >= (unsigned __int64)LODWORD(v44[1].monitor) )
        goto LABEL_56;
    }
LABEL_62:
    sub_1BC3264(sort, v29);
  }
LABEL_57:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11692/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_62;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0LL);
  EventFortificationListViewManager__SetStatusKind(this, this->fields.modeKind, v70);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  EventFortificationListViewManager__SetFilterButtonImage(this, v71);
}


void __fastcall EventFortificationListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  EventFortificationListViewManager_c *v2; // x0
  ListViewSort_o *servantSortStatus; // x0

  if ( (byte_4AFC49E & 1) == 0 )
  {
    sub_1BC3008(&EventFortificationListViewManager_TypeInfo, v1);
    byte_4AFC49E = 1;
  }
  v2 = EventFortificationListViewManager_TypeInfo;
  if ( !EventFortificationListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationListViewManager_TypeInfo);
    v2 = EventFortificationListViewManager_TypeInfo;
  }
  servantSortStatus = v2->static_fields->servantSortStatus;
  if ( !servantSortStatus )
    sub_1BC3264(0LL, v1);
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
    sub_1BC3264(0LL, v3);
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
  EventFortificationListViewManager__SetMode_30964952(this, 2, v6);
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
  EventFortificationListViewManager__SetMode_30964952(this, 2, v6);
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
  EventFortificationListViewManager__SetMode_30964952(this, 2, v6);
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
  EventFortificationListViewManager__SetMode_30964952(this, 2, v5);
}


void __fastcall EventFortificationListViewManager__EndPushRequest(
        EventFortificationListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  EventFortificationListViewManager__ModifyList(this, 0, method);
  EventFortificationListViewManager__SetMode_30964952(this, 2, v4);
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

  if ( (byte_4AFC4B5 & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4AFC4B5 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    EventFortificationListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BC3264(0LL, v7);
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

  if ( (byte_4AFC4B9 & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4AFC4B9 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BC3264(0LL, v6);
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

  if ( (byte_4AFC4B2 & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4AFC4B2 = 1;
  }
  EventFortificationListViewManager__RefreshListDisp(this, (const MethodInfo *)isDecide);
  EventFortificationListViewManager__ModifyList(this, 0, v4);
  EventFortificationListViewManager__SetMode_30964952(this, 2, v5);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BC3264(0LL, v7);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall EventFortificationListViewManager__EndStatusSync(
        EventFortificationListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  struct EventFortificationListViewManager_RequestCallbackFunc_o *requestCallback; // x19
  struct EventFortificationListViewManager_RequestCallbackFunc_o **p_requestCallback; // x0

  requestCallback = this->fields.requestCallback;
  if ( requestCallback )
  {
    p_requestCallback = &this->fields.requestCallback;
    *p_requestCallback = 0LL;
    sub_1BC2FAC(p_requestCallback);
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

  if ( (byte_4AFC4B3 & 1) == 0 )
  {
    sub_1BC3008(&EventFortificationListViewItem_TypeInfo, *(_QWORD *)&svtId);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4AFC4B3 = 1;
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
                                                                (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v17, 0LL) == svtId )
        ++v11;
      if ( size == v10 )
        return v11;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_16:
    sub_1BC3264(itemList, *(_QWORD *)&svtId);
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
  __int64 v8; // x1
  int32_t v9; // w22
  __int64 methodPtr_low; // x10

  if ( (byte_4AFC4B1 & 1) == 0 )
  {
    sub_1BC3008(&EventFortificationListViewItem_TypeInfo, index);
    this = (EventFortificationListViewManager_o *)sub_1BC3008(
                                                    &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                    v8);
    byte_4AFC4B1 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_14:
      sub_1BC3264(this, index);
    v9 = 0;
    while ( 1 )
    {
      this = (EventFortificationListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                      (System_Collections_Generic_List_object__o *)list,
                                                      v9,
                                                      (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
      if ( sum == ++v9 )
        return 1;
    }
    *index = v9;
  }
  return 1;
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

  if ( (byte_4AFC4A9 & 1) == 0 )
  {
    sub_1BC3008(&EventFortificationListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4AFC4A9 = 1;
  }
  result = (EventFortificationListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EventFortificationListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  int64_t itemList; // x0
  int v19; // w25
  int32_t v20; // w24
  __int64 methodPtr_low; // x10
  __int64 v22; // x8
  __int128 v23; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x8
  __int128 v28; // q0
  struct System_Int64_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  __int64 v32; // x8
  System_Collections_Generic_List_long__o *v33; // x0
  int v34; // w21
  System_Int64_array **v35; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+40h] [xbp-80h]

  if ( (byte_4AFC4BD & 1) == 0 )
  {
    sub_1BC3008(&EventFortificationListViewItem_TypeInfo, choiceList);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__Add__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__get_Count__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_1BC3008(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    byte_4AFC4BD = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1BC3254(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_3688620 *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1BC3254(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_3688620 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v19 = *(_DWORD *)(itemList + 24);
  if ( v19 >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v20,
                            (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(EventFortificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(EventFortificationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != EventFortificationListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v22 = *(_QWORD *)(itemList + 120);
      if ( v22 && *(_BYTE *)(itemList + 193) )
      {
        if ( *(_BYTE *)(itemList + 162) )
        {
          v23 = *(_OWORD *)(v22 + 32);
          *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)(v22 + 16);
          *(_OWORD *)&v39.fields.fakeValue = v23;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v38 = v39;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v38, 0LL);
          if ( !v16 )
            goto LABEL_37;
          items = v16->fields._items;
          v25 = Method_System_Collections_Generic_List_long__Add__;
          ++v16->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v16->fields._size;
          v17 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v32 = v25[4];
            v33 = v16;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v33,
              v17,
              *(const MethodInfo_3688E74 **)(*(_QWORD *)(v32 + 192) + 112LL));
            goto LABEL_28;
          }
          v27 = &items->obj.klass + size;
          v16->fields._size = size + 1;
        }
        else
        {
          v28 = *(_OWORD *)(v22 + 32);
          *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)(v22 + 16);
          *(_OWORD *)&v39.fields.fakeValue = v28;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v37 = v39;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v37, 0LL);
          if ( !v15 )
            goto LABEL_37;
          v29 = v15->fields._items;
          v30 = Method_System_Collections_Generic_List_long__Add__;
          ++v15->fields._version;
          if ( !v29 )
            goto LABEL_37;
          v31 = v15->fields._size;
          v17 = itemList;
          if ( (unsigned int)v31 >= v29->max_length )
          {
            v32 = v30[4];
            v33 = v15;
            goto LABEL_27;
          }
          v27 = &v29->obj.klass + v31;
          v15->fields._size = v31 + 1;
        }
        v27[4] = (Il2CppClass *)v17;
      }
LABEL_28:
      if ( v19 == ++v20 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v15 || !v16 )
LABEL_37:
    sub_1BC3264(itemList, v17);
  v34 = v16->fields._size + v15->fields._size;
  if ( v34 < 1 )
  {
    *choiceList = 0LL;
    sub_1BC2FAC(choiceList);
    v35 = unchoiceList;
    *unchoiceList = 0LL;
  }
  else
  {
    *choiceList = System_Collections_Generic_List_long___ToArray(
                    v15,
                    (const MethodInfo_368A92C *)Method_System_Collections_Generic_List_long__ToArray__);
    sub_1BC2FAC(choiceList);
    *unchoiceList = System_Collections_Generic_List_long___ToArray(
                      v16,
                      (const MethodInfo_368A92C *)Method_System_Collections_Generic_List_long__ToArray__);
    v35 = unchoiceList;
  }
  sub_1BC2FAC(v35);
  return v34 > 0;
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
  int64_t itemList; // x0
  int v19; // w25
  int32_t v20; // w24
  __int64 methodPtr_low; // x10
  __int64 v22; // x8
  __int128 v23; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x8
  __int128 v28; // q0
  struct System_Int64_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  __int64 v32; // x8
  System_Collections_Generic_List_long__o *v33; // x0
  int v34; // w21
  System_Int64_array **v35; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+40h] [xbp-80h]

  if ( (byte_4AFC4BC & 1) == 0 )
  {
    sub_1BC3008(&EventFortificationListViewItem_TypeInfo, lockList);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__Add__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__get_Count__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_1BC3008(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    byte_4AFC4BC = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1BC3254(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_3688620 *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1BC3254(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_3688620 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v19 = *(_DWORD *)(itemList + 24);
  if ( v19 >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v20,
                            (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(EventFortificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(EventFortificationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != EventFortificationListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v22 = *(_QWORD *)(itemList + 120);
      if ( v22 && *(_BYTE *)(itemList + 192) )
      {
        if ( *(_BYTE *)(itemList + 161) )
        {
          v23 = *(_OWORD *)(v22 + 32);
          *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)(v22 + 16);
          *(_OWORD *)&v39.fields.fakeValue = v23;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v38 = v39;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v38, 0LL);
          if ( !v16 )
            goto LABEL_37;
          items = v16->fields._items;
          v25 = Method_System_Collections_Generic_List_long__Add__;
          ++v16->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v16->fields._size;
          v17 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v32 = v25[4];
            v33 = v16;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v33,
              v17,
              *(const MethodInfo_3688E74 **)(*(_QWORD *)(v32 + 192) + 112LL));
            goto LABEL_28;
          }
          v27 = &items->obj.klass + size;
          v16->fields._size = size + 1;
        }
        else
        {
          v28 = *(_OWORD *)(v22 + 32);
          *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)(v22 + 16);
          *(_OWORD *)&v39.fields.fakeValue = v28;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v37 = v39;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v37, 0LL);
          if ( !v15 )
            goto LABEL_37;
          v29 = v15->fields._items;
          v30 = Method_System_Collections_Generic_List_long__Add__;
          ++v15->fields._version;
          if ( !v29 )
            goto LABEL_37;
          v31 = v15->fields._size;
          v17 = itemList;
          if ( (unsigned int)v31 >= v29->max_length )
          {
            v32 = v30[4];
            v33 = v15;
            goto LABEL_27;
          }
          v27 = &v29->obj.klass + v31;
          v15->fields._size = v31 + 1;
        }
        v27[4] = (Il2CppClass *)v17;
      }
LABEL_28:
      if ( v19 == ++v20 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v15 || !v16 )
LABEL_37:
    sub_1BC3264(itemList, v17);
  v34 = v16->fields._size + v15->fields._size;
  if ( v34 < 1 )
  {
    *lockList = 0LL;
    sub_1BC2FAC(lockList);
    v35 = unlockList;
    *unlockList = 0LL;
  }
  else
  {
    *lockList = System_Collections_Generic_List_long___ToArray(
                  v15,
                  (const MethodInfo_368A92C *)Method_System_Collections_Generic_List_long__ToArray__);
    sub_1BC2FAC(lockList);
    *unlockList = System_Collections_Generic_List_long___ToArray(
                    v16,
                    (const MethodInfo_368A92C *)Method_System_Collections_Generic_List_long__ToArray__);
    v35 = unlockList;
  }
  sub_1BC2FAC(v35);
  return v34 > 0;
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

  if ( (byte_4AFC49F & 1) == 0 )
  {
    sub_1BC3008(&EventFortificationListViewManager_TypeInfo, v1);
    byte_4AFC49F = 1;
  }
  v2 = EventFortificationListViewManager_TypeInfo;
  if ( !EventFortificationListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationListViewManager_TypeInfo);
    v2 = EventFortificationListViewManager_TypeInfo;
  }
  servantSortStatus = v2->static_fields->servantSortStatus;
  if ( !servantSortStatus )
    sub_1BC3264(0LL, v1);
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
  const MethodInfo *v25; // x2
  UnityEngine_Object_o *viewObject; // x21
  __int64 v27; // x1
  struct ListViewObject_o *v28; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_4AFC4A6 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId);
    sub_1BC3008(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_1BC3008(&EventFortificationListViewItem_TypeInfo, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v11);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4AFC4A6 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  if ( this->fields.itemList )
  {
    UserGameMaster__getSelfUserGame(0LL);
    if ( usrSvtId < 1 )
    {
      Entity = 0LL;
    }
    else
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_37;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_37;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 usrSvtId,
                 (const MethodInfo_32B15CC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( Instance )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v31,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      *(_OWORD *)&v32.fields._list = *(_OWORD *)&v31.fields.currentCryptoKey;
      v32.fields._current = (Il2CppObject *)v31.fields.fakeValue;
      while ( 1 )
      {
        v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v32,
                (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v17 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v32,
            (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v32.fields._current
          && (methodPtr_low = LOBYTE(EventFortificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(v32.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
        {
          if ( (EventFortificationListViewItem_c *)v32.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == EventFortificationListViewItem_TypeInfo )
            current = (EventFortificationListViewItem_o *)v32.fields._current;
          else
            current = 0LL;
          if ( Entity )
          {
LABEL_15:
            if ( !current )
              sub_1BC3264(v17, v18);
            userServantEntity = current->fields.userServantEntity;
            if ( !userServantEntity )
              sub_1BC3264(v17, v18);
            v22 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v31.fields.fakeValue = v22;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v30 = v31;
            v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v30, 0LL);
            v24 = Entity[2];
            *(Il2CppObject *)&v29.fields.currentCryptoKey = Entity[1];
            *(Il2CppObject *)&v29.fields.fakeValue = v24;
            if ( v23 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v29, 0LL) )
              EventFortificationListViewItem__ModifyItem(current, (UserServantEntity_o *)Entity, v25);
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
          sub_1BC3264(v17, v18);
LABEL_26:
        viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
        {
          v28 = current->fields.viewObject;
          if ( !v28 )
            sub_1BC3264(0LL, v27);
          ((void (__fastcall *)(struct ListViewObject_o *, EventFortificationListViewItem_o *, Il2CppMethodPointer))v28->klass->vtable._5_SetItem.method)(
            v28,
            current,
            v28->klass->vtable._6_SetItem.methodPtr);
        }
      }
    }
LABEL_37:
    sub_1BC3264(Instance, v14);
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
  __int64 v18; // x2
  __int64 v19; // x3
  int64_t v20; // x22
  int32_t v21; // w23
  int64_t v22; // x24
  __int64 methodPtr_low; // x10
  __int64 v24; // x8
  __int128 v25; // q0
  __int64 v26; // x8
  __int128 v27; // q0
  int64_t v28; // x0
  const MethodInfo *v29; // x4
  bool isIconSizeChangea; // [xsp+Ch] [xbp-E4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+70h] [xbp-80h]

  if ( (byte_4AFC4A8 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantMaster___, isIconSizeChange);
    sub_1BC3008(&EventFortificationListViewItem_TypeInfo, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4AFC4A8 = 1;
  }
  sort = (int64_t)this->fields.sort;
  if ( !sort )
    goto LABEL_33;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  sort = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_33;
  sort = (int64_t)DataManager__GetMasterData_object_(
                    (DataManager_o *)sort,
                    (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
      *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
      *(_OWORD *)&v34.fields.fakeValue = v17;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v33 = v34;
      sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v33, 0LL);
      if ( size >= 1 )
      {
        v20 = sort;
        v21 = 0;
        while ( 1 )
        {
          sort = (int64_t)this->fields.itemList;
          if ( !sort )
            goto LABEL_33;
          sort = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)sort,
                            v21,
                            (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !sort )
            goto LABEL_33;
          v22 = sort;
          methodPtr_low = LOBYTE(EventFortificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)sort + 304LL) < (unsigned int)methodPtr_low
            || *(EventFortificationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)sort + 200LL) + 8 * methodPtr_low - 8) != EventFortificationListViewItem_TypeInfo )
          {
            goto LABEL_33;
          }
          v24 = *(_QWORD *)(sort + 120);
          if ( v24 )
          {
            v25 = *(_OWORD *)(v24 + 32);
            *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
            *(_OWORD *)&v34.fields.fakeValue = v25;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v32 = v34;
            sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v32, 0LL);
            if ( sort == v20 )
              break;
          }
          if ( size == ++v21 )
            goto LABEL_29;
        }
        v26 = *(_QWORD *)(v22 + 120);
        if ( !v26 )
          break;
        v27 = *(_OWORD *)(v26 + 32);
        *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)(v26 + 16);
        *(_OWORD *)&v34.fields.fakeValue = v27;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v31 = v34;
        v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v31, 0LL);
        EventFortificationListViewManager__ModifyLockItem(this, v28, 1, isIconSizeChangea, v29);
      }
LABEL_29:
      if ( ++v15 == (_DWORD)v12 )
        return;
      if ( v15 >= *(_DWORD *)(v13 + 24) )
        sub_1BC326C(sort, isIconSizeChange, v18, v19);
    }
LABEL_33:
    sub_1BC3264(sort, isIconSizeChange);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x21
  bool v20; // w20
  int64_t v21; // x0
  const MethodInfo *v22; // x1
  __int64 methodPtr_low; // x11
  EventFortificationListViewItem_o *current; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v26; // q0
  int64_t v27; // x0
  Il2CppObject v28; // q0
  int64_t v29; // x24
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x1
  UnityEngine_Object_o *viewObject; // x23
  __int64 v34; // x1
  struct ListViewObject_o *v35; // x0
  __int64 v36; // x1
  ListViewObject_o *v37; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+50h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+70h] [xbp-80h] BYREF

  if ( (byte_4AFC4A7 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId);
    sub_1BC3008(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v11);
    sub_1BC3008(&EventFortificationListViewItem_TypeInfo, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v13);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v14);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4AFC4A7 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  if ( this->fields.itemList )
  {
    UserGameMaster__getSelfUserGame(0LL);
    if ( usrSvtId < 1 )
    {
      Entity = 0LL;
    }
    else
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_45;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_45;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 usrSvtId,
                 (const MethodInfo_32B15CC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( Instance )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v41,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v20 = !isIconSizeChange && isInit;
      *(_OWORD *)&v42.fields._list = *(_OWORD *)&v41.fields.currentCryptoKey;
      v42.fields._current = (Il2CppObject *)v41.fields.fakeValue;
      while ( 1 )
      {
        v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v42,
                (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v21 & 1) == 0 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v42,
            (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v42.fields._current
          && (methodPtr_low = LOBYTE(EventFortificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(v42.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
        {
          if ( (EventFortificationListViewItem_c *)v42.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == EventFortificationListViewItem_TypeInfo )
            current = (EventFortificationListViewItem_o *)v42.fields._current;
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
          sub_1BC3264(v21, v22);
        userServantEntity = current->fields.userServantEntity;
        if ( !userServantEntity )
          sub_1BC3264(v21, v22);
        v26 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v41.fields.fakeValue = v26;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v40 = v41;
        v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v40, 0LL);
        v28 = Entity[2];
        v29 = v27;
        *(Il2CppObject *)&v39.fields.currentCryptoKey = Entity[1];
        *(Il2CppObject *)&v39.fields.fakeValue = v28;
        v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v39, 0LL);
        if ( v29 == v21 )
        {
          current->fields.userServantEntity = (struct UserServantEntity_o *)Entity;
          sub_1BC2FAC(&current->fields.userServantEntity);
          current->fields.svtTypeSetInMaster = -1;
          v21 = EventFortificationListViewItem__CheckFortificationAppointment(current, v30);
          current->fields.isAppointment = v21 & 1;
        }
LABEL_26:
        if ( v20 )
        {
          if ( !current )
            sub_1BC3264(v21, v22);
          EventFortificationListViewItem__ModifyLockItem(current, v22);
          EventFortificationListViewItem__ModifyChoiceItem(current, v31);
          EventFortificationListViewItem__ModifyPushItem(current, v32);
        }
        else if ( !current )
        {
          sub_1BC3264(v21, v22);
        }
        viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
        {
          v35 = current->fields.viewObject;
          if ( !v35 )
            sub_1BC3264(0LL, v34);
          ((void (__fastcall *)(struct ListViewObject_o *, EventFortificationListViewItem_o *, Il2CppMethodPointer))v35->klass->vtable._5_SetItem.method)(
            v35,
            current,
            v35->klass->vtable._6_SetItem.methodPtr);
          if ( isIconSizeChange )
          {
            v37 = current->fields.viewObject;
            if ( !v37 )
              sub_1BC3264(0LL, v36);
            ListViewObject__SetItemSeed(v37, (ListViewItem_o *)current, this->fields.seed, 0LL);
          }
        }
      }
    }
LABEL_45:
    sub_1BC3264(Instance, v17);
  }
}


void __fastcall EventFortificationListViewManager__OnClickBack(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct System_Action_bool__UserServantEntity__o *selectAfterCallback; // x20

  if ( (byte_4AFC4C3 & 1) == 0 )
  {
    sub_1BC3008(&Method_EventFortificationListViewManager_OnClickBack__, method);
    byte_4AFC4C3 = 1;
  }
  v3 = Method_EventFortificationListViewManager_OnClickBack__;
  if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BC3020(Method_EventFortificationListViewManager_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
  selectAfterCallback = this->fields.selectAfterCallback;
  if ( selectAfterCallback )
  {
    this->fields.selectAfterCallback = 0LL;
    sub_1BC2FAC(&this->fields.selectAfterCallback);
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

  if ( (byte_4AFC4B6 & 1) == 0 )
  {
    sub_1BC3008(&Method_EventFortificationListViewManager_OnClickBonusFilterKind__, method);
    byte_4AFC4B6 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EventFortificationListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BC3020(Method_EventFortificationListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BC3264(0LL, v5);
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

  if ( (byte_4AFC4C0 & 1) == 0 )
  {
    sub_1BC3008(&Method_EventFortificationListViewManager_EndClickTabChoice__, method);
    sub_1BC3008(&Method_EventFortificationListViewManager_OnClickChoiceTab__, v3);
    sub_1BC3008(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo, v4);
    byte_4AFC4C0 = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    v5 = Method_EventFortificationListViewManager_OnClickChoiceTab__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickChoiceTab__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BC3020(Method_EventFortificationListViewManager_OnClickChoiceTab__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v8 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_1BC3254(EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
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
      EventFortificationListViewManager__SetMode_30964952(this, 2, v13);
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

  if ( (byte_4AFC4BF & 1) == 0 )
  {
    sub_1BC3008(&Method_EventFortificationListViewManager_EndClickTabLock__, method);
    sub_1BC3008(&Method_EventFortificationListViewManager_OnClickCollectLock__, v3);
    sub_1BC3008(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo, v4);
    byte_4AFC4BF = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    v5 = Method_EventFortificationListViewManager_OnClickCollectLock__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickCollectLock__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BC3020(Method_EventFortificationListViewManager_OnClickCollectLock__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v8 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_1BC3254(EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
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
      EventFortificationListViewManager__SetMode_30964952(this, 2, v13);
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

  if ( (byte_4AFC4B4 & 1) == 0 )
  {
    sub_1BC3008(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1BC3008(&Method_EventFortificationListViewManager_EndSelectFilterKind__, v3);
    sub_1BC3008(&Method_EventFortificationListViewManager_OnClickFilterKind__, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4AFC4B4 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_EventFortificationListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BC3020(Method_EventFortificationListViewManager_OnClickFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1BC3254(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_EventFortificationListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v10 )
      sub_1BC3264(v12, v13);
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

  if ( (byte_4AFC4BE & 1) == 0 )
  {
    sub_1BC3008(&Method_EventFortificationListViewManager_EndClickTabStatus__, method);
    sub_1BC3008(&Method_EventFortificationListViewManager_OnClickNormalStatus__, v3);
    sub_1BC3008(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo, v4);
    byte_4AFC4BE = 1;
  }
  if ( this->fields.modeKind )
  {
    v5 = Method_EventFortificationListViewManager_OnClickNormalStatus__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickNormalStatus__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BC3020(Method_EventFortificationListViewManager_OnClickNormalStatus__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    v7 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_1BC3254(EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4AFC4C1 & 1) == 0 )
  {
    sub_1BC3008(&Method_EventFortificationListViewManager_EndClickTabPush__, method);
    sub_1BC3008(&Method_EventFortificationListViewManager_OnClickPushTab__, v3);
    sub_1BC3008(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo, v4);
    byte_4AFC4C1 = 1;
  }
  if ( this->fields.modeKind != 3 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v5 = Method_EventFortificationListViewManager_OnClickPushTab__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickPushTab__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BC3020(Method_EventFortificationListViewManager_OnClickPushTab__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v8 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_1BC3254(EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
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
      EventFortificationListViewManager__SetMode_30964952(this, 2, v13);
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
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  EventFortificationListViewManager_o *v8; // x0
  int v9; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  ListViewSort_o *sort; // x0
  int32_t v12; // w1
  UISprite_o *scaleChangeButtonSprite; // x20
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2

  if ( (byte_4AFC4C4 & 1) == 0 )
  {
    sub_1BC3008(&Method_EventFortificationListViewManager_OnClickScaleChange__, method);
    byte_4AFC4C4 = 1;
  }
  v3 = Method_EventFortificationListViewManager_OnClickScaleChange__;
  if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BC3020(Method_EventFortificationListViewManager_OnClickScaleChange__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v8 = this;
    v9 = 2;
    goto LABEL_11;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v8 = this;
    v9 = 3;
    goto LABEL_11;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v8 = this;
    v9 = 1;
LABEL_11:
    v8->fields.seed = smallSizeSeed;
    p_seed = &v8->fields.seed;
    *((_DWORD *)p_seed + 106) = v9;
    sub_1BC2FAC(p_seed);
  }
  sort = this->fields.sort;
  if ( !sort
    || (v12 = this->fields.scaleType,
        sort->fields.iconScaleKind = v12,
        scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, v12, 0LL),
        !scaleChangeButtonSprite) )
  {
    sub_1BC3264(sort, v5);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL);
  EventFortificationListViewManager__ModifyList(this, 1, v14);
  EventFortificationListViewManager__SetMode_30964952(this, 2, v15);
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
  __int64 fortificationConfirmDialog; // x0
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  __int64 methodPtr_low; // x10
  ListViewObject_o **p_targetInUserServantEntity; // x23
  EventFortificationListViewItem_o *Item; // x20
  ListViewObject_o **p_targetOutUserServantEntity; // x24
  System_Collections_Generic_List_object__o *v27; // x22
  System_Collections_Generic_List_int__o *v28; // x21
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v31; // q1
  struct UserServantEntity_o *v32; // x8
  __int128 v33; // q0
  __int64 v34; // x25
  struct EventFortificationWorkItem_o *v35; // x8
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  struct System_Object_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  Il2CppClass **v43; // x0
  const MethodInfo *v44; // x2
  struct UserServantEntity_o *v45; // x8
  __int128 v46; // q0
  struct UserServantEntity_o *v47; // x8
  __int128 v48; // q0
  struct EventFortificationWorkItem_o *v49; // x8
  struct System_Object_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  Il2CppClass **v53; // x0
  struct System_Int32_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  struct FortificationConfirmDialogComponent_o *v57; // x23
  System_Object_array *v58; // x22
  System_Int32_array *v59; // x21
  const MethodInfo *v60; // x1
  System_String_o *TargetTeamName; // x24
  const MethodInfo *v62; // x1
  struct EventFortificationWorkItem_o *v63; // x8
  struct EventFortificationEntity_o *v64; // x8
  System_String_o *v65; // x20
  int32_t v66; // w25
  struct System_Int32_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  struct FortificationConfirmDialogComponent_o *v70; // x23
  const MethodInfo *v71; // x1
  const MethodInfo *v72; // x1
  struct EventFortificationWorkItem_o *v73; // x8
  struct EventFortificationEntity_o *eventFortificationEntity; // x8
  System_Action_o *v75; // x26
  FortificationConfirmDialogComponent_o *v76; // x0
  int32_t v77; // w1
  struct System_Int32_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  struct System_Object_array *v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  Il2CppClass **v84; // x0
  const MethodInfo *v85; // x2
  struct System_Int32_array *v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  const MethodInfo *v89; // x1
  const MethodInfo *v90; // x1
  struct EventFortificationWorkItem_o *v91; // x8
  struct EventFortificationEntity_o *v92; // x8
  const MethodInfo *v93; // [xsp+0h] [xbp-100h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v94; // [xsp+10h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v95; // [xsp+30h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v96; // [xsp+50h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v97; // [xsp+70h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v98; // [xsp+90h] [xbp-70h]

  v3 = obj;
  if ( (byte_4AFC4AD & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, obj);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantClassMaster___, v5);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1BC3008(&Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__, v7);
    sub_1BC3008(&Method_EventFortificationListViewManager_OnClickSelectObject__, v8);
    sub_1BC3008(&EventFortificationListViewObject_TypeInfo, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__ToArray__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v15);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v16);
    sub_1BC3008(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v17);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_4AFC4AD = 1;
  }
  fortificationConfirmDialog = (__int64)this->fields.fortificationConfirmDialog;
  if ( !fortificationConfirmDialog )
    goto LABEL_89;
  fortificationConfirmDialog = (__int64)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)fortificationConfirmDialog,
                                          0LL);
  if ( !fortificationConfirmDialog )
    goto LABEL_89;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fortificationConfirmDialog, 1, 0LL);
  v21 = Method_EventFortificationListViewManager_OnClickSelectObject__;
  if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickSelectObject__ + 83) & 2) != 0 )
    v21 = (_QWORD *)sub_1BC3020(Method_EventFortificationListViewManager_OnClickSelectObject__);
  v22 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v21, v21[4]);
  OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0, 0LL);
  if ( !v3 )
    goto LABEL_89;
  methodPtr_low = LOBYTE(EventFortificationListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v3->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    goto LABEL_89;
  if ( (EventFortificationListViewObject_c *)v3->klass->_2.typeHierarchy[methodPtr_low - 1] != EventFortificationListViewObject_TypeInfo )
    goto LABEL_89;
  p_targetInUserServantEntity = (ListViewObject_o **)&this->fields.targetInUserServantEntity;
  Item = EventFortificationListViewObject__GetItem((EventFortificationListViewObject_o *)v3, (const MethodInfo *)obj);
  this->fields.targetInUserServantEntity = 0LL;
  sub_1BC2FAC(&this->fields.targetInUserServantEntity);
  p_targetOutUserServantEntity = (ListViewObject_o **)&this->fields.targetOutUserServantEntity;
  this->fields.targetOutUserServantEntity = 0LL;
  sub_1BC2FAC(&this->fields.targetOutUserServantEntity);
  fortificationConfirmDialog = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fortificationConfirmDialog )
    goto LABEL_89;
  DataManager__GetMasterData_object_(
    (DataManager_o *)fortificationConfirmDialog,
    (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  fortificationConfirmDialog = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fortificationConfirmDialog )
    goto LABEL_89;
  DataManager__GetMasterData_object_(
    (DataManager_o *)fortificationConfirmDialog,
    (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  v27 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  v28 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v28,
    (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
  targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
  if ( !targetFortificationWorkItem )
    goto LABEL_89;
  userServantEntity = targetFortificationWorkItem->fields.userServantEntity;
  if ( userServantEntity )
  {
    v31 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v98.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v98.fields.fakeValue = v31;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v97 = v98;
    fortificationConfirmDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v97, 0LL);
    if ( Item )
    {
      v32 = Item->fields.userServantEntity;
      if ( v32 )
      {
        v33 = *(_OWORD *)&v32->fields.id.fields.fakeValue;
        v34 = fortificationConfirmDialog;
        *(_OWORD *)&v96.fields.currentCryptoKey = *(_OWORD *)&v32->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v96.fields.fakeValue = v33;
        fortificationConfirmDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v96, 0LL);
        v35 = this->fields.targetFortificationWorkItem;
        if ( v34 == fortificationConfirmDialog )
        {
          if ( v35 )
          {
            *p_targetOutUserServantEntity = (ListViewObject_o *)v35->fields.userServantEntity;
            fortificationConfirmDialog = sub_1BC2FAC(&this->fields.targetOutUserServantEntity);
            if ( v27 )
            {
              obj = *p_targetOutUserServantEntity;
              items = v27->fields._items;
              v37 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v27->fields._version;
              if ( items )
              {
                size = v27->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v27,
                    (Il2CppObject *)obj,
                    *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
                }
                else
                {
                  v39 = &items->obj.klass + size;
                  v27->fields._size = size + 1;
                  v39[4] = (Il2CppClass *)obj;
                  sub_1BC2FAC(v39 + 4);
                }
                fortificationConfirmDialog = (__int64)this->fields.targetFortificationWorkItem;
                if ( fortificationConfirmDialog )
                {
                  fortificationConfirmDialog = EventFortificationWorkItem__get_AddPoint(
                                                 (EventFortificationWorkItem_o *)fortificationConfirmDialog,
                                                 (const MethodInfo *)obj);
                  if ( v28 )
                  {
                    v67 = v28->fields._items;
                    v68 = Method_System_Collections_Generic_List_int__Add__;
                    ++v28->fields._version;
                    if ( v67 )
                    {
                      v69 = v28->fields._size;
                      if ( (unsigned int)v69 >= v67->max_length )
                      {
                        System_Collections_Generic_List_int___AddWithResize(
                          v28,
                          fortificationConfirmDialog,
                          *(const MethodInfo_3683E1C **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v28->fields._size = v69 + 1;
                        v67->m_Items[v69 + 1] = fortificationConfirmDialog;
                      }
                      v70 = this->fields.fortificationConfirmDialog;
                      v58 = System_Collections_Generic_List_object___ToArray(
                              v27,
                              (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
                      v59 = System_Collections_Generic_List_int___ToArray(
                              v28,
                              (const MethodInfo_36858D4 *)Method_System_Collections_Generic_List_int__ToArray__);
                      TargetTeamName = EventFortificationListViewItem__get_TargetTeamName(Item, v71);
                      fortificationConfirmDialog = (__int64)EventFortificationListViewItem__get_TargetDetailName(
                                                              Item,
                                                              v72);
                      v73 = Item->fields.targetFortificationWorkItem;
                      if ( v73 )
                      {
                        eventFortificationEntity = v73->fields.eventFortificationEntity;
                        v65 = (System_String_o *)fortificationConfirmDialog;
                        v66 = eventFortificationEntity ? eventFortificationEntity->fields.workType : 0;
                        v75 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
                        System_Action___ctor(
                          v75,
                          (Il2CppObject *)this,
                          (intptr_t)Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__,
                          0LL);
                        if ( v70 )
                        {
                          v77 = 1;
LABEL_86:
                          v76 = v70;
                          goto LABEL_87;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else if ( v35 )
        {
          v45 = v35->fields.userServantEntity;
          if ( !v45 )
            return;
          v46 = *(_OWORD *)&v45->fields.id.fields.fakeValue;
          *(_OWORD *)&v98.fields.currentCryptoKey = *(_OWORD *)&v45->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v98.fields.fakeValue = v46;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v95 = v98;
          fortificationConfirmDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v95, 0LL);
          v47 = Item->fields.userServantEntity;
          if ( v47 )
          {
            v48 = *(_OWORD *)&v47->fields.id.fields.fakeValue;
            *(_OWORD *)&v94.fields.currentCryptoKey = *(_OWORD *)&v47->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v94.fields.fakeValue = v48;
            if ( fortificationConfirmDialog == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(
                                                 &v94,
                                                 0LL) )
              return;
            this->fields.targetInUserServantEntity = Item->fields.userServantEntity;
            fortificationConfirmDialog = sub_1BC2FAC(&this->fields.targetInUserServantEntity);
            v49 = this->fields.targetFortificationWorkItem;
            if ( v49 )
            {
              *p_targetOutUserServantEntity = (ListViewObject_o *)v49->fields.userServantEntity;
              fortificationConfirmDialog = sub_1BC2FAC(&this->fields.targetOutUserServantEntity);
              if ( v27 )
              {
                obj = *p_targetOutUserServantEntity;
                v50 = v27->fields._items;
                v51 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                ++v27->fields._version;
                if ( v50 )
                {
                  v52 = v27->fields._size;
                  if ( (unsigned int)v52 >= v50->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v27,
                      (Il2CppObject *)obj,
                      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v53 = &v50->obj.klass + v52;
                    v27->fields._size = v52 + 1;
                    v53[4] = (Il2CppClass *)obj;
                    sub_1BC2FAC(v53 + 4);
                  }
                  fortificationConfirmDialog = (__int64)this->fields.targetFortificationWorkItem;
                  if ( fortificationConfirmDialog )
                  {
                    fortificationConfirmDialog = EventFortificationWorkItem__get_AddPoint(
                                                   (EventFortificationWorkItem_o *)fortificationConfirmDialog,
                                                   (const MethodInfo *)obj);
                    if ( v28 )
                    {
                      v78 = v28->fields._items;
                      v79 = Method_System_Collections_Generic_List_int__Add__;
                      ++v28->fields._version;
                      if ( v78 )
                      {
                        v80 = v28->fields._size;
                        if ( (unsigned int)v80 >= v78->max_length )
                        {
                          System_Collections_Generic_List_int___AddWithResize(
                            v28,
                            fortificationConfirmDialog,
                            *(const MethodInfo_3683E1C **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v28->fields._size = v80 + 1;
                          v78->m_Items[v80 + 1] = fortificationConfirmDialog;
                        }
                        obj = *p_targetInUserServantEntity;
                        v81 = v27->fields._items;
                        v82 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                        ++v27->fields._version;
                        if ( v81 )
                        {
                          v83 = v27->fields._size;
                          if ( (unsigned int)v83 >= v81->max_length )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              v27,
                              (Il2CppObject *)obj,
                              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v84 = &v81->obj.klass + v83;
                            v27->fields._size = v83 + 1;
                            v84[4] = (Il2CppClass *)obj;
                            sub_1BC2FAC(v84 + 4);
                          }
                          fortificationConfirmDialog = EventFortificationDataLogic__CalculationGetPoint(
                                                         Item->fields.userServantEntity,
                                                         Item->fields.eventId,
                                                         v85);
                          v86 = v28->fields._items;
                          v87 = Method_System_Collections_Generic_List_int__Add__;
                          ++v28->fields._version;
                          if ( v86 )
                          {
                            v88 = v28->fields._size;
                            if ( (unsigned int)v88 >= v86->max_length )
                            {
                              System_Collections_Generic_List_int___AddWithResize(
                                v28,
                                fortificationConfirmDialog,
                                *(const MethodInfo_3683E1C **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v28->fields._size = v88 + 1;
                              v86->m_Items[v88 + 1] = fortificationConfirmDialog;
                            }
                            v70 = this->fields.fortificationConfirmDialog;
                            v58 = System_Collections_Generic_List_object___ToArray(
                                    v27,
                                    (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
                            v59 = System_Collections_Generic_List_int___ToArray(
                                    v28,
                                    (const MethodInfo_36858D4 *)Method_System_Collections_Generic_List_int__ToArray__);
                            TargetTeamName = EventFortificationListViewItem__get_TargetTeamName(Item, v89);
                            fortificationConfirmDialog = (__int64)EventFortificationListViewItem__get_TargetDetailName(
                                                                    Item,
                                                                    v90);
                            v91 = Item->fields.targetFortificationWorkItem;
                            if ( v91 )
                            {
                              v92 = v91->fields.eventFortificationEntity;
                              v65 = (System_String_o *)fortificationConfirmDialog;
                              v66 = v92 ? v92->fields.workType : 0;
                              v75 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
                              System_Action___ctor(
                                v75,
                                (Il2CppObject *)this,
                                (intptr_t)Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__,
                                0LL);
                              if ( v70 )
                              {
                                v77 = 2;
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
      }
    }
LABEL_89:
    sub_1BC3264(fortificationConfirmDialog, obj);
  }
  if ( !Item )
    goto LABEL_89;
  *p_targetInUserServantEntity = (ListViewObject_o *)Item->fields.userServantEntity;
  fortificationConfirmDialog = sub_1BC2FAC(&this->fields.targetInUserServantEntity);
  if ( !v27 )
    goto LABEL_89;
  obj = *p_targetInUserServantEntity;
  v40 = v27->fields._items;
  v41 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
  ++v27->fields._version;
  if ( !v40 )
    goto LABEL_89;
  v42 = v27->fields._size;
  if ( (unsigned int)v42 >= v40->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v27,
      (Il2CppObject *)obj,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
  }
  else
  {
    v43 = &v40->obj.klass + v42;
    v27->fields._size = v42 + 1;
    v43[4] = (Il2CppClass *)obj;
    sub_1BC2FAC(v43 + 4);
  }
  fortificationConfirmDialog = EventFortificationDataLogic__CalculationGetPoint(
                                 Item->fields.userServantEntity,
                                 Item->fields.eventId,
                                 v44);
  if ( !v28 )
    goto LABEL_89;
  v54 = v28->fields._items;
  v55 = Method_System_Collections_Generic_List_int__Add__;
  ++v28->fields._version;
  if ( !v54 )
    goto LABEL_89;
  v56 = v28->fields._size;
  if ( (unsigned int)v56 >= v54->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v28,
      fortificationConfirmDialog,
      *(const MethodInfo_3683E1C **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
  }
  else
  {
    v28->fields._size = v56 + 1;
    v54->m_Items[v56 + 1] = fortificationConfirmDialog;
  }
  v57 = this->fields.fortificationConfirmDialog;
  v58 = System_Collections_Generic_List_object___ToArray(
          v27,
          (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
  v59 = System_Collections_Generic_List_int___ToArray(
          v28,
          (const MethodInfo_36858D4 *)Method_System_Collections_Generic_List_int__ToArray__);
  TargetTeamName = EventFortificationListViewItem__get_TargetTeamName(Item, v60);
  fortificationConfirmDialog = (__int64)EventFortificationListViewItem__get_TargetDetailName(Item, v62);
  v63 = Item->fields.targetFortificationWorkItem;
  if ( !v63 )
    goto LABEL_89;
  v64 = v63->fields.eventFortificationEntity;
  v65 = (System_String_o *)fortificationConfirmDialog;
  v66 = v64 ? v64->fields.workType : 0;
  v75 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(
    v75,
    (Il2CppObject *)this,
    (intptr_t)Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__,
    0LL);
  if ( !v57 )
    goto LABEL_89;
  v76 = v57;
  v77 = 0;
LABEL_87:
  FortificationConfirmDialogComponent__Open(
    v76,
    v77,
    (UserServantEntity_array *)v58,
    v59,
    TargetTeamName,
    v65,
    v66,
    v75,
    v93);
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
  Il2CppObject *v25; // x19
  __int64 SelfUserGame; // x0
  __int64 v27; // x1
  __int64 methodPtr_low; // x9
  EventFortificationListViewItem_o **p_monitor; // x20
  int64_t v30; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v32; // q1
  _QWORD *v33; // x0
  System_Reflection_MethodBase_o *v34; // x0
  const MethodInfo *v35; // x2
  _QWORD *v36; // x0
  System_Reflection_MethodBase_o *v37; // x0
  Il2CppObject *Entity; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v39; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v42; // x25
  System_String_o *v43; // x21
  System_String_o *v44; // x22
  System_Object_array *v45; // x23
  int32_t Rarity; // w26
  __int64 v47; // x2
  __int64 v48; // x3
  Il2CppObject *v49; // x26
  Il2CppObject *v50; // x26
  int32_t v51; // w0
  Il2CppObject *v52; // x24
  int32_t v53; // w0
  Il2CppObject *v54; // x24
  Il2CppObject *v55; // x24
  EventFortificationListViewItem_o *v56; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v57; // x9
  ServantEntity_o *servantEntity; // x20
  Il2CppObject *v59; // x20
  System_String_o *v60; // x20
  System_String_o *v61; // x22
  System_String_o *v62; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v64; // x25
  __int64 v65; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16

  if ( (byte_4AFC4C5 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, obj);
    sub_1BC3008(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantMaster___, v7);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1BC3008(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_1BC3008(&Method_EventFortificationListViewManager_OnClickSelectPush__, v10);
    sub_1BC3008(&EventFortificationListViewObject_TypeInfo, v11);
    sub_1BC3008(&LocalizationManager_TypeInfo, v12);
    sub_1BC3008(&object___TypeInfo, v13);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_1BC3008(&Rarity_TypeInfo, v16);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1BC3008(&Method_EventFortificationListViewManager___c__DisplayClass96_0__OnClickSelectPush_b__0__, v19);
    sub_1BC3008(&EventFortificationListViewManager___c__DisplayClass96_0_TypeInfo, v20);
    sub_1BC3008(&StringLiteral_11833/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v21);
    sub_1BC3008(&StringLiteral_11831/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v22);
    sub_1BC3008(&StringLiteral_11832/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v23);
    sub_1BC3008(&StringLiteral_11834/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v24);
    byte_4AFC4C5 = 1;
  }
  v25 = (Il2CppObject *)sub_1BC3254(EventFortificationListViewManager___c__DisplayClass96_0_TypeInfo);
  System_Object___ctor(v25, 0LL);
  if ( !v25 )
    goto LABEL_62;
  v25[1].klass = (Il2CppClass *)this;
  SelfUserGame = sub_1BC2FAC(&v25[1]);
  if ( !obj )
    goto LABEL_62;
  methodPtr_low = LOBYTE(EventFortificationListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventFortificationListViewObject_TypeInfo )
  {
    SelfUserGame = sub_1BC3524(obj);
    goto LABEL_64;
  }
  v25[1].monitor = EventFortificationListViewObject__GetItem(
                     (EventFortificationListViewObject_o *)obj,
                     (const MethodInfo *)EventFortificationListViewObject_TypeInfo);
  p_monitor = (EventFortificationListViewItem_o **)&v25[1].monitor;
  sub_1BC2FAC(&v25[1].monitor);
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_62;
  v30 = *(_QWORD *)(SelfUserGame + 128);
  if ( v30 )
  {
    if ( !*p_monitor )
      goto LABEL_62;
    userServantEntity = (*p_monitor)->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_62;
    v32 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v67.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v67.fields.fakeValue = v32;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v66 = v67;
    if ( v30 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v66, 0LL) )
      goto LABEL_14;
    v36 = Method_EventFortificationListViewManager_OnClickSelectPush__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickSelectPush__ + 83) & 2) != 0 )
      v36 = (_QWORD *)sub_1BC3020(Method_EventFortificationListViewManager_OnClickSelectPush__);
    v37 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v36, v36[4]);
    OverwriteAssetSoundName__PlaySystemSe(v37, 0, 0, 0LL);
    SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_62;
    SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)SelfUserGame,
                              (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !SelfUserGame )
      goto LABEL_62;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
               v30,
               (const MethodInfo_32B15CC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_62;
    SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)SelfUserGame,
                              (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_62;
    v39 = (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame;
    klass = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v68.fields.currentCryptoKey = klass;
    *(_QWORD *)&v68.fields.fakeValue = monitor;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v68, 0LL);
    if ( !v39 )
      goto LABEL_62;
    v42 = DataMasterBase_object__object__int___GetEntity(
            v39,
            SelfUserGame,
            (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v43 = LocalizationManager__Get((System_String_o *)StringLiteral_11834/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
    v44 = LocalizationManager__Get((System_String_o *)StringLiteral_11833/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    v45 = (System_Object_array *)sub_1BC30B0(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    SelfUserGame = (__int64)Rarity__getRarityType(Rarity, 0LL);
    if ( !v45 )
LABEL_62:
      sub_1BC3264(SelfUserGame, v27);
    v49 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1BC3144(SelfUserGame, v45->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( !v45->max_length )
      goto LABEL_64;
    v45->m_Items[0] = v49;
    SelfUserGame = sub_1BC2FAC(v45->m_Items);
    if ( !v42 )
      goto LABEL_62;
    SelfUserGame = (__int64)ServantEntity__getClassName((ServantEntity_o *)v42, 0LL);
    v50 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1BC3144(SelfUserGame, v45->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( v45->max_length <= 1 )
      goto LABEL_64;
    v45->m_Items[1] = v50;
    sub_1BC2FAC(&v45->m_Items[1]);
    v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
            (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
            0LL);
    SelfUserGame = (__int64)ServantEntity__getName((ServantEntity_o *)v42, v51, -1, 1, 0LL);
    v52 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1BC3144(SelfUserGame, v45->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( v45->max_length <= 2 )
      goto LABEL_64;
    v45->m_Items[2] = v52;
    SelfUserGame = sub_1BC2FAC(&v45->m_Items[2]);
    if ( !*p_monitor )
      goto LABEL_62;
    SelfUserGame = (__int64)(*p_monitor)->fields.userServantEntity;
    if ( !SelfUserGame )
      goto LABEL_62;
    v53 = UserServantEntity__getRarity((UserServantEntity_o *)SelfUserGame, 0LL);
    SelfUserGame = (__int64)Rarity__getRarityType(v53, 0LL);
    v54 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1BC3144(SelfUserGame, v45->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( v45->max_length <= 3 )
      goto LABEL_64;
    v45->m_Items[3] = v54;
    SelfUserGame = sub_1BC2FAC(&v45->m_Items[3]);
    if ( !*p_monitor )
      goto LABEL_62;
    SelfUserGame = (__int64)(*p_monitor)->fields.servantEntity;
    if ( !SelfUserGame )
      goto LABEL_62;
    SelfUserGame = (__int64)ServantEntity__getClassName((ServantEntity_o *)SelfUserGame, 0LL);
    v55 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1BC3144(SelfUserGame, v45->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( v45->max_length <= 4 )
      goto LABEL_64;
    v45->m_Items[4] = v55;
    SelfUserGame = sub_1BC2FAC(&v45->m_Items[4]);
    v56 = *p_monitor;
    if ( !*p_monitor )
      goto LABEL_62;
    v57 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v56->fields.userServantEntity;
    if ( !v57 )
      goto LABEL_62;
    servantEntity = v56->fields.servantEntity;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v57[6], 0LL);
    if ( !servantEntity )
      goto LABEL_62;
    SelfUserGame = (__int64)ServantEntity__getName(servantEntity, SelfUserGame, -1, 1, 0LL);
    v59 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1BC3144(SelfUserGame, v45->obj.klass->_1.element_class);
      if ( !SelfUserGame )
      {
LABEL_65:
        v65 = sub_1BC3288();
        sub_1BC3130(v65, 0LL);
      }
    }
    if ( v45->max_length > 5 )
    {
      v45->m_Items[5] = v59;
      sub_1BC2FAC(&v45->m_Items[5]);
      v60 = System_String__Format_62390076(v44, v45, 0LL);
      v61 = LocalizationManager__Get((System_String_o *)StringLiteral_11832/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
      v62 = LocalizationManager__Get((System_String_o *)StringLiteral_11831/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v64 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BC3254(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v64,
        v25,
        Method_EventFortificationListViewManager___c__DisplayClass96_0__OnClickSelectPush_b__0__,
        0LL);
      SelfUserGame = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        SelfUserGame = (__int64)BalanceConfig_TypeInfo;
      }
      if ( Instance )
      {
        CommonUI__OpenConfirmDialog_30731096(
          (CommonUI_o *)Instance,
          v43,
          v60,
          v61,
          v62,
          v64,
          *(_DWORD *)(*(_QWORD *)(SelfUserGame + 184) + 512LL),
          *(_DWORD *)(*(_QWORD *)(SelfUserGame + 184) + 524LL),
          15.0,
          700,
          0,
          480,
          -162.5,
          0,
          0,
          240,
          0,
          0LL);
        return;
      }
      goto LABEL_62;
    }
LABEL_64:
    sub_1BC326C(SelfUserGame, v27, v47, v48);
  }
LABEL_14:
  v33 = Method_EventFortificationListViewManager_OnClickSelectPush__;
  if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickSelectPush__ + 83) & 2) != 0 )
    v33 = (_QWORD *)sub_1BC3020(Method_EventFortificationListViewManager_OnClickSelectPush__);
  v34 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v33, v33[4]);
  OverwriteAssetSoundName__PlaySystemSe(v34, 8, 0, 0LL);
  EventFortificationListViewManager__PushRequest(this, *p_monitor, v35);
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

  if ( (byte_4AFC4BA & 1) == 0 )
  {
    sub_1BC3008(&Method_EventFortificationListViewManager_OnClickSortAscendingOrder__, method);
    byte_4AFC4BA = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EventFortificationListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BC3020(Method_EventFortificationListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BC3264(v5, v6);
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

  if ( (byte_4AFC4B8 & 1) == 0 )
  {
    sub_1BC3008(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1BC3008(&Method_EventFortificationListViewManager_EndSelectSortKind__, v3);
    sub_1BC3008(&Method_EventFortificationListViewManager_OnClickSortButton__, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4AFC4B8 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_EventFortificationListViewManager_OnClickSortButton__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickSortButton__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BC3020(Method_EventFortificationListViewManager_OnClickSortButton__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1BC3254(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_EventFortificationListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v10 )
      sub_1BC3264(v12, v13);
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

  if ( (byte_4AFC4B0 & 1) == 0 )
  {
    sub_1BC3008(&ServantStatusDialog_EndDelegate_TypeInfo, obj);
    sub_1BC3008(&Method_EventFortificationListViewManager_EndShowServant__, v5);
    sub_1BC3008(&Method_EventFortificationListViewManager_OnLongPushListView__, v6);
    sub_1BC3008(&EventFortificationListViewObject_TypeInfo, v7);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_4AFC4B0 = 1;
  }
  if ( (unsigned int)(this->fields.modeKind - 1) >= 3 )
  {
    v9 = Method_EventFortificationListViewManager_OnLongPushListView__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1BC3020(Method_EventFortificationListViewManager_OnLongPushListView__);
    v10 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0LL);
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_13;
    UnityEngine_Behaviour__set_enabled(scrollView, 0, 0LL);
    if ( !obj
      || (methodPtr_low = LOBYTE(EventFortificationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
      || (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventFortificationListViewObject_TypeInfo
      || (Item = EventFortificationListViewObject__GetItem((EventFortificationListViewObject_o *)obj, v11),
          scrollView = (UnityEngine_Behaviour_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          !Item)
      || (userServantEntity = Item->fields.userServantEntity,
          v16 = (CommonUI_o *)scrollView,
          v17 = (ServantStatusDialog_EndDelegate_o *)sub_1BC3254(ServantStatusDialog_EndDelegate_TypeInfo),
          ServantStatusDialog_EndDelegate___ctor(
            v17,
            (Il2CppObject *)this,
            Method_EventFortificationListViewManager_EndShowServant__,
            0LL),
          !v16) )
    {
LABEL_13:
      sub_1BC3264(scrollView, v11);
    }
    CommonUI__OpenServantStatusDialog_30741392(v16, 0, userServantEntity, v17, 0LL);
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

  if ( (byte_4AFC4AC & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4AFC4AC = 1;
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
          sub_1BC3264(v8, v7);
        }
        UIScrollView__UpdatePosition((UIScrollView_o *)v8, 0LL);
        CallbackFunc2 = this->fields.CallbackFunc2;
        this->fields.CallbackFunc2 = 0LL;
        sub_1BC2FAC(&this->fields.CallbackFunc2);
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
  struct System_Threading_Thread_o *writeMasterDataThread; // x8
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
  struct System_Threading_SynchronizationContext_o *context; // [xsp+68h] [xbp-F8h]
  int64_t v47; // [xsp+70h] [xbp-F0h]
  struct System_Threading_Thread_o *v48; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_4AFC4C6 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_1BC3008(&Method_EventFortificationListViewManager_EndPushRequest__, v5);
    sub_1BC3008(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6);
    sub_1BC3008(&NetworkManager_TypeInfo, v7);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1BC3008(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4AFC4C6 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v15 = limitCountSupport;
  userServantEntity = selectItem->fields.userServantEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v53, 0LL);
  if ( !v17 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v17, v18, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v22 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  writeMasterDataThread = v15->fields.writeMasterDataThread;
  p_fields = &userServantEntity->fields;
  *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v52.fields.fakeValue = v22;
  v48 = writeMasterDataThread;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v51 = v52;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v51, 0LL);
  v26 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  context = v15->fields.context;
  v47 = v25;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v26;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v50, 0LL);
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_1BC3254(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    Method_EventFortificationListViewManager_EndPushRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v27,
                     (const MethodInfo_3089B54 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v29 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v30 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v49.fields.fakeValue = v29;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v49, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                      userServantEntity->fields.imageLimitCount,
                      0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
          userServantEntity->fields.dispLimitCount,
          0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
          userServantEntity->fields.commandCardLimitCount,
          0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
          userServantEntity->fields.iconLimitCount,
          0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
          userServantEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userServantEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v36 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                  userServantEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                       userServantEntity->fields.randomLimitCount,
                       0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
          userServantEntity->fields.randomLimitCountSupport,
          0LL);
  v41 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v54.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v40;
  *(_QWORD *)&v54.fields.currentCryptoKey = v41;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v54, 0LL);
  if ( !v30 )
LABEL_18:
    sub_1BC3264(limitCountSupport, v14);
  CardFavoriteRequest__beginRequest(
    v30,
    targetUsrSVtId,
    imageLimitCount,
    v31,
    v32,
    v33,
    v34,
    context == (struct System_Threading_SynchronizationContext_o *)v45,
    IsLock,
    v36 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v48 != (struct System_Threading_Thread_o *)v47,
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

  if ( (byte_4AFC4A3 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Count__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Item__, v3);
    byte_4AFC4A3 = 1;
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
                                                                  (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Item__);
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
    sub_1BC3264(ObjectList, v5);
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

  if ( (byte_4AFC4AB & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BC3008(&Method_EventFortificationListViewManager_OnMoveEnd__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Count__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Item__, v9);
    sub_1BC3008(&StringLiteral_9854/*"OnMoveEnd"*/, v10);
    byte_4AFC4AB = 1;
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
               (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Item__);
      v17 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_EventFortificationListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        break;
      EventFortificationListViewObject__Init_30965476((EventFortificationListViewObject_o *)Item, mode, v17, v18);
      if ( size == ++v15 )
        return;
    }
LABEL_10:
    sub_1BC3264(ObjectList, v12);
  }
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9854/*"OnMoveEnd"*/,
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

  if ( (byte_4AFC4B7 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_17332/*"btn_filter_on"*/, method);
    sub_1BC3008(&StringLiteral_17331/*"btn_filter"*/, v3);
    byte_4AFC4B7 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1BC3264(sort, method);
  }
  v6 = (System_String_o **)&StringLiteral_17331/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17332/*"btn_filter_on"*/;
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

  if ( (byte_4AFC4A5 & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, method);
    sub_1BC3008(&StringLiteral_11542/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v3);
    sub_1BC3008(&StringLiteral_11540/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v4);
    sub_1BC3008(&StringLiteral_11541/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v5);
    sub_1BC3008(&StringLiteral_6441/*"FORTIFICATION_GUIDE_HELP"*/, v6);
    byte_4AFC4A5 = 1;
  }
  switch ( this->fields.modeKind )
  {
    case 0:
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6441/*"FORTIFICATION_GUIDE_HELP"*/, 0LL);
      targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
      if ( !targetFortificationWorkItem )
        goto LABEL_28;
      v11 = (System_String_o *)v8;
      v12 = this->fields.targetFortificationWorkItem;
      if ( (byte_4AFC4F7 & 1) == 0 )
      {
        v8 = sub_1BC3008(&StringLiteral_1/*""*/, v9);
        byte_4AFC4F7 = 1;
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
      v8 = (__int64)System_String__Format_62389940(
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
      v19 = &StringLiteral_11541/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
      goto LABEL_25;
    case 2:
      v18 = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = &StringLiteral_11540/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
      goto LABEL_25;
    case 3:
      v18 = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = &StringLiteral_11542/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_25:
      v8 = (__int64)LocalizationManager__Get((System_String_o *)*v19, 0LL);
      if ( !v18 )
LABEL_28:
        sub_1BC3264(v8, v9);
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
  sub_1BC2FAC(&this->fields.Callback);
  EventFortificationListViewManager__SetMode_30964952(this, mode, v6);
}


void __fastcall EventFortificationListViewManager__SetMode_30964952(
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


void __fastcall EventFortificationListViewManager__SetMode_30965060(
        EventFortificationListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.CallbackFunc2 = callback;
  sub_1BC2FAC(&this->fields.CallbackFunc2);
  EventFortificationListViewManager__SetMode_30964952(this, mode, v6);
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
  if ( (byte_4AFC4AA & 1) == 0 )
  {
    this = (EventFortificationListViewManager_o *)sub_1BC3008(&EventFortificationListViewObject_TypeInfo, obj);
    byte_4AFC4AA = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(EventFortificationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventFortificationListViewObject_TypeInfo )
  {
    sub_1BC3264(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  EventFortificationListViewObject__Init_30964828(
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

  if ( (byte_4AFC4BB & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&StringLiteral_17368/*"btn_sort_up"*/, v3);
    sub_1BC3008(&StringLiteral_17463/*"btn_txt_up"*/, v4);
    sub_1BC3008(&StringLiteral_17416/*"btn_txt_new"*/, v5);
    sub_1BC3008(&StringLiteral_17406/*"btn_txt_down"*/, v6);
    sub_1BC3008(&StringLiteral_17423/*"btn_txt_old"*/, v7);
    sub_1BC3008(&StringLiteral_17365/*"btn_sort_down"*/, v8);
    byte_4AFC4BB = 1;
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
          v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17423/*"btn_txt_old"*/ : &StringLiteral_17416/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
          v17 = this->fields.sort;
          if ( v17 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v18 = (System_String_o **)&StringLiteral_17365/*"btn_sort_down"*/;
              v19 = (System_String_o **)&StringLiteral_17368/*"btn_sort_up"*/;
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
          v20 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17463/*"btn_txt_up"*/ : &StringLiteral_17406/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
          v17 = this->fields.sort;
          if ( v17 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v18 = (System_String_o **)&StringLiteral_17368/*"btn_sort_up"*/;
              v19 = (System_String_o **)&StringLiteral_17365/*"btn_sort_down"*/;
              goto LABEL_31;
            }
          }
        }
      }
    }
LABEL_35:
    sub_1BC3264(sort, v10);
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

  if ( (byte_4AFC4A4 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_17496/*"button_push_reg"*/, *(_QWORD *)&modeKind);
    sub_1BC3008(&StringLiteral_17497/*"button_push_unreg"*/, v5);
    sub_1BC3008(&StringLiteral_17482/*"button_allchoice_reg"*/, v6);
    sub_1BC3008(&StringLiteral_17485/*"button_alllock_unreg"*/, v7);
    sub_1BC3008(&StringLiteral_17498/*"button_select_reg"*/, v8);
    sub_1BC3008(&StringLiteral_17499/*"button_select_unreg"*/, v9);
    sub_1BC3008(&StringLiteral_17484/*"button_alllock_reg"*/, v10);
    sub_1BC3008(&StringLiteral_17483/*"button_allchoice_unreg"*/, v11);
    byte_4AFC4A4 = 1;
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
  v13 = &StringLiteral_17498/*"button_select_reg"*/;
  if ( modeKind )
    v13 = &StringLiteral_17499/*"button_select_unreg"*/;
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
  v14 = &StringLiteral_17484/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v14 = &StringLiteral_17485/*"button_alllock_unreg"*/;
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
  v15 = &StringLiteral_17482/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v15 = &StringLiteral_17483/*"button_allchoice_unreg"*/;
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
  v16 = &StringLiteral_17496/*"button_push_reg"*/;
  if ( modeKind != 3 )
    v16 = &StringLiteral_17497/*"button_push_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v16, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
  if ( !statusTabButton )
LABEL_28:
    sub_1BC3264(statusTabButton, *(_QWORD *)&modeKind);
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
  NetworkManager_ResultCallbackFunc_o *v10; // x20
  Il2CppObject *Request_object; // x0
  __int64 v12; // x1
  System_Int64_array *v13; // x1
  System_Int64_array *v14; // x2
  bool v15; // w4
  bool v16; // w5
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  System_Int64_array *v18; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4AFC4C2 & 1) == 0 )
  {
    sub_1BC3008(&Method_EventFortificationListViewManager_EndStatusSync__, callback);
    sub_1BC3008(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v6);
    sub_1BC3008(&NetworkManager_TypeInfo, v7);
    sub_1BC3008(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_4AFC4C2 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v18 = 0LL;
  choiceList = 0LL;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    if ( EventFortificationListViewManager__GetSwapChoiceList(this, &choiceList, &v18, v3) )
    {
      this->fields.requestCallback = callback;
      sub_1BC2FAC(&this->fields.requestCallback);
      v17 = (NetworkManager_ResultCallbackFunc_o *)sub_1BC3254(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v17,
                         (const MethodInfo_3089B54 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_object )
      {
        v14 = v18;
        v13 = choiceList;
        v16 = 1;
        v15 = 0;
        goto LABEL_15;
      }
LABEL_19:
      sub_1BC3264(Request_object, v12);
    }
  }
  else if ( modeKind == 1 && EventFortificationListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_1BC2FAC(&this->fields.requestCallback);
    v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1BC3254(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_EventFortificationListViewManager_EndStatusSync__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v10,
                       (const MethodInfo_3089B54 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( Request_object )
    {
      v14 = unlockList;
      v13 = lockList;
      v15 = 1;
      v16 = 0;
LABEL_15:
      CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)Request_object, v13, v14, 0, v15, v16, 0LL);
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

  if ( (byte_4AFC49A & 1) == 0 )
  {
    sub_1BC3008(&EventFortificationListViewManager_CallbackFunc_TypeInfo, value);
    byte_4AFC49A = 1;
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
    v8 = sub_1BFD098(p_Callback, v7, Callback);
    v9 = Callback == (System_Delegate_o *)v8;
    Callback = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventFortificationListViewManager_o *)sub_1BC3524(v7);
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

  if ( (byte_4AFC49C & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, value);
    byte_4AFC49C = 1;
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
    v8 = sub_1BFD098(p_CallbackFunc2, v7, CallbackFunc2);
    v9 = CallbackFunc2 == (System_Delegate_o *)v8;
    CallbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventFortificationListViewManager_o *)sub_1BC3524(v7);
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
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 v16; // x10
  Il2CppClass **v17; // x0

  if ( (byte_4AFC4A1 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1BC3008(&System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo, v7);
    byte_4AFC4A1 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__);
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
                                                                  (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        break;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___);
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
        objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_42785324(
                                                                    (ListViewManager_o *)this,
                                                                    (ListViewItem_o *)objectList,
                                                                    0LL);
        if ( ((unsigned __int8)objectList & 1) == 0 )
          continue;
      }
      if ( !v8 )
        break;
      items = v8->fields._items;
      v15 = Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__;
      ++v8->fields._version;
      if ( !items )
        break;
      v16 = v8->fields._size;
      if ( (unsigned int)v16 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          v13,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        v17 = &items->obj.klass + v16;
        v8->fields._size = v16 + 1;
        v17[4] = (Il2CppClass *)v13;
        sub_1BC2FAC(v17 + 4);
      }
      if ( size == ++v12 )
        return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v8;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_18:
    sub_1BC3264(objectList, v9);
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
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  System_Collections_Generic_List_object__o *v18; // x1
  Il2CppClass **v19; // x0

  if ( (byte_4AFC4A0 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1BC3008(&System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo, v7);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v8);
    byte_4AFC4A0 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__);
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
               (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                    (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___);
        if ( !v9 )
          break;
        items = v9->fields._items;
        v16 = Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        v17 = v9->fields._size;
        v18 = objectList;
        if ( (unsigned int)v17 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)objectList,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + v17;
          v9->fields._size = v17 + 1;
          v19[4] = (Il2CppClass *)v18;
          sub_1BC2FAC(v19 + 4);
        }
      }
      if ( size == ++v13 )
        return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v9;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_1BC3264(objectList, v10);
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

  if ( (byte_4AFC49B & 1) == 0 )
  {
    sub_1BC3008(&EventFortificationListViewManager_CallbackFunc_TypeInfo, value);
    byte_4AFC49B = 1;
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
    v8 = sub_1BFD098(p_Callback, v7, Callback);
    v9 = Callback == (System_Delegate_o *)v8;
    Callback = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventFortificationListViewManager_o *)sub_1BC3524(v7);
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

  if ( (byte_4AFC49D & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, value);
    byte_4AFC49D = 1;
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
    v8 = sub_1BFD098(p_CallbackFunc2, v7, CallbackFunc2);
    v9 = CallbackFunc2 == (System_Delegate_o *)v8;
    CallbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1BC3524(v7);
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
  sub_1BC2FAC(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BC30C8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BC3280(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BC3130(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A04C2C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A04BD4;
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
  if ( (byte_4AFC4C8 & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1BC3008(&EventFortificationListViewManager_ResultKind_TypeInfo, v9);
    byte_4AFC4C8 = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             EventFortificationListViewManager_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&index,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1BC2FBC(this, v14, callback, object);
}


void __fastcall EventFortificationListViewManager_CallbackFunc__EndInvoke(
        EventFortificationListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BC2FC0(result, 0LL, method);
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
  sub_1BC2FAC(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BC30C8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BC3280(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BC3130(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A04C98;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A04C50;
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
  if ( (byte_4AFC4C9 & 1) == 0 )
  {
    sub_1BC3008(&bool_TypeInfo, isRequest);
    byte_4AFC4C9 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BC2FBC(this, v9, callback, object);
}


void __fastcall EventFortificationListViewManager_RequestCallbackFunc__EndInvoke(
        EventFortificationListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BC2FC0(result, 0LL, method);
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
    sub_1BC3264(this, data);
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
  if ( (byte_4AFC4CA & 1) == 0 )
  {
    this = (EventFortificationListViewManager___c__DisplayClass48_0_o *)sub_1BC3008(
                                                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                          data);
    byte_4AFC4CA = 1;
  }
  if ( !data )
    goto LABEL_9;
  v6 = *(_QWORD *)&data->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&data->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v6;
  *(_QWORD *)&v10.fields.fakeValue = v5;
  this = (EventFortificationListViewManager___c__DisplayClass48_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                                                        v10,
                                                                        0LL);
  targetItem = v4->fields.targetItem;
  if ( !targetItem
    || (userServantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)targetItem->fields.userServantEntity) == 0LL )
  {
LABEL_9:
    sub_1BC3264(this, data);
  }
  return (_DWORD)this == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(userServantEntity[5], 0LL);
}


void __fastcall EventFortificationListViewManager___c__DisplayClass96_0___ctor(
        EventFortificationListViewManager___c__DisplayClass96_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager___c__DisplayClass96_0___OnClickSelectPush_b__0(
        EventFortificationListViewManager___c__DisplayClass96_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  CommonUI_o *v9; // x20
  System_Action_o *_9__1; // x22

  if ( (byte_4AFC4CB & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, isDecide);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BC3008(&Method_EventFortificationListViewManager___c__DisplayClass96_0__OnClickSelectPush_b__1__, v6);
    byte_4AFC4CB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager___c__DisplayClass96_0__OnClickSelectPush_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      Instance = (Il2CppObject *)sub_1BC2FAC(&this->fields.__9__1);
    }
    if ( v9 )
    {
      CommonUI__CloseConfirmDialog_30731324(v9, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_1BC3264(Instance, v8);
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
    sub_1BC3264(this, method);
  EventFortificationListViewManager__PushRequest(this->fields.__4__this, this->fields.selectItem, v2);
}