void PhotoCampaignStaffSelectDialog___ctor(PhotoCampaignStaffSelectDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4D2BE93 & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    byte_4D2BE93 = 1;
  }
  this->fields.decideButtonDisabledColor = (struct UnityEngine_Color_o)xmmword_D009D0;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void PhotoCampaignStaffSelectDialog__Init(
        PhotoCampaignStaffSelectDialog_o *this,
        UIAtlas_o *atlas,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  struct UICommonButton_o *decideButton; // x8
  UnityEngine_Object_o *photoCampaignAtlas; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D2BE8D & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&string_TypeInfo);
    byte_4D2BE8D = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_14;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0);
  titleLabel = this->fields.warningLabel;
  if ( !titleLabel )
    goto LABEL_14;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0);
  titleLabel = this->fields.decideButtonLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0),
        (titleLabel = this->fields.cancelButtonLabel) == 0)
    || (UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0),
        (decideButton = this->fields.decideButton) == 0)
    || (decideButton->fields.specifyDisabledColor = this->fields.decideButtonDisabledColor,
        (titleLabel = (UILabel_o *)this->fields.staffSelectListViewManager) == 0) )
  {
LABEL_14:
    sub_1C93D2C(titleLabel, atlas);
  }
  StaffSelectListViewManager__DestroyList((StaffSelectListViewManager_o *)titleLabel, 0);
  photoCampaignAtlas = (UnityEngine_Object_o *)this->fields.photoCampaignAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(photoCampaignAtlas, 0, 0) )
  {
    this->fields.photoCampaignAtlas = atlas;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.photoCampaignAtlas,
      (int32_t)atlas,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void PhotoCampaignStaffSelectDialog__OnClickCancel(PhotoCampaignStaffSelectDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4D2BE90 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_PhotoCampaignStaffSelectDialog_OnClickCancel__);
    sub_1C93AD4(&Method_PhotoCampaignStaffSelectDialog__OnClickCancel_b__13_0__);
    byte_4D2BE90 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_PhotoCampaignStaffSelectDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_PhotoCampaignStaffSelectDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_PhotoCampaignStaffSelectDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    v5 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_PhotoCampaignStaffSelectDialog__OnClickCancel_b__13_0__, 0);
    BaseDialog__SafeClose((BaseDialog_o *)this, v5, 0);
  }
}


