void PhotoCampaignStaffSelectDialog___ctor(PhotoCampaignStaffSelectDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BaseDialog_c *v4; // x0

  if ( (byte_5933AD8 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_5933AD8 = 1;
  }
  v4 = BaseDialog_TypeInfo;
  this->fields.decideButtonDisabledColor = (struct UnityEngine_Color_o)xmmword_E936B0;
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void PhotoCampaignStaffSelectDialog__Init(
        PhotoCampaignStaffSelectDialog_o *this,
        UIAtlas_o *atlas,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  struct UICommonButton_o *decideButton; // x8
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *photoCampaignAtlas; // x22
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5933AD2 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933AD2 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_14;
  UILabel__set_text(titleLabel, **(System_String_o ***)(qword_594C0B8 + 184), 0);
  titleLabel = this->fields.warningLabel;
  if ( !titleLabel )
    goto LABEL_14;
  UILabel__set_text(titleLabel, **(System_String_o ***)(qword_594C0B8 + 184), 0);
  titleLabel = this->fields.decideButtonLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, **(System_String_o ***)(qword_594C0B8 + 184), 0),
        (titleLabel = this->fields.cancelButtonLabel) == 0)
    || (UILabel__set_text(titleLabel, **(System_String_o ***)(qword_594C0B8 + 184), 0),
        (decideButton = this->fields.decideButton) == 0)
    || (decideButton->fields.specifyDisabledColor = this->fields.decideButtonDisabledColor,
        (titleLabel = (UILabel_o *)this->fields.staffSelectListViewManager) == 0) )
  {
LABEL_14:
    sub_21FFECC(titleLabel, atlas);
  }
  StaffSelectListViewManager__DestroyList((StaffSelectListViewManager_o *)titleLabel, 0);
  photoCampaignAtlas = (UnityEngine_Object_o *)this->fields.photoCampaignAtlas;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  if ( UnityEngine_Object__op_Equality(photoCampaignAtlas, 0, 0) )
  {
    this->fields.photoCampaignAtlas = atlas;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.photoCampaignAtlas,
      (int32_t)atlas,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void PhotoCampaignStaffSelectDialog__OnClickCancel(PhotoCampaignStaffSelectDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_5933AD5 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_PhotoCampaignStaffSelectDialog_OnClickCancel__);
    sub_21FFC50(&Method_PhotoCampaignStaffSelectDialog__OnClickCancel_b__13_0__);
    byte_5933AD5 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_PhotoCampaignStaffSelectDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_PhotoCampaignStaffSelectDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_PhotoCampaignStaffSelectDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    v5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_PhotoCampaignStaffSelectDialog__OnClickCancel_b__13_0__, 0);
    BaseDialog__SafeClose((BaseDialog_o *)this, v5, 0);
  }
}


void PhotoCampaignStaffSelectDialog__OnClickDecide(PhotoCampaignStaffSelectDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x8
  int32_t v15; // w21
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  System_Action_o *v18; // x21

  if ( (byte_5933AD4 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_StaffPhotoCostumeMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_StaffPhotoCostumeEntity__get_Count__);
    sub_21FFC50(&Method_PhotoCampaignStaffSelectDialog_OnClickDecide__);
    sub_21FFC50(&Method_PhotoCampaignStaffSelectDialog___c__DisplayClass12_0__OnClickDecide_b__0__);
    sub_21FFC50(&PhotoCampaignStaffSelectDialog___c__DisplayClass12_0_TypeInfo);
    byte_5933AD4 = 1;
  }
  v3 = sub_21FFEBC(PhotoCampaignStaffSelectDialog___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_16;
  *(_QWORD *)(v3 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  if ( this->fields.baseState != 2 )
    return;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12, v13);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_StaffPhotoCostumeMaster___);
  if ( !Master_object )
    goto LABEL_16;
  Master_object = (Il2CppObject *)StaffPhotoCostumeMaster__TryGetEnableListByStaffId(
                                    (StaffPhotoCostumeMaster_o *)Master_object,
                                    (System_Collections_Generic_List_StaffPhotoCostumeEntity__o **)(v3 + 24),
                                    this->fields.currentSelectStaffPhotoId,
                                    0);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    v15 = 0;
    goto LABEL_13;
  }
  v14 = *(_QWORD *)(v3 + 24);
  if ( !v14 )
