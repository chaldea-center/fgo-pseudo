void __fastcall EventFortificationListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *SORT_SAVE_KEY; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  ListViewSort_o *v9; // x20
  struct EventFortificationListViewManager_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A00117 & 1) == 0 )
  {
    sub_1B640C8(&EventFortificationListViewManager_TypeInfo, v1);
    sub_1B640C8(&ListViewSort_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_6184/*"EventServantFatigueList"*/, v5);
    byte_4A00117 = 1;
  }
  EventFortificationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_6184/*"EventServantFatigueList"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EventFortificationListViewManager_TypeInfo->static_fields,
    StringLiteral_6184/*"EventServantFatigueList"*/,
    v2,
    v3);
  SORT_SAVE_KEY = EventFortificationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v9 = (ListViewSort_o *)sub_1B64314(ListViewSort_TypeInfo, v7, v8);
  ListViewSort___ctor_40426136(v9, SORT_SAVE_KEY, 3, 0, 0LL);
  static_fields = EventFortificationListViewManager_TypeInfo->static_fields;
  static_fields->servantSortStatus = v9;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->servantSortStatus, (int32_t)v9, v11, v12);
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
  const MethodInfo *v5; // x1
  struct System_Action_bool__UserServantEntity__o *v6; // x8
  Il2CppObject *m_target; // x4
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int64 v9; // x3
  __int64 v10; // x1
  struct UserServantEntity_o *targetInUserServantEntity; // x2
  struct System_Action_bool__UserServantEntity__o *selectAfterCallback; // x8

  v4 = this;
  if ( (byte_4A00100 & 1) == 0 )
  {
    this = (EventFortificationListViewManager_o *)sub_1B640C8(&StringLiteral_21968/*"ng"*/, result);
    byte_4A00100 = 1;
  }
  if ( !result )
    goto LABEL_11;
  this = (EventFortificationListViewManager_o *)System_String__Equals_61383712(
                                                  result,
                                                  (System_String_o *)StringLiteral_21968/*"ng"*/,
                                                  0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    this = (EventFortificationListViewManager_o *)v4->fields.fortificationConfirmDialog;
    if ( this )
    {
      FortificationConfirmDialogComponent__Close((FortificationConfirmDialogComponent_o *)this, v5);
      selectAfterCallback = v4->fields.selectAfterCallback;
      if ( selectAfterCallback )
      {
        targetInUserServantEntity = v4->fields.targetInUserServantEntity;
        m_target = selectAfterCallback->fields.m_target;
        original_method_info = selectAfterCallback->fields.original_method_info;
        v9 = *(_QWORD *)&selectAfterCallback->fields.extra_arg;
        v10 = 1LL;
        goto LABEL_10;
      }
    }
LABEL_11:
    sub_1B64324(this);
  }
  v6 = v4->fields.selectAfterCallback;
  if ( !v6 )
    goto LABEL_11;
  m_target = v6->fields.m_target;
  original_method_info = v6->fields.original_method_info;
  v9 = *(_QWORD *)&v6->fields.extra_arg;
  v10 = 0LL;
  targetInUserServantEntity = 0LL;
LABEL_10:
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, struct UserServantEntity_o *, __int64))m_target)(
    original_method_info,
    v10,
    targetInUserServantEntity,
    v9);
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
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *v17; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  NetworkManager_ResultCallbackFunc_o *v20; // x21
  System_Object_array *Request_object; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  struct UserServantEntity_o *targetInUserServantEntity; // x9
  struct UserServantEntity_o *targetOutUserServantEntity; // x10
  EventFortificationRequest_o *v26; // x21
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x8
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x10
  __int128 v29; // q1
  int32_t fortificationIdx; // w23
  int32_t position; // w24
  __int128 *v32; // x0
  struct EventFortificationWorkItem_o *v33; // x8
  struct EventFortificationDetailEntity_o *v34; // x9
  int32_t v35; // w24
  int32_t v36; // w23
  EnterUserSvtInfo_o *v37; // x0
  Il2CppObject *v38; // x22
  int32_t v39; // w1
  int32_t v40; // w2
  int64_t v41; // x3
  struct EventFortificationDetailEntity_o *v42; // x10
  __int128 v43; // q1
  int64_t v44; // x25
  __int64 v45; // x1
  __int64 v46; // x2
  int32_t v47; // w2
  int32_t v48; // w3
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x0
  int32_t eventId; // w19
  const MethodInfo *v54; // x3
  __int128 v55[2]; // [xsp+0h] [xbp-A0h] BYREF
  __int128 v56[2]; // [xsp+20h] [xbp-80h] BYREF
  __int128 v57; // [xsp+40h] [xbp-60h]
  __int128 v58; // [xsp+50h] [xbp-50h]

  if ( (byte_4A000FF & 1) == 0 )
  {
    sub_1B640C8(&EnterUserSvtInfo_TypeInfo, method);
    sub_1B640C8(&Method_EventFortificationListViewManager_CallbackFortificationRequest__, v3);
    sub_1B640C8(&Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo, v8);
    sub_1B640C8(&Method_NetworkManager_getRequest_EventFortificationRequest___, v9);
    sub_1B640C8(&NetworkManager_TypeInfo, v10);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v12);
    byte_4A000FF = 1;
  }
  v13 = Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__;
  if ( (*((_BYTE *)Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1B640E0(Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__);
  v14 = (System_Reflection_MethodBase_o *)sub_1B640AC(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 8, 0LL);
  v17 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo,
                                                       v15,
                                                       v16);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__);
  v20 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v18, v19);
  NetworkManager_ResultCallbackFunc___ctor(
    v20,
    (Il2CppObject *)this,
    Method_EventFortificationListViewManager_CallbackFortificationRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = (System_Object_array *)NetworkManager__getRequest_object_(
                                            v20,
                                            (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_EventFortificationRequest___);
  targetInUserServantEntity = this->fields.targetInUserServantEntity;
  targetOutUserServantEntity = this->fields.targetOutUserServantEntity;
  v26 = (EventFortificationRequest_o *)Request_object;
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
      v29 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.fakeValue;
      fortificationIdx = eventFortificationDetailEntity->fields.fortificationIdx;
      position = targetFortificationWorkItem->fields.position;
      v57 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.currentCryptoKey;
      v58 = v29;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v32 = v56;
      v56[0] = v57;
      v56[1] = v58;
    }
    else
    {
      if ( !targetFortificationWorkItem )
        goto LABEL_32;
      v42 = targetFortificationWorkItem->fields.eventFortificationDetailEntity;
      if ( !v42 )
        goto LABEL_32;
      v43 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.fakeValue;
      fortificationIdx = v42->fields.fortificationIdx;
      position = targetFortificationWorkItem->fields.position;
      v57 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.currentCryptoKey;
      v58 = v43;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v32 = v55;
      v55[0] = v57;
      v55[1] = v58;
    }
    v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(
            (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v32,
            0LL);
    v37 = (EnterUserSvtInfo_o *)sub_1B64314(EnterUserSvtInfo_TypeInfo, v45, v46);
    v38 = (Il2CppObject *)v37;
    v39 = fortificationIdx;
    v40 = position;
    v41 = v44;
  }
  else
  {
    if ( !targetOutUserServantEntity )
      return;
    v33 = this->fields.targetFortificationWorkItem;
    if ( !v33 || (v34 = v33->fields.eventFortificationDetailEntity) == 0LL )
LABEL_32:
      sub_1B64324(Request_object);
    v35 = v33->fields.position;
    v36 = v34->fields.fortificationIdx;
    v37 = (EnterUserSvtInfo_o *)sub_1B64314(EnterUserSvtInfo_TypeInfo, v22, v23);
    v38 = (Il2CppObject *)v37;
    v39 = v36;
    v40 = v35;
    v41 = 0LL;
  }
  EnterUserSvtInfo___ctor(v37, v39, v40, v41, 0LL);
  if ( !v17 )
    goto LABEL_32;
  items = v17->fields._items;
  v50 = Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__;
  ++v17->fields._version;
  if ( !items )
    goto LABEL_32;
  size = v17->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v17,
      v38,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
  }
  else
  {
    v52 = &items->obj.klass + size;
    v17->fields._size = size + 1;
    v52[4] = (Il2CppClass *)v38;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v52 + 4), (int32_t)v38, v47, v48);
  }
  eventId = this->fields.eventId;
  Request_object = System_Collections_Generic_List_object___ToArray(
                     v17,
                     (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__);
  if ( !v26 )
    goto LABEL_32;
  EventFortificationRequest__beginRequest(v26, eventId, (EnterUserSvtInfo_array *)Request_object, v54);
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
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  EventFortificationListViewManager_c *v33; // x0
  struct ListViewSort_o *servantSortStatus; // x1
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t v39; // w2
  int32_t v40; // w3
  struct EventFortificationWorkItem_o **p_targetFortificationWorkItem; // x24
  struct EventFortificationWorkItem_o *v42; // x1
  int32_t v43; // w2
  int32_t v44; // w3
  int32_t v45; // w2
  int32_t v46; // w3
  int32_t v47; // w2
  int32_t v48; // w3
  struct ListViewSort_o *v49; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeButtonSprite; // x23
  __int64 v53; // x1
  __int64 v54; // x2
  System_Int32_array *v55; // x23
  Il2CppObject *MasterData_object; // x25
  Il2CppObject *v57; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v61; // q0
  int64_t v62; // x23
  __int64 v63; // x2
  struct EventFortificationWorkItem_o *v64; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v65; // x24
  UserServantEntity_o *v66; // x27
  int32_t v67; // w21
  EventFortificationListViewItem_o *v68; // x25
  __int64 v69; // x1
  __int64 v70; // x2
  System_Func_object__bool__o *v71; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x0
  const MethodInfo *v73; // x1
  int32_t v74; // w3
  __int64 v75; // x8
  _QWORD *v76; // x9
  __int64 v77; // x10
  __int64 v78; // x8
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8
  System_Func_object__bool__o *v80; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v81; // x0
  __int64 v82; // x29
  __int64 v83; // x28
  UserServantEntity_o *v84; // x25
  int32_t v85; // w26
  EventFortificationWorkItem_o *v86; // x27
  EventFortificationListViewItem_o *v87; // x21
  int32_t v88; // w2
  int32_t v89; // w3
  __int64 v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  __int64 v93; // x8
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v95; // x2
  const MethodInfo *v96; // x1
  EventUpValSetupInfo_o *setupInfo; // [xsp+0h] [xbp-D0h]
  struct EventFortificationWorkItem_o **v98; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v99; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v100[2]; // [xsp+30h] [xbp-A0h] BYREF

  if ( (byte_4A000F3 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantClassMaster___, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v11);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_UserServantEntity___, v12);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_UserServantEntity___, v13);
    sub_1B640C8(&EventFortificationListViewItem_TypeInfo, v14);
    sub_1B640C8(&EventFortificationListViewManager_TypeInfo, v15);
    sub_1B640C8(&EventUpValSetupInfo_TypeInfo, v16);
    sub_1B640C8(&System_Func_UserServantEntity__bool__TypeInfo, v17);
    sub_1B640C8(&int___TypeInfo, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v19);
    sub_1B640C8(&LocalizationManager_TypeInfo, v20);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1B640C8(&Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__0__, v23);
    sub_1B640C8(&Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__1__, v24);
    sub_1B640C8(&EventFortificationListViewManager___c__DisplayClass48_0_TypeInfo, v25);
    sub_1B640C8(&StringLiteral_11717/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v26);
    byte_4A000F3 = 1;
  }
  memset(&v100[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v27 = sub_1B64314(
          EventFortificationListViewManager___c__DisplayClass48_0_TypeInfo,
          *(_QWORD *)&eventId,
          fortificationConfirmDialog);
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  if ( !v27 )
    goto LABEL_62;
  *(_QWORD *)(v27 + 16) = targetItem;
  v98 = (struct EventFortificationWorkItem_o **)(v27 + 16);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 16), (int32_t)targetItem, v29, v30);
  v33 = EventFortificationListViewManager_TypeInfo;
  if ( !EventFortificationListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationListViewManager_TypeInfo);
    v33 = EventFortificationListViewManager_TypeInfo;
  }
  servantSortStatus = v33->static_fields->servantSortStatus;
  this->fields.sort = servantSortStatus;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.sort, (int32_t)servantSortStatus, v31, v32);
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
  TitleInfoControl__setBackBtnSprite_36875508((TitleInfoControl_o *)sort, 1, 0, 0, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_62;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)sort, 45, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_62;
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)sort, 0, 0LL);
  this->fields.targetInUserServantEntity = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.targetInUserServantEntity, 0, v35, v36);
  this->fields.targetOutUserServantEntity = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.targetOutUserServantEntity, 0, v37, v38);
  this->fields.eventId = eventId;
  this->fields.fortificationConfirmDialog = fortificationConfirmDialog;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.fortificationConfirmDialog,
    (int32_t)fortificationConfirmDialog,
    v39,
    v40);
  p_targetFortificationWorkItem = &this->fields.targetFortificationWorkItem;
  v42 = *v98;
  this->fields.targetFortificationWorkItem = *v98;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.targetFortificationWorkItem, (int32_t)v42, v43, v44);
  this->fields.selectAfterCallback = afterCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.selectAfterCallback, (int32_t)afterCallback, v45, v46);
  v49 = this->fields.sort;
  this->fields.modeKind = 0;
  if ( !v49 )
    goto LABEL_62;
  iconScaleKind = v49->fields.iconScaleKind;
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v47, v48);
LABEL_19:
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_62;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  sort = (__int64)ListViewSort__GetScaleKindSpriteName((ListViewSort_o *)sort, this->fields.scaleType, 0LL);
  if ( !scaleChangeButtonSprite )
    goto LABEL_62;
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL);
  sort = sub_1B64170(int___TypeInfo, 1LL);
  if ( !sort )
    goto LABEL_62;
  v55 = (System_Int32_array *)sort;
  if ( !*(_DWORD *)(sort + 24) )
