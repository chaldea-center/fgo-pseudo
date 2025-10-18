void PhotoCampaignStaffSelectDialog___ctor(PhotoCampaignStaffSelectDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C3E5FB & 1) == 0 )
  {
    sub_1C37058(&BaseDialog_TypeInfo);
    byte_4C3E5FB = 1;
  }
  this->fields.decideButtonDisabledColor = (struct UnityEngine_Color_o)xmmword_C0E940;
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
  const MethodInfo *v9; // x3

  if ( (byte_4C3E5F5 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&string_TypeInfo);
    byte_4C3E5F5 = 1;
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
    sub_1C372B4(titleLabel);
  }
  StaffSelectListViewManager__DestroyList((StaffSelectListViewManager_o *)titleLabel, 0);
  photoCampaignAtlas = (UnityEngine_Object_o *)this->fields.photoCampaignAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(photoCampaignAtlas, 0, 0) )
  {
    this->fields.photoCampaignAtlas = atlas;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.photoCampaignAtlas, (int32_t)atlas, v8, v9);
  }
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void PhotoCampaignStaffSelectDialog__OnClickCancel(PhotoCampaignStaffSelectDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4C3E5F8 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_PhotoCampaignStaffSelectDialog_OnClickCancel__);
    sub_1C37058(&Method_PhotoCampaignStaffSelectDialog__OnClickCancel_b__13_0__);
    byte_4C3E5F8 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_PhotoCampaignStaffSelectDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_PhotoCampaignStaffSelectDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_PhotoCampaignStaffSelectDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_PhotoCampaignStaffSelectDialog__OnClickCancel_b__13_0__, 0);
    BaseDialog__SafeClose((BaseDialog_o *)this, v5, 0);
  }
}


void PhotoCampaignStaffSelectDialog__OnClickDecide(PhotoCampaignStaffSelectDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  Il2CppObject *Master_object; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x21
  int32_t v8; // w21
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  System_Action_o *v11; // x21

  if ( (byte_4C3E5F7 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_StaffPhotoCostumeMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_StaffPhotoCostumeEntity__get_Count__);
    sub_1C37058(&Method_PhotoCampaignStaffSelectDialog_OnClickDecide__);
    sub_1C37058(&Method_PhotoCampaignStaffSelectDialog___c__DisplayClass12_0__OnClickDecide_b__0__);
    sub_1C37058(&PhotoCampaignStaffSelectDialog___c__DisplayClass12_0_TypeInfo);
    byte_4C3E5F7 = 1;
  }
  v3 = sub_1C372A4(PhotoCampaignStaffSelectDialog___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_16;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v5, v6);
  if ( this->fields.baseState != 2 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_StaffPhotoCostumeMaster___);
  if ( !Master_object )
    goto LABEL_16;
  v7 = v3 + 24;
  Master_object = (Il2CppObject *)StaffPhotoCostumeMaster__TryGetEnableListByStaffId(
                                    (StaffPhotoCostumeMaster_o *)Master_object,
                                    (System_Collections_Generic_List_StaffPhotoCostumeEntity__o **)(v3 + 24),
                                    this->fields.currentSelectStaffPhotoId,
                                    0);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    v8 = 0;
    goto LABEL_13;
  }
  if ( !*(_QWORD *)v7 )
LABEL_16:
    sub_1C372B4(Master_object);
  v8 = 8 * (*(_DWORD *)(*(_QWORD *)v7 + 24LL) == 1);
