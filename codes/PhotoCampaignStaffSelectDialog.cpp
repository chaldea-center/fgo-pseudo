void __fastcall PhotoCampaignStaffSelectDialog___ctor(PhotoCampaignStaffSelectDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C1D7D0 & 1) == 0 )
  {
    sub_1C3B764(&BaseDialog_TypeInfo, method);
    byte_4C1D7D0 = 1;
  }
  this->fields.decideButtonDisabledColor = (struct UnityEngine_Color_o)xmmword_C0D520;
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

  if ( (byte_4C1D7CA & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, atlas);
    sub_1C3B764(&string_TypeInfo, v5);
    byte_4C1D7CA = 1;
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
    sub_1C3B9C0(titleLabel, atlas);
  }
  StaffSelectListViewManager__DestroyList((StaffSelectListViewManager_o *)titleLabel, 0LL);
  photoCampaignAtlas = (UnityEngine_Object_o *)this->fields.photoCampaignAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(photoCampaignAtlas, 0LL, 0LL) )
  {
    this->fields.photoCampaignAtlas = atlas;
    sub_1C3B708(&this->fields.photoCampaignAtlas);
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

  if ( (byte_4C1D7CD & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_PhotoCampaignStaffSelectDialog_OnClickCancel__, v3);
    sub_1C3B764(&Method_PhotoCampaignStaffSelectDialog__OnClickCancel_b__13_0__, v4);
    byte_4C1D7CD = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v5 = Method_PhotoCampaignStaffSelectDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_PhotoCampaignStaffSelectDialog_OnClickCancel__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C3B77C(Method_PhotoCampaignStaffSelectDialog_OnClickCancel__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3B748(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0LL);
    v7 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
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
  __int64 v12; // x21
  int32_t v13; // w21
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  System_Action_o *v16; // x21

  if ( (byte_4C1D7CC & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_DataManager_GetMaster_StaffPhotoCostumeMaster___, v3);
    sub_1C3B764(&DataManager_TypeInfo, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_StaffPhotoCostumeEntity__get_Count__, v5);
    sub_1C3B764(&Method_PhotoCampaignStaffSelectDialog_OnClickDecide__, v6);
    sub_1C3B764(&Method_PhotoCampaignStaffSelectDialog___c__DisplayClass12_0__OnClickDecide_b__0__, v7);
    sub_1C3B764(&PhotoCampaignStaffSelectDialog___c__DisplayClass12_0_TypeInfo, v8);
    byte_4C1D7CC = 1;
  }
  v9 = sub_1C3B9B0(PhotoCampaignStaffSelectDialog___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_16;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C3B708(v9 + 16);
  if ( this->fields.baseState != 2 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_StaffPhotoCostumeMaster___);
  if ( !Master_object )
    goto LABEL_16;
  v12 = v9 + 24;
  Master_object = (Il2CppObject *)StaffPhotoCostumeMaster__TryGetEnableListByStaffId(
                                    (StaffPhotoCostumeMaster_o *)Master_object,
                                    (System_Collections_Generic_List_StaffPhotoCostumeEntity__o **)(v9 + 24),
                                    this->fields.currentSelectStaffPhotoId,
                                    0LL);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    v13 = 0;
    goto LABEL_13;
  }
  if ( !*(_QWORD *)v12 )
LABEL_16:
    sub_1C3B9C0(Master_object, v11);
  v13 = 8 * (*(_DWORD *)(*(_QWORD *)v12 + 24LL) == 1);
LABEL_13:
  v14 = Method_PhotoCampaignStaffSelectDialog_OnClickDecide__;
  if ( (*((_BYTE *)Method_PhotoCampaignStaffSelectDialog_OnClickDecide__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1C3B77C(Method_PhotoCampaignStaffSelectDialog_OnClickDecide__);
  v15 = (System_Reflection_MethodBase_o *)sub_1C3B748(v14, v14[4]);
  OverwriteAssetSoundName__PlaySystemSe(v15, v13, 0, 0LL);
  v16 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)v9,
    Method_PhotoCampaignStaffSelectDialog___c__DisplayClass12_0__OnClickDecide_b__0__,
    0LL);
  BaseDialog__SafeClose((BaseDialog_o *)this, v16, 0LL);
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

  if ( (byte_4C1D7CF & 1) == 0 )
  {
    sub_1C3B764(&System_Action_int__TypeInfo, *(_QWORD *)&selectStaffPhotoId);
    sub_1C3B764(&Method_PhotoCampaignStaffSelectDialog_OnClickSelectListViewItem__, v5);
    byte_4C1D7CF = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    if ( this->fields.currentSelectStaffPhotoId != selectStaffPhotoId )
    {
      v6 = Method_PhotoCampaignStaffSelectDialog_OnClickSelectListViewItem__;
      if ( (*((_BYTE *)Method_PhotoCampaignStaffSelectDialog_OnClickSelectListViewItem__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1C3B77C(Method_PhotoCampaignStaffSelectDialog_OnClickSelectListViewItem__);
      v7 = (System_Reflection_MethodBase_o *)sub_1C3B748(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    }
    staffSelectListViewManager = this->fields.staffSelectListViewManager;
    this->fields.currentSelectStaffPhotoId = selectStaffPhotoId;
    if ( !staffSelectListViewManager
      || (StaffSelectListViewManager__ModifyItem(staffSelectListViewManager, selectStaffPhotoId, 0LL),
          v9 = this->fields.staffSelectListViewManager,
          v10 = (System_Action_int__o *)sub_1C3B9B0(System_Action_int__TypeInfo),
          System_Action_int____ctor(
            v10,
            (Il2CppObject *)this,
            (intptr_t)Method_PhotoCampaignStaffSelectDialog_OnClickSelectListViewItem__,
            0LL),
          !v9)
      || (StaffSelectListViewManager__SetMode(v9, 2, v10, 0LL),
          (staffSelectListViewManager = (StaffSelectListViewManager_o *)this->fields.decideButton) == 0LL) )
    {
      sub_1C3B9C0(staffSelectListViewManager, *(_QWORD *)&selectStaffPhotoId);
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

  if ( (byte_4C1D7CE & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_15958/*"_PerspectiveFilter"*/, method);
    byte_4C1D7CE = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_43310944(transform, (System_String_o *)StringLiteral_15958/*"_PerspectiveFilter"*/, 0LL);
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
  Il2CppObject *Master_object; // x24
  StaffPhotoCostumeMaster_o *OpenEntityList; // x0
  __int64 v33; // x1
  StaffPhotoCostumeMaster_o *v34; // x23
  int32_t staffPhotoId; // w22
  System_Collections_Generic_List_object__o *v36; // x24
  _BOOL8 v37; // x0
  __int64 v38; // x1
  Il2CppObject *current; // x25
  int klass; // w28
  _BOOL8 IsEnableSameSet; // x0
  __int64 v42; // x1
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  __int64 v47; // x25
  System_Func_object__bool__o *v48; // x20
  StaffSelectListViewManager_o *staffSelectListViewManager; // x20
  System_Action_int__o *v50; // x21
  UILabel_o *titleLabel; // x20
  UILabel_o *warningLabel; // x20
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+20h] [xbp-80h] BYREF
  StaffPhotoCostumeEntity_o *costumeEntity; // [xsp+38h] [xbp-68h] BYREF
  System_Collections_Generic_List_StaffPhotoEntity__o *staffPhotoEntityList; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_4C1D7CB & 1) == 0 )
  {
    sub_1C3B764(&System_Action_int__TypeInfo, closeCallback);
    sub_1C3B764(&Method_BasicHelper_Any_StaffPhotoEntity___, v9);
    sub_1C3B764(&Method_DataManager_GetMaster_StaffPhotoCostumeMaster___, v10);
    sub_1C3B764(&Method_DataManager_GetMaster_StaffPhotoMaster___, v11);
    sub_1C3B764(&DataManager_TypeInfo, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_StaffPhotoEntity__Dispose__, v13);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_StaffPhotoEntity__MoveNext__, v14);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_StaffPhotoEntity__get_Current__, v15);
    sub_1C3B764(&System_Func_StaffPhotoEntity__bool__TypeInfo, v16);
    sub_1C3B764(&Method_System_Collections_Generic_List_StaffPhotoEntity__Add__, v17);
    sub_1C3B764(&Method_System_Collections_Generic_List_StaffPhotoEntity__GetEnumerator__, v18);
    sub_1C3B764(&Method_System_Collections_Generic_List_StaffPhotoEntity___ctor__, v19);
    sub_1C3B764(&System_Collections_Generic_List_StaffPhotoEntity__TypeInfo, v20);
    sub_1C3B764(&LocalizationManager_TypeInfo, v21);
    sub_1C3B764(&Method_PhotoCampaignStaffSelectDialog_OnClickSelectListViewItem__, v22);
    sub_1C3B764(&Method_PhotoCampaignStaffSelectDialog___c__DisplayClass11_0__Open_b__0__, v23);
    sub_1C3B764(&PhotoCampaignStaffSelectDialog___c__DisplayClass11_0_TypeInfo, v24);
    sub_1C3B764(&StringLiteral_12494/*"SetUserId"*/, v25);
    sub_1C3B764(&StringLiteral_12495/*"SetVisibility"*/, v26);
    sub_1C3B764(&StringLiteral_3800/*"COSTUME_SELECT_SERVANT_EVENT_ITEM_COSTUME_MSG"*/, v27);
    sub_1C3B764(&StringLiteral_3798/*"COSTUME_OPEN_WARNING"*/, v28);
    byte_4C1D7CB = 1;
  }
  staffPhotoEntityList = 0LL;
  costumeEntity = 0LL;
  memset(&v56, 0, sizeof(v56));
  v29 = sub_1C3B9B0(PhotoCampaignStaffSelectDialog___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v29, 0LL);
  PhotoCampaignStaffSelectDialog__Init(this, 0LL, v30);
  this->fields.closeFunc = closeCallback;
  sub_1C3B708(&this->fields.closeFunc);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_StaffPhotoMaster___);
  OpenEntityList = (StaffPhotoCostumeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_StaffPhotoCostumeMaster___);
  if ( !Master_object )
    goto LABEL_42;
  v34 = OpenEntityList;
  OpenEntityList = (StaffPhotoCostumeMaster_o *)StaffPhotoMaster__TryGetOpenEntityList(
                                                  (StaffPhotoMaster_o *)Master_object,
                                                  &staffPhotoEntityList,
                                                  0LL);
  if ( ((unsigned __int8)OpenEntityList & 1) == 0 )
    return;
  if ( !v34 )
    goto LABEL_42;
  OpenEntityList = (StaffPhotoCostumeMaster_o *)StaffPhotoCostumeMaster__TryGetEntityByImageId(
                                                  v34,
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
  v36 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_StaffPhotoEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_StaffPhotoEntity___ctor__);
  OpenEntityList = (StaffPhotoCostumeMaster_o *)staffPhotoEntityList;
  if ( !staffPhotoEntityList )
    goto LABEL_42;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v55,
    (System_Collections_Generic_List_object__o *)staffPhotoEntityList,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_StaffPhotoEntity__GetEnumerator__);
  v56 = v55;
  while ( 1 )
  {
    v37 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v56,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_StaffPhotoEntity__MoveNext__);
    if ( !v37 )
      break;
    current = v56.fields._current;
    if ( !v56.fields._current )
      sub_1C3B9C0(v37, v38);
    klass = (int)v56.fields._current[1].klass;
    IsEnableSameSet = StaffPhotoEntity__IsEnableSameSet((StaffPhotoEntity_o *)v56.fields._current, 0LL);
    if ( staffPhotoId != klass || IsEnableSameSet )
    {
      if ( !v36 )
        sub_1C3B9C0(IsEnableSameSet, v42);
      items = v36->fields._items;
      v44 = Method_System_Collections_Generic_List_StaffPhotoEntity__Add__;
      ++v36->fields._version;
      if ( !items )
        sub_1C3B9C0(IsEnableSameSet, v42);
      size = v36->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v36,
          current,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
      }
      else
      {
        v46 = &items->obj.klass + size;
        v36->fields._size = size + 1;
        v46[4] = (Il2CppClass *)current;
        sub_1C3B708(v46 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v56,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_StaffPhotoEntity__Dispose__);
  this->fields.currentSelectStaffPhotoId = -1;
  if ( !v29 )
    goto LABEL_42;
  v47 = v29 + 16;
  if ( StaffPhotoCostumeMaster__TryGetEntityByImageId(
         v34,
         (StaffPhotoCostumeEntity_o **)(v29 + 16),
         baseStaffImageId,
         0LL) )
  {
    v48 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_StaffPhotoEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v48,
      (Il2CppObject *)v29,
      Method_PhotoCampaignStaffSelectDialog___c__DisplayClass11_0__Open_b__0__,
      0LL);
    OpenEntityList = (StaffPhotoCostumeMaster_o *)BasicHelper__Any_object_(
                                                    (System_Collections_Generic_List_T__o *)v36,
                                                    (System_Func_T__bool__o *)v48,
                                                    (const MethodInfo_2FDAB74 *)Method_BasicHelper_Any_StaffPhotoEntity___);
    if ( ((unsigned __int8)OpenEntityList & 1) != 0 )
    {
      if ( !*(_QWORD *)v47 )
        goto LABEL_42;
      this->fields.currentSelectStaffPhotoId = *(_DWORD *)(*(_QWORD *)v47 + 16LL);
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
  v50 = (System_Action_int__o *)sub_1C3B9B0(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v50,
    (Il2CppObject *)this,
    (intptr_t)Method_PhotoCampaignStaffSelectDialog_OnClickSelectListViewItem__,
    0LL);
  if ( !staffSelectListViewManager )
    goto LABEL_42;
  StaffSelectListViewManager__SetMode(staffSelectListViewManager, 2, v50, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  OpenEntityList = (StaffPhotoCostumeMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12494/*"SetUserId"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_42;
  UILabel__set_text(titleLabel, (System_String_o *)OpenEntityList, 0LL);
  warningLabel = this->fields.warningLabel;
  OpenEntityList = (StaffPhotoCostumeMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12495/*"SetVisibility"*/, 0LL);
  if ( !warningLabel
    || (UILabel__set_text(warningLabel, (System_String_o *)OpenEntityList, 0LL),
        decideButtonLabel = this->fields.decideButtonLabel,
        OpenEntityList = (StaffPhotoCostumeMaster_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_3800/*"COSTUME_SELECT_SERVANT_EVENT_ITEM_COSTUME_MSG"*/,
                                                        0LL),
        !decideButtonLabel)
    || (UILabel__set_text(decideButtonLabel, (System_String_o *)OpenEntityList, 0LL),
        cancelButtonLabel = this->fields.cancelButtonLabel,
        OpenEntityList = (StaffPhotoCostumeMaster_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_3798/*"COSTUME_OPEN_WARNING"*/,
                                                        0LL),
        !cancelButtonLabel) )
  {
LABEL_42:
    sub_1C3B9C0(OpenEntityList, v33);
  }
  UILabel__set_text(cancelButtonLabel, (System_String_o *)OpenEntityList, 0LL);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0LL, 0, 0LL);
}


void __fastcall PhotoCampaignStaffSelectDialog___OnClickCancel_b__13_0(
        PhotoCampaignStaffSelectDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C1D7D1 & 1) == 0 )
  {
    sub_1C3B764(&Method_ActionExtensions_Call_bool__int__List_StaffPhotoCostumeEntity____, method);
    byte_4C1D7D1 = 1;
  }
  ActionExtensions__Call_bool__int__object_(
    (System_Action_T1__T2__T3__o *)this->fields.closeFunc,
    0,
    -1,
    0LL,
    (const MethodInfo_2F4287C *)Method_ActionExtensions_Call_bool__int__List_StaffPhotoCostumeEntity____);
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
    sub_1C3B9C0(this, x);
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
  if ( (byte_4C1D7D2 & 1) == 0 )
  {
    this = (PhotoCampaignStaffSelectDialog___c__DisplayClass12_0_o *)sub_1C3B764(
                                                                       &Method_ActionExtensions_Call_bool__int__List_StaffPhotoCostumeEntity____,
                                                                       method);
    byte_4C1D7D2 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1C3B9C0(this, method);
  ActionExtensions__Call_bool__int__object_(
    (System_Action_T1__T2__T3__o *)_4__this->fields.closeFunc,
    1,
    _4__this->fields.currentSelectStaffPhotoId,
    (Il2CppObject *)v2->fields.staffPhotoCostumeEntityList,
    (const MethodInfo_2F4287C *)Method_ActionExtensions_Call_bool__int__List_StaffPhotoCostumeEntity____);
}