LABEL_56:
    sub_1B6432C(sort, v53);
  *(_DWORD *)(sort + 32) = eventId;
  setupInfo = (EventUpValSetupInfo_o *)sub_1B64314(EventUpValSetupInfo_TypeInfo, v53, v54);
  EventUpValSetupInfo___ctor_38592760(setupInfo, v55, 1, 0, 0, 0LL);
  sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_62;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)sort,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_62;
  v57 = DataManager__GetMasterData_object_(
          (DataManager_o *)sort,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantClassMaster___);
  *(_QWORD *)(v27 + 24) = v57;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 24), (int32_t)v57, v58, v59);
  if ( !*p_targetFortificationWorkItem )
    goto LABEL_62;
  userServantEntity = (*p_targetFortificationWorkItem)->fields.userServantEntity;
  if ( userServantEntity )
  {
    v61 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v100[1].fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v100[1].fields.fakeValue = v61;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v100, -1LL, 0LL);
    v100[1] = v100[0];
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v99 = v100[1];
  sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v99, 0LL);
  if ( !MasterData_object )
    goto LABEL_62;
  v62 = sort;
  sort = (__int64)UserServantMaster__getOrganizationList((UserServantMaster_o *)MasterData_object, 0LL);
  v64 = *v98;
  if ( !*v98 )
    goto LABEL_62;
  v65 = (System_Collections_Generic_IEnumerable_TSource__o *)sort;
  if ( !v64->fields.isSvtDataSetInMaster )
  {
    eventFortificationDetailEntity = v64->fields.eventFortificationDetailEntity;
    if ( !eventFortificationDetailEntity )
      goto LABEL_62;
    if ( eventFortificationDetailEntity->fields.classId )
    {
      v80 = (System_Func_object__bool__o *)sub_1B64314(System_Func_UserServantEntity__bool__TypeInfo, v53, v63);
      System_Func_object__bool____ctor(
        v80,
        (Il2CppObject *)v27,
        Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__0__,
        0LL);
      v81 = System_Linq_Enumerable__Where_object_(
              v65,
              (System_Func_TSource__bool__o *)v80,
              (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
      sort = (__int64)System_Linq_Enumerable__ToArray_object_(
                        v81,
                        (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
      v65 = (System_Collections_Generic_IEnumerable_TSource__o *)sort;
    }
LABEL_46:
    if ( !v65 )
      goto LABEL_62;
    goto LABEL_47;
  }
  v66 = v64->fields.userServantEntity;
  v67 = this->fields.eventId;
  v68 = (EventFortificationListViewItem_o *)sub_1B64314(EventFortificationListViewItem_TypeInfo, v53, v63);
  EventFortificationListViewItem___ctor(v68, v66, v67, v62, setupInfo, v64, 0LL);
  v71 = (System_Func_object__bool__o *)sub_1B64314(System_Func_UserServantEntity__bool__TypeInfo, v69, v70);
  System_Func_object__bool____ctor(
    v71,
    (Il2CppObject *)v27,
    Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__1__,
    0LL);
  v72 = System_Linq_Enumerable__Where_object_(
          v65,
          (System_Func_TSource__bool__o *)v71,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
  sort = (__int64)System_Linq_Enumerable__ToArray_object_(
                    v72,
                    (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
  if ( !*(_QWORD *)(v27 + 16) )
    goto LABEL_62;
  v65 = (System_Collections_Generic_IEnumerable_TSource__o *)sort;
  sort = EventFortificationWorkItem__get_IsNpc(*(EventFortificationWorkItem_o **)(v27 + 16), v73);
  if ( (sort & 1) == 0 )
    goto LABEL_46;
  sort = (__int64)this->fields.itemList;
  if ( !sort )
    goto LABEL_62;
  v75 = *(_QWORD *)(sort + 16);
  v76 = Method_System_Collections_Generic_List_ListViewItem__Add__;
  ++*(_DWORD *)(sort + 28);
  if ( !v75 )
    goto LABEL_62;
  v77 = *(int *)(sort + 24);
  if ( (unsigned int)v77 >= *(_DWORD *)(v75 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)sort,
      (Il2CppObject *)v68,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
    if ( !v65 )
      goto LABEL_62;
  }
  else
  {
    v78 = v75 + 8 * v77;
    *(_DWORD *)(sort + 24) = v77 + 1;
    *(_QWORD *)(v78 + 32) = v68;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v78 + 32), (int32_t)v68, v63, v74);
    if ( !v65 )
      goto LABEL_62;
  }
LABEL_47:
  if ( (int)v65[1].monitor >= 1 )
  {
    v82 = 0LL;
    v83 = (unsigned int)v65[1].monitor - 1LL;
    while ( 1 )
    {
      v84 = (UserServantEntity_o *)*((_QWORD *)&v65[2].klass + v82);
      v85 = this->fields.eventId;
      v86 = *v98;
      v87 = (EventFortificationListViewItem_o *)sub_1B64314(EventFortificationListViewItem_TypeInfo, v53, v63);
      EventFortificationListViewItem___ctor(v87, v84, v85, v62, setupInfo, v86, 0LL);
      sort = (__int64)this->fields.itemList;
      if ( !sort )
        break;
      v90 = *(_QWORD *)(sort + 16);
      v91 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(sort + 28);
      if ( !v90 )
        break;
      v92 = *(int *)(sort + 24);
      if ( (unsigned int)v92 >= *(_DWORD *)(v90 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)sort,
          (Il2CppObject *)v87,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
      }
      else
      {
        v93 = v90 + 8 * v92;
        *(_DWORD *)(sort + 24) = v92 + 1;
        *(_QWORD *)(v93 + 32) = v87;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v93 + 32), (int32_t)v87, v88, v89);
      }
      if ( v83 == v82 )
        goto LABEL_57;
      if ( ++v82 >= (unsigned __int64)LODWORD(v65[1].monitor) )
        goto LABEL_56;
    }
LABEL_62:
    sub_1B64324(sort);
  }
LABEL_57:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11717/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_62;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0LL);
  EventFortificationListViewManager__SetStatusKind(this, this->fields.modeKind, v95);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  EventFortificationListViewManager__SetFilterButtonImage(this, v96);
}


void __fastcall EventFortificationListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  EventFortificationListViewManager_c *v2; // x0
  ListViewSort_o *servantSortStatus; // x0

  if ( (byte_4A000EF & 1) == 0 )
  {
    sub_1B640C8(&EventFortificationListViewManager_TypeInfo, v1);
    byte_4A000EF = 1;
  }
  v2 = EventFortificationListViewManager_TypeInfo;
  if ( !EventFortificationListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationListViewManager_TypeInfo);
    v2 = EventFortificationListViewManager_TypeInfo;
  }
  servantSortStatus = v2->static_fields->servantSortStatus;
  if ( !servantSortStatus )
    sub_1B64324(0LL);
  ListViewSort__DeleteContinueData(servantSortStatus, 0LL);
}


void __fastcall EventFortificationListViewManager__DestroyList(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_1B64324(0LL);
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
  EventFortificationListViewManager__SetMode_45222620(this, 2, v6);
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
  EventFortificationListViewManager__SetMode_45222620(this, 2, v6);
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
  EventFortificationListViewManager__SetMode_45222620(this, 2, v6);
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
  EventFortificationListViewManager__SetMode_45222620(this, 2, v5);
}


