void __fastcall PhotoCampaignStaffSelectDialog___ctor(PhotoCampaignStaffSelectDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4B400E5 & 1) == 0 )
  {
    sub_1BDB878(&BaseDialog_TypeInfo, method);
    byte_4B400E5 = 1;
  }
  this->fields.decideButtonDisabledColor = (struct UnityEngine_Color_o)xmmword_BEAB40;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PhotoCampaignStaffSelectDialog__Init(
        PhotoCampaignStaffSelectDialog_o *this,
        UIAtlas_o *atlas,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UILabel_o *titleLabel; // x0
  struct UICommonButton_o *decideButton; // x8
  UnityEngine_Object_o *photoCampaignAtlas; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4B400DF & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, atlas);
    sub_1BDB878(&string_TypeInfo, v5);
    byte_4B400DF = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_14;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL);
  titleLabel = this->fields.warningLabel;
  if ( !titleLabel )
    goto LABEL_14;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL);
  titleLabel = this->fields.decideButtonLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL),
        (titleLabel = this->fields.cancelButtonLabel) == 0LL)
    || (UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL),
        (decideButton = this->fields.decideButton) == 0LL)
    || (decideButton->fields.specifyDisabledColor = this->fields.decideButtonDisabledColor,
        (titleLabel = (UILabel_o *)this->fields.staffSelectListViewManager) == 0LL) )
  {
LABEL_14:
    sub_1BDBAD4(titleLabel, atlas);
  }
  StaffSelectListViewManager__DestroyList((StaffSelectListViewManager_o *)titleLabel, 0LL);
  photoCampaignAtlas = (UnityEngine_Object_o *)this->fields.photoCampaignAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(photoCampaignAtlas, 0LL, 0LL) )
  {
    this->fields.photoCampaignAtlas = atlas;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.photoCampaignAtlas, (int32_t)atlas, v9, v10);
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PhotoCampaignStaffSelectDialog__OnClickCancel(
        PhotoCampaignStaffSelectDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4B400E2 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_PhotoCampaignStaffSelectDialog_OnClickCancel__, v3);
    sub_1BDB878(&Method_PhotoCampaignStaffSelectDialog__OnClickCancel_b__13_0__, v4);
    byte_4B400E2 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v5 = Method_PhotoCampaignStaffSelectDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_PhotoCampaignStaffSelectDialog_OnClickCancel__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BDB890(Method_PhotoCampaignStaffSelectDialog_OnClickCancel__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0LL);
    v7 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_PhotoCampaignStaffSelectDialog__OnClickCancel_b__13_0__, 0LL);
    BaseDialog__SafeClose((BaseDialog_o *)this, v7, 0LL);
  }
}