void PhotoCampaignStaffSelectDialog__OnClickDecide(PhotoCampaignStaffSelectDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  __int64 v12; // x21
  int32_t v13; // w21
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  System_Action_o *v16; // x21

  if ( (byte_4D2BE8F & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_StaffPhotoCostumeMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_StaffPhotoCostumeEntity__get_Count__);
    sub_1C93AD4(&Method_PhotoCampaignStaffSelectDialog_OnClickDecide__);
    sub_1C93AD4(&Method_PhotoCampaignStaffSelectDialog___c__DisplayClass12_0__OnClickDecide_b__0__);
    sub_1C93AD4(&PhotoCampaignStaffSelectDialog___c__DisplayClass12_0_TypeInfo);
    byte_4D2BE8F = 1;
  }
  v3 = sub_1C93D20(PhotoCampaignStaffSelectDialog___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_16;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  if ( this->fields.baseState != 2 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_StaffPhotoCostumeMaster___);
  if ( !Master_object )
    goto LABEL_16;
  v12 = v3 + 24;
  Master_object = (Il2CppObject *)StaffPhotoCostumeMaster__TryGetEnableListByStaffId(
                                    (StaffPhotoCostumeMaster_o *)Master_object,
                                    (System_Collections_Generic_List_StaffPhotoCostumeEntity__o **)(v3 + 24),
                                    this->fields.currentSelectStaffPhotoId,
                                    0);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    v13 = 0;
    goto LABEL_13;
  }
  if ( !*(_QWORD *)v12 )
LABEL_16:
    sub_1C93D2C(Master_object, v5);
  v13 = 8 * (*(_DWORD *)(*(_QWORD *)v12 + 24LL) == 1);
LABEL_13:
  v14 = Method_PhotoCampaignStaffSelectDialog_OnClickDecide__;
  if ( (*((_BYTE *)Method_PhotoCampaignStaffSelectDialog_OnClickDecide__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1C93AEC(Method_PhotoCampaignStaffSelectDialog_OnClickDecide__);
  v15 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v14, v14[4]);
  OverwriteAssetSoundName__PlaySystemSe(v15, v13, 0, 0);
  v16 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)v3,
    Method_PhotoCampaignStaffSelectDialog___c__DisplayClass12_0__OnClickDecide_b__0__,
    0);
  BaseDialog__SafeClose((BaseDialog_o *)this, v16, 0);
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

  if ( (byte_4D2BE92 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_int__TypeInfo);
    sub_1C93AD4(&Method_PhotoCampaignStaffSelectDialog_OnClickSelectListViewItem__);
    byte_4D2BE92 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    if ( this->fields.currentSelectStaffPhotoId != selectStaffPhotoId )
    {
      v5 = Method_PhotoCampaignStaffSelectDialog_OnClickSelectListViewItem__;
      if ( (*((_BYTE *)Method_PhotoCampaignStaffSelectDialog_OnClickSelectListViewItem__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1C93AEC(Method_PhotoCampaignStaffSelectDialog_OnClickSelectListViewItem__);
      v6 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    }
    staffSelectListViewManager = this->fields.staffSelectListViewManager;
    this->fields.currentSelectStaffPhotoId = selectStaffPhotoId;
    if ( !staffSelectListViewManager
      || (StaffSelectListViewManager__ModifyItem(staffSelectListViewManager, selectStaffPhotoId, 0),
          v8 = this->fields.staffSelectListViewManager,
          v9 = (System_Action_int__o *)sub_1C93D20(System_Action_int__TypeInfo),
          System_Action_int____ctor(
            v9,
            (Il2CppObject *)this,
            (intptr_t)Method_PhotoCampaignStaffSelectDialog_OnClickSelectListViewItem__,
            0),
          !v8)
      || (StaffSelectListViewManager__SetMode(v8, 2, v9, 0),
          (staffSelectListViewManager = (StaffSelectListViewManager_o *)this->fields.decideButton) == 0) )
    {
      sub_1C93D2C(staffSelectListViewManager, *(_QWORD *)&selectStaffPhotoId);
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

  if ( (byte_4D2BE91 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_15749/*"Window/Objects/Buttons/CancelButton"*/);
    byte_4D2BE91 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45665756(transform, (System_String_o *)StringLiteral_15749/*"Window/Objects/Buttons/CancelButton"*/, 0);
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
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  Il2CppObject *Master_object; // x25
  StaffPhotoCostumeMaster_o *OpenEntityList; // x0
  __int64 v21; // x1
  StaffPhotoCostumeMaster_o *v22; // x24
  int32_t staffPhotoId; // w23
  System_Collections_Generic_List_object__o *v24; // x25
  _BOOL8 v25; // x0
  __int64 v26; // x1
  Il2CppObject *current; // x26
  int klass; // w21
  int IsEnableSameSet; // w27
  _BOOL8 IsRestrictionSvt; // x0
  __int64 v31; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  __int64 v42; // x26
  System_Func_object__bool__o *v43; // x21
  StaffSelectListViewManager_o *staffSelectListViewManager; // x20
  System_Action_int__o *v45; // x21
  UILabel_o *titleLabel; // x20
  UILabel_o *warningLabel; // x20
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20
  int32_t imageId; // [xsp+4h] [xbp-ACh]
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+20h] [xbp-90h] BYREF
  StaffPhotoCostumeEntity_o *costumeEntity; // [xsp+40h] [xbp-70h] BYREF
  System_Collections_Generic_List_StaffPhotoEntity__o *staffPhotoEntityList; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4D2BE8E & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_int__TypeInfo);
    sub_1C93AD4(&Method_BasicHelper_Any_StaffPhotoEntity___);
    sub_1C93AD4(&Method_DataManager_GetMaster_StaffPhotoCostumeMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_StaffPhotoMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_StaffPhotoEntity__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_StaffPhotoEntity__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_StaffPhotoEntity__get_Current__);
    sub_1C93AD4(&System_Func_StaffPhotoEntity__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_StaffPhotoEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_StaffPhotoEntity__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_StaffPhotoEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_StaffPhotoEntity__TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_PhotoCampaignStaffSelectDialog_OnClickSelectListViewItem__);
    sub_1C93AD4(&Method_PhotoCampaignStaffSelectDialog___c__DisplayClass11_0__Open_b__0__);
    sub_1C93AD4(&PhotoCampaignStaffSelectDialog___c__DisplayClass11_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_12392/*"STAFF_SELECT_DIALOG_TITLE"*/);
    sub_1C93AD4(&StringLiteral_12393/*"STAFF_SELECT_DIALOG_WARNING"*/);
    sub_1C93AD4(&StringLiteral_3708/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C93AD4(&StringLiteral_3706/*"COMMON_CONFIRM_CANCEL"*/);
    byte_4D2BE8E = 1;
  }
  costumeEntity = 0;
  staffPhotoEntityList = 0;
  memset(&v52, 0, sizeof(v52));
  v11 = sub_1C93D20(PhotoCampaignStaffSelectDialog___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  PhotoCampaignStaffSelectDialog__Init(this, 0, v12);
  this->fields.closeFunc = closeCallback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeFunc,
    (int32_t)closeCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_StaffPhotoMaster___);
  OpenEntityList = (StaffPhotoCostumeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_StaffPhotoCostumeMaster___);
  if ( !Master_object )
    goto LABEL_42;
  v22 = OpenEntityList;
  OpenEntityList = (StaffPhotoCostumeMaster_o *)StaffPhotoMaster__TryGetOpenEntityList(
                                                  (StaffPhotoMaster_o *)Master_object,
                                                  &staffPhotoEntityList,
                                                  0);
  if ( ((unsigned __int8)OpenEntityList & 1) == 0 )
    return;
  if ( !v22 )
    goto LABEL_42;
  OpenEntityList = (StaffPhotoCostumeMaster_o *)StaffPhotoCostumeMaster__TryGetEntityByImageId(
                                                  v22,
                                                  &costumeEntity,
                                                  selectedStaffImageId,
                                                  0);
  if ( ((unsigned __int8)OpenEntityList & 1) != 0 )
  {
    if ( !costumeEntity )
      goto LABEL_42;
    staffPhotoId = costumeEntity->fields.staffPhotoId;
  }
  else
  {
    staffPhotoId = -1;
  }
  imageId = baseStaffImageId;
  v24 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_StaffPhotoEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_StaffPhotoEntity___ctor__);
  OpenEntityList = (StaffPhotoCostumeMaster_o *)staffPhotoEntityList;
  if ( !staffPhotoEntityList )
    goto LABEL_42;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v51,
    (System_Collections_Generic_List_object__o *)staffPhotoEntityList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_StaffPhotoEntity__GetEnumerator__);
  v52 = v51;
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v52,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_StaffPhotoEntity__MoveNext__);
    if ( !v25 )
      break;
    current = v52.fields._current;
    if ( !v52.fields._current )
      sub_1C93D2C(v25, v26);
    klass = (int)v52.fields._current[1].klass;
    IsEnableSameSet = StaffPhotoEntity__IsEnableSameSet((StaffPhotoEntity_o *)v52.fields._current, 0);
    IsRestrictionSvt = StaffPhotoEntity__IsRestrictionSvt((StaffPhotoEntity_o *)current, selectedSvtId, 0);
    if ( !(IsRestrictionSvt | (staffPhotoId == klass) & (unsigned int)~IsEnableSameSet) )
    {
      if ( !v24 )
        sub_1C93D2C(IsRestrictionSvt, v31);
      items = v24->fields._items;
      v39 = Method_System_Collections_Generic_List_StaffPhotoEntity__Add__;
      ++v24->fields._version;
      if ( !items )
        sub_1C93D2C(IsRestrictionSvt, v31);
      size = v24->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v24,
          current,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v41 = &items->obj.klass + size;
        v24->fields._size = size + 1;
        v41[4] = (Il2CppClass *)current;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v41 + 4), (int32_t)current, v32, v33, v34, v35, v36, v37);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v52,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_StaffPhotoEntity__Dispose__);
  this->fields.currentSelectStaffPhotoId = -1;
  if ( !v11 )
    goto LABEL_42;
  v42 = v11 + 16;
  if ( StaffPhotoCostumeMaster__TryGetEntityByImageId(v22, (StaffPhotoCostumeEntity_o **)(v11 + 16), imageId, 0) )
  {
    v43 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_StaffPhotoEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v43,
      (Il2CppObject *)v11,
      Method_PhotoCampaignStaffSelectDialog___c__DisplayClass11_0__Open_b__0__,
      0);
    OpenEntityList = (StaffPhotoCostumeMaster_o *)BasicHelper__Any_object_(
                                                    (System_Collections_Generic_List_T__o *)v24,
                                                    (System_Func_T__bool__o *)v43,
                                                    (const MethodInfo_318DB78 *)Method_BasicHelper_Any_StaffPhotoEntity___);
    if ( ((unsigned __int8)OpenEntityList & 1) != 0 )
    {
      if ( !*(_QWORD *)v42 )
        goto LABEL_42;
      this->fields.currentSelectStaffPhotoId = *(_DWORD *)(*(_QWORD *)v42 + 16LL);
    }
  }
  OpenEntityList = (StaffPhotoCostumeMaster_o *)this->fields.decideButton;
  if ( !OpenEntityList )
    goto LABEL_42;
  ((void (__fastcall *)(StaffPhotoCostumeMaster_o *, bool, const MethodInfo *))OpenEntityList->klass->vtable._5_preProcess.methodPtr)(
    OpenEntityList,
    this->fields.currentSelectStaffPhotoId >= 0,
    OpenEntityList->klass->vtable._5_preProcess.method);
  OpenEntityList = (StaffPhotoCostumeMaster_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0);
  if ( !OpenEntityList )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)OpenEntityList, 1, 0);
  OpenEntityList = (StaffPhotoCostumeMaster_o *)this->fields.staffSelectListViewManager;
  if ( !OpenEntityList )
    goto LABEL_42;
  StaffSelectListViewManager__CreateList(
    (StaffSelectListViewManager_o *)OpenEntityList,
    staffPhotoEntityList,
    this->fields.currentSelectStaffPhotoId,
    staffPhotoId,
    selectedSvtId,
    this->fields.photoCampaignAtlas,
    0);
  staffSelectListViewManager = this->fields.staffSelectListViewManager;
  v45 = (System_Action_int__o *)sub_1C93D20(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v45,
    (Il2CppObject *)this,
    (intptr_t)Method_PhotoCampaignStaffSelectDialog_OnClickSelectListViewItem__,
    0);
  if ( !staffSelectListViewManager )
    goto LABEL_42;
  StaffSelectListViewManager__SetMode(staffSelectListViewManager, 2, v45, 0);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  OpenEntityList = (StaffPhotoCostumeMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12392/*"STAFF_SELECT_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_42;
  UILabel__set_text(titleLabel, (System_String_o *)OpenEntityList, 0);
  warningLabel = this->fields.warningLabel;
  OpenEntityList = (StaffPhotoCostumeMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12393/*"STAFF_SELECT_DIALOG_WARNING"*/, 0);
  if ( !warningLabel
    || (UILabel__set_text(warningLabel, (System_String_o *)OpenEntityList, 0),
        decideButtonLabel = this->fields.decideButtonLabel,
        OpenEntityList = (StaffPhotoCostumeMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3708/*"COMMON_CONFIRM_DECIDE"*/, 0),
        !decideButtonLabel)
    || (UILabel__set_text(decideButtonLabel, (System_String_o *)OpenEntityList, 0),
        cancelButtonLabel = this->fields.cancelButtonLabel,
        OpenEntityList = (StaffPhotoCostumeMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3706/*"COMMON_CONFIRM_CANCEL"*/, 0),
        !cancelButtonLabel) )
  {
LABEL_42:
    sub_1C93D2C(OpenEntityList, v21);
  }
  UILabel__set_text(cancelButtonLabel, (System_String_o *)OpenEntityList, 0);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
}