void __fastcall EventFortificationListViewManager__EndPushRequest(
        EventFortificationListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  EventFortificationListViewManager__ModifyList(this, 0, method);
  EventFortificationListViewManager__SetMode_45222620(this, 2, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager__EndSelectFilterKind(
        EventFortificationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_4A00105 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4A00105 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    EventFortificationListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager__EndSelectSortKind(
        EventFortificationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4A00109 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4A00109 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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

  if ( (byte_4A00102 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4A00102 = 1;
  }
  EventFortificationListViewManager__RefreshListDisp(this, (const MethodInfo *)isDecide);
  EventFortificationListViewManager__ModifyList(this, 0, v4);
  EventFortificationListViewManager__SetMode_45222620(this, 2, v5);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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
    sub_1B6406C(p_requestCallback, 0, (int32_t)method, v3);
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

  if ( (byte_4A00103 & 1) == 0 )
  {
    sub_1B640C8(&EventFortificationListViewItem_TypeInfo, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4A00103 = 1;
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
                                                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v17, 0LL) == svtId )
        ++v11;
      if ( size == v10 )
        return v11;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_16:
    sub_1B64324(itemList);
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

  if ( (byte_4A000FA & 1) == 0 )
  {
    sub_1B640C8(&EventFortificationListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4A000FA = 1;
  }
  result = (EventFortificationListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EventFortificationListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_long__o *v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  int64_t itemList; // x0
  int v22; // w25
  int32_t v23; // w24
  __int64 methodPtr_low; // x10
  __int64 v25; // x8
  __int128 v26; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  int64_t v30; // x1
  Il2CppClass **v31; // x8
  __int128 v32; // q0
  struct System_Int64_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  __int64 v36; // x8
  System_Collections_Generic_List_long__o *v37; // x0
  int v38; // w21
  System_Int64_array *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_Int64_array *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  int32_t v45; // w1
  System_Int64_array **v46; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+40h] [xbp-80h]

  if ( (byte_4A0010D & 1) == 0 )
  {
    sub_1B640C8(&EventFortificationListViewItem_TypeInfo, choiceList);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Count__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    byte_4A0010D = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     choiceList,
                                                     unchoiceList);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  v18 = (System_Collections_Generic_List_long__o *)sub_1B64314(System_Collections_Generic_List_long__TypeInfo, v16, v17);
  System_Collections_Generic_List_long____ctor(
    v18,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v22 = *(_DWORD *)(itemList + 24);
  if ( v22 >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v23,
                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(EventFortificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(EventFortificationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != EventFortificationListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v25 = *(_QWORD *)(itemList + 120);
      if ( v25 && *(_BYTE *)(itemList + 193) )
      {
        if ( *(_BYTE *)(itemList + 162) )
        {
          v26 = *(_OWORD *)(v25 + 32);
          *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)(v25 + 16);
          *(_OWORD *)&v50.fields.fakeValue = v26;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v49 = v50;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v49, 0LL);
          if ( !v18 )
            goto LABEL_37;
          items = v18->fields._items;
          v28 = Method_System_Collections_Generic_List_long__Add__;
          ++v18->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v18->fields._size;
          v30 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v36 = v28[4];
            v37 = v18;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v37,
              v30,
              *(const MethodInfo_3495074 **)(*(_QWORD *)(v36 + 192) + 112LL));
            goto LABEL_28;
          }
          v31 = &items->obj.klass + size;
          v18->fields._size = size + 1;
        }
        else
        {
          v32 = *(_OWORD *)(v25 + 32);
          *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)(v25 + 16);
          *(_OWORD *)&v50.fields.fakeValue = v32;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v48 = v50;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v48, 0LL);
          if ( !v15 )
            goto LABEL_37;
          v33 = v15->fields._items;
          v34 = Method_System_Collections_Generic_List_long__Add__;
          ++v15->fields._version;
          if ( !v33 )
            goto LABEL_37;
          v35 = v15->fields._size;
          v30 = itemList;
          if ( (unsigned int)v35 >= v33->max_length )
          {
            v36 = v34[4];
            v37 = v15;
            goto LABEL_27;
          }
          v31 = &v33->obj.klass + v35;
          v15->fields._size = v35 + 1;
        }
        v31[4] = (Il2CppClass *)v30;
      }
LABEL_28:
      if ( v22 == ++v23 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v15 || !v18 )
LABEL_37:
    sub_1B64324(itemList);
  v38 = v18->fields._size + v15->fields._size;
  if ( v38 < 1 )
  {
    *choiceList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)choiceList, 0, v19, v20);
    v46 = unchoiceList;
    v45 = 0;
    *unchoiceList = 0LL;
  }
  else
  {
    v39 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v39;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)choiceList, (int32_t)v39, v40, v41);
    v42 = System_Collections_Generic_List_long___ToArray(
            v18,
            (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
    v45 = (int)v42;
    *unchoiceList = v42;
    v46 = unchoiceList;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v46, v45, v43, v44);
  return v38 > 0;
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
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_long__o *v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  int64_t itemList; // x0
  int v22; // w25
  int32_t v23; // w24
  __int64 methodPtr_low; // x10
  __int64 v25; // x8
  __int128 v26; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  int64_t v30; // x1
  Il2CppClass **v31; // x8
  __int128 v32; // q0
  struct System_Int64_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  __int64 v36; // x8
  System_Collections_Generic_List_long__o *v37; // x0
  int v38; // w21
  System_Int64_array *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_Int64_array *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  int32_t v45; // w1
  System_Int64_array **v46; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+40h] [xbp-80h]

  if ( (byte_4A0010C & 1) == 0 )
  {
    sub_1B640C8(&EventFortificationListViewItem_TypeInfo, lockList);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Count__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    byte_4A0010C = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     lockList,
                                                     unlockList);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  v18 = (System_Collections_Generic_List_long__o *)sub_1B64314(System_Collections_Generic_List_long__TypeInfo, v16, v17);
  System_Collections_Generic_List_long____ctor(
    v18,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v22 = *(_DWORD *)(itemList + 24);
  if ( v22 >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v23,
                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(EventFortificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(EventFortificationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != EventFortificationListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v25 = *(_QWORD *)(itemList + 120);
      if ( v25 && *(_BYTE *)(itemList + 192) )
      {
        if ( *(_BYTE *)(itemList + 161) )
        {
          v26 = *(_OWORD *)(v25 + 32);
          *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)(v25 + 16);
          *(_OWORD *)&v50.fields.fakeValue = v26;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v49 = v50;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v49, 0LL);
          if ( !v18 )
            goto LABEL_37;
          items = v18->fields._items;
          v28 = Method_System_Collections_Generic_List_long__Add__;
          ++v18->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v18->fields._size;
          v30 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v36 = v28[4];
            v37 = v18;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v37,
              v30,
              *(const MethodInfo_3495074 **)(*(_QWORD *)(v36 + 192) + 112LL));
            goto LABEL_28;
          }
          v31 = &items->obj.klass + size;
          v18->fields._size = size + 1;
        }
        else
        {
          v32 = *(_OWORD *)(v25 + 32);
          *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)(v25 + 16);
          *(_OWORD *)&v50.fields.fakeValue = v32;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v48 = v50;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v48, 0LL);
          if ( !v15 )
            goto LABEL_37;
          v33 = v15->fields._items;
          v34 = Method_System_Collections_Generic_List_long__Add__;
          ++v15->fields._version;
          if ( !v33 )
            goto LABEL_37;
          v35 = v15->fields._size;
          v30 = itemList;
          if ( (unsigned int)v35 >= v33->max_length )
          {
            v36 = v34[4];
            v37 = v15;
            goto LABEL_27;
          }
          v31 = &v33->obj.klass + v35;
          v15->fields._size = v35 + 1;
        }
        v31[4] = (Il2CppClass *)v30;
      }
LABEL_28:
      if ( v22 == ++v23 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v15 || !v18 )
LABEL_37:
    sub_1B64324(itemList);
  v38 = v18->fields._size + v15->fields._size;
  if ( v38 < 1 )
  {
    *lockList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)lockList, 0, v19, v20);
    v46 = unlockList;
    v45 = 0;
    *unlockList = 0LL;
  }
  else
  {
    v39 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v39;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)lockList, (int32_t)v39, v40, v41);
    v42 = System_Collections_Generic_List_long___ToArray(
            v18,
            (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
    v45 = (int)v42;
    *unlockList = v42;
    v46 = unlockList;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v46, v45, v43, v44);
  return v38 > 0;
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

  if ( (byte_4A000F0 & 1) == 0 )
  {
    sub_1B640C8(&EventFortificationListViewManager_TypeInfo, v1);
    byte_4A000F0 = 1;
  }
  v2 = EventFortificationListViewManager_TypeInfo;
  if ( !EventFortificationListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationListViewManager_TypeInfo);
    v2 = EventFortificationListViewManager_TypeInfo;
  }
  servantSortStatus = v2->static_fields->servantSortStatus;
  if ( !servantSortStatus )
    sub_1B64324(0LL);
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
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x19
  _BOOL8 v16; // x0
  __int64 methodPtr_low; // x11
  EventFortificationListViewItem_o *current; // x20
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v20; // q0
  int64_t v21; // x0
  Il2CppObject v22; // q0
  UnityEngine_Object_o *viewObject; // x21
  struct ListViewObject_o *v24; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_4A000F7 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_1B640C8(&EventFortificationListViewItem_TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4A000F7 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  if ( this->fields.itemList )
  {
    UserGameMaster__getSelfUserGame(0LL);
    if ( usrSvtId < 1 )
    {
      Entity = 0LL;
    }
    else
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_37;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_37;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 usrSvtId,
                 (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( Instance )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v27,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      *(_OWORD *)&v28.fields._list = *(_OWORD *)&v27.fields.currentCryptoKey;
      v28.fields._current = (Il2CppObject *)v27.fields.fakeValue;
      while ( 1 )
      {
        v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v28,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v16 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v28,
            (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v28.fields._current
          && (methodPtr_low = LOBYTE(EventFortificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(v28.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
        {
          if ( (EventFortificationListViewItem_c *)v28.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == EventFortificationListViewItem_TypeInfo )
            current = (EventFortificationListViewItem_o *)v28.fields._current;
          else
            current = 0LL;
          if ( Entity )
          {
LABEL_15:
            if ( !current )
              sub_1B64324(v16);
            userServantEntity = current->fields.userServantEntity;
            if ( !userServantEntity )
              sub_1B64324(v16);
            v20 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v27.fields.fakeValue = v20;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v26 = v27;
            v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v26, 0LL);
            v22 = Entity[2];
            *(Il2CppObject *)&v25.fields.currentCryptoKey = Entity[1];
            *(Il2CppObject *)&v25.fields.fakeValue = v22;
            if ( v21 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v25, 0LL) )
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
          sub_1B64324(v16);
LABEL_26:
        viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
        {
          v24 = current->fields.viewObject;
          if ( !v24 )
            sub_1B64324(0LL);
          ((void (__fastcall *)(struct ListViewObject_o *, EventFortificationListViewItem_o *, Il2CppMethodPointer))v24->klass->vtable._5_SetItem.method)(
            v24,
            current,
            v24->klass->vtable._6_SetItem.methodPtr);
        }
      }
    }
LABEL_37:
    sub_1B64324(Instance);
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
  __int64 v18; // x1
  int64_t v19; // x22
  int32_t v20; // w23
  int64_t v21; // x24
  __int64 methodPtr_low; // x10
  __int64 v23; // x8
  __int128 v24; // q0
  __int64 v25; // x8
  __int128 v26; // q0
  int64_t v27; // x0
  const MethodInfo *v28; // x4
  bool isIconSizeChangea; // [xsp+Ch] [xbp-E4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+70h] [xbp-80h]

  if ( (byte_4A000F9 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, isIconSizeChange);
    sub_1B640C8(&EventFortificationListViewItem_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4A000F9 = 1;
  }
  sort = (int64_t)this->fields.sort;
  if ( !sort )
    goto LABEL_33;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  sort = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_33;
  sort = (int64_t)DataManager__GetMasterData_object_(
                    (DataManager_o *)sort,
                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
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
      *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
      *(_OWORD *)&v33.fields.fakeValue = v17;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v32 = v33;
      sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v32, 0LL);
      if ( size >= 1 )
      {
        v19 = sort;
        v20 = 0;
        while ( 1 )
        {
          sort = (int64_t)this->fields.itemList;
          if ( !sort )
            goto LABEL_33;
          sort = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)sort,
                            v20,
                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !sort )
            goto LABEL_33;
          v21 = sort;
          methodPtr_low = LOBYTE(EventFortificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)sort + 304LL) < (unsigned int)methodPtr_low
            || *(EventFortificationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)sort + 200LL) + 8 * methodPtr_low - 8) != EventFortificationListViewItem_TypeInfo )
          {
            goto LABEL_33;
          }
          v23 = *(_QWORD *)(sort + 120);
          if ( v23 )
          {
            v24 = *(_OWORD *)(v23 + 32);
            *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)(v23 + 16);
            *(_OWORD *)&v33.fields.fakeValue = v24;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v31 = v33;
            sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v31, 0LL);
            if ( sort == v19 )
              break;
          }
          if ( size == ++v20 )
            goto LABEL_29;
        }
        v25 = *(_QWORD *)(v21 + 120);
        if ( !v25 )
          break;
        v26 = *(_OWORD *)(v25 + 32);
        *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)(v25 + 16);
        *(_OWORD *)&v33.fields.fakeValue = v26;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v30 = v33;
        v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v30, 0LL);
        EventFortificationListViewManager__ModifyLockItem(this, v27, 1, isIconSizeChangea, v28);
      }
LABEL_29:
      if ( ++v15 == (_DWORD)v12 )
        return;
      if ( v15 >= *(_DWORD *)(v13 + 24) )
        sub_1B6432C(sort, v18);
    }