LABEL_16:
    sub_21FFECC(Master_object, v5);
  v15 = 8 * (*(_DWORD *)(v14 + 24) == 1);
LABEL_13:
  v16 = Method_PhotoCampaignStaffSelectDialog_OnClickDecide__;
  if ( (*((_BYTE *)Method_PhotoCampaignStaffSelectDialog_OnClickDecide__ + 83) & 2) != 0 )
    v16 = (_QWORD *)sub_21FFC68(Method_PhotoCampaignStaffSelectDialog_OnClickDecide__);
  v17 = (System_Reflection_MethodBase_o *)sub_21FFC34(v16, v16[4]);
  OverwriteAssetSoundName__PlaySystemSe(v17, v15, 0, 0);
  v18 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v3,
    Method_PhotoCampaignStaffSelectDialog___c__DisplayClass12_0__OnClickDecide_b__0__,
    0);
  BaseDialog__SafeClose((BaseDialog_o *)this, v18, 0);
}


// local variable allocation has failed, the output may be wrong!
void PhotoCampaignStaffSelectDialog__OnClickSelectListViewItem(
        PhotoCampaignStaffSelectDialog_o *this,
        int32_t selectStaffPhotoId,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  StaffSelectListViewManager_o *staffSelectListViewManager; // x0
  StaffSelectListViewManager_o *v8; // x20
  System_Action_int__o *v9; // x21

  if ( (byte_5933AD7 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_int__TypeInfo);
    sub_21FFC50(&Method_PhotoCampaignStaffSelectDialog_OnClickSelectListViewItem__);
    byte_5933AD7 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    if ( this->fields.currentSelectStaffPhotoId != selectStaffPhotoId )
    {
      v5 = Method_PhotoCampaignStaffSelectDialog_OnClickSelectListViewItem__;
      if ( (*((_BYTE *)Method_PhotoCampaignStaffSelectDialog_OnClickSelectListViewItem__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_21FFC68(Method_PhotoCampaignStaffSelectDialog_OnClickSelectListViewItem__);
      v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    }
    staffSelectListViewManager = this->fields.staffSelectListViewManager;
    this->fields.currentSelectStaffPhotoId = selectStaffPhotoId;
    if ( !staffSelectListViewManager
      || (StaffSelectListViewManager__ModifyItem(staffSelectListViewManager, selectStaffPhotoId, 0),
          v8 = this->fields.staffSelectListViewManager,
          v9 = (System_Action_int__o *)sub_21FFEBC(System_Action_int__TypeInfo),
          System_Action_int____ctor(
            v9,
            (Il2CppObject *)this,
            (intptr_t)Method_PhotoCampaignStaffSelectDialog_OnClickSelectListViewItem__,
            0),
          !v8)
      || (StaffSelectListViewManager__SetMode(v8, 2, v9, 0),
          (staffSelectListViewManager = (StaffSelectListViewManager_o *)this->fields.decideButton) == 0) )
    {
      sub_21FFECC(staffSelectListViewManager, *(_QWORD *)&selectStaffPhotoId);
    }
    ((void (__fastcall *)(StaffSelectListViewManager_o *, bool, const MethodInfo *))staffSelectListViewManager->klass->vtable._5_SetSortButtonImage.methodPtr)(
      staffSelectListViewManager,
      this->fields.currentSelectStaffPhotoId >= 0,
      staffSelectListViewManager->klass->vtable._5_SetSortButtonImage.method);
  }
}


void PhotoCampaignStaffSelectDialog__OnEnable(PhotoCampaignStaffSelectDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_5933AD6 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16235/*"Window/Objects/Buttons/CancelButton"*/);
    byte_5933AD6 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51910300(transform, (System_String_o *)StringLiteral_16235/*"Window/Objects/Buttons/CancelButton"*/, 0);
}


void PhotoCampaignStaffSelectDialog__Open(
        PhotoCampaignStaffSelectDialog_o *this,
        System_Action_bool__int__List_StaffPhotoCostumeEntity___o *closeCallback,
        int32_t selectedStaffImageId,
        int32_t baseStaffImageId,
        int32_t selectedSvtId,
        const MethodInfo *method)
{
  __int64 v11; // x22
  const MethodInfo *v12; // x2
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x1
  __int64 v20; // x2
  Il2CppObject *Master_object; // x25
  StaffPhotoCostumeMaster_o *OpenEntityList; // x0
  __int64 v23; // x1
  StaffPhotoCostumeMaster_o *v24; // x24
  int32_t staffPhotoId; // w23
  System_Collections_Generic_List_object__o *v26; // x25
  _BOOL8 v27; // x0
  __int64 v28; // x1
  Il2CppObject *current; // x26
  int klass; // w21
  int IsEnableSameSet; // w27
  _BOOL8 IsRestrictionSvt; // x0
  __int64 v33; // x1
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  System_Func_object__bool__o *v44; // x21
  __int64 v45; // x8
  StaffSelectListViewManager_o *staffSelectListViewManager; // x20
  System_Action_int__o *v47; // x21
  __int64 v48; // x1
  __int64 v49; // x2
  UILabel_o *titleLabel; // x20
  UILabel_o *warningLabel; // x20
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20
  int32_t imageId; // [xsp+4h] [xbp-ACh]
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+20h] [xbp-90h] BYREF
  StaffPhotoCostumeEntity_o *costumeEntity; // [xsp+40h] [xbp-70h] BYREF
  System_Collections_Generic_List_StaffPhotoEntity__o *staffPhotoEntityList; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_5933AD3 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_int__TypeInfo);
    sub_21FFC50(&Method_BasicHelper_Any_StaffPhotoEntity___);
    sub_21FFC50(&Method_DataManager_GetMaster_StaffPhotoCostumeMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_StaffPhotoMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_StaffPhotoEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_StaffPhotoEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_StaffPhotoEntity__get_Current__);
    sub_21FFC50(&System_Func_StaffPhotoEntity__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_StaffPhotoEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_StaffPhotoEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_StaffPhotoEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_StaffPhotoEntity__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_PhotoCampaignStaffSelectDialog_OnClickSelectListViewItem__);
    sub_21FFC50(&Method_PhotoCampaignStaffSelectDialog___c__DisplayClass11_0__Open_b__0__);
    sub_21FFC50(&PhotoCampaignStaffSelectDialog___c__DisplayClass11_0_TypeInfo);
    sub_21FFC50(&StringLiteral_12795/*"STAFF_SELECT_DIALOG_TITLE"*/);
    sub_21FFC50(&StringLiteral_12796/*"STAFF_SELECT_DIALOG_WARNING"*/);
    sub_21FFC50(&StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/);
    sub_21FFC50(&StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/);
    byte_5933AD3 = 1;
  }
  staffPhotoEntityList = 0;
  costumeEntity = 0;
  memset(&v56, 0, sizeof(v56));
  v11 = sub_21FFEBC(PhotoCampaignStaffSelectDialog___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  PhotoCampaignStaffSelectDialog__Init(this, 0, v12);
  this->fields.closeFunc = closeCallback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeFunc,
    (int32_t)closeCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v19, v20);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_StaffPhotoMaster___);
  OpenEntityList = (StaffPhotoCostumeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_StaffPhotoCostumeMaster___);
  if ( !Master_object )
    goto LABEL_41;
  v24 = OpenEntityList;
  OpenEntityList = (StaffPhotoCostumeMaster_o *)StaffPhotoMaster__TryGetOpenEntityList(
                                                  (StaffPhotoMaster_o *)Master_object,
                                                  &staffPhotoEntityList,
                                                  0);
  if ( ((unsigned __int8)OpenEntityList & 1) == 0 )
    return;
  if ( !v24 )
    goto LABEL_41;
  OpenEntityList = (StaffPhotoCostumeMaster_o *)StaffPhotoCostumeMaster__TryGetEntityByImageId(
                                                  v24,
                                                  &costumeEntity,
                                                  selectedStaffImageId,
                                                  0);
  if ( ((unsigned __int8)OpenEntityList & 1) != 0 )
  {
    if ( !costumeEntity )
      goto LABEL_41;
    staffPhotoId = costumeEntity->fields.staffPhotoId;
  }
  else
  {
    staffPhotoId = -1;
  }
  imageId = baseStaffImageId;
  v26 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_StaffPhotoEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_StaffPhotoEntity___ctor__);
  OpenEntityList = (StaffPhotoCostumeMaster_o *)staffPhotoEntityList;
  if ( !staffPhotoEntityList )
    goto LABEL_41;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v55,
    (System_Collections_Generic_List_object__o *)staffPhotoEntityList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_StaffPhotoEntity__GetEnumerator__);
  v56 = v55;
  v55.fields._list = 0;
  *(_QWORD *)&v55.fields._index = &v56;
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v56,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_StaffPhotoEntity__MoveNext__);
    if ( !v27 )
      break;
    current = v56.fields._current;
    if ( !v56.fields._current )
      sub_21FFECC(v27, v28);
    klass = (int)v56.fields._current[1].klass;
    IsEnableSameSet = StaffPhotoEntity__IsEnableSameSet((StaffPhotoEntity_o *)v56.fields._current, 0);
    IsRestrictionSvt = StaffPhotoEntity__IsRestrictionSvt((StaffPhotoEntity_o *)current, selectedSvtId, 0);
    if ( !((staffPhotoId == klass) & ~IsEnableSameSet | IsRestrictionSvt) )
    {
      if ( !v26
        || (items = v26->fields._items,
            v41 = Method_System_Collections_Generic_List_StaffPhotoEntity__Add__,
            ++v26->fields._version,
            !items) )
      {
        sub_21FFECC(IsRestrictionSvt, v33);
      }
      size = v26->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v26,
          current,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
      }
      else
      {
        v43 = &items->obj.klass + size;
        v26->fields._size = size + 1;
        v43[4] = (Il2CppClass *)current;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v43 + 4), (int32_t)current, v34, v35, v36, v37, v38, v39);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v56,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_StaffPhotoEntity__Dispose__);
  this->fields.currentSelectStaffPhotoId = -1;
  if ( !v11 )
    goto LABEL_41;
  if ( StaffPhotoCostumeMaster__TryGetEntityByImageId(v24, (StaffPhotoCostumeEntity_o **)(v11 + 16), imageId, 0) )
  {
    v44 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_StaffPhotoEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v44,
      (Il2CppObject *)v11,
      Method_PhotoCampaignStaffSelectDialog___c__DisplayClass11_0__Open_b__0__,
      0);
    OpenEntityList = (StaffPhotoCostumeMaster_o *)BasicHelper__Any_object_(
                                                    (System_Collections_Generic_List_T__o *)v26,
                                                    (System_Func_T__bool__o *)v44,
                                                    (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_StaffPhotoEntity___);
    if ( ((unsigned __int8)OpenEntityList & 1) != 0 )
    {
      v45 = *(_QWORD *)(v11 + 16);
      if ( !v45 )
        goto LABEL_41;
      this->fields.currentSelectStaffPhotoId = *(_DWORD *)(v45 + 16);
    }
  }
  OpenEntityList = (StaffPhotoCostumeMaster_o *)this->fields.decideButton;
  if ( !OpenEntityList )
    goto LABEL_41;
  ((void (__fastcall *)(StaffPhotoCostumeMaster_o *, bool, const MethodInfo *))OpenEntityList->klass->vtable._5_preProcess.methodPtr)(
    OpenEntityList,
    this->fields.currentSelectStaffPhotoId >= 0,
    OpenEntityList->klass->vtable._5_preProcess.method);
  OpenEntityList = (StaffPhotoCostumeMaster_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0);
  if ( !OpenEntityList )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)OpenEntityList, 1, 0);
  OpenEntityList = (StaffPhotoCostumeMaster_o *)this->fields.staffSelectListViewManager;
  if ( !OpenEntityList )
    goto LABEL_41;
  StaffSelectListViewManager__CreateList(
    (StaffSelectListViewManager_o *)OpenEntityList,
    staffPhotoEntityList,
    this->fields.currentSelectStaffPhotoId,
    staffPhotoId,
    selectedSvtId,
    this->fields.photoCampaignAtlas,
    0);
  staffSelectListViewManager = this->fields.staffSelectListViewManager;
  v47 = (System_Action_int__o *)sub_21FFEBC(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v47,
    (Il2CppObject *)this,
    (intptr_t)Method_PhotoCampaignStaffSelectDialog_OnClickSelectListViewItem__,
    0);
  if ( !staffSelectListViewManager )
    goto LABEL_41;
  StaffSelectListViewManager__SetMode(staffSelectListViewManager, 2, v47, 0);
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v48, v49);
  OpenEntityList = (StaffPhotoCostumeMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12795/*"STAFF_SELECT_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_41;
  UILabel__set_text(titleLabel, (System_String_o *)OpenEntityList, 0);
  warningLabel = this->fields.warningLabel;
  OpenEntityList = (StaffPhotoCostumeMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12796/*"STAFF_SELECT_DIALOG_WARNING"*/, 0);
  if ( !warningLabel
    || (UILabel__set_text(warningLabel, (System_String_o *)OpenEntityList, 0),
        decideButtonLabel = this->fields.decideButtonLabel,
        OpenEntityList = (StaffPhotoCostumeMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/, 0),
        !decideButtonLabel)
    || (UILabel__set_text(decideButtonLabel, (System_String_o *)OpenEntityList, 0),
        cancelButtonLabel = this->fields.cancelButtonLabel,
        OpenEntityList = (StaffPhotoCostumeMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/, 0),
        !cancelButtonLabel) )
  {
LABEL_41:
    sub_21FFECC(OpenEntityList, v23);
  }
  UILabel__set_text(cancelButtonLabel, (System_String_o *)OpenEntityList, 0);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
}