void PhotoCampaignStaffSelectDialog___OnClickCancel_b__13_0(
        PhotoCampaignStaffSelectDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2BE94 & 1) == 0 )
  {
    sub_1C93AD4(&Method_ActionExtensions_Call_bool__int__List_StaffPhotoCostumeEntity____);
    byte_4D2BE94 = 1;
  }
  ActionExtensions__Call_bool__int__object_(
    (System_Action_T1__T2__T3__o *)this->fields.closeFunc,
    0,
    -1,
    0,
    (const MethodInfo_30EC1D0 *)Method_ActionExtensions_Call_bool__int__List_StaffPhotoCostumeEntity____);
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
    sub_1C93D2C(this, x);
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
  if ( (byte_4D2BE95 & 1) == 0 )
  {
    this = (PhotoCampaignStaffSelectDialog___c__DisplayClass12_0_o *)sub_1C93AD4(&Method_ActionExtensions_Call_bool__int__List_StaffPhotoCostumeEntity____);
    byte_4D2BE95 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(this, method);
  ActionExtensions__Call_bool__int__object_(
    (System_Action_T1__T2__T3__o *)_4__this->fields.closeFunc,
    1,
    _4__this->fields.currentSelectStaffPhotoId,
    (Il2CppObject *)v2->fields.staffPhotoCostumeEntityList,
    (const MethodInfo_30EC1D0 *)Method_ActionExtensions_Call_bool__int__List_StaffPhotoCostumeEntity____);
}