LABEL_33:
    sub_1B64324(sort);
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
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x21
  bool v20; // w24
  int64_t v21; // x0
  __int64 methodPtr_low; // x11
  EventFortificationListViewItem_o *current; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v25; // q0
  int64_t v26; // x0
  Il2CppObject v27; // q0
  int64_t v28; // x23
  UnityEngine_Object_o *viewObject; // x23
  struct ListViewObject_o *v30; // x0
  ListViewObject_o *v31; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4A000F8 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v12);
    sub_1B640C8(&EventFortificationListViewItem_TypeInfo, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v14);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v15);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4A000F8 = 1;
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_45;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_45;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 usrSvtId,
                 (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( Instance )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v34,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      *(_OWORD *)&v35.fields._list = *(_OWORD *)&v34.fields.currentCryptoKey;
      v35.fields._current = (Il2CppObject *)v34.fields.fakeValue;
      v20 = !isIconSizeChange && isInit;
      while ( 1 )
      {
        v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v35,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v21 & 1) == 0 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v35,
            (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v35.fields._current
          && (methodPtr_low = LOBYTE(EventFortificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(v35.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
        {
          if ( (EventFortificationListViewItem_c *)v35.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == EventFortificationListViewItem_TypeInfo )
            current = (EventFortificationListViewItem_o *)v35.fields._current;
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
          sub_1B64324(v21);
        userServantEntity = current->fields.userServantEntity;
        if ( !userServantEntity )
          sub_1B64324(v21);
        v25 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v34.fields.fakeValue = v25;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v33 = v34;
        v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v33, 0LL);
        v27 = Entity[2];
        v28 = v26;
        *(Il2CppObject *)&v32.fields.currentCryptoKey = Entity[1];
        *(Il2CppObject *)&v32.fields.fakeValue = v27;
        v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v32, 0LL);
        if ( v28 == v21 )
          EventFortificationListViewItem__SetUserServantEntity(current, (UserServantEntity_o *)Entity, 0LL);
LABEL_26:
        if ( v20 )
        {
          if ( !current )
            sub_1B64324(v21);
          EventFortificationListViewItem__ModifyLockItem(current, 0LL);
          EventFortificationListViewItem__ModifyChoiceItem(current, 0LL);
          EventFortificationListViewItem__ModifyPushItem(current, 0LL);
        }
        else if ( !current )
        {
          sub_1B64324(v21);
        }
        viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
        {
          v30 = current->fields.viewObject;
          if ( !v30 )
            sub_1B64324(0LL);
          ((void (__fastcall *)(struct ListViewObject_o *, EventFortificationListViewItem_o *, Il2CppMethodPointer))v30->klass->vtable._5_SetItem.method)(
            v30,
            current,
            v30->klass->vtable._6_SetItem.methodPtr);
          if ( isIconSizeChange )
          {
            v31 = current->fields.viewObject;
            if ( !v31 )
              sub_1B64324(0LL);
            ListViewObject__SetItemSeed(v31, (ListViewItem_o *)current, this->fields.seed, 0LL);
          }
        }
      }
    }
LABEL_45:
    sub_1B64324(Instance);
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

  if ( (byte_4A00113 & 1) == 0 )
  {
    sub_1B640C8(&Method_EventFortificationListViewManager_OnClickBack__, method);
    byte_4A00113 = 1;
  }
  v3 = Method_EventFortificationListViewManager_OnClickBack__;
  if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0(Method_EventFortificationListViewManager_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
  selectAfterCallback = this->fields.selectAfterCallback;
  if ( selectAfterCallback )
  {
    this->fields.selectAfterCallback = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.selectAfterCallback, 0, v5, v6);
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
  ListViewSort_o *sort; // x0

  if ( (byte_4A00106 & 1) == 0 )
  {
    sub_1B640C8(&Method_EventFortificationListViewManager_OnClickBonusFilterKind__, method);
    byte_4A00106 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EventFortificationListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_EventFortificationListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B64324(0LL);
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
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  EventFortificationListViewManager_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2

  if ( (byte_4A00110 & 1) == 0 )
  {
    sub_1B640C8(&Method_EventFortificationListViewManager_EndClickTabChoice__, method);
    sub_1B640C8(&Method_EventFortificationListViewManager_OnClickChoiceTab__, v3);
    sub_1B640C8(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo, v4);
    byte_4A00110 = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    v5 = Method_EventFortificationListViewManager_OnClickChoiceTab__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickChoiceTab__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_EventFortificationListViewManager_OnClickChoiceTab__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v9 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_1B64314(
                                                                        EventFortificationListViewManager_RequestCallbackFunc_TypeInfo,
                                                                        v7,
                                                                        v8);
      EventFortificationListViewManager_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager_EndClickTabChoice__,
        v10);
      EventFortificationListViewManager__StatusRequest(this, v9, v11);
    }
    else
    {
      EventFortificationListViewManager__SetStatusKind(this, 2, v8);
      EventFortificationListViewManager__RefreshListDisp(this, v12);
      EventFortificationListViewManager__ModifyList(this, 0, v13);
      EventFortificationListViewManager__SetMode_45222620(this, 2, v14);
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
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  EventFortificationListViewManager_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2

  if ( (byte_4A0010F & 1) == 0 )
  {
    sub_1B640C8(&Method_EventFortificationListViewManager_EndClickTabLock__, method);
    sub_1B640C8(&Method_EventFortificationListViewManager_OnClickCollectLock__, v3);
    sub_1B640C8(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo, v4);
    byte_4A0010F = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    v5 = Method_EventFortificationListViewManager_OnClickCollectLock__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickCollectLock__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_EventFortificationListViewManager_OnClickCollectLock__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v9 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_1B64314(
                                                                        EventFortificationListViewManager_RequestCallbackFunc_TypeInfo,
                                                                        v7,
                                                                        v8);
      EventFortificationListViewManager_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager_EndClickTabLock__,
        v10);
      EventFortificationListViewManager__StatusRequest(this, v9, v11);
    }
    else
    {
      EventFortificationListViewManager__SetStatusKind(this, 1, v8);
      EventFortificationListViewManager__RefreshListDisp(this, v12);
      EventFortificationListViewManager__ModifyList(this, 0, v13);
      EventFortificationListViewManager__SetMode_45222620(this, 2, v14);
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
  __int64 v11; // x1
  __int64 v12; // x2
  ServantFilterSelectMenu_CallbackFunc_o *v13; // x22
  __int64 v14; // x0

  if ( (byte_4A00104 & 1) == 0 )
  {
    sub_1B640C8(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_EventFortificationListViewManager_EndSelectFilterKind__, v3);
    sub_1B640C8(&Method_EventFortificationListViewManager_OnClickFilterKind__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4A00104 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_EventFortificationListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B640E0(Method_EventFortificationListViewManager_OnClickFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v13 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1B64314(ServantFilterSelectMenu_CallbackFunc_TypeInfo, v11, v12);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_EventFortificationListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v10 )
      sub_1B64324(v14);
    CommonUI__OpenServantFilterSelectMenu(v10, 1, sort, v13, 0, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x2
  EventFortificationListViewManager_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_4A0010E & 1) == 0 )
  {
    sub_1B640C8(&Method_EventFortificationListViewManager_EndClickTabStatus__, method);
    sub_1B640C8(&Method_EventFortificationListViewManager_OnClickNormalStatus__, v3);
    sub_1B640C8(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo, v4);
    byte_4A0010E = 1;
  }
  if ( this->fields.modeKind )
  {
    v5 = Method_EventFortificationListViewManager_OnClickNormalStatus__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickNormalStatus__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_EventFortificationListViewManager_OnClickNormalStatus__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v9 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_1B64314(
                                                                      EventFortificationListViewManager_RequestCallbackFunc_TypeInfo,
                                                                      v7,
                                                                      v8);
    EventFortificationListViewManager_RequestCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_EventFortificationListViewManager_EndClickTabStatus__,
      v10);
    EventFortificationListViewManager__StatusRequest(this, v9, v11);
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
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  EventFortificationListViewManager_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2

  if ( (byte_4A00111 & 1) == 0 )
  {
    sub_1B640C8(&Method_EventFortificationListViewManager_EndClickTabPush__, method);
    sub_1B640C8(&Method_EventFortificationListViewManager_OnClickPushTab__, v3);
    sub_1B640C8(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo, v4);
    byte_4A00111 = 1;
  }
  if ( this->fields.modeKind != 3 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v5 = Method_EventFortificationListViewManager_OnClickPushTab__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickPushTab__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_EventFortificationListViewManager_OnClickPushTab__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v9 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_1B64314(
                                                                        EventFortificationListViewManager_RequestCallbackFunc_TypeInfo,
                                                                        v7,
                                                                        v8);
      EventFortificationListViewManager_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager_EndClickTabPush__,
        v10);
      EventFortificationListViewManager__StatusRequest(this, v9, v11);
    }
    else
    {
      EventFortificationListViewManager__SetStatusKind(this, 3, v8);
      EventFortificationListViewManager__RefreshListDisp(this, v12);
      EventFortificationListViewManager__ModifyList(this, 0, v13);
      EventFortificationListViewManager__SetMode_45222620(this, 2, v14);
    }
  }
}


void __fastcall EventFortificationListViewManager__OnClickScaleChange(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  EventFortificationListViewManager_o *v9; // x0
  int v10; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  ListViewSort_o *sort; // x0
  int32_t v13; // w1
  UISprite_o *scaleChangeButtonSprite; // x20
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2

  if ( (byte_4A00114 & 1) == 0 )
  {
    sub_1B640C8(&Method_EventFortificationListViewManager_OnClickScaleChange__, method);
    byte_4A00114 = 1;
  }
  v3 = Method_EventFortificationListViewManager_OnClickScaleChange__;
  if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0(Method_EventFortificationListViewManager_OnClickScaleChange__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v9 = this;
    v10 = 2;
    goto LABEL_11;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v9 = this;
    v10 = 3;
    goto LABEL_11;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v9 = this;
    v10 = 1;
LABEL_11:
    v9->fields.seed = smallSizeSeed;
    p_seed = &v9->fields.seed;
    *((_DWORD *)p_seed + 106) = v10;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)p_seed, (int32_t)smallSizeSeed, v5, v6);
  }
  sort = this->fields.sort;
  if ( !sort
    || (v13 = this->fields.scaleType,
        sort->fields.iconScaleKind = v13,
        scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, v13, 0LL),
        !scaleChangeButtonSprite) )
  {
    sub_1B64324(sort);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL);
  EventFortificationListViewManager__ModifyList(this, 1, v15);
  EventFortificationListViewManager__SetMode_45222620(this, 2, v16);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall EventFortificationListViewManager__OnClickSelectObject(
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
  int64_t fortificationConfirmDialog; // x0
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  const MethodInfo *v23; // x1
  __int64 methodPtr_low; // x10
  struct UserServantEntity_o **p_targetInUserServantEntity; // x23
  EventFortificationListViewItem_o *Item; // x20
  int32_t v27; // w2
  int32_t v28; // w3
  struct UserServantEntity_o **p_targetOutUserServantEntity; // x24
  int32_t v30; // w2
  int32_t v31; // w3
  __int64 v32; // x1
  __int64 v33; // x2
  System_Collections_Generic_List_object__o *v34; // x22
  __int64 v35; // x1
  __int64 v36; // x2
  System_Collections_Generic_List_int__o *v37; // x21
  int32_t v38; // w2
  int32_t v39; // w3
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v42; // q1
  struct UserServantEntity_o *v43; // x8
  __int128 v44; // q0
  int64_t v45; // x25
  int32_t v46; // w2
  int32_t v47; // w3
  struct EventFortificationWorkItem_o *v48; // x8
  struct UserServantEntity_o *v49; // x1
  int32_t v50; // w2
  int32_t v51; // w3
  Il2CppObject *v52; // x1
  struct System_Object_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  Il2CppClass **v56; // x0
  const MethodInfo *v57; // x1
  struct UserServantEntity_o *v58; // x1
  int32_t v59; // w2
  int32_t v60; // w3
  Il2CppObject *v61; // x1
  struct System_Object_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  Il2CppClass **v65; // x0
  struct UserServantEntity_o *v66; // x8
  __int128 v67; // q0
  struct UserServantEntity_o *v68; // x8
  __int128 v69; // q0
  int32_t v70; // w2
  int32_t v71; // w3
  struct UserServantEntity_o *v72; // x1
  int32_t v73; // w2
  int32_t v74; // w3
  struct EventFortificationWorkItem_o *v75; // x8
  struct UserServantEntity_o *v76; // x1
  int32_t v77; // w2
  int32_t v78; // w3
  Il2CppObject *v79; // x1
  struct System_Object_array *v80; // x8
  _QWORD *v81; // x9
  __int64 v82; // x10
  Il2CppClass **v83; // x0
  const MethodInfo *v84; // x1
  struct System_Int32_array *v85; // x8
  _QWORD *v86; // x9
  __int64 v87; // x10
  struct FortificationConfirmDialogComponent_o *v88; // x23
  System_Object_array *v89; // x22
  System_Int32_array *v90; // x21
  System_String_o *TargetTeamName; // x24
  System_String_o *TargetDetailName; // x25
  int32_t TargetWorkType; // w20
  __int64 v94; // x1
  __int64 v95; // x2
  System_Action_o *v96; // x26
  FortificationConfirmDialogComponent_o *v97; // x0
  int32_t v98; // w1
  struct System_Int32_array *v99; // x8
  _QWORD *v100; // x9
  __int64 v101; // x10
  struct FortificationConfirmDialogComponent_o *v102; // x23
  __int64 v103; // x1
  __int64 v104; // x2
  int32_t v105; // w2
  int32_t v106; // w3
  struct System_Int32_array *v107; // x8
  _QWORD *v108; // x9
  __int64 v109; // x10
  Il2CppObject *v110; // x1
  struct System_Object_array *v111; // x8
  _QWORD *v112; // x9
  __int64 v113; // x10
  Il2CppClass **v114; // x0
  struct System_Int32_array *v115; // x8
  _QWORD *v116; // x9
  __int64 v117; // x10
  __int64 v118; // x1
  __int64 v119; // x2
  const MethodInfo *v120; // [xsp+0h] [xbp-100h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v121; // [xsp+10h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v122; // [xsp+30h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v123; // [xsp+50h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v124; // [xsp+70h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v125; // [xsp+90h] [xbp-70h]

  if ( (byte_4A000FE & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, obj);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantClassMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1B640C8(&Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__, v7);
    sub_1B640C8(&Method_EventFortificationListViewManager_OnClickSelectObject__, v8);
    sub_1B640C8(&EventFortificationListViewObject_TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v15);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v16);
    sub_1B640C8(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v17);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_4A000FE = 1;
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
    v21 = (_QWORD *)sub_1B640E0(Method_EventFortificationListViewManager_OnClickSelectObject__);
  v22 = (System_Reflection_MethodBase_o *)sub_1B640AC(v21, v21[4]);
  OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0LL);
  if ( !obj )
    goto LABEL_77;
  methodPtr_low = LOBYTE(EventFortificationListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    goto LABEL_77;
  if ( (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventFortificationListViewObject_TypeInfo )
    goto LABEL_77;
  p_targetInUserServantEntity = &this->fields.targetInUserServantEntity;
  Item = EventFortificationListViewObject__GetItem((EventFortificationListViewObject_o *)obj, v23);
  this->fields.targetInUserServantEntity = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.targetInUserServantEntity, 0, v27, v28);
  p_targetOutUserServantEntity = &this->fields.targetOutUserServantEntity;
  this->fields.targetOutUserServantEntity = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.targetOutUserServantEntity, 0, v30, v31);
  fortificationConfirmDialog = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fortificationConfirmDialog )
    goto LABEL_77;
  DataManager__GetMasterData_object_(
    (DataManager_o *)fortificationConfirmDialog,
    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  fortificationConfirmDialog = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fortificationConfirmDialog )
    goto LABEL_77;
  DataManager__GetMasterData_object_(
    (DataManager_o *)fortificationConfirmDialog,
    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantClassMaster___);
  v34 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       v32,
                                                       v33);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  v37 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v35, v36);
  System_Collections_Generic_List_int____ctor(
    v37,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
  if ( !targetFortificationWorkItem )
    goto LABEL_77;
  userServantEntity = targetFortificationWorkItem->fields.userServantEntity;
  if ( userServantEntity )
  {
    v42 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v125.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v125.fields.fakeValue = v42;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v124 = v125;
    fortificationConfirmDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v124, 0LL);
    if ( Item )
    {
      v43 = Item->fields.userServantEntity;
      if ( v43 )
      {
        v44 = *(_OWORD *)&v43->fields.id.fields.fakeValue;
        v45 = fortificationConfirmDialog;
        *(_OWORD *)&v123.fields.currentCryptoKey = *(_OWORD *)&v43->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v123.fields.fakeValue = v44;
        fortificationConfirmDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v123, 0LL);
        v48 = this->fields.targetFortificationWorkItem;
        if ( v45 == fortificationConfirmDialog )
        {
          if ( v48 )
          {
            v49 = v48->fields.userServantEntity;
            *p_targetOutUserServantEntity = v49;
            sub_1B6406C(
              (ServantStatusBattleListViewItem_o *)&this->fields.targetOutUserServantEntity,
              (int32_t)v49,
              v46,
              v47);
            if ( v34 )
            {
              v52 = (Il2CppObject *)*p_targetOutUserServantEntity;
              items = v34->fields._items;
              v54 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v34->fields._version;
              if ( items )
              {
                size = v34->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v34,
                    v52,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
                }
                else
                {
                  v56 = &items->obj.klass + size;
                  v34->fields._size = size + 1;
                  v56[4] = (Il2CppClass *)v52;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v56 + 4), (int32_t)v52, v50, v51);
                }
                fortificationConfirmDialog = (int64_t)this->fields.targetFortificationWorkItem;
                if ( fortificationConfirmDialog )
                {
                  fortificationConfirmDialog = EventFortificationWorkItem__get_AddPoint(
                                                 (EventFortificationWorkItem_o *)fortificationConfirmDialog,
                                                 v57);
                  if ( v37 )
                  {
                    v99 = v37->fields._items;
                    v100 = Method_System_Collections_Generic_List_int__Add__;
                    ++v37->fields._version;
                    if ( v99 )
                    {
                      v101 = v37->fields._size;
                      if ( (unsigned int)v101 >= v99->max_length )
                      {
                        System_Collections_Generic_List_int___AddWithResize(
                          v37,
                          fortificationConfirmDialog,
                          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v37->fields._size = v101 + 1;
                        v99->m_Items[v101 + 1] = fortificationConfirmDialog;
                      }
                      v102 = this->fields.fortificationConfirmDialog;
                      v89 = System_Collections_Generic_List_object___ToArray(
                              v34,
                              (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
                      v90 = System_Collections_Generic_List_int___ToArray(
                              v37,
                              (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
                      TargetTeamName = EventFortificationListViewItem__get_TargetTeamName(Item, 0LL);
                      TargetDetailName = EventFortificationListViewItem__get_TargetDetailName(Item, 0LL);
                      TargetWorkType = EventFortificationListViewItem__get_TargetWorkType(Item, 0LL);
                      v96 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v103, v104);
                      System_Action___ctor(
                        v96,
                        (Il2CppObject *)this,
                        (intptr_t)Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__,
                        0LL);
                      if ( v102 )
                      {
                        v98 = 1;
LABEL_74:
                        v97 = v102;
                        goto LABEL_75;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else if ( v48 )
        {
          v66 = v48->fields.userServantEntity;
          if ( !v66 )
            return;
          v67 = *(_OWORD *)&v66->fields.id.fields.fakeValue;
          *(_OWORD *)&v125.fields.currentCryptoKey = *(_OWORD *)&v66->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v125.fields.fakeValue = v67;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v122 = v125;
          fortificationConfirmDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v122, 0LL);
          v68 = Item->fields.userServantEntity;
          if ( v68 )
          {
            v69 = *(_OWORD *)&v68->fields.id.fields.fakeValue;
            *(_OWORD *)&v121.fields.currentCryptoKey = *(_OWORD *)&v68->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v121.fields.fakeValue = v69;
            if ( fortificationConfirmDialog == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(
                                                 &v121,
                                                 0LL) )
              return;
            v72 = Item->fields.userServantEntity;
            this->fields.targetInUserServantEntity = v72;
            sub_1B6406C(
              (ServantStatusBattleListViewItem_o *)&this->fields.targetInUserServantEntity,
              (int32_t)v72,
              v70,
              v71);
            v75 = this->fields.targetFortificationWorkItem;
            if ( v75 )
            {
              v76 = v75->fields.userServantEntity;
              *p_targetOutUserServantEntity = v76;
              sub_1B6406C(
                (ServantStatusBattleListViewItem_o *)&this->fields.targetOutUserServantEntity,
                (int32_t)v76,
                v73,
                v74);
              if ( v34 )
              {
                v79 = (Il2CppObject *)*p_targetOutUserServantEntity;
                v80 = v34->fields._items;
                v81 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                ++v34->fields._version;
                if ( v80 )
                {
                  v82 = v34->fields._size;
                  if ( (unsigned int)v82 >= v80->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v34,
                      v79,
                      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v83 = &v80->obj.klass + v82;
                    v34->fields._size = v82 + 1;
                    v83[4] = (Il2CppClass *)v79;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v83 + 4), (int32_t)v79, v77, v78);
                  }
                  fortificationConfirmDialog = (int64_t)this->fields.targetFortificationWorkItem;
                  if ( fortificationConfirmDialog )
                  {
                    fortificationConfirmDialog = EventFortificationWorkItem__get_AddPoint(
                                                   (EventFortificationWorkItem_o *)fortificationConfirmDialog,
                                                   v84);
                    if ( v37 )
                    {
                      v107 = v37->fields._items;
                      v108 = Method_System_Collections_Generic_List_int__Add__;
                      ++v37->fields._version;
                      if ( v107 )
                      {
                        v109 = v37->fields._size;
                        if ( (unsigned int)v109 >= v107->max_length )
                        {
                          System_Collections_Generic_List_int___AddWithResize(
                            v37,
                            fortificationConfirmDialog,
                            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v37->fields._size = v109 + 1;
                          v107->m_Items[v109 + 1] = fortificationConfirmDialog;
                        }
                        v110 = (Il2CppObject *)*p_targetInUserServantEntity;
                        v111 = v34->fields._items;
                        v112 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                        ++v34->fields._version;
                        if ( v111 )
                        {
                          v113 = v34->fields._size;
                          if ( (unsigned int)v113 >= v111->max_length )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              v34,
                              v110,
                              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v112[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v114 = &v111->obj.klass + v113;
                            v34->fields._size = v113 + 1;
                            v114[4] = (Il2CppClass *)v110;
                            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v114 + 4), (int32_t)v110, v105, v106);
                          }
                          fortificationConfirmDialog = EventFortificationListViewItem__get_AddPoint(Item, 0LL);
                          v115 = v37->fields._items;
                          v116 = Method_System_Collections_Generic_List_int__Add__;
                          ++v37->fields._version;
                          if ( v115 )
                          {
                            v117 = v37->fields._size;
                            if ( (unsigned int)v117 >= v115->max_length )
                            {
                              System_Collections_Generic_List_int___AddWithResize(
                                v37,
                                fortificationConfirmDialog,
                                *(const MethodInfo_348FEDC **)(*(_QWORD *)(v116[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v37->fields._size = v117 + 1;
                              v115->m_Items[v117 + 1] = fortificationConfirmDialog;
                            }
                            v102 = this->fields.fortificationConfirmDialog;
                            v89 = System_Collections_Generic_List_object___ToArray(
                                    v34,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
                            v90 = System_Collections_Generic_List_int___ToArray(
                                    v37,
                                    (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
                            TargetTeamName = EventFortificationListViewItem__get_TargetTeamName(Item, 0LL);
                            TargetDetailName = EventFortificationListViewItem__get_TargetDetailName(Item, 0LL);
                            TargetWorkType = EventFortificationListViewItem__get_TargetWorkType(Item, 0LL);
                            v96 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v118, v119);
                            System_Action___ctor(
                              v96,
                              (Il2CppObject *)this,
                              (intptr_t)Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__,
                              0LL);
                            if ( v102 )
                            {
                              v98 = 2;
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
    sub_1B64324(fortificationConfirmDialog);
  }
  if ( !Item )
    goto LABEL_77;
  v58 = Item->fields.userServantEntity;
  *p_targetInUserServantEntity = v58;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.targetInUserServantEntity, (int32_t)v58, v38, v39);
  if ( !v34 )
    goto LABEL_77;
  v61 = (Il2CppObject *)*p_targetInUserServantEntity;
  v62 = v34->fields._items;
  v63 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
  ++v34->fields._version;
  if ( !v62 )
    goto LABEL_77;
  v64 = v34->fields._size;
  if ( (unsigned int)v64 >= v62->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v34,
      v61,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
  }
  else
  {
    v65 = &v62->obj.klass + v64;
    v34->fields._size = v64 + 1;
    v65[4] = (Il2CppClass *)v61;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v65 + 4), (int32_t)v61, v59, v60);
  }
  fortificationConfirmDialog = EventFortificationListViewItem__get_AddPoint(Item, 0LL);
  if ( !v37 )
    goto LABEL_77;
  v85 = v37->fields._items;
  v86 = Method_System_Collections_Generic_List_int__Add__;
  ++v37->fields._version;
  if ( !v85 )
    goto LABEL_77;
  v87 = v37->fields._size;
  if ( (unsigned int)v87 >= v85->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v37,
      fortificationConfirmDialog,
      *(const MethodInfo_348FEDC **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
  }
  else
  {
    v37->fields._size = v87 + 1;
    v85->m_Items[v87 + 1] = fortificationConfirmDialog;
  }
  v88 = this->fields.fortificationConfirmDialog;
  v89 = System_Collections_Generic_List_object___ToArray(
          v34,
          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
  v90 = System_Collections_Generic_List_int___ToArray(
          v37,
          (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
  TargetTeamName = EventFortificationListViewItem__get_TargetTeamName(Item, 0LL);
  TargetDetailName = EventFortificationListViewItem__get_TargetDetailName(Item, 0LL);
  TargetWorkType = EventFortificationListViewItem__get_TargetWorkType(Item, 0LL);
  v96 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v94, v95);
  System_Action___ctor(
    v96,
    (Il2CppObject *)this,
    (intptr_t)Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__,
    0LL);
  if ( !v88 )
    goto LABEL_77;
  v97 = v88;
  v98 = 0;
LABEL_75:
  FortificationConfirmDialogComponent__Open(
    v97,
    v98,
    (UserServantEntity_array *)v89,
    v90,
    TargetTeamName,
    TargetDetailName,
    TargetWorkType,
    v96,
    v120);
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
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 methodPtr_low; // x9
  EventFortificationListViewItem_o *Item; // x0
  EventFortificationListViewItem_o **v31; // x20
  int32_t v32; // w2
  int32_t v33; // w3
  int64_t context; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v36; // q1
  _QWORD *v37; // x0
  System_Reflection_MethodBase_o *v38; // x0
  const MethodInfo *v39; // x2
  _QWORD *v40; // x0
  System_Reflection_MethodBase_o *v41; // x0
  Il2CppObject *Entity; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v43; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v46; // x25
  System_String_o *v47; // x21
  System_String_o *v48; // x22
  System_Object_array *v49; // x23
  int32_t Rarity; // w26
  __int64 v51; // x1
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
  __int64 v79; // x1
  __int64 v80; // x2
  CommonConfirmDialog_ClickDelegate_o *v81; // x25
  __int64 v82; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v84; // [xsp+40h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16

  if ( (byte_4A00115 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, obj);
    sub_1B640C8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v7);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_1B640C8(&Method_EventFortificationListViewManager_OnClickSelectPush__, v10);
    sub_1B640C8(&EventFortificationListViewObject_TypeInfo, v11);
    sub_1B640C8(&LocalizationManager_TypeInfo, v12);
    sub_1B640C8(&object___TypeInfo, v13);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_1B640C8(&Rarity_TypeInfo, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1B640C8(&Method_EventFortificationListViewManager___c__DisplayClass95_0__OnClickSelectPush_b__0__, v19);
    sub_1B640C8(&EventFortificationListViewManager___c__DisplayClass95_0_TypeInfo, v20);
    sub_1B640C8(&StringLiteral_11839/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v21);
    sub_1B640C8(&StringLiteral_11837/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v22);
    sub_1B640C8(&StringLiteral_11838/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v23);
    sub_1B640C8(&StringLiteral_11840/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v24);
    byte_4A00115 = 1;
  }
  v25 = sub_1B64314(EventFortificationListViewManager___c__DisplayClass95_0_TypeInfo, obj, method);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  if ( !v25 )
    goto LABEL_62;
  *(_QWORD *)(v25 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 16), (int32_t)this, v27, v28);
  if ( !obj )
    goto LABEL_62;
  methodPtr_low = LOBYTE(EventFortificationListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventFortificationListViewObject_TypeInfo )
  {
    sub_1B645E4(obj);
    goto LABEL_64;
  }
  Item = EventFortificationListViewObject__GetItem(
           (EventFortificationListViewObject_o *)obj,
           (const MethodInfo *)EventFortificationListViewObject_TypeInfo);
  *(_QWORD *)(v25 + 24) = Item;
  v31 = (EventFortificationListViewItem_o **)(v25 + 24);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 24), (int32_t)Item, v32, v33);
  SelfUserGame = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_62;
  context = (int64_t)SelfUserGame->fields.context;
  if ( context )
  {
    if ( !*v31 )
      goto LABEL_62;
    userServantEntity = (*v31)->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_62;
    v36 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v84.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v84.fields.fakeValue = v36;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v83 = v84;
    if ( context == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v83, 0LL) )
      goto LABEL_14;
    v40 = Method_EventFortificationListViewManager_OnClickSelectPush__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickSelectPush__ + 83) & 2) != 0 )
      v40 = (_QWORD *)sub_1B640E0(Method_EventFortificationListViewManager_OnClickSelectPush__);
    v41 = (System_Reflection_MethodBase_o *)sub_1B640AC(v40, v40[4]);
    OverwriteAssetSoundName__PlaySystemSe(v41, 0, 0LL);
    SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_62;
    SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                      SelfUserGame,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !SelfUserGame )
      goto LABEL_62;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
               context,
               (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_62;
    SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                      SelfUserGame,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_62;
    v43 = (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame;
    klass = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v85.fields.currentCryptoKey = klass;
    *(_QWORD *)&v85.fields.fakeValue = monitor;
    SelfUserGame = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v85, 0LL);
    if ( !v43 )
      goto LABEL_62;
    v46 = DataMasterBase_object__object__int___GetEntity(
            v43,
            (int32_t)SelfUserGame,
            (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v47 = LocalizationManager__Get((System_String_o *)StringLiteral_11840/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
    v48 = LocalizationManager__Get((System_String_o *)StringLiteral_11839/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    v49 = (System_Object_array *)sub_1B64170(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    SelfUserGame = (DataManager_o *)Rarity__getRarityType(Rarity, 0LL);
    if ( !v49 )
LABEL_62:
      sub_1B64324(SelfUserGame);
    v54 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = (DataManager_o *)sub_1B64204(SelfUserGame, v49->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( !v49->max_length )
      goto LABEL_64;
    v49->m_Items[0] = v54;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)v49->m_Items, (int32_t)v54, v52, v53);
    if ( !v46 )
      goto LABEL_62;
    SelfUserGame = (DataManager_o *)ServantEntity__getClassName((ServantEntity_o *)v46, 0LL);
    v57 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = (DataManager_o *)sub_1B64204(SelfUserGame, v49->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( v49->max_length <= 1 )
      goto LABEL_64;
    v49->m_Items[1] = v57;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v49->m_Items[1], (int32_t)v57, v55, v56);
    v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
            (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
            0LL);
    SelfUserGame = (DataManager_o *)ServantEntity__getName((ServantEntity_o *)v46, v58, -1, 0LL);
    v61 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = (DataManager_o *)sub_1B64204(SelfUserGame, v49->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( v49->max_length <= 2 )
      goto LABEL_64;
    v49->m_Items[2] = v61;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v49->m_Items[2], (int32_t)v61, v59, v60);
    if ( !*v31 )
      goto LABEL_62;
    SelfUserGame = (DataManager_o *)(*v31)->fields.userServantEntity;
    if ( !SelfUserGame )
      goto LABEL_62;
    v62 = UserServantEntity__getRarity((UserServantEntity_o *)SelfUserGame, 0LL);
    SelfUserGame = (DataManager_o *)Rarity__getRarityType(v62, 0LL);
    v65 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = (DataManager_o *)sub_1B64204(SelfUserGame, v49->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( v49->max_length <= 3 )
      goto LABEL_64;
    v49->m_Items[3] = v65;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v49->m_Items[3], (int32_t)v65, v63, v64);
    if ( !*v31 )
      goto LABEL_62;
    SelfUserGame = (DataManager_o *)(*v31)->fields.servantEntity;
    if ( !SelfUserGame )
      goto LABEL_62;
    SelfUserGame = (DataManager_o *)ServantEntity__getClassName((ServantEntity_o *)SelfUserGame, 0LL);
    v68 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = (DataManager_o *)sub_1B64204(SelfUserGame, v49->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( v49->max_length <= 4 )
      goto LABEL_64;
    v49->m_Items[4] = v68;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v49->m_Items[4], (int32_t)v68, v66, v67);
    v69 = *v31;
    if ( !*v31 )
      goto LABEL_62;
    v70 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v69->fields.userServantEntity;
    if ( !v70 )
      goto LABEL_62;
    servantEntity = v69->fields.servantEntity;
    SelfUserGame = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v70[6], 0LL);
    if ( !servantEntity )
      goto LABEL_62;
    SelfUserGame = (DataManager_o *)ServantEntity__getName(servantEntity, (int32_t)SelfUserGame, -1, 0LL);
    v74 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = (DataManager_o *)sub_1B64204(SelfUserGame, v49->obj.klass->_1.element_class);
      if ( !SelfUserGame )
      {
LABEL_65:
        v82 = sub_1B64348(SelfUserGame);
        sub_1B641F0(v82, 0LL);
      }
    }
    if ( v49->max_length > 5 )
    {
      v49->m_Items[5] = v74;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v49->m_Items[5], (int32_t)v74, v72, v73);
      v75 = System_String__Format_61389904(v48, v49, 0LL);
      v76 = LocalizationManager__Get((System_String_o *)StringLiteral_11838/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
      v77 = LocalizationManager__Get((System_String_o *)StringLiteral_11837/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v81 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(CommonConfirmDialog_ClickDelegate_TypeInfo, v79, v80);
      CommonConfirmDialog_ClickDelegate___ctor(
        v81,
        (Il2CppObject *)v25,
        Method_EventFortificationListViewManager___c__DisplayClass95_0__OnClickSelectPush_b__0__,
        0LL);
      SelfUserGame = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      if ( Instance )
      {
        CommonUI__OpenConfirmDialog_30345348(
          (CommonUI_o *)Instance,
          v47,
          v75,
          v76,
          v77,
          1,
          v81,
          BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
          0,
          0,
          0LL);
        return;
      }
      goto LABEL_62;
    }
LABEL_64:
    sub_1B6432C(SelfUserGame, v51);
  }
LABEL_14:
  v37 = Method_EventFortificationListViewManager_OnClickSelectPush__;
  if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickSelectPush__ + 83) & 2) != 0 )
    v37 = (_QWORD *)sub_1B640E0(Method_EventFortificationListViewManager_OnClickSelectPush__);
  v38 = (System_Reflection_MethodBase_o *)sub_1B640AC(v37, v37[4]);
  OverwriteAssetSoundName__PlaySystemSe(v38, 8, 0LL);
  EventFortificationListViewManager__PushRequest(this, *v31, v39);
}


void __fastcall EventFortificationListViewManager__OnClickSortAscendingOrder(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  struct ListViewSort_o *sort; // x8

  if ( (byte_4A0010A & 1) == 0 )
  {
    sub_1B640C8(&Method_EventFortificationListViewManager_OnClickSortAscendingOrder__, method);
    byte_4A0010A = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EventFortificationListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_EventFortificationListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B64324(v5);
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
  __int64 v11; // x1
  __int64 v12; // x2
  ServantSortSelectMenu_CallbackFunc_o *v13; // x22
  __int64 v14; // x0

  if ( (byte_4A00108 & 1) == 0 )
  {
    sub_1B640C8(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_EventFortificationListViewManager_EndSelectSortKind__, v3);
    sub_1B640C8(&Method_EventFortificationListViewManager_OnClickSortButton__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4A00108 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_EventFortificationListViewManager_OnClickSortButton__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickSortButton__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B640E0(Method_EventFortificationListViewManager_OnClickSortButton__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v13 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1B64314(ServantSortSelectMenu_CallbackFunc_TypeInfo, v11, v12);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_EventFortificationListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v10 )
      sub_1B64324(v14);
    CommonUI__OpenServantSortSelectMenu(v10, 3, sort, 0, v13, 0LL);
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
  UnityEngine_Behaviour_o *scrollView; // x0
  const MethodInfo *v12; // x1
  __int64 methodPtr_low; // x10
  EventFortificationListViewItem_o *Item; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  UserServantEntity_o *userServantEntity; // x21
  CommonUI_o *v18; // x20
  ServantStatusDialog_EndDelegate_o *v19; // x22

  if ( (byte_4A00101 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusDialog_EndDelegate_TypeInfo, obj);
    sub_1B640C8(&Method_EventFortificationListViewManager_EndShowServant__, v5);
    sub_1B640C8(&Method_EventFortificationListViewManager_OnLongPushListView__, v6);
    sub_1B640C8(&EventFortificationListViewObject_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_4A00101 = 1;
  }
  if ( (unsigned int)(this->fields.modeKind - 1) >= 3 )
  {
    v9 = Method_EventFortificationListViewManager_OnLongPushListView__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1B640E0(Method_EventFortificationListViewManager_OnLongPushListView__);
    v10 = (System_Reflection_MethodBase_o *)sub_1B640AC(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_13;
    UnityEngine_Behaviour__set_enabled(scrollView, 0, 0LL);
    if ( !obj
      || (methodPtr_low = LOBYTE(EventFortificationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
      || (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventFortificationListViewObject_TypeInfo
      || (Item = EventFortificationListViewObject__GetItem((EventFortificationListViewObject_o *)obj, v12),
          scrollView = (UnityEngine_Behaviour_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          !Item)
      || (userServantEntity = Item->fields.userServantEntity,
          v18 = (CommonUI_o *)scrollView,
          v19 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v15, v16),
          ServantStatusDialog_EndDelegate___ctor(
            v19,
            (Il2CppObject *)this,
            Method_EventFortificationListViewManager_EndShowServant__,
            0LL),
          !v18) )
    {
LABEL_13:
      sub_1B64324(scrollView);
    }
    CommonUI__OpenServantStatusDialog_30355532(v18, 0, userServantEntity, v19, 0LL);
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
  UnityEngine_Behaviour_o *v7; // x0
  struct System_Action_o *CallbackFunc2; // x20
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A000FD & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_4A000FD = 1;
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
        v7 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
        if ( !v7
          || (UnityEngine_Behaviour__set_enabled(v7, 1, 0LL),
              (v7 = (UnityEngine_Behaviour_o *)this->fields.scrollView) == 0LL)
          || (((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, Il2CppClass *))v7->klass[1]._1.castClass)(
                v7,
                1LL,
                v7->klass[1]._1.declaringType),
              (v7 = (UnityEngine_Behaviour_o *)this->fields.scrollView) == 0LL) )
        {
          sub_1B64324(v7);
        }
        UIScrollView__UpdatePosition((UIScrollView_o *)v7, 0LL);
        CallbackFunc2 = this->fields.CallbackFunc2;
        this->fields.CallbackFunc2 = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.CallbackFunc2, 0, v9, v10);
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
  DataManager_o *v14; // x23
  struct UserServantEntity_o *userServantEntity; // x19
  UserServantCollectionMaster_o *v16; // x21
  int64_t v17; // x22
  __int64 v18; // x24
  __int64 v19; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v21; // q0
  struct System_Threading_SynchronizationContext_o *context; // x8
  UserServantEntity_Fields *p_fields; // x24
  int64_t v24; // x0
  __int128 v25; // q1
  __int64 v26; // x1
  __int64 v27; // x2
  NetworkManager_ResultCallbackFunc_o *v28; // x21
  Il2CppObject *Request_object; // x0
  __int128 v30; // q1
  CardFavoriteRequest_o *v31; // x20
  int32_t v32; // w26
  int32_t v33; // w27
  int32_t v34; // w28
  int32_t v35; // w29
  bool IsLock; // w21
  char v37; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v41; // w0
  __int64 v42; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v46; // [xsp+60h] [xbp-100h]
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // [xsp+68h] [xbp-F8h]
  int64_t v48; // [xsp+70h] [xbp-F0h]
  struct System_Threading_SynchronizationContext_o *v49; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_4A00116 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_1B640C8(&Method_EventFortificationListViewManager_EndPushRequest__, v5);
    sub_1B640C8(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6);
    sub_1B640C8(&NetworkManager_TypeInfo, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4A00116 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v14 = limitCountSupport;
  userServantEntity = selectItem->fields.userServantEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v14 || !userServantEntity )
    goto LABEL_18;
  v16 = (UserServantCollectionMaster_o *)limitCountSupport;
  v17 = *(_QWORD *)&v14->fields.m_CachedPtr;
  v19 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v54.fields.currentCryptoKey = v19;
  *(_QWORD *)&v54.fields.fakeValue = v18;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v54, 0LL);
  if ( !v16 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v16, v17, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v21 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  context = v14->fields.context;
  p_fields = &userServantEntity->fields;
  *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v53.fields.fakeValue = v21;
  v49 = context;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v52 = v53;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v52, 0LL);
  v25 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  masterLoadThreads = v14->fields.masterLoadThreads;
  v48 = v24;
  *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v51.fields.fakeValue = v25;
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v51, 0LL);
  v28 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v26, v27);
  NetworkManager_ResultCallbackFunc___ctor(
    v28,
    (Il2CppObject *)this,
    Method_EventFortificationListViewManager_EndPushRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v28,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v30 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v31 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v30;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v50, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                      userServantEntity->fields.imageLimitCount,
                      0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          userServantEntity->fields.dispLimitCount,
          0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          userServantEntity->fields.commandCardLimitCount,
          0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          userServantEntity->fields.iconLimitCount,
          0LL);
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          userServantEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userServantEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v37 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                  userServantEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                       userServantEntity->fields.randomLimitCount,
                       0LL);
  v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          userServantEntity->fields.randomLimitCountSupport,
          0LL);
  v42 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v55.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v41;
  *(_QWORD *)&v55.fields.currentCryptoKey = v42;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v55, 0LL);
  if ( !v31 )
LABEL_18:
    sub_1B64324(limitCountSupport);
  CardFavoriteRequest__beginRequest(
    v31,
    targetUsrSVtId,
    imageLimitCount,
    v32,
    v33,
    v34,
    v35,
    masterLoadThreads == (struct System_Collections_Generic_List_Thread__o *)v46,
    IsLock,
    v37 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v49 != (struct System_Threading_SynchronizationContext_o *)v48,
    0LL);
}


void __fastcall EventFortificationListViewManager__RefreshListDisp(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  int32_t size; // w22
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w21

  if ( (byte_4A000F4 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Item__, v3);
    byte_4A000F4 = 1;
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
                                                                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Item__);
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
    sub_1B64324(ObjectList);
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
  int32_t size; // w25
  System_Collections_Generic_List_object__o *v13; // x21
  int32_t v14; // w22
  Il2CppObject *Item; // x23
  __int64 v16; // x1
  __int64 v17; // x2
  System_Action_o *v18; // x24
  const MethodInfo *v19; // x3

  if ( (byte_4A000FC & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(&Method_EventFortificationListViewManager_OnMoveEnd__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Count__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Item__, v9);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v10);
    byte_4A000FC = 1;
  }
  ObjectList = EventFortificationListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_10;
  size = ObjectList->fields._size;
  v13 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( size >= 1 )
  {
    v14 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v13,
               v14,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Item__);
      v18 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v16, v17);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_EventFortificationListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        break;
      EventFortificationListViewObject__Init_45223144((EventFortificationListViewObject_o *)Item, mode, v18, v19);
      if ( size == ++v14 )
        return;
    }
LABEL_10:
    sub_1B64324(ObjectList);
  }
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9890/*"OnMoveEnd"*/,
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

  if ( (byte_4A00107 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17441/*"btn_filter_on"*/, method);
    sub_1B640C8(&StringLiteral_17440/*"btn_filter"*/, v3);
    byte_4A00107 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1B64324(sort);
  }
  v6 = (System_String_o **)&StringLiteral_17440/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17441/*"btn_filter_on"*/;
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

  if ( (byte_4A000F6 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_11570/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v3);
    sub_1B640C8(&StringLiteral_11568/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v4);
    sub_1B640C8(&StringLiteral_11569/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v5);
    sub_1B640C8(&StringLiteral_6435/*"FORTIFICATION_GUIDE_HELP"*/, v6);
    byte_4A000F6 = 1;
  }
  switch ( this->fields.modeKind )
  {
    case 0:
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6435/*"FORTIFICATION_GUIDE_HELP"*/, 0LL);
      targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
      if ( !targetFortificationWorkItem )
        goto LABEL_28;
      v11 = (System_String_o *)v8;
      v12 = this->fields.targetFortificationWorkItem;
      if ( (byte_4A00147 & 1) == 0 )
      {
        v8 = sub_1B640C8(&StringLiteral_1/*""*/, v9);
        byte_4A00147 = 1;
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
      v8 = (__int64)System_String__Format_61389768(
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
      v19 = &StringLiteral_11569/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
      goto LABEL_25;
    case 2:
      v18 = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = &StringLiteral_11568/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
      goto LABEL_25;
    case 3:
      v18 = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = &StringLiteral_11570/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_25:
      v8 = (__int64)LocalizationManager__Get((System_String_o *)*v19, 0LL);
      if ( !v18 )
LABEL_28:
        sub_1B64324(v8);
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
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.Callback,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  EventFortificationListViewManager__SetMode_45222620(this, mode, v6);
}


void __fastcall EventFortificationListViewManager__SetMode_45222620(
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


void __fastcall EventFortificationListViewManager__SetMode_45222728(
        EventFortificationListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.CallbackFunc2 = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.CallbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  EventFortificationListViewManager__SetMode_45222620(this, mode, v6);
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
  if ( (byte_4A000FB & 1) == 0 )
  {
    this = (EventFortificationListViewManager_o *)sub_1B640C8(&EventFortificationListViewObject_TypeInfo, obj);
    byte_4A000FB = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(EventFortificationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventFortificationListViewObject_TypeInfo )
  {
    sub_1B64324(this);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  EventFortificationListViewObject__Init_45222496(
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
  ListViewSort_o *sort; // x0
  UILabel_o *v11; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v13; // x8
  int32_t sortKind; // w9
  System_String_o **v15; // x8
  struct ListViewSort_o *v16; // x8
  System_String_o **v17; // x9
  System_String_o **v18; // x10
  System_String_o **v19; // x8
  System_String_o **v20; // x8

  if ( (byte_4A0010B & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&StringLiteral_17471/*"btn_sort_up"*/, v3);
    sub_1B640C8(&StringLiteral_17558/*"btn_txt_up"*/, v4);
    sub_1B640C8(&StringLiteral_17514/*"btn_txt_new"*/, v5);
    sub_1B640C8(&StringLiteral_17504/*"btn_txt_down"*/, v6);
    sub_1B640C8(&StringLiteral_17521/*"btn_txt_old"*/, v7);
    sub_1B640C8(&StringLiteral_17468/*"btn_sort_down"*/, v8);
    byte_4A0010B = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_35;
    v11 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v11 )
      goto LABEL_35;
    UILabel__set_text(v11, (System_String_o *)sort, 0LL);
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
    v13 = this->fields.sort;
    if ( v13 )
    {
      sortKind = v13->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v15 = (System_String_o **)(v13->fields.isAscendingOrder ? &StringLiteral_17521/*"btn_txt_old"*/ : &StringLiteral_17514/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
          v16 = this->fields.sort;
          if ( v16 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v17 = (System_String_o **)&StringLiteral_17468/*"btn_sort_down"*/;
              v18 = (System_String_o **)&StringLiteral_17471/*"btn_sort_up"*/;
LABEL_31:
              if ( v16->fields.isAscendingOrder )
                v20 = v17;
              else
                v20 = v18;
              UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
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
          v19 = (System_String_o **)(v13->fields.isAscendingOrder ? &StringLiteral_17558/*"btn_txt_up"*/ : &StringLiteral_17504/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v19, 0LL);
          v16 = this->fields.sort;
          if ( v16 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v17 = (System_String_o **)&StringLiteral_17471/*"btn_sort_up"*/;
              v18 = (System_String_o **)&StringLiteral_17468/*"btn_sort_down"*/;
              goto LABEL_31;
            }
          }
        }
      }
    }
LABEL_35:
    sub_1B64324(sort);
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

  if ( (byte_4A000F5 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17591/*"button_push_reg"*/, *(_QWORD *)&modeKind);
    sub_1B640C8(&StringLiteral_17592/*"button_push_unreg"*/, v5);
    sub_1B640C8(&StringLiteral_17577/*"button_allchoice_reg"*/, v6);
    sub_1B640C8(&StringLiteral_17580/*"button_alllock_unreg"*/, v7);
    sub_1B640C8(&StringLiteral_17593/*"button_select_reg"*/, v8);
    sub_1B640C8(&StringLiteral_17594/*"button_select_unreg"*/, v9);
    sub_1B640C8(&StringLiteral_17579/*"button_alllock_reg"*/, v10);
    sub_1B640C8(&StringLiteral_17578/*"button_allchoice_unreg"*/, v11);
    byte_4A000F5 = 1;
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
  v13 = &StringLiteral_17593/*"button_select_reg"*/;
  if ( modeKind )
    v13 = &StringLiteral_17594/*"button_select_unreg"*/;
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
  v14 = &StringLiteral_17579/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v14 = &StringLiteral_17580/*"button_alllock_unreg"*/;
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
  v15 = &StringLiteral_17577/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v15 = &StringLiteral_17578/*"button_allchoice_unreg"*/;
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
  v16 = &StringLiteral_17591/*"button_push_reg"*/;
  if ( modeKind != 3 )
    v16 = &StringLiteral_17592/*"button_push_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v16, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
  if ( !statusTabButton )
LABEL_28:
    sub_1B64324(statusTabButton);
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
  __int64 v12; // x1
  __int64 v13; // x2
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  Il2CppObject *Request_object; // x0
  System_Int64_array *v16; // x1
  System_Int64_array *v17; // x2
  bool v18; // w4
  bool v19; // w5
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x1
  __int64 v23; // x2
  NetworkManager_ResultCallbackFunc_o *v24; // x20
  System_Int64_array *v25; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4A00112 & 1) == 0 )
  {
    sub_1B640C8(&Method_EventFortificationListViewManager_EndStatusSync__, callback);
    sub_1B640C8(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v6);
    sub_1B640C8(&NetworkManager_TypeInfo, v7);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_4A00112 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v25 = 0LL;
  choiceList = 0LL;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    if ( EventFortificationListViewManager__GetSwapChoiceList(this, &choiceList, &v25, v3) )
    {
      this->fields.requestCallback = callback;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.requestCallback, (int32_t)callback, v20, v21);
      v24 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v22, v23);
      NetworkManager_ResultCallbackFunc___ctor(
        v24,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v24,
                         (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_object )
      {
        v17 = v25;
        v16 = choiceList;
        v19 = 1;
        v18 = 0;
        goto LABEL_15;
      }
LABEL_19:
      sub_1B64324(Request_object);
    }
  }
  else if ( modeKind == 1 && EventFortificationListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.requestCallback, (int32_t)callback, v10, v11);
    v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v12, v13);
    NetworkManager_ResultCallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      Method_EventFortificationListViewManager_EndStatusSync__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v14,
                       (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( Request_object )
    {
      v17 = unlockList;
      v16 = lockList;
      v18 = 1;
      v19 = 0;
LABEL_15:
      CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)Request_object, v16, v17, 0, v18, v19, 0LL);
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

  if ( (byte_4A000EB & 1) == 0 )
  {
    sub_1B640C8(&EventFortificationListViewManager_CallbackFunc_TypeInfo, value);
    byte_4A000EB = 1;
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
    v8 = sub_1B9F5B8(p_Callback, v7, Callback);
    v9 = Callback == (System_Delegate_o *)v8;
    Callback = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B645E4(v7);
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

  if ( (byte_4A000ED & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_4A000ED = 1;
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
    v8 = sub_1B9F5B8(p_CallbackFunc2, v7, CallbackFunc2);
    v9 = CallbackFunc2 == (System_Delegate_o *)v8;
    CallbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B645E4(v7);
  EventFortificationListViewManager__remove_CallbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_EventFortificationListViewObject__o *__fastcall EventFortificationListViewManager__get_ClippingObjectList(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x20
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v12; // w21
  const MethodInfo *v13; // x1
  Il2CppObject *v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4A000F2 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v7);
    sub_1B640C8(&System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo, v8);
    byte_4A000F2 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__);
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
                                                                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        break;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___);
      if ( !objectList )
        break;
      v14 = (Il2CppObject *)objectList;
      objectList = (System_Collections_Generic_List_object__o *)EventFortificationListViewObject__GetItem(
                                                                  (EventFortificationListViewObject_o *)objectList,
                                                                  v13);
      if ( !objectList )
        break;
      if ( LOBYTE(objectList[2].monitor) )
      {
        objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_40389508(
                                                                    (ListViewManager_o *)this,
                                                                    (ListViewItem_o *)objectList,
                                                                    0LL);
        if ( ((unsigned __int8)objectList & 1) == 0 )
          continue;
      }
      if ( !v9 )
        break;
      items = v9->fields._items;
      v18 = Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__;
      ++v9->fields._version;
      if ( !items )
        break;
      v19 = v9->fields._size;
      if ( (unsigned int)v19 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          v14,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + v19;
        v9->fields._size = v19 + 1;
        v20[4] = (Il2CppClass *)v14;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v14, v15, v16);
      }
      if ( size == ++v12 )
        return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v9;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_18:
    sub_1B64324(objectList);
  }
  return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v9;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x20
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

  if ( (byte_4A000F1 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v7);
    sub_1B640C8(&System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    byte_4A000F1 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__);
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
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                    (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___);
        if ( !v10 )
          break;
        items = v10->fields._items;
        v18 = Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__;
        ++v10->fields._version;
        if ( !items )
          break;
        v19 = v10->fields._size;
        v20 = objectList;
        if ( (unsigned int)v19 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)objectList,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + v19;
          v10->fields._size = v19 + 1;
          v21[4] = (Il2CppClass *)v20;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v20, v15, v16);
        }
      }
      if ( size == ++v13 )
        return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v10;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_1B64324(objectList);
  }
  return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v10;
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

  if ( (byte_4A000EC & 1) == 0 )
  {
    sub_1B640C8(&EventFortificationListViewManager_CallbackFunc_TypeInfo, value);
    byte_4A000EC = 1;
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
    v8 = sub_1B9F5B8(p_Callback, v7, Callback);
    v9 = Callback == (System_Delegate_o *)v8;
    Callback = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B645E4(v7);
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

  if ( (byte_4A000EE & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_4A000EE = 1;
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
    v8 = sub_1B9F5B8(p_CallbackFunc2, v7, CallbackFunc2);
    v9 = CallbackFunc2 == (System_Delegate_o *)v8;
    CallbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B645E4(v7);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19B0EDC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19B0E84;
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
  __int64 v11[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v12; // [xsp+28h] [xbp-38h] BYREF
  int32_t v13; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = index;
  v13 = kind;
  if ( (byte_4A00118 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1B640C8(&EventFortificationListViewManager_ResultKind_TypeInfo, v9);
    byte_4A00118 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(EventFortificationListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v11, callback, object);
}


void __fastcall EventFortificationListViewManager_CallbackFunc__EndInvoke(
        EventFortificationListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19B0F48;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19B0F00;
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
  if ( (byte_4A00119 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, isRequest);
    byte_4A00119 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v9, callback, object);
}


void __fastcall EventFortificationListViewManager_RequestCallbackFunc__EndInvoke(
        EventFortificationListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
    sub_1B64324(this);
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
  if ( (byte_4A0011A & 1) == 0 )
  {
    this = (EventFortificationListViewManager___c__DisplayClass48_0_o *)sub_1B640C8(
                                                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                          data);
    byte_4A0011A = 1;
  }
  if ( !data )
    goto LABEL_9;
  v6 = *(_QWORD *)&data->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&data->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v6;
  *(_QWORD *)&v10.fields.fakeValue = v5;
  this = (EventFortificationListViewManager___c__DisplayClass48_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                        v10,
                                                                        0LL);
  targetItem = v4->fields.targetItem;
  if ( !targetItem
    || (userServantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)targetItem->fields.userServantEntity) == 0LL )
  {
LABEL_9:
    sub_1B64324(this);
  }
  return (_DWORD)this == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(userServantEntity[5], 0LL);
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
  __int64 v9; // x2
  CommonUI_o *v10; // x20
  System_Action_o *_9__1; // x22
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A0011B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_EventFortificationListViewManager___c__DisplayClass95_0__OnClickSelectPush_b__1__, v6);
    byte_4A0011B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v8, v9);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager___c__DisplayClass95_0__OnClickSelectPush_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v12, v13);
    }
    if ( v10 )
    {
      CommonUI__CloseConfirmDialog_30345628(v10, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_1B64324(Instance);
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
    sub_1B64324(this);
  EventFortificationListViewManager__PushRequest(this->fields.__4__this, this->fields.selectItem, v2);
}