void __fastcall PhotoCampaignStaffSelectDialog__OnClickDecide(
        PhotoCampaignStaffSelectDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  Il2CppObject *Master_object; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x21
  int32_t v15; // w21
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  System_Action_o *v18; // x21

  if ( (byte_4B400E1 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_DataManager_GetMaster_StaffPhotoCostumeMaster___, v3);
    sub_1BDB878(&DataManager_TypeInfo, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_StaffPhotoCostumeEntity__get_Count__, v5);
    sub_1BDB878(&Method_PhotoCampaignStaffSelectDialog_OnClickDecide__, v6);
    sub_1BDB878(&Method_PhotoCampaignStaffSelectDialog___c__DisplayClass12_0__OnClickDecide_b__0__, v7);
    sub_1BDB878(&PhotoCampaignStaffSelectDialog___c__DisplayClass12_0_TypeInfo, v8);
    byte_4B400E1 = 1;
  }
  v9 = sub_1BDBAC4(PhotoCampaignStaffSelectDialog___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_16;
  *(_QWORD *)(v9 + 16) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  if ( this->fields.baseState != 2 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_StaffPhotoCostumeMaster___);
  if ( !Master_object )
    goto LABEL_16;
  v14 = v9 + 24;
  Master_object = (Il2CppObject *)StaffPhotoCostumeMaster__TryGetEnableListByStaffId(
                                    (StaffPhotoCostumeMaster_o *)Master_object,
                                    (System_Collections_Generic_List_StaffPhotoCostumeEntity__o **)(v9 + 24),
                                    this->fields.currentSelectStaffPhotoId,
                                    0LL);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    v15 = 0;
    goto LABEL_13;
  }
  if ( !*(_QWORD *)v14 )
LABEL_16:
    sub_1BDBAD4(Master_object, v11);
  v15 = 8 * (*(_DWORD *)(*(_QWORD *)v14 + 24LL) == 1);
LABEL_13:
  v16 = Method_PhotoCampaignStaffSelectDialog_OnClickDecide__;
  if ( (*((_BYTE *)Method_PhotoCampaignStaffSelectDialog_OnClickDecide__ + 83) & 2) != 0 )
    v16 = (_QWORD *)sub_1BDB890(Method_PhotoCampaignStaffSelectDialog_OnClickDecide__);
  v17 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v16, v16[4]);
  OverwriteAssetSoundName__PlaySystemSe(v17, v15, 0, 0LL);
  v18 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v9,
    Method_PhotoCampaignStaffSelectDialog___c__DisplayClass12_0__OnClickDecide_b__0__,
    0LL);
  BaseDialog__SafeClose((BaseDialog_o *)this, v18, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignStaffSelectDialog__OnClickSelectListViewItem(
        PhotoCampaignStaffSelectDialog_o *this,
        int32_t selectStaffPhotoId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  StaffSelectListViewManager_o *staffSelectListViewManager; // x0
  StaffSelectListViewManager_o *v9; // x20
  System_Action_int__o *v10; // x21

  if ( (byte_4B400E4 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_int__TypeInfo, *(_QWORD *)&selectStaffPhotoId);
    sub_1BDB878(&Method_PhotoCampaignStaffSelectDialog_OnClickSelectListViewItem__, v5);
    byte_4B400E4 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    if ( this->fields.currentSelectStaffPhotoId != selectStaffPhotoId )
    {
      v6 = Method_PhotoCampaignStaffSelectDialog_OnClickSelectListViewItem__;
      if ( (*((_BYTE *)Method_PhotoCampaignStaffSelectDialog_OnClickSelectListViewItem__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1BDB890(Method_PhotoCampaignStaffSelectDialog_OnClickSelectListViewItem__);
      v7 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    }
    staffSelectListViewManager = this->fields.staffSelectListViewManager;
    this->fields.currentSelectStaffPhotoId = selectStaffPhotoId;
    if ( !staffSelectListViewManager
      || (StaffSelectListViewManager__ModifyItem(staffSelectListViewManager, selectStaffPhotoId, 0LL),
          v9 = this->fields.staffSelectListViewManager,
          v10 = (System_Action_int__o *)sub_1BDBAC4(System_Action_int__TypeInfo),
          System_Action_int____ctor(
            v10,
            (Il2CppObject *)this,
            (intptr_t)Method_PhotoCampaignStaffSelectDialog_OnClickSelectListViewItem__,
            0LL),
          !v9)
      || (StaffSelectListViewManager__SetMode(v9, 2, v10, 0LL),
          (staffSelectListViewManager = (StaffSelectListViewManager_o *)this->fields.decideButton) == 0LL) )
    {
      sub_1BDBAD4(staffSelectListViewManager, *(_QWORD *)&selectStaffPhotoId);
    }
    ((void (__fastcall *)(StaffSelectListViewManager_o *, bool, Il2CppMethodPointer))staffSelectListViewManager->klass->vtable._5_SetSortButtonImage.method)(
      staffSelectListViewManager,
      this->fields.currentSelectStaffPhotoId >= 0,
      staffSelectListViewManager->klass->vtable._6_GetFocusItemIndex.methodPtr);
  }
}


void __fastcall PhotoCampaignStaffSelectDialog__OnEnable(
        PhotoCampaignStaffSelectDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4B400E3 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_15624/*"Window/Objects/Buttons/CancelButton"*/, method);
    byte_4B400E3 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_43873512(transform, (System_String_o *)StringLiteral_15624/*"Window/Objects/Buttons/CancelButton"*/, 0LL);
}


void __fastcall PhotoCampaignStaffSelectDialog__Open(
        PhotoCampaignStaffSelectDialog_o *this,
        System_Action_bool__int__List_StaffPhotoCostumeEntity___o *closeCallback,
        int32_t selectedStaffImageId,
        int32_t baseStaffImageId,
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
  __int64 v29; // x21
  const MethodInfo *v30; // x2
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  Il2CppObject *Master_object; // x24
  StaffPhotoCostumeMaster_o *OpenEntityList; // x0
  __int64 v35; // x1
  StaffPhotoCostumeMaster_o *v36; // x23
  int32_t staffPhotoId; // w22
  System_Collections_Generic_List_object__o *v38; // x24
  _BOOL8 v39; // x0
  __int64 v40; // x1
  Il2CppObject *current; // x25
  int klass; // w28
  _BOOL8 IsEnableSameSet; // x0
  __int64 v44; // x1
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  Il2CppClass **v50; // x0
  __int64 v51; // x25
  System_Func_object__bool__o *v52; // x20
  StaffSelectListViewManager_o *staffSelectListViewManager; // x20
  System_Action_int__o *v54; // x21
  UILabel_o *titleLabel; // x20
  UILabel_o *warningLabel; // x20
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+20h] [xbp-80h] BYREF
  StaffPhotoCostumeEntity_o *costumeEntity; // [xsp+38h] [xbp-68h] BYREF
  System_Collections_Generic_List_StaffPhotoEntity__o *staffPhotoEntityList; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_4B400E0 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_int__TypeInfo, closeCallback);
    sub_1BDB878(&Method_BasicHelper_Any_StaffPhotoEntity___, v9);
    sub_1BDB878(&Method_DataManager_GetMaster_StaffPhotoCostumeMaster___, v10);
    sub_1BDB878(&Method_DataManager_GetMaster_StaffPhotoMaster___, v11);
    sub_1BDB878(&DataManager_TypeInfo, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_StaffPhotoEntity__Dispose__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_StaffPhotoEntity__MoveNext__, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_StaffPhotoEntity__get_Current__, v15);
    sub_1BDB878(&System_Func_StaffPhotoEntity__bool__TypeInfo, v16);
    sub_1BDB878(&Method_System_Collections_Generic_List_StaffPhotoEntity__Add__, v17);
    sub_1BDB878(&Method_System_Collections_Generic_List_StaffPhotoEntity__GetEnumerator__, v18);
    sub_1BDB878(&Method_System_Collections_Generic_List_StaffPhotoEntity___ctor__, v19);
    sub_1BDB878(&System_Collections_Generic_List_StaffPhotoEntity__TypeInfo, v20);
    sub_1BDB878(&LocalizationManager_TypeInfo, v21);
    sub_1BDB878(&Method_PhotoCampaignStaffSelectDialog_OnClickSelectListViewItem__, v22);
    sub_1BDB878(&Method_PhotoCampaignStaffSelectDialog___c__DisplayClass11_0__Open_b__0__, v23);
    sub_1BDB878(&PhotoCampaignStaffSelectDialog___c__DisplayClass11_0_TypeInfo, v24);
    sub_1BDB878(&StringLiteral_12270/*"STAFF_SELECT_DIALOG_TITLE"*/, v25);
    sub_1BDB878(&StringLiteral_12271/*"STAFF_SELECT_DIALOG_WARNING"*/, v26);
    sub_1BDB878(&StringLiteral_3718/*"COMMON_CONFIRM_DECIDE"*/, v27);
    sub_1BDB878(&StringLiteral_3716/*"COMMON_CONFIRM_CANCEL"*/, v28);
    byte_4B400E0 = 1;
  }
  staffPhotoEntityList = 0LL;
  costumeEntity = 0LL;
  memset(&v60, 0, sizeof(v60));
  v29 = sub_1BDBAC4(PhotoCampaignStaffSelectDialog___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v29, 0LL);
  PhotoCampaignStaffSelectDialog__Init(this, 0LL, v30);
  this->fields.closeFunc = closeCallback;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.closeFunc, (int32_t)closeCallback, v31, v32);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_StaffPhotoMaster___);
  OpenEntityList = (StaffPhotoCostumeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_StaffPhotoCostumeMaster___);
  if ( !Master_object )
    goto LABEL_42;
  v36 = OpenEntityList;
  OpenEntityList = (StaffPhotoCostumeMaster_o *)StaffPhotoMaster__TryGetOpenEntityList(
                                                  (StaffPhotoMaster_o *)Master_object,
                                                  &staffPhotoEntityList,
                                                  0LL);
  if ( ((unsigned __int8)OpenEntityList & 1) == 0 )
    return;
  if ( !v36 )
    goto LABEL_42;
  OpenEntityList = (StaffPhotoCostumeMaster_o *)StaffPhotoCostumeMaster__TryGetEntityByImageId(
                                                  v36,
                                                  &costumeEntity,
                                                  selectedStaffImageId,
                                                  0LL);
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
  v38 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_StaffPhotoEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_StaffPhotoEntity___ctor__);
  OpenEntityList = (StaffPhotoCostumeMaster_o *)staffPhotoEntityList;
  if ( !staffPhotoEntityList )
    goto LABEL_42;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v59,
    (System_Collections_Generic_List_object__o *)staffPhotoEntityList,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_StaffPhotoEntity__GetEnumerator__);
  v60 = v59;
  while ( 1 )
  {
    v39 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v60,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_StaffPhotoEntity__MoveNext__);
    if ( !v39 )
      break;
    current = v60.fields._current;
    if ( !v60.fields._current )
      sub_1BDBAD4(v39, v40);
    klass = (int)v60.fields._current[1].klass;
    IsEnableSameSet = StaffPhotoEntity__IsEnableSameSet((StaffPhotoEntity_o *)v60.fields._current, 0LL);
    if ( staffPhotoId != klass || IsEnableSameSet )
    {
      if ( !v38 )
        sub_1BDBAD4(IsEnableSameSet, v44);
      items = v38->fields._items;
      v48 = Method_System_Collections_Generic_List_StaffPhotoEntity__Add__;
      ++v38->fields._version;
      if ( !items )
        sub_1BDBAD4(IsEnableSameSet, v44);
      size = v38->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v38,
          current,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
      }
      else
      {
        v50 = &items->obj.klass + size;
        v38->fields._size = size + 1;
        v50[4] = (Il2CppClass *)current;
        sub_1BDB81C((CGThumbnailListItem_o *)(v50 + 4), (int32_t)current, v45, v46);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v60,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_StaffPhotoEntity__Dispose__);
  this->fields.currentSelectStaffPhotoId = -1;
  if ( !v29 )
    goto LABEL_42;
  v51 = v29 + 16;
  if ( StaffPhotoCostumeMaster__TryGetEntityByImageId(
         v36,
         (StaffPhotoCostumeEntity_o **)(v29 + 16),
         baseStaffImageId,
         0LL) )
  {
    v52 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_StaffPhotoEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v52,
      (Il2CppObject *)v29,
      Method_PhotoCampaignStaffSelectDialog___c__DisplayClass11_0__Open_b__0__,
      0LL);
    OpenEntityList = (StaffPhotoCostumeMaster_o *)BasicHelper__Any_object_(
                                                    (System_Collections_Generic_List_T__o *)v38,
                                                    (System_Func_T__bool__o *)v52,
                                                    (const MethodInfo_301CDFC *)Method_BasicHelper_Any_StaffPhotoEntity___);
    if ( ((unsigned __int8)OpenEntityList & 1) != 0 )
    {
      if ( !*(_QWORD *)v51 )
        goto LABEL_42;
      this->fields.currentSelectStaffPhotoId = *(_DWORD *)(*(_QWORD *)v51 + 16LL);
    }
  }
  OpenEntityList = (StaffPhotoCostumeMaster_o *)this->fields.decideButton;
  if ( !OpenEntityList )
    goto LABEL_42;
  ((void (__fastcall *)(StaffPhotoCostumeMaster_o *, bool, Il2CppMethodPointer))OpenEntityList->klass->vtable._5_preProcess.method)(
    OpenEntityList,
    this->fields.currentSelectStaffPhotoId >= 0,
    OpenEntityList->klass->vtable._6_Clear.methodPtr);
  OpenEntityList = (StaffPhotoCostumeMaster_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
  if ( !OpenEntityList )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)OpenEntityList, 1, 0LL);
  OpenEntityList = (StaffPhotoCostumeMaster_o *)this->fields.staffSelectListViewManager;
  if ( !OpenEntityList )
    goto LABEL_42;
  StaffSelectListViewManager__CreateList(
    (StaffSelectListViewManager_o *)OpenEntityList,
    staffPhotoEntityList,
    this->fields.currentSelectStaffPhotoId,
    staffPhotoId,
    this->fields.photoCampaignAtlas,
    0LL);
  staffSelectListViewManager = this->fields.staffSelectListViewManager;
  v54 = (System_Action_int__o *)sub_1BDBAC4(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v54,
    (Il2CppObject *)this,
    (intptr_t)Method_PhotoCampaignStaffSelectDialog_OnClickSelectListViewItem__,
    0LL);
  if ( !staffSelectListViewManager )
    goto LABEL_42;
  StaffSelectListViewManager__SetMode(staffSelectListViewManager, 2, v54, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  OpenEntityList = (StaffPhotoCostumeMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12270/*"STAFF_SELECT_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_42;
  UILabel__set_text(titleLabel, (System_String_o *)OpenEntityList, 0LL);
  warningLabel = this->fields.warningLabel;
  OpenEntityList = (StaffPhotoCostumeMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12271/*"STAFF_SELECT_DIALOG_WARNING"*/, 0LL);
  if ( !warningLabel
    || (UILabel__set_text(warningLabel, (System_String_o *)OpenEntityList, 0LL),
        decideButtonLabel = this->fields.decideButtonLabel,
        OpenEntityList = (StaffPhotoCostumeMaster_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_3718/*"COMMON_CONFIRM_DECIDE"*/,
                                                        0LL),
        !decideButtonLabel)
    || (UILabel__set_text(decideButtonLabel, (System_String_o *)OpenEntityList, 0LL),
        cancelButtonLabel = this->fields.cancelButtonLabel,
        OpenEntityList = (StaffPhotoCostumeMaster_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_3716/*"COMMON_CONFIRM_CANCEL"*/,
                                                        0LL),
        !cancelButtonLabel) )
  {
LABEL_42:
    sub_1BDBAD4(OpenEntityList, v35);
  }
  UILabel__set_text(cancelButtonLabel, (System_String_o *)OpenEntityList, 0LL);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0LL, 0, 0LL);
}