LABEL_13:
  v9 = Method_PhotoCampaignStaffSelectDialog_OnClickDecide__;
  if ( (*((_BYTE *)Method_PhotoCampaignStaffSelectDialog_OnClickDecide__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1C37070(Method_PhotoCampaignStaffSelectDialog_OnClickDecide__);
  v10 = (System_Reflection_MethodBase_o *)sub_1C3703C(v9, v9[4]);
  OverwriteAssetSoundName__PlaySystemSe(v10, v8, 0, 0);
  v11 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v11,
    (Il2CppObject *)v3,
    Method_PhotoCampaignStaffSelectDialog___c__DisplayClass12_0__OnClickDecide_b__0__,
    0);
  BaseDialog__SafeClose((BaseDialog_o *)this, v11, 0);
}


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

  if ( (byte_4C3E5FA & 1) == 0 )
  {
    sub_1C37058(&System_Action_int__TypeInfo);
    sub_1C37058(&Method_PhotoCampaignStaffSelectDialog_OnClickSelectListViewItem__);
    byte_4C3E5FA = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    if ( this->fields.currentSelectStaffPhotoId != selectStaffPhotoId )
    {
      v5 = Method_PhotoCampaignStaffSelectDialog_OnClickSelectListViewItem__;
      if ( (*((_BYTE *)Method_PhotoCampaignStaffSelectDialog_OnClickSelectListViewItem__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1C37070(Method_PhotoCampaignStaffSelectDialog_OnClickSelectListViewItem__);
      v6 = (System_Reflection_MethodBase_o *)sub_1C3703C(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    }
    staffSelectListViewManager = this->fields.staffSelectListViewManager;
    this->fields.currentSelectStaffPhotoId = selectStaffPhotoId;
    if ( !staffSelectListViewManager
      || (StaffSelectListViewManager__ModifyItem(staffSelectListViewManager, selectStaffPhotoId, 0),
          v8 = this->fields.staffSelectListViewManager,
          v9 = (System_Action_int__o *)sub_1C372A4(System_Action_int__TypeInfo),
          System_Action_int____ctor(
            v9,
            (Il2CppObject *)this,
            (intptr_t)Method_PhotoCampaignStaffSelectDialog_OnClickSelectListViewItem__,
            0),
          !v8)
      || (StaffSelectListViewManager__SetMode(v8, 2, v9, 0),
          (staffSelectListViewManager = (StaffSelectListViewManager_o *)this->fields.decideButton) == 0) )
    {
      sub_1C372B4(staffSelectListViewManager);
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

  if ( (byte_4C3E5F9 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_15649/*"Window/Objects/Buttons/CancelButton"*/);
    byte_4C3E5F9 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_44960000(transform, (System_String_o *)StringLiteral_15649/*"Window/Objects/Buttons/CancelButton"*/, 0);
}


void PhotoCampaignStaffSelectDialog__Open(
        PhotoCampaignStaffSelectDialog_o *this,
        System_Action_bool__int__List_StaffPhotoCostumeEntity___o *closeCallback,
        int32_t selectedStaffImageId,
        int32_t baseStaffImageId,
        const MethodInfo *method)
{
  __int64 v9; // x21
  const MethodInfo *v10; // x2
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject *Master_object; // x24
  StaffPhotoCostumeMaster_o *OpenEntityList; // x0
  StaffPhotoCostumeMaster_o *v15; // x23
  int32_t staffPhotoId; // w22
  System_Collections_Generic_List_object__o *v17; // x24
  _BOOL8 v18; // x0
  Il2CppObject *current; // x25
  int klass; // w28
  _BOOL8 IsEnableSameSet; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  __int64 v28; // x25
  System_Func_object__bool__o *v29; // x20
  StaffSelectListViewManager_o *staffSelectListViewManager; // x20
  System_Action_int__o *v31; // x21
  UILabel_o *titleLabel; // x20
  UILabel_o *warningLabel; // x20
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+20h] [xbp-80h] BYREF
  StaffPhotoCostumeEntity_o *costumeEntity; // [xsp+38h] [xbp-68h] BYREF
  System_Collections_Generic_List_StaffPhotoEntity__o *staffPhotoEntityList; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_4C3E5F6 & 1) == 0 )
  {
    sub_1C37058(&System_Action_int__TypeInfo);
    sub_1C37058(&Method_BasicHelper_Any_StaffPhotoEntity___);
    sub_1C37058(&Method_DataManager_GetMaster_StaffPhotoCostumeMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_StaffPhotoMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_StaffPhotoEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_StaffPhotoEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_StaffPhotoEntity__get_Current__);
    sub_1C37058(&System_Func_StaffPhotoEntity__bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_StaffPhotoEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_StaffPhotoEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_StaffPhotoEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_StaffPhotoEntity__TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_PhotoCampaignStaffSelectDialog_OnClickSelectListViewItem__);
    sub_1C37058(&Method_PhotoCampaignStaffSelectDialog___c__DisplayClass11_0__Open_b__0__);
    sub_1C37058(&PhotoCampaignStaffSelectDialog___c__DisplayClass11_0_TypeInfo);
    sub_1C37058(&StringLiteral_12300/*"STAFF_SELECT_DIALOG_TITLE"*/);
    sub_1C37058(&StringLiteral_12301/*"STAFF_SELECT_DIALOG_WARNING"*/);
    sub_1C37058(&StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C37058(&StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/);
    byte_4C3E5F6 = 1;
  }
  staffPhotoEntityList = 0;
  costumeEntity = 0;
  memset(&v37, 0, sizeof(v37));
  v9 = sub_1C372A4(PhotoCampaignStaffSelectDialog___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  PhotoCampaignStaffSelectDialog__Init(this, 0, v10);
  this->fields.closeFunc = closeCallback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.closeFunc, (int32_t)closeCallback, v11, v12);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_StaffPhotoMaster___);
  OpenEntityList = (StaffPhotoCostumeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_StaffPhotoCostumeMaster___);
  if ( !Master_object )
    goto LABEL_42;
  v15 = OpenEntityList;
  OpenEntityList = (StaffPhotoCostumeMaster_o *)StaffPhotoMaster__TryGetOpenEntityList(
                                                  (StaffPhotoMaster_o *)Master_object,
                                                  &staffPhotoEntityList,
                                                  0);
  if ( ((unsigned __int8)OpenEntityList & 1) == 0 )
    return;
  if ( !v15 )
    goto LABEL_42;
  OpenEntityList = (StaffPhotoCostumeMaster_o *)StaffPhotoCostumeMaster__TryGetEntityByImageId(
                                                  v15,
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
  v17 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_StaffPhotoEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_StaffPhotoEntity___ctor__);
  OpenEntityList = (StaffPhotoCostumeMaster_o *)staffPhotoEntityList;
  if ( !staffPhotoEntityList )
    goto LABEL_42;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    (System_Collections_Generic_List_object__o *)staffPhotoEntityList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_StaffPhotoEntity__GetEnumerator__);
  v37 = v36;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v37,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_StaffPhotoEntity__MoveNext__);
    if ( !v18 )
      break;
    current = v37.fields._current;
    if ( !v37.fields._current )
      sub_1C372B4(v18);
    klass = (int)v37.fields._current[1].klass;
    IsEnableSameSet = StaffPhotoEntity__IsEnableSameSet((StaffPhotoEntity_o *)v37.fields._current, 0);
    if ( staffPhotoId != klass || IsEnableSameSet )
    {
      if ( !v17 )
        sub_1C372B4(IsEnableSameSet);
      items = v17->fields._items;
      v25 = Method_System_Collections_Generic_List_StaffPhotoEntity__Add__;
      ++v17->fields._version;
      if ( !items )
        sub_1C372B4(IsEnableSameSet);
      size = v17->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v17,
          current,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = &items->obj.klass + size;
        v17->fields._size = size + 1;
        v27[4] = (Il2CppClass *)current;
        sub_1C36FFC((CGThumbnailListItem_o *)(v27 + 4), (int32_t)current, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v37,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_StaffPhotoEntity__Dispose__);
  this->fields.currentSelectStaffPhotoId = -1;
  if ( !v9 )
    goto LABEL_42;
  v28 = v9 + 16;
  if ( StaffPhotoCostumeMaster__TryGetEntityByImageId(v15, (StaffPhotoCostumeEntity_o **)(v9 + 16), baseStaffImageId, 0) )
  {
    v29 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_StaffPhotoEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v29,
      (Il2CppObject *)v9,
      Method_PhotoCampaignStaffSelectDialog___c__DisplayClass11_0__Open_b__0__,
      0);
    OpenEntityList = (StaffPhotoCostumeMaster_o *)BasicHelper__Any_object_(
                                                    (System_Collections_Generic_List_T__o *)v17,
                                                    (System_Func_T__bool__o *)v29,
                                                    (const MethodInfo_30D0FF8 *)Method_BasicHelper_Any_StaffPhotoEntity___);
    if ( ((unsigned __int8)OpenEntityList & 1) != 0 )
    {
      if ( !*(_QWORD *)v28 )
        goto LABEL_42;
      this->fields.currentSelectStaffPhotoId = *(_DWORD *)(*(_QWORD *)v28 + 16LL);
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
    this->fields.photoCampaignAtlas,
    0);
  staffSelectListViewManager = this->fields.staffSelectListViewManager;
  v31 = (System_Action_int__o *)sub_1C372A4(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v31,
    (Il2CppObject *)this,
    (intptr_t)Method_PhotoCampaignStaffSelectDialog_OnClickSelectListViewItem__,
    0);
  if ( !staffSelectListViewManager )
    goto LABEL_42;
  StaffSelectListViewManager__SetMode(staffSelectListViewManager, 2, v31, 0);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  OpenEntityList = (StaffPhotoCostumeMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12300/*"STAFF_SELECT_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_42;
  UILabel__set_text(titleLabel, (System_String_o *)OpenEntityList, 0);
  warningLabel = this->fields.warningLabel;
  OpenEntityList = (StaffPhotoCostumeMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12301/*"STAFF_SELECT_DIALOG_WARNING"*/, 0);
  if ( !warningLabel
    || (UILabel__set_text(warningLabel, (System_String_o *)OpenEntityList, 0),
        decideButtonLabel = this->fields.decideButtonLabel,
        OpenEntityList = (StaffPhotoCostumeMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/, 0),
        !decideButtonLabel)
    || (UILabel__set_text(decideButtonLabel, (System_String_o *)OpenEntityList, 0),
        cancelButtonLabel = this->fields.cancelButtonLabel,
        OpenEntityList = (StaffPhotoCostumeMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/, 0),
        !cancelButtonLabel) )
  {
LABEL_42:
    sub_1C372B4(OpenEntityList);
  }
  UILabel__set_text(cancelButtonLabel, (System_String_o *)OpenEntityList, 0);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
}


void PhotoCampaignStaffSelectDialog___OnClickCancel_b__13_0(
        PhotoCampaignStaffSelectDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C3E5FC & 1) == 0 )
  {
    sub_1C37058(&Method_ActionExtensions_Call_bool__int__List_StaffPhotoCostumeEntity____);
    byte_4C3E5FC = 1;
  }
  ActionExtensions__Call_bool__int__object_(
    (System_Action_T1__T2__T3__o *)this->fields.closeFunc,
    0,
    -1,
    0,
    (const MethodInfo_3034AC4 *)Method_ActionExtensions_Call_bool__int__List_StaffPhotoCostumeEntity____);
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
    sub_1C372B4(this);
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
  if ( (byte_4C3E5FD & 1) == 0 )
  {
    this = (PhotoCampaignStaffSelectDialog___c__DisplayClass12_0_o *)sub_1C37058(&Method_ActionExtensions_Call_bool__int__List_StaffPhotoCostumeEntity____);
    byte_4C3E5FD = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(this);
  ActionExtensions__Call_bool__int__object_(
    (System_Action_T1__T2__T3__o *)_4__this->fields.closeFunc,
    1,
    _4__this->fields.currentSelectStaffPhotoId,
    (Il2CppObject *)v2->fields.staffPhotoCostumeEntityList,
    (const MethodInfo_3034AC4 *)Method_ActionExtensions_Call_bool__int__List_StaffPhotoCostumeEntity____);
}