void PhotoCampaignStaffSelectDialog___OnClickCancel_b__13_0(
        PhotoCampaignStaffSelectDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_5933AD9 & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionExtensions_Call_bool__int__List_StaffPhotoCostumeEntity____);
    byte_5933AD9 = 1;
  }
  ActionExtensions__Call_bool__int__object_(
    (System_Action_T1__T2__T3__o *)this->fields.closeFunc,
    0,
    -1,
    0,
    (const MethodInfo_36CE4B8 *)Method_ActionExtensions_Call_bool__int__List_StaffPhotoCostumeEntity____);
}


void PhotoCampaignStaffSelectDialog___c__DisplayClass11_0___ctor(
        PhotoCampaignStaffSelectDialog___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PhotoCampaignStaffSelectDialog___c__DisplayClass11_0___Open_b__0(
        PhotoCampaignStaffSelectDialog___c__DisplayClass11_0_o *this,
        StaffPhotoEntity_o *x,
        const MethodInfo *method)
{
  struct StaffPhotoCostumeEntity_o *baseCostumeEntity; // x8

  if ( !x || (baseCostumeEntity = this->fields.baseCostumeEntity) == 0 )
    sub_21FFECC(this, x);
  return x->fields.id == baseCostumeEntity->fields.staffPhotoId;
}


void PhotoCampaignStaffSelectDialog___c__DisplayClass12_0___ctor(
        PhotoCampaignStaffSelectDialog___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PhotoCampaignStaffSelectDialog___c__DisplayClass12_0___OnClickDecide_b__0(
        PhotoCampaignStaffSelectDialog___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  PhotoCampaignStaffSelectDialog___c__DisplayClass12_0_o *v2; // x19
  struct PhotoCampaignStaffSelectDialog_o *_4__this; // x8

  v2 = this;
  if ( (byte_5933ADA & 1) == 0 )
  {
    this = (PhotoCampaignStaffSelectDialog___c__DisplayClass12_0_o *)sub_21FFC50(&Method_ActionExtensions_Call_bool__int__List_StaffPhotoCostumeEntity____);
    byte_5933ADA = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(this, method);
  ActionExtensions__Call_bool__int__object_(
    (System_Action_T1__T2__T3__o *)_4__this->fields.closeFunc,
    1,
    _4__this->fields.currentSelectStaffPhotoId,
    (Il2CppObject *)v2->fields.staffPhotoCostumeEntityList,
    (const MethodInfo_36CE4B8 *)Method_ActionExtensions_Call_bool__int__List_StaffPhotoCostumeEntity____);
}