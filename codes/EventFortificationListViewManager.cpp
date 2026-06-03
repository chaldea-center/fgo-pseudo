void EventFortificationListViewManager___cctor(const MethodInfo *method)
{
  System_String_o *SORT_SAVE_KEY; // x19
  ListViewSort_o *v2; // x20
  struct EventFortificationListViewManager_StaticFields *static_fields; // x0

  if ( (byte_4E717A6 & 1) == 0 )
  {
    sub_1D0F0B4(&EventFortificationListViewManager_TypeInfo);
    sub_1D0F0B4(&ListViewSort_TypeInfo);
    sub_1D0F0B4(&StringLiteral_6316/*"EventServantFatigueList"*/);
    byte_4E717A6 = 1;
  }
  EventFortificationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_6316/*"EventServantFatigueList"*/;
  sub_1D0F058(EventFortificationListViewManager_TypeInfo->static_fields, StringLiteral_6316/*"EventServantFatigueList"*/);
  SORT_SAVE_KEY = EventFortificationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v2 = (ListViewSort_o *)sub_1D0F300(ListViewSort_TypeInfo);
  ListViewSort___ctor_45192800(v2, SORT_SAVE_KEY, 3, 0, 0);
  static_fields = EventFortificationListViewManager_TypeInfo->static_fields;
  static_fields->servantSortStatus = v2;
  sub_1D0F058(&static_fields->servantSortStatus, v2);
}


void EventFortificationListViewManager___ctor(EventFortificationListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void EventFortificationListViewManager__CallbackFortificationRequest(
        EventFortificationListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  EventFortificationListViewManager_o *v4; // x19
  struct System_Action_bool__UserServantEntity__o *v5; // x8
  void (__fastcall *invoke_impl)(intptr_t, __int64, struct UserServantEntity_o *, intptr_t); // x4
  intptr_t method_code; // x0
  intptr_t v8; // x3
  __int64 v9; // x1
  struct UserServantEntity_o *targetInUserServantEntity; // x2
  struct System_Action_bool__UserServantEntity__o *selectAfterCallback; // x8

  v4 = this;
  if ( (byte_4E7178E & 1) == 0 )
  {
    this = (EventFortificationListViewManager_o *)sub_1D0F0B4(&StringLiteral_22648/*"ng"*/);
    byte_4E7178E = 1;
  }
  if ( !result )
    goto LABEL_11;
  this = (EventFortificationListViewManager_o *)System_String__Equals_65598092(
                                                  result,
                                                  (System_String_o *)StringLiteral_22648/*"ng"*/,
                                                  0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    this = (EventFortificationListViewManager_o *)v4->fields.fortificationConfirmDialog;
    if ( this )
    {
      FortificationConfirmDialogComponent__Close((FortificationConfirmDialogComponent_o *)this, 0);
      selectAfterCallback = v4->fields.selectAfterCallback;
      if ( selectAfterCallback )
      {
        targetInUserServantEntity = v4->fields.targetInUserServantEntity;
        invoke_impl = (void (__fastcall *)(intptr_t, __int64, struct UserServantEntity_o *, intptr_t))selectAfterCallback->fields.invoke_impl;
        method_code = selectAfterCallback->fields.method_code;
        v8 = selectAfterCallback->fields.method;
        v9 = 1;
        goto LABEL_10;
      }
    }
LABEL_11:
    sub_1D0F30C(this, result);
  }
  v5 = v4->fields.selectAfterCallback;
  if ( !v5 )
    goto LABEL_11;
  invoke_impl = (void (__fastcall *)(intptr_t, __int64, struct UserServantEntity_o *, intptr_t))v5->fields.invoke_impl;
  method_code = v5->fields.method_code;
  v8 = v5->fields.method;
  v9 = 0;
  targetInUserServantEntity = 0;
LABEL_10:
  invoke_impl(method_code, v9, targetInUserServantEntity, v8);
}


void EventFortificationListViewManager__CloseFortificationConfirmDialog(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Collections_Generic_List_object__o *v5; // x20
  NetworkManager_ResultCallbackFunc_o *v6; // x21
  Il2CppObject *Request_object; // x0
  __int64 v8; // x1
  struct UserServantEntity_o *targetOutUserServantEntity; // x8
  EventFortificationRequest_o *v10; // x21
  EventFortificationWorkItem_o *targetFortificationWorkItem; // x0
  struct EventFortificationWorkItem_o *v12; // x8
  struct UserServantEntity_o *targetInUserServantEntity; // x9
  __int128 v14; // q1
  int v15; // w22
  int32_t position; // w25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v17; // x0
  struct EventFortificationWorkItem_o *v18; // x8
  int32_t v19; // w24
  int v20; // w23
  __int64 v21; // x22
  struct System_Object_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  Il2CppClass **v25; // x0
  char *v26; // x0
  __int64 v27; // x1
  struct EventFortificationWorkItem_o *v28; // x8
  struct UserServantEntity_o *v29; // x9
  __int128 v30; // q1
  int64_t v31; // x24
  __int64 v32; // x23
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  __int64 v37; // x8
  System_Collections_Generic_List_object__o *v38; // x0
  Il2CppObject *v39; // x1
  int32_t eventId; // w19
  _OWORD v41[2]; // [xsp+0h] [xbp-A0h] BYREF
  _OWORD v42[2]; // [xsp+20h] [xbp-80h] BYREF
  __int128 v43; // [xsp+40h] [xbp-60h]
  __int128 v44; // [xsp+50h] [xbp-50h]

  if ( (byte_4E7178D & 1) == 0 )
  {
    sub_1D0F0B4(&EnterUserSvtInfo_TypeInfo);
    sub_1D0F0B4(&Method_EventFortificationListViewManager_CallbackFortificationRequest__);
    sub_1D0F0B4(&Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo);
    sub_1D0F0B4(&Method_NetworkManager_getRequest_EventFortificationRequest___);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1D0F0B4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4E7178D = 1;
  }
  v3 = Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__;
  if ( (*((_BYTE *)Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1D0F0CC(Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__);
  v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
  v5 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__);
  v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1D0F300(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_EventFortificationListViewManager_CallbackFortificationRequest__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v6,
                     (const MethodInfo_32DC000 *)Method_NetworkManager_getRequest_EventFortificationRequest___);
  targetOutUserServantEntity = this->fields.targetOutUserServantEntity;
  v10 = (EventFortificationRequest_o *)Request_object;
  if ( this->fields.targetInUserServantEntity )
  {
    targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
    if ( targetOutUserServantEntity )
    {
      if ( !targetFortificationWorkItem )
        goto LABEL_39;
      targetFortificationWorkItem = (EventFortificationWorkItem_o *)EventFortificationWorkItem__get_FortificationIdx(
                                                                      targetFortificationWorkItem,
                                                                      0);
      v12 = this->fields.targetFortificationWorkItem;
      if ( !v12 )
        goto LABEL_39;
      targetInUserServantEntity = this->fields.targetInUserServantEntity;
      if ( !targetInUserServantEntity )
        goto LABEL_39;
      v14 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.fakeValue;
      v15 = (int)targetFortificationWorkItem;
      position = v12->fields.position;
      v43 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.currentCryptoKey;
      v44 = v14;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v17 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v42;
      v42[0] = v43;
      v42[1] = v44;
    }
    else
    {
      if ( !targetFortificationWorkItem )
        goto LABEL_39;
      targetFortificationWorkItem = (EventFortificationWorkItem_o *)EventFortificationWorkItem__get_FortificationIdx(
                                                                      targetFortificationWorkItem,
                                                                      0);
      v28 = this->fields.targetFortificationWorkItem;
      if ( !v28 )
        goto LABEL_39;
      v29 = this->fields.targetInUserServantEntity;
      if ( !v29 )
        goto LABEL_39;
      v30 = *(_OWORD *)&v29->fields.id.fields.fakeValue;
      v15 = (int)targetFortificationWorkItem;
      position = v28->fields.position;
      v43 = *(_OWORD *)&v29->fields.id.fields.currentCryptoKey;
      v44 = v30;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v17 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v41;
      v41[0] = v43;
      v41[1] = v44;
    }
    v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(v17, 0);
    v32 = sub_1D0F300(EnterUserSvtInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v32, 0);
    *(_DWORD *)(v32 + 16) = v15;
    *(_DWORD *)(v32 + 20) = position;
    *(_QWORD *)(v32 + 24) = v31;
    if ( v5 )
    {
      items = v5->fields._items;
      v34 = Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__;
      ++v5->fields._version;
      if ( items )
      {
        size = v5->fields._size;
        if ( (unsigned int)size < LODWORD(items->max_length) )
        {
          v36 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v36[4] = (Il2CppClass *)v32;
          v26 = (char *)(v36 + 4);
          v27 = v32;
          goto LABEL_32;
        }
        v37 = v34[4];
        v38 = v5;
        v39 = (Il2CppObject *)v32;
        goto LABEL_35;
      }
    }
LABEL_39:
    sub_1D0F30C(targetFortificationWorkItem, v8);
  }
  if ( !targetOutUserServantEntity )
    return;
  targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
  if ( !targetFortificationWorkItem )
    goto LABEL_39;
  targetFortificationWorkItem = (EventFortificationWorkItem_o *)EventFortificationWorkItem__get_FortificationIdx(
                                                                  targetFortificationWorkItem,
                                                                  0);
  v18 = this->fields.targetFortificationWorkItem;
  if ( !v18 )
    goto LABEL_39;
  v19 = v18->fields.position;
  v20 = (int)targetFortificationWorkItem;
  v21 = sub_1D0F300(EnterUserSvtInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v21, 0);
  *(_DWORD *)(v21 + 16) = v20;
  *(_DWORD *)(v21 + 20) = v19;
  *(_QWORD *)(v21 + 24) = 0;
  if ( !v5 )
    goto LABEL_39;
  v22 = v5->fields._items;
  v23 = Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__;
  ++v5->fields._version;
  if ( !v22 )
    goto LABEL_39;
  v24 = v5->fields._size;
  if ( (unsigned int)v24 < LODWORD(v22->max_length) )
  {
    v25 = &v22->obj.klass + v24;
    v5->fields._size = v24 + 1;
    v25[4] = (Il2CppClass *)v21;
    v26 = (char *)(v25 + 4);
    v27 = v21;
LABEL_32:
    sub_1D0F058(v26, v27);
    goto LABEL_36;
  }
  v37 = v23[4];
  v38 = v5;
  v39 = (Il2CppObject *)v21;
LABEL_35:
  System_Collections_Generic_List_object___AddWithResize(
    v38,
    v39,
    *(const MethodInfo_395C410 **)(*(_QWORD *)(v37 + 192) + 112LL));
LABEL_36:
  eventId = this->fields.eventId;
  targetFortificationWorkItem = (EventFortificationWorkItem_o *)System_Collections_Generic_List_object___ToArray(
                                                                  v5,
                                                                  (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__);
  if ( !v10 )
    goto LABEL_39;
  EventFortificationRequest__beginRequest(v10, eventId, (EnterUserSvtInfo_array *)targetFortificationWorkItem, 0);
}


void EventFortificationListViewManager__CreateList(
        EventFortificationListViewManager_o *this,
        int32_t eventId,
        FortificationConfirmDialogComponent_o *fortificationConfirmDialog,
        EventFortificationWorkItem_o *targetItem,
        System_Action_bool__UserServantEntity__o *afterCallback,
        const MethodInfo *method)
{
  __int64 v11; // x21
  __int64 sort; // x0
  __int64 v13; // x1
  EventFortificationListViewManager_c *v14; // x0
  struct ListViewSort_o *servantSortStatus; // x1
  struct EventFortificationWorkItem_o **p_targetFortificationWorkItem; // x24
  struct EventFortificationWorkItem_o *v17; // x1
  struct ListViewSort_o *v18; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeButtonSprite; // x23
  System_Int32_array *v22; // x23
  Il2CppObject *MasterData_object; // x25
  Il2CppObject *v24; // x0
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v26; // q0
  int64_t v27; // x23
  struct EventFortificationWorkItem_o *v28; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x24
  UserServantEntity_o *v30; // x27
  int32_t v31; // w28
  EventFortificationListViewItem_o *v32; // x25
  const MethodInfo *v33; // x6
  System_Func_object__bool__o *v34; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  __int64 v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  __int64 v39; // x8
  System_Func_object__bool__o *v40; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0
  __int64 v42; // x28
  __int64 v43; // x29
  UserServantEntity_o *v44; // x25
  int32_t v45; // w26
  EventFortificationWorkItem_o *v46; // x27
  EventFortificationListViewItem_o *v47; // x21
  const MethodInfo *v48; // x6
  __int64 v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  __int64 v52; // x8
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v54; // x2
  const MethodInfo *v55; // x1
  EventUpValSetupInfo_o *setupInfo; // [xsp+0h] [xbp-D0h]
  struct EventFortificationWorkItem_o **v57; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59[2]; // [xsp+30h] [xbp-A0h] BYREF

  if ( (byte_4E71781 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Where_UserServantEntity___);
    sub_1D0F0B4(&EventFortificationListViewItem_TypeInfo);
    sub_1D0F0B4(&EventFortificationListViewManager_TypeInfo);
    sub_1D0F0B4(&EventUpValSetupInfo_TypeInfo);
    sub_1D0F0B4(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1D0F0B4(&int___TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__0__);
    sub_1D0F0B4(&Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__1__);
    sub_1D0F0B4(&EventFortificationListViewManager___c__DisplayClass48_0_TypeInfo);
    sub_1D0F0B4(&StringLiteral_11978/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_4E71781 = 1;
  }
  memset(&v59[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v11 = sub_1D0F300(EventFortificationListViewManager___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_61;
  *(_QWORD *)(v11 + 16) = targetItem;
  v57 = (struct EventFortificationWorkItem_o **)(v11 + 16);
  sub_1D0F058(v11 + 16, targetItem);
  v14 = EventFortificationListViewManager_TypeInfo;
  if ( !EventFortificationListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationListViewManager_TypeInfo);
    v14 = EventFortificationListViewManager_TypeInfo;
  }
  servantSortStatus = v14->static_fields->servantSortStatus;
  this->fields.sort = servantSortStatus;
  sub_1D0F058(&this->fields.sort, servantSortStatus);
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_61;
  ListViewSort__Load((ListViewSort_o *)sort, 0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_61;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)sort, 0, 1, 0, 83, 0);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_61;
  TitleInfoControl__setBackBtnSprite_41257740((TitleInfoControl_o *)sort, 1, 0, 0, 0);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_61;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)sort, 45, 0);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_61;
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)sort, 0, 0);
  this->fields.targetInUserServantEntity = 0;
  sub_1D0F058(&this->fields.targetInUserServantEntity, 0);
  this->fields.targetOutUserServantEntity = 0;
  sub_1D0F058(&this->fields.targetOutUserServantEntity, 0);
  this->fields.eventId = eventId;
  this->fields.fortificationConfirmDialog = fortificationConfirmDialog;
  sub_1D0F058(&this->fields.fortificationConfirmDialog, fortificationConfirmDialog);
  p_targetFortificationWorkItem = &this->fields.targetFortificationWorkItem;
  v17 = *v57;
  this->fields.targetFortificationWorkItem = *v57;
  sub_1D0F058(&this->fields.targetFortificationWorkItem, v17);
  this->fields.selectAfterCallback = afterCallback;
  sort = sub_1D0F058(&this->fields.selectAfterCallback, afterCallback);
  v18 = this->fields.sort;
  this->fields.modeKind = 0;
  if ( !v18 )
    goto LABEL_61;
  iconScaleKind = v18->fields.iconScaleKind;
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
  sub_1D0F058(&this->fields.seed, normalSizeSeed);
LABEL_19:
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_61;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  sort = (__int64)ListViewSort__GetScaleKindSpriteName((ListViewSort_o *)sort, this->fields.scaleType, 0);
  if ( !scaleChangeButtonSprite )
    goto LABEL_61;
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0);
  sort = sub_1D0F15C(int___TypeInfo, 1);
  if ( !sort )
    goto LABEL_61;
  v22 = (System_Int32_array *)sort;
  if ( !*(_DWORD *)(sort + 24) )
LABEL_55:
    sub_1D0F314(sort);
  *(_DWORD *)(sort + 32) = eventId;
  setupInfo = (EventUpValSetupInfo_o *)sub_1D0F300(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_43111788(setupInfo, v22, 1, 0, 0, 0);
  sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_61;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)sort,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_61;
  v24 = DataManager__GetMasterData_object_(
          (DataManager_o *)sort,
          (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  *(_QWORD *)(v11 + 24) = v24;
  sort = sub_1D0F058(v11 + 24, v24);
  if ( !*p_targetFortificationWorkItem )
    goto LABEL_61;
  userServantEntity = (*p_targetFortificationWorkItem)->fields.userServantEntity;
  if ( userServantEntity )
  {
    v26 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v59[1].fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v59[1].fields.fakeValue = v26;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v59, -1, 0);
    v59[1] = v59[0];
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v58 = v59[1];
  sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v58, 0);
  if ( !MasterData_object )
    goto LABEL_61;
  v27 = sort;
  sort = (__int64)UserServantMaster__getOrganizationList((UserServantMaster_o *)MasterData_object, 0);
  v28 = *v57;
  if ( !*v57 )
    goto LABEL_61;
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)sort;
  if ( !v28->fields.isSvtDataSetInMaster )
  {
    sort = EventFortificationWorkItem__get_ClassId(*v57, 0);
    if ( (_DWORD)sort )
    {
      v40 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_UserServantEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v40,
        (Il2CppObject *)v11,
        Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__0__,
        0);
      v41 = System_Linq_Enumerable__Where_object_(
              v29,
              (System_Func_TSource__bool__o *)v40,
              (const MethodInfo_329781C *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
      sort = (__int64)System_Linq_Enumerable__ToArray_object_(
                        v41,
                        (const MethodInfo_328FDE8 *)Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
      v29 = (System_Collections_Generic_IEnumerable_TSource__o *)sort;
    }
    goto LABEL_45;
  }
  v30 = v28->fields.userServantEntity;
  v31 = this->fields.eventId;
  v32 = (EventFortificationListViewItem_o *)sub_1D0F300(EventFortificationListViewItem_TypeInfo);
  EventFortificationListViewItem___ctor(v32, v30, v31, v27, setupInfo, v28, v33);
  v34 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v34,
    (Il2CppObject *)v11,
    Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__1__,
    0);
  v35 = System_Linq_Enumerable__Where_object_(
          v29,
          (System_Func_TSource__bool__o *)v34,
          (const MethodInfo_329781C *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
  sort = (__int64)System_Linq_Enumerable__ToArray_object_(
                    v35,
                    (const MethodInfo_328FDE8 *)Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
  if ( !*(_QWORD *)(v11 + 16) )
    goto LABEL_61;
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)sort;
  sort = EventFortificationWorkItem__get_IsNpc(*(EventFortificationWorkItem_o **)(v11 + 16), 0);
  if ( (sort & 1) == 0 )
  {
LABEL_45:
    if ( !v29 )
      goto LABEL_61;
    goto LABEL_46;
  }
  sort = (__int64)this->fields.itemList;
  if ( !sort )
    goto LABEL_61;
  v36 = *(_QWORD *)(sort + 16);
  v37 = Method_System_Collections_Generic_List_ListViewItem__Add__;
  ++*(_DWORD *)(sort + 28);
  if ( !v36 )
    goto LABEL_61;
  v38 = *(int *)(sort + 24);
  if ( (unsigned int)v38 >= *(_DWORD *)(v36 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)sort,
      (Il2CppObject *)v32,
      *(const MethodInfo_395C410 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
    if ( !v29 )
      goto LABEL_61;
  }
  else
  {
    v39 = v36 + 8 * v38;
    *(_DWORD *)(sort + 24) = v38 + 1;
    *(_QWORD *)(v39 + 32) = v32;
    sort = sub_1D0F058(v39 + 32, v32);
    if ( !v29 )
      goto LABEL_61;
  }
LABEL_46:
  if ( (int)v29[1].monitor >= 1 )
  {
    v42 = 0;
    v43 = (unsigned int)v29[1].monitor - 1LL;
    while ( 1 )
    {
      v44 = (UserServantEntity_o *)*((_QWORD *)&v29[2].klass + v42);
      v45 = this->fields.eventId;
      v46 = *v57;
      v47 = (EventFortificationListViewItem_o *)sub_1D0F300(EventFortificationListViewItem_TypeInfo);
      EventFortificationListViewItem___ctor(v47, v44, v45, v27, setupInfo, v46, v48);
      sort = (__int64)this->fields.itemList;
      if ( !sort )
        break;
      v49 = *(_QWORD *)(sort + 16);
      v50 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(sort + 28);
      if ( !v49 )
        break;
      v51 = *(int *)(sort + 24);
      if ( (unsigned int)v51 >= *(_DWORD *)(v49 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)sort,
          (Il2CppObject *)v47,
          *(const MethodInfo_395C410 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
      }
      else
      {
        v52 = v49 + 8 * v51;
        *(_DWORD *)(sort + 24) = v51 + 1;
        *(_QWORD *)(v52 + 32) = v47;
        sort = sub_1D0F058(v52 + 32, v47);
      }
      if ( v43 == v42 )
        goto LABEL_56;
      if ( ++v42 >= (unsigned __int64)LODWORD(v29[1].monitor) )
        goto LABEL_55;
    }
LABEL_61:
    sub_1D0F30C(sort, v13);
  }
LABEL_56:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11978/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0);
  if ( !emptyMessageLabel )
    goto LABEL_61;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0);
  EventFortificationListViewManager__SetStatusKind(this, this->fields.modeKind, v54);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  EventFortificationListViewManager__SetFilterButtonImage(this, v55);
}


void EventFortificationListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  EventFortificationListViewManager_c *v2; // x0
  ListViewSort_o *servantSortStatus; // x0

  if ( (byte_4E7177D & 1) == 0 )
  {
    sub_1D0F0B4(&EventFortificationListViewManager_TypeInfo);
    byte_4E7177D = 1;
  }
  v2 = EventFortificationListViewManager_TypeInfo;
  if ( !EventFortificationListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationListViewManager_TypeInfo);
    v2 = EventFortificationListViewManager_TypeInfo;
  }
  servantSortStatus = v2->static_fields->servantSortStatus;
  if ( !servantSortStatus )
    sub_1D0F30C(0, v1);
  ListViewSort__DeleteContinueData(servantSortStatus, 0);
}


void EventFortificationListViewManager__DestroyList(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_1D0F30C(0, v3);
  ListViewSort__Save(sort, 0);
}


void EventFortificationListViewManager__EndClickTabChoice(
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
  EventFortificationListViewManager__SetMode_32868992(this, 2, v6);
}


void EventFortificationListViewManager__EndClickTabLock(
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
  EventFortificationListViewManager__SetMode_32868992(this, 2, v6);
}


void EventFortificationListViewManager__EndClickTabPush(
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
  EventFortificationListViewManager__SetMode_32868992(this, 2, v6);
}


void EventFortificationListViewManager__EndClickTabStatus(
        EventFortificationListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  EventFortificationListViewManager__SetStatusKind(this, 0, method);
  EventFortificationListViewManager__ModifyList(this, 0, v4);
  EventFortificationListViewManager__SetMode_32868992(this, 2, v5);
}


void EventFortificationListViewManager__EndPushRequest(
        EventFortificationListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  EventFortificationListViewManager__ModifyList(this, 0, method);
  EventFortificationListViewManager__SetMode_32868992(this, 2, v4);
}


void EventFortificationListViewManager__EndSelectFilterKind(
        EventFortificationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4E71794 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E71794 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    EventFortificationListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1D0F30C(0, v7);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, 0, 0);
}


void EventFortificationListViewManager__EndSelectSortKind(
        EventFortificationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4E71798 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E71798 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1D0F30C(0, v6);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventFortificationListViewManager__EndShowServant(
        EventFortificationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4E71791 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E71791 = 1;
  }
  EventFortificationListViewManager__RefreshListDisp(this, (const MethodInfo *)isDecide);
  EventFortificationListViewManager__ModifyList(this, 0, v4);
  EventFortificationListViewManager__SetMode_32868992(this, 2, v5);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1D0F30C(0, v7);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0, 0);
}


void EventFortificationListViewManager__EndStatusSync(
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
    *p_requestCallback = 0;
    sub_1D0F058(p_requestCallback, 0);
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))requestCallback->fields.invoke_impl)(
      requestCallback->fields.method_code,
      1,
      requestCallback->fields.method);
  }
}