void __fastcall PhotoCampaignStaffSelectDialog___OnClickCancel_b__13_0(
        PhotoCampaignStaffSelectDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B400E6 & 1) == 0 )
  {
    sub_1BDB878(&Method_ActionExtensions_Call_bool__int__List_StaffPhotoCostumeEntity____, method);
    byte_4B400E6 = 1;
  }
  ActionExtensions__Call_bool__int__object_(
    (System_Action_T1__T2__T3__o *)this->fields.closeFunc,
    0,
    -1,
    0LL,
    (const MethodInfo_2F83548 *)Method_ActionExtensions_Call_bool__int__List_StaffPhotoCostumeEntity____);
}


void __fastcall PhotoCampaignStaffSelectDialog___c__DisplayClass11_0___ctor(
        PhotoCampaignStaffSelectDialog___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PhotoCampaignStaffSelectDialog___c__DisplayClass11_0___Open_b__0(
        PhotoCampaignStaffSelectDialog___c__DisplayClass11_0_o *this,
        StaffPhotoEntity_o *x,
        const MethodInfo *method)
{
  struct StaffPhotoCostumeEntity_o *baseCostumeEntity; // x8

  if ( !x || (baseCostumeEntity = this->fields.baseCostumeEntity) == 0LL )
    sub_1BDBAD4(this, x);
  return x->fields.id == baseCostumeEntity->fields.staffPhotoId;
}


void __fastcall PhotoCampaignStaffSelectDialog___c__DisplayClass12_0___ctor(
        PhotoCampaignStaffSelectDialog___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PhotoCampaignStaffSelectDialog___c__DisplayClass12_0___OnClickDecide_b__0(
        PhotoCampaignStaffSelectDialog___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  PhotoCampaignStaffSelectDialog___c__DisplayClass12_0_o *v2; // x19
  struct PhotoCampaignStaffSelectDialog_o *_4__this; // x8

  v2 = this;
  if ( (byte_4B400E7 & 1) == 0 )
  {
    this = (PhotoCampaignStaffSelectDialog___c__DisplayClass12_0_o *)sub_1BDB878(
                                                                       &Method_ActionExtensions_Call_bool__int__List_StaffPhotoCostumeEntity____,
                                                                       method);
    byte_4B400E7 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1BDBAD4(this, method);
  ActionExtensions__Call_bool__int__object_(
    (System_Action_T1__T2__T3__o *)_4__this->fields.closeFunc,
    1,
    _4__this->fields.currentSelectStaffPhotoId,
    (Il2CppObject *)v2->fields.staffPhotoCostumeEntityList,
    (const MethodInfo_2F83548 *)Method_ActionExtensions_Call_bool__int__List_StaffPhotoCostumeEntity____);
}