// local variable allocation has failed, the output may be wrong!
int64_t EventFortificationListViewManager__GetAmountSortValue(
        EventFortificationListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w25
  int32_t v7; // w22
  int64_t v8; // x21
  __int64 naturalAligment; // x10
  _QWORD *monitor; // x8
  __int64 v11; // x23
  __int64 v12; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4E71792 & 1) == 0 )
  {
    sub_1D0F0B4(&EventFortificationListViewItem_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E71792 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_16;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v7,
                                                                (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      naturalAligment = EventFortificationListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment )
        break;
      if ( (EventFortificationListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != EventFortificationListViewItem_TypeInfo )
        break;
      monitor = itemList[3].monitor;
      if ( !monitor )
        break;
      v12 = monitor[10];
      v11 = monitor[11];
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v14.fields.currentCryptoKey = v12;
      *(_QWORD *)&v14.fields.fakeValue = v11;
      ++v7;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v14, 0) == svtId )
        ++v8;
      if ( size == v7 )
        return v8;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_16:
    sub_1D0F30C(itemList, *(_QWORD *)&svtId);
  }
  return 0;
}


bool EventFortificationListViewManager__GetFocusItemIndex(
        EventFortificationListViewManager_o *this,
        int32_t *index,
        System_Collections_Generic_List_ListViewItem__o *list,
        int32_t sum,
        const MethodInfo *method)
{
  int32_t v8; // w22
  __int64 naturalAligment; // x10

  if ( (byte_4E71790 & 1) == 0 )
  {
    sub_1D0F0B4(&EventFortificationListViewItem_TypeInfo);
    this = (EventFortificationListViewManager_o *)sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4E71790 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_14:
      sub_1D0F30C(this, index);
    v8 = 0;
    while ( 1 )
    {
      this = (EventFortificationListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                      (System_Collections_Generic_List_object__o *)list,
                                                      v8,
                                                      (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        goto LABEL_14;
      naturalAligment = EventFortificationListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (EventFortificationListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != EventFortificationListViewItem_TypeInfo )
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


EventFortificationListViewItem_o *EventFortificationListViewManager__GetItem(
        EventFortificationListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  EventFortificationListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4E71788 & 1) == 0 )
  {
    sub_1D0F0B4(&EventFortificationListViewItem_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4E71788 = 1;
  }
  result = (EventFortificationListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EventFortificationListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = EventFortificationListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (EventFortificationListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != EventFortificationListViewItem_TypeInfo )
          return 0;
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}


bool EventFortificationListViewManager__GetSwapChoiceList(
        EventFortificationListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x23
  System_Collections_Generic_List_long__o *v8; // x22
  int64_t v9; // x1
  int64_t itemList; // x0
  int v11; // w25
  int32_t v12; // w24
  __int64 naturalAligment; // x10
  __int64 v14; // x8
  __int128 v15; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x8
  __int128 v20; // q0
  struct System_Int64_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  __int64 v24; // x8
  System_Collections_Generic_List_long__o *v25; // x0
  int v26; // w21
  System_Int64_array *v27; // x0
  System_Int64_array *v28; // x1
  System_Int64_array **v29; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+40h] [xbp-80h]

  if ( (byte_4E7179C & 1) == 0 )
  {
    sub_1D0F0B4(&EventFortificationListViewItem_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_long__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1D0F0B4(&System_Collections_Generic_List_long__TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4E7179C = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1D0F300(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_3943BF0 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1D0F300(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_3943BF0 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v11 = *(_DWORD *)(itemList + 24);
  if ( v11 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v12,
                            (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      naturalAligment = EventFortificationListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(EventFortificationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != EventFortificationListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v14 = *(_QWORD *)(itemList + 128);
      if ( v14 && *(_BYTE *)(itemList + 185) )
      {
        if ( *(_BYTE *)(itemList + 170) )
        {
          v15 = *(_OWORD *)(v14 + 32);
          *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)(v14 + 16);
          *(_OWORD *)&v33.fields.fakeValue = v15;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v32 = v33;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v32, 0);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v17 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v9 = itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v24 = v17[4];
            v25 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v25,
              v9,
              *(const MethodInfo_3944444 **)(*(_QWORD *)(v24 + 192) + 112LL));
            goto LABEL_28;
          }
          v19 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v20 = *(_OWORD *)(v14 + 32);
          *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)(v14 + 16);
          *(_OWORD *)&v33.fields.fakeValue = v20;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v31 = v33;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v31, 0);
          if ( !v7 )
            goto LABEL_37;
          v21 = v7->fields._items;
          v22 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v21 )
            goto LABEL_37;
          v23 = v7->fields._size;
          v9 = itemList;
          if ( (unsigned int)v23 >= LODWORD(v21->max_length) )
          {
            v24 = v22[4];
            v25 = v7;
            goto LABEL_27;
          }
          v19 = &v21->obj.klass + v23;
          v7->fields._size = v23 + 1;
        }
        v19[4] = (Il2CppClass *)v9;
      }
LABEL_28:
      if ( v11 == ++v12 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1D0F30C(itemList, v9);
  v26 = v8->fields._size + v7->fields._size;
  if ( v26 < 1 )
  {
    *choiceList = 0;
    sub_1D0F058(choiceList, 0);
    v29 = unchoiceList;
    v28 = 0;
    *unchoiceList = 0;
  }
  else
  {
    v27 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_3945EFC *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v27;
    sub_1D0F058(choiceList, v27);
    v28 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_3945EFC *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v28;
    v29 = unchoiceList;
  }
  sub_1D0F058(v29, v28);
  return v26 > 0;
}


bool EventFortificationListViewManager__GetSwapLockList(
        EventFortificationListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x23
  System_Collections_Generic_List_long__o *v8; // x22
  int64_t v9; // x1
  int64_t itemList; // x0
  int v11; // w25
  int32_t v12; // w24
  __int64 naturalAligment; // x10
  __int64 v14; // x8
  __int128 v15; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x8
  __int128 v20; // q0
  struct System_Int64_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  __int64 v24; // x8
  System_Collections_Generic_List_long__o *v25; // x0
  int v26; // w21
  System_Int64_array *v27; // x0
  System_Int64_array *v28; // x1
  System_Int64_array **v29; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+40h] [xbp-80h]

  if ( (byte_4E7179B & 1) == 0 )
  {
    sub_1D0F0B4(&EventFortificationListViewItem_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_long__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1D0F0B4(&System_Collections_Generic_List_long__TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4E7179B = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1D0F300(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_3943BF0 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1D0F300(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_3943BF0 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v11 = *(_DWORD *)(itemList + 24);
  if ( v11 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v12,
                            (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      naturalAligment = EventFortificationListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(EventFortificationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != EventFortificationListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v14 = *(_QWORD *)(itemList + 128);
      if ( v14 && *(_BYTE *)(itemList + 184) )
      {
        if ( *(_BYTE *)(itemList + 169) )
        {
          v15 = *(_OWORD *)(v14 + 32);
          *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)(v14 + 16);
          *(_OWORD *)&v33.fields.fakeValue = v15;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v32 = v33;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v32, 0);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v17 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v9 = itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v24 = v17[4];
            v25 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v25,
              v9,
              *(const MethodInfo_3944444 **)(*(_QWORD *)(v24 + 192) + 112LL));
            goto LABEL_28;
          }
          v19 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v20 = *(_OWORD *)(v14 + 32);
          *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)(v14 + 16);
          *(_OWORD *)&v33.fields.fakeValue = v20;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v31 = v33;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v31, 0);
          if ( !v7 )
            goto LABEL_37;
          v21 = v7->fields._items;
          v22 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v21 )
            goto LABEL_37;
          v23 = v7->fields._size;
          v9 = itemList;
          if ( (unsigned int)v23 >= LODWORD(v21->max_length) )
          {
            v24 = v22[4];
            v25 = v7;
            goto LABEL_27;
          }
          v19 = &v21->obj.klass + v23;
          v7->fields._size = v23 + 1;
        }
        v19[4] = (Il2CppClass *)v9;
      }
LABEL_28:
      if ( v11 == ++v12 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1D0F30C(itemList, v9);
  v26 = v8->fields._size + v7->fields._size;
  if ( v26 < 1 )
  {
    *lockList = 0;
    sub_1D0F058(lockList, 0);
    v29 = unlockList;
    v28 = 0;
    *unlockList = 0;
  }
  else
  {
    v27 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_3945EFC *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v27;
    sub_1D0F058(lockList, v27);
    v28 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_3945EFC *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v28;
    v29 = unlockList;
  }
  sub_1D0F058(v29, v28);
  return v26 > 0;
}


void EventFortificationListViewManager__InitBackListView(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  EventFortificationListViewManager__StatusRequest(this, 0, v2);
  EventFortificationListViewManager__SetStatusKind(this, 0, v4);
}


void EventFortificationListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  EventFortificationListViewManager_c *v2; // x0
  ListViewSort_o *servantSortStatus; // x0

  if ( (byte_4E7177E & 1) == 0 )
  {
    sub_1D0F0B4(&EventFortificationListViewManager_TypeInfo);
    byte_4E7177E = 1;
  }
  v2 = EventFortificationListViewManager_TypeInfo;
  if ( !EventFortificationListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationListViewManager_TypeInfo);
    v2 = EventFortificationListViewManager_TypeInfo;
  }
  servantSortStatus = v2->static_fields->servantSortStatus;
  if ( !servantSortStatus )
    sub_1D0F30C(0, v1);
  ListViewSort__InitLoad(servantSortStatus, 0);
}


void EventFortificationListViewManager__ModifyItem(
        EventFortificationListViewManager_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x19
  _BOOL8 v8; // x0
  __int64 v9; // x1
  __int64 naturalAligment; // x11
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

  if ( (byte_4E71785 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1D0F0B4(&EventFortificationListViewItem_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E71785 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  if ( this->fields.itemList )
  {
    UserGameMaster__getSelfUserGame(0);
    if ( usrSvtId < 1 )
    {
      Entity = 0;
    }
    else
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_37;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_37;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 usrSvtId,
                 (const MethodInfo_353832C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( Instance )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v22,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      *(_OWORD *)&v23.fields._list = *(_OWORD *)&v22.fields.currentCryptoKey;
      v23.fields._current = (Il2CppObject *)v22.fields.fakeValue;
      while ( 1 )
      {
        v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v23,
               (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v8 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v23,
            (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v23.fields._current
          && (naturalAligment = EventFortificationListViewItem_TypeInfo->_2.naturalAligment,
              v23.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
        {
          if ( (EventFortificationListViewItem_c *)v23.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == EventFortificationListViewItem_TypeInfo )
            current = (EventFortificationListViewItem_o *)v23.fields._current;
          else
            current = 0;
          if ( Entity )
          {
LABEL_15:
            if ( !current )
              sub_1D0F30C(v8, v9);
            userServantEntity = current->fields.userServantEntity;
            if ( !userServantEntity )
              sub_1D0F30C(v8, v9);
            v13 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v22.fields.fakeValue = v13;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v21 = v22;
            v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v21, 0);
            v15 = Entity[2];
            *(Il2CppObject *)&v20.fields.currentCryptoKey = Entity[1];
            *(Il2CppObject *)&v20.fields.fakeValue = v15;
            if ( v14 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v20, 0) )
              EventFortificationListViewItem__ModifyItem(current, (UserServantEntity_o *)Entity, v16);
            goto LABEL_26;
          }
        }
        else
        {
          current = 0;
          if ( Entity )
            goto LABEL_15;
        }
        if ( !current )
          sub_1D0F30C(v8, v9);
LABEL_26:
        viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
        {
          v19 = current->fields.viewObject;
          if ( !v19 )
            sub_1D0F30C(0, v18);
          ((void (__fastcall *)(struct ListViewObject_o *, EventFortificationListViewItem_o *, const MethodInfo *))v19->klass->vtable._5_SetItem.methodPtr)(
            v19,
            current,
            v19->klass->vtable._5_SetItem.method);
        }
      }
    }
LABEL_37:
    sub_1D0F30C(Instance, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventFortificationListViewManager__ModifyList(
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
  __int64 naturalAligment; // x10
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

  if ( (byte_4E71787 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1D0F0B4(&EventFortificationListViewItem_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E71787 = 1;
  }
  sort = (int64_t)this->fields.sort;
  if ( !sort )
    goto LABEL_33;
  ListViewSort__Load((ListViewSort_o *)sort, 0);
  sort = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_33;
  sort = (int64_t)DataManager__GetMasterData_object_(
                    (DataManager_o *)sort,
                    (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !sort )
    goto LABEL_33;
  sort = (int64_t)UserServantMaster__getOrganizationList((UserServantMaster_o *)sort, 0);
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
      sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v26, 0);
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
                            (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !sort )
            goto LABEL_33;
          v15 = sort;
          naturalAligment = EventFortificationListViewItem_TypeInfo->_2.naturalAligment;
          if ( *(unsigned __int8 *)(*(_QWORD *)sort + 304LL) < (unsigned int)naturalAligment
            || *(EventFortificationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)sort + 200LL) + 8 * naturalAligment - 8) != EventFortificationListViewItem_TypeInfo )
          {
            goto LABEL_33;
          }
          v17 = *(_QWORD *)(sort + 128);
          if ( v17 )
          {
            v18 = *(_OWORD *)(v17 + 32);
            *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(v17 + 16);
            *(_OWORD *)&v27.fields.fakeValue = v18;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v25 = v27;
            sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v25, 0);
            if ( sort == v13 )
              break;
          }
          if ( size == ++v14 )
            goto LABEL_29;
        }
        v19 = *(_QWORD *)(v15 + 128);
        if ( !v19 )
          break;
        v20 = *(_OWORD *)(v19 + 32);
        *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(v19 + 16);
        *(_OWORD *)&v27.fields.fakeValue = v20;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v24 = v27;
        v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v24, 0);
        EventFortificationListViewManager__ModifyLockItem(this, v21, 1, isIconSizeChangea, v22);
      }
LABEL_29:
      if ( ++v10 == (_DWORD)v7 )
        return;
      if ( v10 >= *(_DWORD *)(v8 + 24) )
        sub_1D0F314(sort);
    }
LABEL_33:
    sub_1D0F30C(sort, isIconSizeChange);
  }
}


void EventFortificationListViewManager__ModifyLockItem(
        EventFortificationListViewManager_o *this,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x21
  bool v12; // w24
  int64_t v13; // x0
  const MethodInfo *v14; // x1
  __int64 naturalAligment; // x11
  EventFortificationListViewItem_o *current; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v18; // q0
  int64_t v19; // x0
  Il2CppObject v20; // q0
  int64_t v21; // x23
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1
  UnityEngine_Object_o *viewObject; // x23
  __int64 v26; // x1
  struct ListViewObject_o *v27; // x0
  __int64 v28; // x1
  ListViewObject_o *v29; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4E71786 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1D0F0B4(&EventFortificationListViewItem_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E71786 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  if ( this->fields.itemList )
  {
    UserGameMaster__getSelfUserGame(0);
    if ( usrSvtId < 1 )
    {
      Entity = 0;
    }
    else
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_45;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_45;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 usrSvtId,
                 (const MethodInfo_353832C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( Instance )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v32,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      *(_OWORD *)&v33.fields._list = *(_OWORD *)&v32.fields.currentCryptoKey;
      v33.fields._current = (Il2CppObject *)v32.fields.fakeValue;
      v12 = !isIconSizeChange && isInit;
      while ( 1 )
      {
        v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v33,
                (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v13 & 1) == 0 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v33,
            (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v33.fields._current
          && (naturalAligment = EventFortificationListViewItem_TypeInfo->_2.naturalAligment,
              v33.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
        {
          if ( (EventFortificationListViewItem_c *)v33.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == EventFortificationListViewItem_TypeInfo )
            current = (EventFortificationListViewItem_o *)v33.fields._current;
          else
            current = 0;
          if ( !Entity )
            goto LABEL_26;
        }
        else
        {
          current = 0;
          if ( !Entity )
            goto LABEL_26;
        }
        if ( !current )
          sub_1D0F30C(v13, v14);
        userServantEntity = current->fields.userServantEntity;
        if ( !userServantEntity )
          sub_1D0F30C(v13, v14);
        v18 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v32.fields.fakeValue = v18;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v31 = v32;
        v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v31, 0);
        v20 = Entity[2];
        v21 = v19;
        *(Il2CppObject *)&v30.fields.currentCryptoKey = Entity[1];
        *(Il2CppObject *)&v30.fields.fakeValue = v20;
        v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v30, 0);
        if ( v21 == v13 )
          EventFortificationListViewItem__SetUserServantEntity(current, (UserServantEntity_o *)Entity, v22);
LABEL_26:
        if ( v12 )
        {
          if ( !current )
            sub_1D0F30C(v13, v14);
          EventFortificationListViewItem__ModifyLockItem(current, v14);
          EventFortificationListViewItem__ModifyChoiceItem(current, v23);
          EventFortificationListViewItem__ModifyPushItem(current, v24);
        }
        else if ( !current )
        {
          sub_1D0F30C(v13, v14);
        }
        viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
        {
          v27 = current->fields.viewObject;
          if ( !v27 )
            sub_1D0F30C(0, v26);
          ((void (__fastcall *)(struct ListViewObject_o *, EventFortificationListViewItem_o *, const MethodInfo *))v27->klass->vtable._5_SetItem.methodPtr)(
            v27,
            current,
            v27->klass->vtable._5_SetItem.method);
          if ( isIconSizeChange )
          {
            v29 = current->fields.viewObject;
            if ( !v29 )
              sub_1D0F30C(0, v28);
            ListViewObject__SetItemSeed(v29, (ListViewItem_o *)current, this->fields.seed, 0);
          }
        }
      }
    }
LABEL_45:
    sub_1D0F30C(Instance, v9);
  }
}


void EventFortificationListViewManager__OnClickBack(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct System_Action_bool__UserServantEntity__o *selectAfterCallback; // x20

  if ( (byte_4E717A2 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_EventFortificationListViewManager_OnClickBack__);
    byte_4E717A2 = 1;
  }
  v3 = Method_EventFortificationListViewManager_OnClickBack__;
  if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1D0F0CC(Method_EventFortificationListViewManager_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  selectAfterCallback = this->fields.selectAfterCallback;
  if ( selectAfterCallback )
  {
    this->fields.selectAfterCallback = 0;
    sub_1D0F058(&this->fields.selectAfterCallback, 0);
    ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))selectAfterCallback->fields.invoke_impl)(
      selectAfterCallback->fields.method_code,
      0,
      0,
      selectAfterCallback->fields.method);
  }
}


void EventFortificationListViewManager__OnClickBonusFilterKind(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_4E71795 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_EventFortificationListViewManager_OnClickBonusFilterKind__);
    byte_4E71795 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EventFortificationListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1D0F0CC(Method_EventFortificationListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1D0F30C(0, v5);
    ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, 0, 0, 0);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void EventFortificationListViewManager__OnClickChoiceTab(
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

  if ( (byte_4E7179F & 1) == 0 )
  {
    sub_1D0F0B4(&Method_EventFortificationListViewManager_EndClickTabChoice__);
    sub_1D0F0B4(&Method_EventFortificationListViewManager_OnClickChoiceTab__);
    sub_1D0F0B4(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
    byte_4E7179F = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    v3 = Method_EventFortificationListViewManager_OnClickChoiceTab__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickChoiceTab__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1D0F0CC(Method_EventFortificationListViewManager_OnClickChoiceTab__);
    v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( this->fields.modeKind )
    {
      v6 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_1D0F300(EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
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
      EventFortificationListViewManager__SetMode_32868992(this, 2, v11);
    }
  }
}


void EventFortificationListViewManager__OnClickCollectLock(
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

  if ( (byte_4E7179E & 1) == 0 )
  {
    sub_1D0F0B4(&Method_EventFortificationListViewManager_EndClickTabLock__);
    sub_1D0F0B4(&Method_EventFortificationListViewManager_OnClickCollectLock__);
    sub_1D0F0B4(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
    byte_4E7179E = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    v3 = Method_EventFortificationListViewManager_OnClickCollectLock__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickCollectLock__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1D0F0CC(Method_EventFortificationListViewManager_OnClickCollectLock__);
    v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( this->fields.modeKind )
    {
      v6 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_1D0F300(EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
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
      EventFortificationListViewManager__SetMode_32868992(this, 2, v11);
    }
  }
}


void EventFortificationListViewManager__OnClickFilterKind(
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

  if ( (byte_4E71793 & 1) == 0 )
  {
    sub_1D0F0B4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_EventFortificationListViewManager_EndSelectFilterKind__);
    sub_1D0F0B4(&Method_EventFortificationListViewManager_OnClickFilterKind__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E71793 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EventFortificationListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1D0F0CC(Method_EventFortificationListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1D0F300(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_EventFortificationListViewManager_EndSelectFilterKind__,
      0);
    if ( !v7 )
      sub_1D0F30C(v9, v10);
    CommonUI__OpenServantFilterSelectMenu(v7, 1, sort, v8, 0, 0);
  }
}


void EventFortificationListViewManager__OnClickListView(
        EventFortificationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void EventFortificationListViewManager__OnClickNormalStatus(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  EventFortificationListViewManager_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_4E7179D & 1) == 0 )
  {
    sub_1D0F0B4(&Method_EventFortificationListViewManager_EndClickTabStatus__);
    sub_1D0F0B4(&Method_EventFortificationListViewManager_OnClickNormalStatus__);
    sub_1D0F0B4(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
    byte_4E7179D = 1;
  }
  if ( this->fields.modeKind )
  {
    v3 = Method_EventFortificationListViewManager_OnClickNormalStatus__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickNormalStatus__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1D0F0CC(Method_EventFortificationListViewManager_OnClickNormalStatus__);
    v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_1D0F300(EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
    EventFortificationListViewManager_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_EventFortificationListViewManager_EndClickTabStatus__,
      v6);
    EventFortificationListViewManager__StatusRequest(this, v5, v7);
  }
}


void EventFortificationListViewManager__OnClickPushTab(
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

  if ( (byte_4E717A0 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_EventFortificationListViewManager_EndClickTabPush__);
    sub_1D0F0B4(&Method_EventFortificationListViewManager_OnClickPushTab__);
    sub_1D0F0B4(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
    byte_4E717A0 = 1;
  }
  if ( this->fields.modeKind != 3 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0, 0, 0, 0, 0, 0);
    v3 = Method_EventFortificationListViewManager_OnClickPushTab__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickPushTab__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1D0F0CC(Method_EventFortificationListViewManager_OnClickPushTab__);
    v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( this->fields.modeKind )
    {
      v6 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_1D0F300(EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
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
      EventFortificationListViewManager__SetMode_32868992(this, 2, v11);
    }
  }
}


void EventFortificationListViewManager__OnClickScaleChange(
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

  if ( (byte_4E717A3 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_EventFortificationListViewManager_OnClickScaleChange__);
    byte_4E717A3 = 1;
  }
  v3 = Method_EventFortificationListViewManager_OnClickScaleChange__;
  if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1D0F0CC(Method_EventFortificationListViewManager_OnClickScaleChange__);
  v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
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
    sub_1D0F058(p_seed, smallSizeSeed);
  }
  sort = this->fields.sort;
  if ( !sort
    || (v12 = this->fields.scaleType,
        sort->fields.iconScaleKind = v12,
        scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, v12, 0),
        !scaleChangeButtonSprite) )
  {
    sub_1D0F30C(sort, v5);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0);
  EventFortificationListViewManager__ModifyList(this, 1, v14);
  EventFortificationListViewManager__SetMode_32868992(this, 2, v15);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void EventFortificationListViewManager__OnClickSelectObject(
        EventFortificationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ListViewObject_o *v3; // x20
  __int64 fortificationConfirmDialog; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 naturalAligment; // x10
  ListViewObject_o **p_targetInUserServantEntity; // x23
  EventFortificationListViewItem_o *Item; // x20
  ListViewObject_o **p_targetOutUserServantEntity; // x24
  System_Collections_Generic_List_object__o *v12; // x22
  System_Collections_Generic_List_int__o *v13; // x21
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v16; // q1
  struct UserServantEntity_o *v17; // x8
  __int128 v18; // q0
  __int64 v19; // x25
  struct EventFortificationWorkItem_o *v20; // x8
  ListViewObject_o *v21; // x1
  struct System_Object_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  Il2CppClass **v25; // x0
  ListViewObject_o *v26; // x1
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  const MethodInfo *v31; // x2
  struct UserServantEntity_o *v32; // x8
  __int128 v33; // q0
  struct UserServantEntity_o *v34; // x8
  __int128 v35; // q0
  struct UserServantEntity_o *v36; // x1
  struct EventFortificationWorkItem_o *v37; // x8
  ListViewObject_o *v38; // x1
  struct System_Object_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  Il2CppClass **v42; // x0
  struct System_Int32_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  FortificationConfirmDialogComponent_o *v46; // x23
  System_Object_array *v47; // x22
  System_Int32_array *v48; // x21
  System_String_o *v49; // x24
  EventFortificationWorkItem_o *v50; // x8
  System_String_o *v51; // x20
  int32_t WorkType; // w25
  System_Action_o *v53; // x26
  struct System_Int32_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  FortificationConfirmDialogComponent_o *v57; // x23
  System_Object_array *v58; // x22
  System_Int32_array *v59; // x21
  System_String_o *v60; // x24
  EventFortificationWorkItem_o *v61; // x8
  System_String_o *v62; // x20
  int32_t v63; // w25
  System_Action_o *v64; // x26
  int32_t v65; // w1
  struct System_Int32_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  struct System_Object_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  Il2CppClass **v72; // x0
  const MethodInfo *v73; // x2
  struct System_Int32_array *v74; // x8
  _QWORD *v75; // x9
  __int64 v76; // x10
  EventFortificationWorkItem_o *v77; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+10h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+30h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+50h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+70h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+90h] [xbp-70h]

  v3 = obj;
  if ( (byte_4E7178C & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1D0F0B4(&Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__);
    sub_1D0F0B4(&Method_EventFortificationListViewManager_OnClickSelectObject__);
    sub_1D0F0B4(&EventFortificationListViewObject_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E7178C = 1;
  }
  fortificationConfirmDialog = (__int64)this->fields.fortificationConfirmDialog;
  if ( !fortificationConfirmDialog )
    goto LABEL_85;
  fortificationConfirmDialog = (__int64)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)fortificationConfirmDialog,
                                          0);
  if ( !fortificationConfirmDialog )
    goto LABEL_85;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fortificationConfirmDialog, 1, 0);
  v6 = Method_EventFortificationListViewManager_OnClickSelectObject__;
  if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickSelectObject__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1D0F0CC(Method_EventFortificationListViewManager_OnClickSelectObject__);
  v7 = (System_Reflection_MethodBase_o *)sub_1D0F098(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
  if ( !v3 )
    goto LABEL_85;
  naturalAligment = EventFortificationListViewObject_TypeInfo->_2.naturalAligment;
  if ( v3->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    goto LABEL_85;
  if ( (EventFortificationListViewObject_c *)v3->klass->_2.typeHierarchy[naturalAligment - 1] != EventFortificationListViewObject_TypeInfo )
    goto LABEL_85;
  p_targetInUserServantEntity = (ListViewObject_o **)&this->fields.targetInUserServantEntity;
  Item = EventFortificationListViewObject__GetItem((EventFortificationListViewObject_o *)v3, (const MethodInfo *)obj);
  this->fields.targetInUserServantEntity = 0;
  sub_1D0F058(&this->fields.targetInUserServantEntity, 0);
  p_targetOutUserServantEntity = (ListViewObject_o **)&this->fields.targetOutUserServantEntity;
  this->fields.targetOutUserServantEntity = 0;
  sub_1D0F058(&this->fields.targetOutUserServantEntity, 0);
  fortificationConfirmDialog = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fortificationConfirmDialog )
    goto LABEL_85;
  DataManager__GetMasterData_object_(
    (DataManager_o *)fortificationConfirmDialog,
    (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantMaster___);
  fortificationConfirmDialog = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fortificationConfirmDialog )
    goto LABEL_85;
  DataManager__GetMasterData_object_(
    (DataManager_o *)fortificationConfirmDialog,
    (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  v12 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  v13 = (System_Collections_Generic_List_int__o *)sub_1D0F300(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_393EB98 *)Method_System_Collections_Generic_List_int___ctor__);
  targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
  if ( !targetFortificationWorkItem )
    goto LABEL_85;
  userServantEntity = targetFortificationWorkItem->fields.userServantEntity;
  if ( !userServantEntity )
  {
    if ( Item )
    {
      v26 = (ListViewObject_o *)Item->fields.userServantEntity;
      *p_targetInUserServantEntity = v26;
      fortificationConfirmDialog = sub_1D0F058(&this->fields.targetInUserServantEntity, v26);
      if ( v12 )
      {
        obj = *p_targetInUserServantEntity;
        items = v12->fields._items;
        v28 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
        ++v12->fields._version;
        if ( items )
        {
          size = v12->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              (Il2CppObject *)obj,
              *(const MethodInfo_395C410 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            v30 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v30[4] = (Il2CppClass *)obj;
            sub_1D0F058(v30 + 4, obj);
          }
          fortificationConfirmDialog = EventFortificationDataLogic__CalculationGetPoint(
                                         Item->fields.userServantEntity,
                                         Item->fields.eventId,
                                         v31);
          if ( v13 )
          {
            v43 = v13->fields._items;
            v44 = Method_System_Collections_Generic_List_int__Add__;
            ++v13->fields._version;
            if ( v43 )
            {
              v45 = v13->fields._size;
              if ( (unsigned int)v45 >= LODWORD(v43->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v13,
                  fortificationConfirmDialog,
                  *(const MethodInfo_393F3EC **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
              }
              else
              {
                v13->fields._size = v45 + 1;
                v43->m_Items[v45] = fortificationConfirmDialog;
              }
              v46 = this->fields.fortificationConfirmDialog;
              v47 = System_Collections_Generic_List_object___ToArray(
                      v12,
                      (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
              fortificationConfirmDialog = (__int64)System_Collections_Generic_List_int___ToArray(
                                                      v13,
                                                      (const MethodInfo_3940EA4 *)Method_System_Collections_Generic_List_int__ToArray__);
              if ( Item->fields.targetFortificationWorkItem )
              {
                v48 = (System_Int32_array *)fortificationConfirmDialog;
                fortificationConfirmDialog = (__int64)EventFortificationWorkItem__get_TeamName(
                                                        Item->fields.targetFortificationWorkItem,
                                                        0);
                if ( Item->fields.targetFortificationWorkItem )
                {
                  v49 = (System_String_o *)fortificationConfirmDialog;
                  fortificationConfirmDialog = (__int64)EventFortificationWorkItem__get_Name(
                                                          Item->fields.targetFortificationWorkItem,
                                                          0);
                  v50 = Item->fields.targetFortificationWorkItem;
                  if ( v50 )
                  {
                    v51 = (System_String_o *)fortificationConfirmDialog;
                    WorkType = EventFortificationWorkItem__get_WorkType(v50, 0);
                    v53 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
                    System_Action___ctor(
                      v53,
                      (Il2CppObject *)this,
                      (intptr_t)Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__,
                      0);
                    if ( v46 )
                    {
                      FortificationConfirmDialogComponent__Open(
                        v46,
                        0,
                        (UserServantEntity_array *)v47,
                        v48,
                        v49,
                        v51,
                        WorkType,
                        v53,
                        0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_85;
  }
  v16 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v82.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v82.fields.fakeValue = v16;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v81 = v82;
  fortificationConfirmDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v81, 0);
  if ( !Item )
    goto LABEL_85;
  v17 = Item->fields.userServantEntity;
  if ( !v17 )
    goto LABEL_85;
  v18 = *(_OWORD *)&v17->fields.id.fields.fakeValue;
  v19 = fortificationConfirmDialog;
  *(_OWORD *)&v80.fields.currentCryptoKey = *(_OWORD *)&v17->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v80.fields.fakeValue = v18;
  fortificationConfirmDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v80, 0);
  v20 = this->fields.targetFortificationWorkItem;
  if ( v19 != fortificationConfirmDialog )
  {
    if ( v20 )
    {
      v32 = v20->fields.userServantEntity;
      if ( !v32 )
        return;
      v33 = *(_OWORD *)&v32->fields.id.fields.fakeValue;
      *(_OWORD *)&v82.fields.currentCryptoKey = *(_OWORD *)&v32->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v82.fields.fakeValue = v33;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v79 = v82;
      fortificationConfirmDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v79, 0);
      v34 = Item->fields.userServantEntity;
      if ( v34 )
      {
        v35 = *(_OWORD *)&v34->fields.id.fields.fakeValue;
        *(_OWORD *)&v78.fields.currentCryptoKey = *(_OWORD *)&v34->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v78.fields.fakeValue = v35;
        if ( fortificationConfirmDialog == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v78, 0) )
          return;
        v36 = Item->fields.userServantEntity;
        this->fields.targetInUserServantEntity = v36;
        fortificationConfirmDialog = sub_1D0F058(&this->fields.targetInUserServantEntity, v36);
        v37 = this->fields.targetFortificationWorkItem;
        if ( v37 )
        {
          v38 = (ListViewObject_o *)v37->fields.userServantEntity;
          *p_targetOutUserServantEntity = v38;
          fortificationConfirmDialog = sub_1D0F058(&this->fields.targetOutUserServantEntity, v38);
          if ( v12 )
          {
            obj = *p_targetOutUserServantEntity;
            v39 = v12->fields._items;
            v40 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v12->fields._version;
            if ( v39 )
            {
              v41 = v12->fields._size;
              if ( (unsigned int)v41 >= LODWORD(v39->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v12,
                  (Il2CppObject *)obj,
                  *(const MethodInfo_395C410 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
              }
              else
              {
                v42 = &v39->obj.klass + v41;
                v12->fields._size = v41 + 1;
                v42[4] = (Il2CppClass *)obj;
                sub_1D0F058(v42 + 4, obj);
              }
              fortificationConfirmDialog = (__int64)this->fields.targetFortificationWorkItem;
              if ( fortificationConfirmDialog )
              {
                fortificationConfirmDialog = EventFortificationWorkItem__get_AddPoint(
                                               (EventFortificationWorkItem_o *)fortificationConfirmDialog,
                                               0);
                if ( v13 )
                {
                  v66 = v13->fields._items;
                  v67 = Method_System_Collections_Generic_List_int__Add__;
                  ++v13->fields._version;
                  if ( v66 )
                  {
                    v68 = v13->fields._size;
                    if ( (unsigned int)v68 >= LODWORD(v66->max_length) )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        v13,
                        fortificationConfirmDialog,
                        *(const MethodInfo_393F3EC **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v13->fields._size = v68 + 1;
                      v66->m_Items[v68] = fortificationConfirmDialog;
                    }
                    obj = *p_targetInUserServantEntity;
                    v69 = v12->fields._items;
                    v70 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                    ++v12->fields._version;
                    if ( v69 )
                    {
                      v71 = v12->fields._size;
                      if ( (unsigned int)v71 >= LODWORD(v69->max_length) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v12,
                          (Il2CppObject *)obj,
                          *(const MethodInfo_395C410 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v72 = &v69->obj.klass + v71;
                        v12->fields._size = v71 + 1;
                        v72[4] = (Il2CppClass *)obj;
                        sub_1D0F058(v72 + 4, obj);
                      }
                      fortificationConfirmDialog = EventFortificationDataLogic__CalculationGetPoint(
                                                     Item->fields.userServantEntity,
                                                     Item->fields.eventId,
                                                     v73);
                      v74 = v13->fields._items;
                      v75 = Method_System_Collections_Generic_List_int__Add__;
                      ++v13->fields._version;
                      if ( v74 )
                      {
                        v76 = v13->fields._size;
                        if ( (unsigned int)v76 >= LODWORD(v74->max_length) )
                        {
                          System_Collections_Generic_List_int___AddWithResize(
                            v13,
                            fortificationConfirmDialog,
                            *(const MethodInfo_393F3EC **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v13->fields._size = v76 + 1;
                          v74->m_Items[v76] = fortificationConfirmDialog;
                        }
                        v57 = this->fields.fortificationConfirmDialog;
                        v58 = System_Collections_Generic_List_object___ToArray(
                                v12,
                                (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
                        fortificationConfirmDialog = (__int64)System_Collections_Generic_List_int___ToArray(
                                                                v13,
                                                                (const MethodInfo_3940EA4 *)Method_System_Collections_Generic_List_int__ToArray__);
                        if ( Item->fields.targetFortificationWorkItem )
                        {
                          v59 = (System_Int32_array *)fortificationConfirmDialog;
                          fortificationConfirmDialog = (__int64)EventFortificationWorkItem__get_TeamName(
                                                                  Item->fields.targetFortificationWorkItem,
                                                                  0);
                          if ( Item->fields.targetFortificationWorkItem )
                          {
                            v60 = (System_String_o *)fortificationConfirmDialog;
                            fortificationConfirmDialog = (__int64)EventFortificationWorkItem__get_Name(
                                                                    Item->fields.targetFortificationWorkItem,
                                                                    0);
                            v77 = Item->fields.targetFortificationWorkItem;
                            if ( v77 )
                            {
                              v62 = (System_String_o *)fortificationConfirmDialog;
                              v63 = EventFortificationWorkItem__get_WorkType(v77, 0);
                              v64 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
                              System_Action___ctor(
                                v64,
                                (Il2CppObject *)this,
                                (intptr_t)Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__,
                                0);
                              if ( v57 )
                              {
                                v65 = 2;
                                goto LABEL_83;
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
LABEL_85:
    sub_1D0F30C(fortificationConfirmDialog, obj);
  }
  if ( !v20 )
    goto LABEL_85;
  v21 = (ListViewObject_o *)v20->fields.userServantEntity;
  *p_targetOutUserServantEntity = v21;
  fortificationConfirmDialog = sub_1D0F058(&this->fields.targetOutUserServantEntity, v21);
  if ( !v12 )
    goto LABEL_85;
  obj = *p_targetOutUserServantEntity;
  v22 = v12->fields._items;
  v23 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
  ++v12->fields._version;
  if ( !v22 )
    goto LABEL_85;
  v24 = v12->fields._size;
  if ( (unsigned int)v24 >= LODWORD(v22->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)obj,
      *(const MethodInfo_395C410 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &v22->obj.klass + v24;
    v12->fields._size = v24 + 1;
    v25[4] = (Il2CppClass *)obj;
    sub_1D0F058(v25 + 4, obj);
  }
  fortificationConfirmDialog = (__int64)this->fields.targetFortificationWorkItem;
  if ( !fortificationConfirmDialog )
    goto LABEL_85;
  fortificationConfirmDialog = EventFortificationWorkItem__get_AddPoint(
                                 (EventFortificationWorkItem_o *)fortificationConfirmDialog,
                                 0);
  if ( !v13 )
    goto LABEL_85;
  v54 = v13->fields._items;
  v55 = Method_System_Collections_Generic_List_int__Add__;
  ++v13->fields._version;
  if ( !v54 )
    goto LABEL_85;
  v56 = v13->fields._size;
  if ( (unsigned int)v56 >= LODWORD(v54->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v13,
      fortificationConfirmDialog,
      *(const MethodInfo_393F3EC **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
  }
  else
  {
    v13->fields._size = v56 + 1;
    v54->m_Items[v56] = fortificationConfirmDialog;
  }
  v57 = this->fields.fortificationConfirmDialog;
  v58 = System_Collections_Generic_List_object___ToArray(
          v12,
          (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
  fortificationConfirmDialog = (__int64)System_Collections_Generic_List_int___ToArray(
                                          v13,
                                          (const MethodInfo_3940EA4 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !Item->fields.targetFortificationWorkItem )
    goto LABEL_85;
  v59 = (System_Int32_array *)fortificationConfirmDialog;
  fortificationConfirmDialog = (__int64)EventFortificationWorkItem__get_TeamName(
                                          Item->fields.targetFortificationWorkItem,
                                          0);
  if ( !Item->fields.targetFortificationWorkItem )
    goto LABEL_85;
  v60 = (System_String_o *)fortificationConfirmDialog;
  fortificationConfirmDialog = (__int64)EventFortificationWorkItem__get_Name(
                                          Item->fields.targetFortificationWorkItem,
                                          0);
  v61 = Item->fields.targetFortificationWorkItem;
  if ( !v61 )
    goto LABEL_85;
  v62 = (System_String_o *)fortificationConfirmDialog;
  v63 = EventFortificationWorkItem__get_WorkType(v61, 0);
  v64 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
  System_Action___ctor(
    v64,
    (Il2CppObject *)this,
    (intptr_t)Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__,
    0);
  if ( !v57 )
    goto LABEL_85;
  v65 = 1;
LABEL_83:
  FortificationConfirmDialogComponent__Open(v57, v65, (UserServantEntity_array *)v58, v59, v60, v62, v63, v64, 0);
}


void EventFortificationListViewManager__OnClickSelectPush(
        EventFortificationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x19
  __int64 SelfUserGame; // x0
  __int64 v7; // x1
  __int64 naturalAligment; // x9
  EventFortificationListViewItem_o *Item; // x0
  EventFortificationListViewItem_o **p_monitor; // x20
  int64_t v11; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v13; // q1
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  const MethodInfo *v16; // x2
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  __int64 v19; // x25
  ServantEntity_o *ServantEntity; // x26
  Il2CppObject *Master_object; // x24
  System_String_o *v22; // x21
  System_String_o *v23; // x22
  __int64 v24; // x23
  int32_t Rarity; // w27
  __int64 v26; // x27
  __int64 v27; // x27
  __int64 v28; // x26
  __int64 v29; // x27
  int32_t v30; // w0
  __int64 v31; // x8
  int32_t v32; // w25
  __int64 v33; // x25
  int32_t v34; // w0
  __int64 v35; // x25
  __int64 v36; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v37; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v38; // x8
  int32_t v39; // w20
  int32_t v40; // w0
  __int64 v41; // x20
  System_String_o *v42; // x20
  System_String_o *v43; // x22
  System_String_o *v44; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v46; // x25
  __int64 v47; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_4E717A4 & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1D0F0B4(&Method_EventFortificationListViewManager_OnClickSelectPush__);
    sub_1D0F0B4(&EventFortificationListViewObject_TypeInfo);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&object___TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1D0F0B4(&Rarity_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&Method_EventFortificationListViewManager___c__DisplayClass96_0__OnClickSelectPush_b__0__);
    sub_1D0F0B4(&EventFortificationListViewManager___c__DisplayClass96_0_TypeInfo);
    sub_1D0F0B4(&StringLiteral_12121/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1D0F0B4(&StringLiteral_12119/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1D0F0B4(&StringLiteral_12120/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_1D0F0B4(&StringLiteral_12122/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4E717A4 = 1;
  }
  v5 = (Il2CppObject *)sub_1D0F300(EventFortificationListViewManager___c__DisplayClass96_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_64;
  v5[1].klass = (Il2CppClass *)this;
  SelfUserGame = sub_1D0F058(&v5[1], this);
  if ( !obj )
    goto LABEL_64;
  naturalAligment = EventFortificationListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != EventFortificationListViewObject_TypeInfo )
  {
    SelfUserGame = sub_1D0F6A8(obj);
    goto LABEL_66;
  }
  Item = EventFortificationListViewObject__GetItem(
           (EventFortificationListViewObject_o *)obj,
           (const MethodInfo *)EventFortificationListViewObject_TypeInfo);
  v5[1].monitor = Item;
  p_monitor = (EventFortificationListViewItem_o **)&v5[1].monitor;
  sub_1D0F058(&v5[1].monitor, Item);
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_64;
  v11 = *(_QWORD *)(SelfUserGame + 128);
  if ( v11 )
  {
    if ( !*p_monitor )
      goto LABEL_64;
    userServantEntity = (*p_monitor)->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_64;
    v13 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v49.fields.fakeValue = v13;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v48 = v49;
    if ( v11 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v48, 0) )
      goto LABEL_14;
    v17 = Method_EventFortificationListViewManager_OnClickSelectPush__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickSelectPush__ + 83) & 2) != 0 )
      v17 = (_QWORD *)sub_1D0F0CC(Method_EventFortificationListViewManager_OnClickSelectPush__);
    v18 = (System_Reflection_MethodBase_o *)sub_1D0F098(v17, v17[4]);
    OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0, 0);
    SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_64;
    SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)SelfUserGame,
                              (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !SelfUserGame )
      goto LABEL_64;
    SelfUserGame = (__int64)DataMasterBase_object__object__long___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                              v11,
                              (const MethodInfo_353832C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !SelfUserGame )
      goto LABEL_64;
    v19 = SelfUserGame;
    ServantEntity = UserServantEntity__GetServantEntity((UserServantEntity_o *)SelfUserGame, -1, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_12122/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_12121/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
    v24 = sub_1D0F15C(object___TypeInfo, 6);
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)v19, 0);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    SelfUserGame = (__int64)Rarity__getRarityType(Rarity, 0);
    if ( !v24 )
LABEL_64:
      sub_1D0F30C(SelfUserGame, v7);
    v26 = SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1D0F1F0(SelfUserGame, *(_QWORD *)(*(_QWORD *)v24 + 64LL));
      if ( !SelfUserGame )
        goto LABEL_67;
    }
    if ( !*(_DWORD *)(v24 + 24) )
      goto LABEL_66;
    *(_QWORD *)(v24 + 32) = v26;
    SelfUserGame = sub_1D0F058(v24 + 32, v26);
    if ( !ServantEntity )
      goto LABEL_64;
    SelfUserGame = (__int64)ServantEntity__getClassName(ServantEntity, 0);
    v27 = SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1D0F1F0(SelfUserGame, *(_QWORD *)(*(_QWORD *)v24 + 64LL));
      if ( !SelfUserGame )
        goto LABEL_67;
    }
    if ( *(_DWORD *)(v24 + 24) <= 1u )
      goto LABEL_66;
    *(_QWORD *)(v24 + 40) = v27;
    sub_1D0F058(v24 + 40, v27);
    v29 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
    v28 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v50.fields.currentCryptoKey = v29;
    *(_QWORD *)&v50.fields.fakeValue = v28;
    v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v50, 0);
    v31 = *(_QWORD *)(v19 + 96);
    *(_QWORD *)&v51.fields.fakeValue = *(_QWORD *)(v19 + 104);
    v32 = v30;
    *(_QWORD *)&v51.fields.currentCryptoKey = v31;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v51, 0);
    if ( !Master_object )
      goto LABEL_64;
    SelfUserGame = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                              (ServantLimitImageMaster_o *)Master_object,
                              v32,
                              SelfUserGame,
                              1,
                              1,
                              0);
    v33 = SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1D0F1F0(SelfUserGame, *(_QWORD *)(*(_QWORD *)v24 + 64LL));
      if ( !SelfUserGame )
        goto LABEL_67;
    }
    if ( *(_DWORD *)(v24 + 24) <= 2u )
      goto LABEL_66;
    *(_QWORD *)(v24 + 48) = v33;
    SelfUserGame = sub_1D0F058(v24 + 48, v33);
    if ( !*p_monitor )
      goto LABEL_64;
    SelfUserGame = (__int64)(*p_monitor)->fields.userServantEntity;
    if ( !SelfUserGame )
      goto LABEL_64;
    v34 = UserServantEntity__getRarity((UserServantEntity_o *)SelfUserGame, 0);
    SelfUserGame = (__int64)Rarity__getRarityType(v34, 0);
    v35 = SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1D0F1F0(SelfUserGame, *(_QWORD *)(*(_QWORD *)v24 + 64LL));
      if ( !SelfUserGame )
        goto LABEL_67;
    }
    if ( *(_DWORD *)(v24 + 24) <= 3u )
      goto LABEL_66;
    *(_QWORD *)(v24 + 56) = v35;
    SelfUserGame = sub_1D0F058(v24 + 56, v35);
    if ( !*p_monitor )
      goto LABEL_64;
    SelfUserGame = (__int64)(*p_monitor)->fields.servantEntity;
    if ( !SelfUserGame )
      goto LABEL_64;
    SelfUserGame = (__int64)ServantEntity__getClassName((ServantEntity_o *)SelfUserGame, 0);
    v36 = SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1D0F1F0(SelfUserGame, *(_QWORD *)(*(_QWORD *)v24 + 64LL));
      if ( !SelfUserGame )
        goto LABEL_67;
    }
    if ( *(_DWORD *)(v24 + 24) <= 4u )
      goto LABEL_66;
    *(_QWORD *)(v24 + 64) = v36;
    SelfUserGame = sub_1D0F058(v24 + 64, v36);
    if ( !*p_monitor )
      goto LABEL_64;
    v37 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*p_monitor)->fields.servantEntity;
    if ( !v37 )
      goto LABEL_64;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v37[1], 0);
    if ( !*p_monitor )
      goto LABEL_64;
    v38 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*p_monitor)->fields.userServantEntity;
    if ( !v38 )
      goto LABEL_64;
    v39 = SelfUserGame;
    v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v38[6], 0);
    SelfUserGame = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                              (ServantLimitImageMaster_o *)Master_object,
                              v39,
                              v40,
                              1,
                              1,
                              0);
    v41 = SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1D0F1F0(SelfUserGame, *(_QWORD *)(*(_QWORD *)v24 + 64LL));
      if ( !SelfUserGame )
      {
LABEL_67:
        v47 = sub_1D0F330();
        sub_1D0F1DC(v47, 0);
      }
    }
    if ( *(_DWORD *)(v24 + 24) > 5u )
    {
      *(_QWORD *)(v24 + 72) = v41;
      sub_1D0F058(v24 + 72, v41);
      v42 = System_String__Format_65604216(v23, (System_Object_array *)v24, 0);
      v43 = LocalizationManager__Get((System_String_o *)StringLiteral_12120/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
      v44 = LocalizationManager__Get((System_String_o *)StringLiteral_12119/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v46 = (CommonConfirmDialog_ClickDelegate_o *)sub_1D0F300(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v46,
        v5,
        Method_EventFortificationListViewManager___c__DisplayClass96_0__OnClickSelectPush_b__0__,
        0);
      SelfUserGame = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        SelfUserGame = (__int64)BalanceConfig_TypeInfo;
      }
      if ( Instance )
      {
        CommonUI__OpenConfirmDialog_32086984(
          (CommonUI_o *)Instance,
          v22,
          v42,
          v43,
          v44,
          v46,
          *(_DWORD *)(*(_QWORD *)(SelfUserGame + 184) + 508LL),
          *(_DWORD *)(*(_QWORD *)(SelfUserGame + 184) + 520LL),
          15.0,
          700,
          0,
          480,
          -162.5,
          0,
          0,
          240,
          0,
          0);
        return;
      }
      goto LABEL_64;
    }
LABEL_66:
    sub_1D0F314(SelfUserGame);
  }
LABEL_14:
  v14 = Method_EventFortificationListViewManager_OnClickSelectPush__;
  if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickSelectPush__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1D0F0CC(Method_EventFortificationListViewManager_OnClickSelectPush__);
  v15 = (System_Reflection_MethodBase_o *)sub_1D0F098(v14, v14[4]);
  OverwriteAssetSoundName__PlaySystemSe(v15, 8, 0, 0);
  EventFortificationListViewManager__PushRequest(this, *p_monitor, v16);
}


void EventFortificationListViewManager__OnClickSortAscendingOrder(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4E71799 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_EventFortificationListViewManager_OnClickSortAscendingOrder__);
    byte_4E71799 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EventFortificationListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1D0F0CC(Method_EventFortificationListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1D0F30C(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void EventFortificationListViewManager__OnClickSortButton(
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

  if ( (byte_4E71797 & 1) == 0 )
  {
    sub_1D0F0B4(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_EventFortificationListViewManager_EndSelectSortKind__);
    sub_1D0F0B4(&Method_EventFortificationListViewManager_OnClickSortButton__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E71797 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EventFortificationListViewManager_OnClickSortButton__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickSortButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1D0F0CC(Method_EventFortificationListViewManager_OnClickSortButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1D0F300(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_EventFortificationListViewManager_EndSelectSortKind__,
      0);
    if ( !v7 )
      sub_1D0F30C(v9, v10);
    CommonUI__OpenServantSortSelectMenu(v7, 3, sort, 0, v8, 0);
  }
}


void EventFortificationListViewManager__OnLongPushListView(
        EventFortificationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1
  UnityEngine_Behaviour_o *scrollView; // x0
  __int64 naturalAligment; // x10
  EventFortificationListViewItem_o *Item; // x21
  UserServantEntity_o *userServantEntity; // x21
  CommonUI_o *v12; // x20
  ServantStatusDialog_EndDelegate_o *v13; // x22

  if ( (byte_4E7178F & 1) == 0 )
  {
    sub_1D0F0B4(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1D0F0B4(&Method_EventFortificationListViewManager_EndShowServant__);
    sub_1D0F0B4(&Method_EventFortificationListViewManager_OnLongPushListView__);
    sub_1D0F0B4(&EventFortificationListViewObject_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E7178F = 1;
  }
  if ( (unsigned int)(this->fields.modeKind - 1) >= 3 )
  {
    v5 = Method_EventFortificationListViewManager_OnLongPushListView__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1D0F0CC(Method_EventFortificationListViewManager_OnLongPushListView__);
    v6 = (System_Reflection_MethodBase_o *)sub_1D0F098(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_13;
    UnityEngine_Behaviour__set_enabled(scrollView, 0, 0);
    if ( !obj
      || (naturalAligment = EventFortificationListViewObject_TypeInfo->_2.naturalAligment,
          obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != EventFortificationListViewObject_TypeInfo
      || (Item = EventFortificationListViewObject__GetItem((EventFortificationListViewObject_o *)obj, v7),
          scrollView = (UnityEngine_Behaviour_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          !Item)
      || (userServantEntity = Item->fields.userServantEntity,
          v12 = (CommonUI_o *)scrollView,
          v13 = (ServantStatusDialog_EndDelegate_o *)sub_1D0F300(ServantStatusDialog_EndDelegate_TypeInfo),
          ServantStatusDialog_EndDelegate___ctor(
            v13,
            (Il2CppObject *)this,
            Method_EventFortificationListViewManager_EndShowServant__,
            0),
          !v12) )
    {
LABEL_13:
      sub_1D0F30C(scrollView, v7);
    }
    CommonUI__OpenServantStatusDialog_32097036(v12, 0, userServantEntity, v13, 0);
  }
}


void EventFortificationListViewManager__OnMoveEnd(EventFortificationListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  UnityEngine_Behaviour_o *v8; // x0
  struct System_Action_o *CallbackFunc2; // x20

  if ( (byte_4E7178B & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E7178B = 1;
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
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v8 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
        if ( !v8
          || (UnityEngine_Behaviour__set_enabled(v8, 1, 0),
              (v8 = (UnityEngine_Behaviour_o *)this->fields.scrollView) == 0)
          || (((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, Il2CppClass *))v8->klass[1]._1.element_class)(
                v8,
                1,
                v8->klass[1]._1.castClass),
              (v8 = (UnityEngine_Behaviour_o *)this->fields.scrollView) == 0) )
        {
          sub_1D0F30C(v8, v7);
        }
        UIScrollView__UpdatePosition((UIScrollView_o *)v8, 0);
        CallbackFunc2 = this->fields.CallbackFunc2;
        this->fields.CallbackFunc2 = 0;
        sub_1D0F058(&this->fields.CallbackFunc2, 0);
        if ( CallbackFunc2 )
          ((void (__fastcall *)(intptr_t, intptr_t))CallbackFunc2->fields.invoke_impl)(
            CallbackFunc2->fields.method_code,
            CallbackFunc2->fields.method);
      }
    }
  }
}


void EventFortificationListViewManager__PushRequest(
        EventFortificationListViewManager_o *this,
        EventFortificationListViewItem_o *selectItem,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  NetworkManager_ResultCallbackFunc_o *v7; // x21

  if ( (byte_4E717A5 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_EventFortificationListViewManager_EndPushRequest__);
    sub_1D0F0B4(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E717A5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0);
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1D0F300(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_EventFortificationListViewManager_EndPushRequest__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getRequest_object_(
               v7,
               (const MethodInfo_32DC000 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  if ( !selectItem || !Instance )
LABEL_9:
    sub_1D0F30C(Instance, v6);
  CardFavoriteRequest__beginRequestPush((CardFavoriteRequest_o *)Instance, selectItem->fields.userServantEntity, 0);
}


void EventFortificationListViewManager__RefreshListDisp(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  int32_t size; // w22
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w21

  if ( (byte_4E71782 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Item__);
    byte_4E71782 = 1;
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
                                                                  (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, const MethodInfo *))ObjectList->klass->vtable._9_unknown.methodPtr)(
        ObjectList,
        this->fields.isInput,
        ObjectList->klass->vtable._9_unknown.method);
      if ( size == ++v7 )
        return;
    }
LABEL_9:
    sub_1D0F30C(ObjectList, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventFortificationListViewManager__RequestListObject(
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

  if ( (byte_4E7178A & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_EventFortificationListViewManager_OnMoveEnd__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Item__);
    sub_1D0F0B4(&StringLiteral_10060/*"OnMoveEnd"*/);
    byte_4E7178A = 1;
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
               (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Item__);
      v13 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_EventFortificationListViewManager_OnMoveEnd__, 0);
      if ( !Item )
        break;
      EventFortificationListViewObject__Init_32869516((EventFortificationListViewObject_o *)Item, mode, v13, v14);
      if ( size == ++v11 )
        return;
    }
LABEL_10:
    sub_1D0F30C(ObjectList, v8);
  }
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
    delay,
    0);
}


void EventFortificationListViewManager__SetFilterButtonImage(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_4E71796 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_17749/*"btn_filter_on"*/);
    sub_1D0F0B4(&StringLiteral_17748/*"btn_filter"*/);
    byte_4E71796 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !filterSprite) )
  {
    sub_1D0F30C(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17748/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17749/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0);
}


void EventFortificationListViewManager__SetHeaderMsg(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  struct UILabel_o *recoveryFatigueInfoMsgLabel; // x20
  System_String_o *TeamName; // x0
  __int64 v5; // x1
  System_String_o *v6; // x21
  EventFortificationWorkItem_o *targetFortificationWorkItem; // x8
  Il2CppObject *v8; // x19
  Il2CppObject *Name; // x0
  System_String_o *v10; // x1
  UILabel_o *v11; // x0
  struct UILabel_o *v12; // x19
  __int64 *v13; // x8

  if ( (byte_4E71784 & 1) == 0 )
  {
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_11828/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_1D0F0B4(&StringLiteral_11826/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_1D0F0B4(&StringLiteral_11827/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_1D0F0B4(&StringLiteral_6567/*"FORTIFICATION_GUIDE_HELP"*/);
    byte_4E71784 = 1;
  }
  switch ( this->fields.modeKind )
  {
    case 0:
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      TeamName = LocalizationManager__Get((System_String_o *)StringLiteral_6567/*"FORTIFICATION_GUIDE_HELP"*/, 0);
      if ( !this->fields.targetFortificationWorkItem )
        goto LABEL_22;
      v6 = TeamName;
      TeamName = EventFortificationWorkItem__get_TeamName(this->fields.targetFortificationWorkItem, 0);
      targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
      if ( !targetFortificationWorkItem )
        goto LABEL_22;
      v8 = (Il2CppObject *)TeamName;
      Name = (Il2CppObject *)EventFortificationWorkItem__get_Name(targetFortificationWorkItem, 0);
      TeamName = System_String__Format_65604080(v6, v8, Name, 0);
      if ( !recoveryFatigueInfoMsgLabel )
        goto LABEL_22;
      v10 = TeamName;
      v11 = recoveryFatigueInfoMsgLabel;
      goto LABEL_21;
    case 1:
      v12 = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = &StringLiteral_11827/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
      goto LABEL_19;
    case 2:
      v12 = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = &StringLiteral_11826/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
      goto LABEL_19;
    case 3:
      v12 = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = &StringLiteral_11828/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_19:
      TeamName = LocalizationManager__Get((System_String_o *)*v13, 0);
      if ( !v12 )
LABEL_22:
        sub_1D0F30C(TeamName, v5);
      v10 = TeamName;
      v11 = v12;
LABEL_21:
      UILabel__set_text(v11, v10, 0);
      break;
    default:
      return;
  }
}


void EventFortificationListViewManager__SetMode(
        EventFortificationListViewManager_o *this,
        int32_t mode,
        EventFortificationListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.Callback = callback;
  sub_1D0F058(&this->fields.Callback, callback);
  EventFortificationListViewManager__SetMode_32868992(this, mode, v6);
}


void EventFortificationListViewManager__SetMode_32868992(
        EventFortificationListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int32_t v6; // w1

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  if ( (unsigned int)(mode - 1) <= 1 )
  {
    if ( mode == 1 )
      v6 = 2;
    else
      v6 = 3;
    EventFortificationListViewManager__RequestListObject(this, v6, 0.0, v5);
  }
}


void EventFortificationListViewManager__SetMode_32869100(
        EventFortificationListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.CallbackFunc2 = callback;
  sub_1D0F058(&this->fields.CallbackFunc2, callback);
  EventFortificationListViewManager__SetMode_32868992(this, mode, v6);
}


void EventFortificationListViewManager__SetObjectItem(
        EventFortificationListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  EventFortificationListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4E71789 & 1) == 0 )
  {
    this = (EventFortificationListViewManager_o *)sub_1D0F0B4(&EventFortificationListViewObject_TypeInfo);
    byte_4E71789 = 1;
  }
  if ( !obj
    || (naturalAligment = EventFortificationListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != EventFortificationListViewObject_TypeInfo )
  {
    sub_1D0F30C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  EventFortificationListViewObject__Init_32868868(
    (EventFortificationListViewObject_o *)obj,
    v7,
    (const MethodInfo *)item);
}


void EventFortificationListViewManager__SetSortButtonImage(
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

  if ( (byte_4E7179A & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&StringLiteral_17784/*"btn_sort_up"*/);
    sub_1D0F0B4(&StringLiteral_17887/*"btn_txt_up"*/);
    sub_1D0F0B4(&StringLiteral_17837/*"btn_txt_new"*/);
    sub_1D0F0B4(&StringLiteral_17827/*"btn_txt_down"*/);
    sub_1D0F0B4(&StringLiteral_17844/*"btn_txt_old"*/);
    sub_1D0F0B4(&StringLiteral_17781/*"btn_sort_down"*/);
    byte_4E7179A = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_35;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v6 )
      goto LABEL_35;
    UILabel__set_text(v6, (System_String_o *)sort, 0);
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_35;
    ListViewSort__SetupSortLabelLayout(sort, this->fields.sortKindLabel, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
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
          v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17844/*"btn_txt_old"*/ : &StringLiteral_17837/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v10, 0);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v12 = (System_String_o **)&StringLiteral_17781/*"btn_sort_down"*/;
              v13 = (System_String_o **)&StringLiteral_17784/*"btn_sort_up"*/;
LABEL_31:
              if ( v11->fields.isAscendingOrder )
                v15 = v12;
              else
                v15 = v13;
              UISprite__set_spriteName((UISprite_o *)sort, *v15, 0);
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
          v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17887/*"btn_txt_up"*/ : &StringLiteral_17827/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v14, 0);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v12 = (System_String_o **)&StringLiteral_17784/*"btn_sort_up"*/;
              v13 = (System_String_o **)&StringLiteral_17781/*"btn_sort_down"*/;
              goto LABEL_31;
            }
          }
        }
      }
    }
LABEL_35:
    sub_1D0F30C(sort, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventFortificationListViewManager__SetStatusKind(
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

  if ( (byte_4E71783 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_17923/*"button_push_reg"*/);
    sub_1D0F0B4(&StringLiteral_17924/*"button_push_unreg"*/);
    sub_1D0F0B4(&StringLiteral_17909/*"button_allchoice_reg"*/);
    sub_1D0F0B4(&StringLiteral_17912/*"button_alllock_unreg"*/);
    sub_1D0F0B4(&StringLiteral_17925/*"button_select_reg"*/);
    sub_1D0F0B4(&StringLiteral_17926/*"button_select_unreg"*/);
    sub_1D0F0B4(&StringLiteral_17911/*"button_alllock_reg"*/);
    sub_1D0F0B4(&StringLiteral_17910/*"button_allchoice_unreg"*/);
    byte_4E71783 = 1;
  }
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  this->fields.modeKind = modeKind;
  if ( !statusTabButton )
    goto LABEL_28;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))statusTabButton->klass[1]._1.name)(
    statusTabButton,
    1,
    statusTabButton->klass[1]._1.namespaze);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 0, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabSprite;
  if ( !statusTabButton )
    goto LABEL_28;
  v6 = &StringLiteral_17925/*"button_select_reg"*/;
  if ( modeKind )
    v6 = &StringLiteral_17926/*"button_select_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v6, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppClass **))statusTabButton->klass[1]._1.nestedTypes)(
    statusTabButton,
    0,
    0,
    statusTabButton->klass[1]._1.implementedInterfaces);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))statusTabButton->klass[1]._1.name)(
    statusTabButton,
    1,
    statusTabButton->klass[1]._1.namespaze);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 1, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
  if ( !statusTabButton )
    goto LABEL_28;
  v7 = &StringLiteral_17911/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v7 = &StringLiteral_17912/*"button_alllock_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v7, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppClass **))statusTabButton->klass[1]._1.nestedTypes)(
    statusTabButton,
    0,
    0,
    statusTabButton->klass[1]._1.implementedInterfaces);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))statusTabButton->klass[1]._1.name)(
    statusTabButton,
    1,
    statusTabButton->klass[1]._1.namespaze);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 2, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceSprite;
  if ( !statusTabButton )
    goto LABEL_28;
  v8 = &StringLiteral_17909/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v8 = &StringLiteral_17910/*"button_allchoice_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v8, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppClass **))statusTabButton->klass[1]._1.nestedTypes)(
    statusTabButton,
    0,
    0,
    statusTabButton->klass[1]._1.implementedInterfaces);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))statusTabButton->klass[1]._1.name)(
    statusTabButton,
    1,
    statusTabButton->klass[1]._1.namespaze);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 3, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushSprite;
  if ( !statusTabButton )
    goto LABEL_28;
  v9 = &StringLiteral_17923/*"button_push_reg"*/;
  if ( modeKind != 3 )
    v9 = &StringLiteral_17924/*"button_push_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v9, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
  if ( !statusTabButton )
LABEL_28:
    sub_1D0F30C(statusTabButton, *(_QWORD *)&modeKind);
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppClass **))statusTabButton->klass[1]._1.nestedTypes)(
    statusTabButton,
    0,
    0,
    statusTabButton->klass[1]._1.implementedInterfaces);
  EventFortificationListViewManager__SetHeaderMsg(this, v10);
}


void EventFortificationListViewManager__StatusRequest(
        EventFortificationListViewManager_o *this,
        EventFortificationListViewManager_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t modeKind; // w8
  NetworkManager_ResultCallbackFunc_o *v7; // x20
  Il2CppObject *Request_object; // x0
  __int64 v9; // x1
  System_Int64_array *v10; // x1
  System_Int64_array *v11; // x2
  bool v12; // w4
  bool v13; // w5
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  System_Int64_array *v15; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4E717A1 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_EventFortificationListViewManager_EndStatusSync__);
    sub_1D0F0B4(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4E717A1 = 1;
  }
  unlockList = 0;
  lockList = 0;
  v15 = 0;
  choiceList = 0;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    if ( EventFortificationListViewManager__GetSwapChoiceList(this, &choiceList, &v15, v3) )
    {
      this->fields.requestCallback = callback;
      sub_1D0F058(&this->fields.requestCallback, callback);
      v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1D0F300(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager_EndStatusSync__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v14,
                         (const MethodInfo_32DC000 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_object )
      {
        v11 = v15;
        v10 = choiceList;
        v13 = 1;
        v12 = 0;
        goto LABEL_15;
      }
LABEL_19:
      sub_1D0F30C(Request_object, v9);
    }
  }
  else if ( modeKind == 1 && EventFortificationListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_1D0F058(&this->fields.requestCallback, callback);
    v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1D0F300(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_EventFortificationListViewManager_EndStatusSync__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v7,
                       (const MethodInfo_32DC000 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( Request_object )
    {
      v11 = unlockList;
      v10 = lockList;
      v12 = 1;
      v13 = 0;
LABEL_15:
      CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)Request_object, v10, v11, 0, v12, v13, 0);
      return;
    }
    goto LABEL_19;
  }
  if ( callback )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      0,
      callback->fields.method);
}


void EventFortificationListViewManager__add_Callback(
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

  if ( (byte_4E71779 & 1) == 0 )
  {
    sub_1D0F0B4(&EventFortificationListViewManager_CallbackFunc_TypeInfo);
    byte_4E71779 = 1;
  }
  Callback = (System_Delegate_o *)this->fields.Callback;
  p_Callback = &this->fields.Callback;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(Callback, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (EventFortificationListViewManager_CallbackFunc_c *)v7->klass != EventFortificationListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1D6AE88(p_Callback, v7, Callback);
    v9 = Callback == (System_Delegate_o *)v8;
    Callback = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventFortificationListViewManager_o *)sub_1D0F6A8(v7);
  EventFortificationListViewManager__remove_Callback(v10, v11, v12);
}


void EventFortificationListViewManager__add_CallbackFunc2(
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

  if ( (byte_4E7177B & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    byte_4E7177B = 1;
  }
  CallbackFunc2 = (System_Delegate_o *)this->fields.CallbackFunc2;
  p_CallbackFunc2 = &this->fields.CallbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(CallbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1D6AE88(p_CallbackFunc2, v7, CallbackFunc2);
    v9 = CallbackFunc2 == (System_Delegate_o *)v8;
    CallbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventFortificationListViewManager_o *)sub_1D0F6A8(v7);
  EventFortificationListViewManager__remove_CallbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_EventFortificationListViewObject__o *EventFortificationListViewManager__get_ClippingObjectList(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v7; // w21
  Il2CppObject *v8; // x22
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 v11; // x10
  Il2CppClass **v12; // x0

  if ( (byte_4E71780 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1D0F0B4(&System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo);
    byte_4E71780 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__);
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
                                                                  (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        break;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_32A8444 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___);
      if ( !objectList )
        break;
      v8 = (Il2CppObject *)objectList;
      objectList = (System_Collections_Generic_List_object__o *)EventFortificationListViewObject__GetItem(
                                                                  (EventFortificationListViewObject_o *)objectList,
                                                                  v4);
      if ( !objectList )
        break;
      v4 = (const MethodInfo *)objectList;
      if ( LOBYTE(objectList[2].fields._items) )
      {
        objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_45173204(
                                                                    (ListViewManager_o *)this,
                                                                    (ListViewItem_o *)objectList,
                                                                    0);
        if ( ((unsigned __int8)objectList & 1) == 0 )
          continue;
      }
      if ( !v3 )
        break;
      items = v3->fields._items;
      v10 = Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        break;
      v11 = v3->fields._size;
      if ( (unsigned int)v11 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          v8,
          *(const MethodInfo_395C410 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
      }
      else
      {
        v12 = &items->obj.klass + v11;
        v3->fields._size = v11 + 1;
        v12[4] = (Il2CppClass *)v8;
        sub_1D0F058(v12 + 4, v8);
      }
      if ( size == ++v7 )
        return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v3;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_18:
    sub_1D0F30C(objectList, v4);
  }
  return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v3;
}


int32_t EventFortificationListViewManager__get_ListModeKind(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.modeKind;
}


System_Collections_Generic_List_EventFortificationListViewObject__o *EventFortificationListViewManager__get_ObjectList(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v7; // w21
  Il2CppObject *Item; // x22
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 v11; // x10
  System_Collections_Generic_List_object__o *v12; // x1
  Il2CppClass **v13; // x0

  if ( (byte_4E7177F & 1) == 0 )
  {
    sub_1D0F0B4(&Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1D0F0B4(&System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E7177F = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__);
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
               (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                  (UnityEngine_Object_o *)Item,
                                                                  0,
                                                                  0);
      if ( ((unsigned __int8)objectList & 1) != 0 )
      {
        if ( !Item )
          break;
        objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)Item,
                                                                    (const MethodInfo_32A8444 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___);
        if ( !v3 )
          break;
        items = v3->fields._items;
        v10 = Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        v11 = v3->fields._size;
        v12 = objectList;
        if ( (unsigned int)v11 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)objectList,
            *(const MethodInfo_395C410 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
        }
        else
        {
          v13 = &items->obj.klass + v11;
          v3->fields._size = v11 + 1;
          v13[4] = (Il2CppClass *)v12;
          sub_1D0F058(v13 + 4, v12);
        }
      }
      if ( size == ++v7 )
        return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v3;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_1D0F30C(objectList, v4);
  }
  return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v3;
}


void EventFortificationListViewManager__remove_Callback(
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

  if ( (byte_4E7177A & 1) == 0 )
  {
    sub_1D0F0B4(&EventFortificationListViewManager_CallbackFunc_TypeInfo);
    byte_4E7177A = 1;
  }
  Callback = (System_Delegate_o *)this->fields.Callback;
  p_Callback = &this->fields.Callback;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(Callback, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (EventFortificationListViewManager_CallbackFunc_c *)v7->klass != EventFortificationListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1D6AE88(p_Callback, v7, Callback);
    v9 = Callback == (System_Delegate_o *)v8;
    Callback = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventFortificationListViewManager_o *)sub_1D0F6A8(v7);
  EventFortificationListViewManager__add_CallbackFunc2(v10, v11, v12);
}


void EventFortificationListViewManager__remove_CallbackFunc2(
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

  if ( (byte_4E7177C & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    byte_4E7177C = 1;
  }
  CallbackFunc2 = (System_Delegate_o *)this->fields.CallbackFunc2;
  p_CallbackFunc2 = &this->fields.CallbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(CallbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1D6AE88(p_CallbackFunc2, v7, CallbackFunc2);
    v9 = CallbackFunc2 == (System_Delegate_o *)v8;
    CallbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1D0F6A8(v7);
  EventFortificationListViewManager__DeleteContinueData(v10);
}


void EventFortificationListViewManager_CallbackFunc___ctor(
        EventFortificationListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1D0F058(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1D0F174(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1D0F328(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1D0F1DC(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1B3433C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1B342E4;
}


System_IAsyncResult_o *EventFortificationListViewManager_CallbackFunc__BeginInvoke(
        EventFortificationListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v11; // [xsp+28h] [xbp-38h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v11 = index;
  v12 = kind;
  if ( (byte_4E717A7 & 1) == 0 )
  {
    sub_1D0F0B4(&int_TypeInfo);
    sub_1D0F0B4(&EventFortificationListViewManager_ResultKind_TypeInfo);
    byte_4E717A7 = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(EventFortificationListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_1D0F068(this, v10, callback, object);
}


void EventFortificationListViewManager_CallbackFunc__EndInvoke(
        EventFortificationListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1D0F06C(result, 0, method);
}


void EventFortificationListViewManager_CallbackFunc__Invoke(
        EventFortificationListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t index,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    kind,
    index,
    this->fields.method);
}


void EventFortificationListViewManager_RequestCallbackFunc___ctor(
        EventFortificationListViewManager_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1D0F058(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1D0F174(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1D0F328(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1D0F1DC(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1B343A8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1B34360;
}


System_IAsyncResult_o *EventFortificationListViewManager_RequestCallbackFunc__BeginInvoke(
        EventFortificationListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isRequest;
  if ( (byte_4E717A8 & 1) == 0 )
  {
    sub_1D0F0B4(&bool_TypeInfo);
    byte_4E717A8 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1D0F068(this, v9, callback, object);
}


void EventFortificationListViewManager_RequestCallbackFunc__EndInvoke(
        EventFortificationListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1D0F06C(result, 0, method);
}


void EventFortificationListViewManager_RequestCallbackFunc__Invoke(
        EventFortificationListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isRequest,
    this->fields.method);
}


void EventFortificationListViewManager___c__DisplayClass48_0___ctor(
        EventFortificationListViewManager___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventFortificationListViewManager___c__DisplayClass48_0___CreateList_b__0(
        EventFortificationListViewManager___c__DisplayClass48_0_o *this,
        UserServantEntity_o *data,
        const MethodInfo *method)
{
  ServantClassMaster_o *servantClassMaster; // x20
  EventFortificationListViewManager___c__DisplayClass48_0_o *v4; // x19
  EventFortificationWorkItem_o *targetItem; // x8

  if ( !data
    || (servantClassMaster = this->fields.servantClassMaster,
        v4 = this,
        this = (EventFortificationListViewManager___c__DisplayClass48_0_o *)UserServantEntity__getSvtClassId(
                                                                              data,
                                                                              0,
                                                                              0,
                                                                              0),
        !servantClassMaster)
    || (this = (EventFortificationListViewManager___c__DisplayClass48_0_o *)ServantClassMaster__getSupportGroupType(
                                                                              servantClassMaster,
                                                                              (int32_t)this,
                                                                              0),
        (targetItem = v4->fields.targetItem) == 0) )
  {
    sub_1D0F30C(this, data);
  }
  return (_DWORD)this == EventFortificationWorkItem__get_ClassId(targetItem, 0);
}


bool EventFortificationListViewManager___c__DisplayClass48_0___CreateList_b__1(
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
  if ( (byte_4E717A9 & 1) == 0 )
  {
    this = (EventFortificationListViewManager___c__DisplayClass48_0_o *)sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E717A9 = 1;
  }
  if ( !data )
    goto LABEL_9;
  v6 = *(_QWORD *)&data->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&data->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v6;
  *(_QWORD *)&v10.fields.fakeValue = v5;
  this = (EventFortificationListViewManager___c__DisplayClass48_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                                        v10,
                                                                        0);
  targetItem = v4->fields.targetItem;
  if ( !targetItem
    || (userServantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)targetItem->fields.userServantEntity) == 0 )
  {
LABEL_9:
    sub_1D0F30C(this, data);
  }
  return (_DWORD)this == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(userServantEntity[5], 0);
}


void EventFortificationListViewManager___c__DisplayClass96_0___ctor(
        EventFortificationListViewManager___c__DisplayClass96_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventFortificationListViewManager___c__DisplayClass96_0___OnClickSelectPush_b__0(
        EventFortificationListViewManager___c__DisplayClass96_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20
  System_Action_o *_9__1; // x22

  if ( (byte_4E717AA & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1D0F0B4(&Method_EventFortificationListViewManager___c__DisplayClass96_0__OnClickSelectPush_b__1__);
    byte_4E717AA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager___c__DisplayClass96_0__OnClickSelectPush_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      Instance = (Il2CppObject *)sub_1D0F058(&this->fields.__9__1, _9__1);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_32087272(v7, _9__1, 0);
      return;
    }
LABEL_10:
    sub_1D0F30C(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
}


void EventFortificationListViewManager___c__DisplayClass96_0___OnClickSelectPush_b__1(
        EventFortificationListViewManager___c__DisplayClass96_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1D0F30C(this, method);
  EventFortificationListViewManager__PushRequest(this->fields.__4__this, this->fields.selectItem, v2);
}