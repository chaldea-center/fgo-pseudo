void GrandQuestFolderBoardComponent___cctor(const MethodInfo *method)
{
  if ( (byte_596B277 & 1) == 0 )
  {
    sub_2213A60(&GrandQuestFolderBoardComponent_TypeInfo);
    byte_596B277 = 1;
  }
  GrandQuestFolderBoardComponent_TypeInfo->static_fields->NameLabelMaxWidth = 240;
}


void GrandQuestFolderBoardComponent___ctor(GrandQuestFolderBoardComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void GrandQuestFolderBoardComponent__CreateInfoTextList(
        GrandQuestFolderBoardComponent_o *this,
        int32_t warId,
        int64_t checkTime,
        const MethodInfo *method)
{
  BoardMessageEntity_array *Instance; // x0
  __int64 v7; // x1
  DataManager_o *v8; // x21
  Il2CppObject *MasterData_object; // x20
  il2cpp_array_size_t max_length; // x29
  BoardMessageEntity_array *v11; // x23
  __int64 i; // x22
  BoardMessageEntity_o *v13; // x24
  int referenceType; // w8
  int64_t v15; // x27
  System_String_o *message; // x27
  int64_t closedAt; // x28
  System_Collections_Generic_List_object__o *mInfoTextList; // x25
  GrandQuestFolderInformationText_o *v19; // x0
  const MethodInfo *v20; // x5
  Il2CppObject *v21; // x26
  BoardMessageEntity_o *v22; // x1
  System_String_o *v23; // x2
  int64_t v24; // x3
  System_String_o *v25; // x28
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0

  if ( (byte_596B273 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_BoardMessageMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_2213A60(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_2213A60(&GrandQuestFolderInformationText_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GrandQuestFolderInformationText__Add__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596B273 = 1;
  }
  GrandQuestFolderBoardComponent__ResetInfoTextList(this, *(const MethodInfo **)&warId);
  Instance = (BoardMessageEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v8 = (DataManager_o *)Instance,
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___),
        (Instance = (BoardMessageEntity_array *)DataManager__GetMasterData_object_(
                                                  v8,
                                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_BoardMessageMaster___)) == 0)
    || (Instance = BoardMessageMaster__GetDataCondCheck((BoardMessageMaster_o *)Instance, warId, checkTime, 0)) == 0 )
  {
LABEL_34:
    sub_2213CDC(Instance, v7);
  }
  max_length = Instance->max_length;
  v11 = Instance;
  if ( (int)max_length >= 1 )
  {
    for ( i = 0; (_DWORD)max_length != (_DWORD)i; ++i )
    {
      if ( (unsigned int)i >= LODWORD(v11->max_length) )
        sub_2213CE4(Instance);
      v13 = v11->m_Items[i];
      if ( !v13 )
        goto LABEL_34;
      referenceType = v13->fields.referenceType;
      if ( referenceType > 2 )
      {
        if ( referenceType == 3 )
        {
          Instance = (BoardMessageEntity_array *)DataManager__GetMasterData_object_(
                                                   v8,
                                                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !Instance )
            goto LABEL_34;
          Instance = (BoardMessageEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                                   v13->fields.referenceId,
                                                   (const MethodInfo_3F10B30 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !Instance )
            continue;
          v15 = SLODWORD(Instance->m_Items[16]);
        }
        else
        {
          if ( referenceType != 4 )
            continue;
          Instance = (BoardMessageEntity_array *)MasterData_object;
          if ( !MasterData_object )
            goto LABEL_34;
          Instance = (BoardMessageEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                   v13->fields.referenceId,
                                                   (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          if ( !Instance )
            continue;
          v15 = (int64_t)Instance->m_Items[8];
        }
      }
      else
      {
        if ( referenceType == 1 )
        {
          message = v13->fields.message;
          closedAt = v13->fields.closedAt;
          mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
          v19 = (GrandQuestFolderInformationText_o *)sub_2213CCC(GrandQuestFolderInformationText_TypeInfo);
          v21 = (Il2CppObject *)v19;
          v22 = v13;
          v23 = message;
          v24 = closedAt;
          goto LABEL_27;
        }
        if ( referenceType != 2 )
          continue;
        Instance = (BoardMessageEntity_array *)DataManager__GetMasterData_object_(
                                                 v8,
                                                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !Instance )
          goto LABEL_34;
        Instance = (BoardMessageEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                                 v13->fields.referenceId,
                                                 (const MethodInfo_3F10B30 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          continue;
        v15 = SHIDWORD(Instance->m_Items[15]);
      }
      if ( v15 - checkTime < 0 )
        continue;
      v25 = v13->fields.message;
      mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
      v19 = (GrandQuestFolderInformationText_o *)sub_2213CCC(GrandQuestFolderInformationText_TypeInfo);
      v21 = (Il2CppObject *)v19;
      v22 = v13;
      v23 = v25;
      v24 = v15;
LABEL_27:
      GrandQuestFolderInformationText___ctor(v19, v22, v23, v24, checkTime, v20);
      if ( !mInfoTextList )
        goto LABEL_34;
      items = mInfoTextList->fields._items;
      v33 = Method_System_Collections_Generic_List_GrandQuestFolderInformationText__Add__;
      ++mInfoTextList->fields._version;
      if ( !items )
        goto LABEL_34;
      size = mInfoTextList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          mInfoTextList,
          v21,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + size;
        mInfoTextList->fields._size = size + 1;
        v35[4] = (Il2CppClass *)v21;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v35 + 4), (int32_t)v21, v26, v27, v28, v29, v30, v31);
      }
    }
  }
}


bool GrandQuestFolderBoardComponent__ExistBoardImage(GrandQuestFolderBoardComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *boardSprite; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct UISprite_o *v9; // x8
  UnityEngine_Object_o *mAtlas; // x19

  if ( (byte_596B272 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B272 = 1;
  }
  boardSprite = (UnityEngine_Object_o *)this->fields.boardSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Equality(boardSprite, 0, 0);
  if ( v5 )
  {
    return 0;
  }
  else
  {
    v9 = this->fields.boardSprite;
    if ( !v9 )
      sub_2213CDC(v5, v6);
    mAtlas = (UnityEngine_Object_o *)v9->fields.mAtlas;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    return !UnityEngine_Object__op_Equality(mAtlas, 0, 0);
  }
}


int32_t GrandQuestFolderBoardComponent__GetMoveBannerIdx(
        GrandQuestFolderBoardComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.moveBoardIdx;
}


bool GrandQuestFolderBoardComponent__IsInfoTextListNullOrEmpty(
        GrandQuestFolderBoardComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_GrandQuestFolderInformationText__o *mInfoTextList; // x8

  if ( (byte_596B276 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GrandQuestFolderInformationText__get_Count__);
    byte_596B276 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  return !mInfoTextList || mInfoTextList->fields._size == 0;
}


void GrandQuestFolderBoardComponent__OnTouchBoard(GrandQuestFolderBoardComponent_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.onTouch, 0);
}


void GrandQuestFolderBoardComponent__ResetInfoTextList(
        GrandQuestFolderBoardComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_GrandQuestFolderInformationText__o *v3; // x8
  MissionNaviTransitionBoardItem_o *p_mInfoTextList; // x19
  struct System_Collections_Generic_List_GrandQuestFolderInformationText__o *mInfoTextList; // t1
  int32_t size; // w2
  int v7; // w9
  System_Collections_Generic_List_object__o *v8; // x20
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_596B274 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GrandQuestFolderInformationText__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_GrandQuestFolderInformationText___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GrandQuestFolderInformationText__TypeInfo);
    byte_596B274 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  p_mInfoTextList = (MissionNaviTransitionBoardItem_o *)&this->fields.mInfoTextList;
  v3 = mInfoTextList;
  if ( mInfoTextList )
  {
    size = v3->fields._size;
    v7 = v3->fields._version + 1;
    v3->fields._size = 0;
    v3->fields._version = v7;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v3->fields._items, 0, size, 0);
  }
  else
  {
    v8 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GrandQuestFolderInformationText__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GrandQuestFolderInformationText___ctor__);
    p_mInfoTextList->klass = (MissionNaviTransitionBoardItem_c *)v8;
    sub_2213A04(p_mInfoTextList, (int32_t)v8, v9, v10, v11, v12, v13, v14);
  }
}


void GrandQuestFolderBoardComponent__SetBlackMaskDisplay(
        GrandQuestFolderBoardComponent_o *this,
        bool isDisplay,
        const MethodInfo *method)
{
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.blackMask, isDisplay, 0);
}


void GrandQuestFolderBoardComponent__SetBoardInfo(
        GrandQuestFolderBoardComponent_o *this,
        GrandQuestFolderBoardItem_o *item,
        AtlasManagerUnit_o *atlasManagerUnit,
        System_Action_o *onTouchCallback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_List_object__o *mInfoTextList; // x0
  __int64 v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  int32_t index; // w8
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x3
  System_String_o *v29; // x0
  System_String_o *v30; // x0
  const MethodInfo *v31; // x3
  System_String_o *v32; // x0
  System_String_o *v33; // x0
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x3
  const MethodInfo *v37; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  System_Collections_Generic_List_object__o *v39; // x21
  UILabel_o *nameLabelUp; // x22
  struct GrandQuestFolderBoardComponent_LabelMaxWidth_o *maxLabelWidth; // x8
  UILabel_o *nameLabelBottom; // x22
  struct GrandQuestFolderBoardComponent_LabelMaxWidth_o *v43; // x8
  int32_t bottomLabelWidth; // w1
  struct GrandQuestFolderBoardComponent_LabelMaxWidth_o *v45; // x8
  __int64 v46; // x1
  __int64 v47; // x2
  UnityEngine_Object_o *closedMessageLabel; // x21
  int32_t IconId_k__BackingField; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_596B271 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_string___);
    sub_2213A60(&Method_System_Collections_Generic_List_GrandQuestFolderInformationText__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_GrandQuestFolderInformationText__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_87/*"\r\n"*/);
    sub_2213A60(&StringLiteral_21516/*"img_questboard_mask"*/);
    sub_2213A60(&StringLiteral_21518/*"img_questboard_selectflame"*/);
    sub_2213A60(&StringLiteral_21501/*"img_questboard_"*/);
    sub_2213A60(&StringLiteral_21700/*"img_txt_questboard_"*/);
    sub_2213A60(&StringLiteral_21503/*"img_questboard_80522"*/);
    byte_596B271 = 1;
  }
  IconId_k__BackingField = 0;
  this->fields.boardInfo = item;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.boardInfo,
    (int32_t)item,
    (System_String_o *)atlasManagerUnit,
    (System_String_o *)onTouchCallback,
    (int32_t)method,
    v5,
    v6,
    v7);
  this->fields.onTouch = onTouchCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onTouch,
    (int32_t)onTouchCallback,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( !item )
    goto LABEL_33;
  index = item->fields.index;
  this->fields.atlasManager = atlasManagerUnit;
  this->fields.moveBoardIdx = index;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.atlasManager,
    (int32_t)atlasManagerUnit,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  GrandQuestFolderBoardComponent__CreateInfoTextList(
    this,
    item->fields._WarId_k__BackingField,
    item->fields._ListCreatedTime_k__BackingField,
    v27);
  mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( !mInfoTextList )
    goto LABEL_33;
  if ( mInfoTextList->fields._size >= 1 )
  {
    mInfoTextList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                   mInfoTextList,
                                                                   0,
                                                                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GrandQuestFolderInformationText__get_Item__);
    if ( !mInfoTextList )
      goto LABEL_33;
    GrandQuestFolderInformationText__SetTime(
      (GrandQuestFolderInformationText_o *)mInfoTextList,
      &this->fields.mOptionInfoLb,
      &this->fields.mOptionInfoFrameSp,
      v28);
  }
  IconId_k__BackingField = item->fields._IconId_k__BackingField;
  v29 = System_Int32__ToString((int32_t)&IconId_k__BackingField, 0);
  v30 = System_String__Concat_75651716((System_String_o *)StringLiteral_21501/*"img_questboard_"*/, v29, 0);
  GrandQuestFolderBoardComponent__SetImage(this, this->fields.classIconSprite, v30, v31);
  IconId_k__BackingField = item->fields._IconId_k__BackingField;
  v32 = System_Int32__ToString((int32_t)&IconId_k__BackingField, 0);
  v33 = System_String__Concat_75651716((System_String_o *)StringLiteral_21700/*"img_txt_questboard_"*/, v32, 0);
  GrandQuestFolderBoardComponent__SetImage(this, this->fields.classNameSprite, v33, v34);
  GrandQuestFolderBoardComponent__SetImage(this, this->fields.boardSprite, (System_String_o *)StringLiteral_21503/*"img_questboard_80522"*/, v35);
  GrandQuestFolderBoardComponent__SetImage(this, this->fields.blackMask, (System_String_o *)StringLiteral_21516/*"img_questboard_mask"*/, v36);
  GrandQuestFolderBoardComponent__SetImage(
    this,
    this->fields.selectedFrame,
    (System_String_o *)StringLiteral_21518/*"img_questboard_selectflame"*/,
    v37);
  mInfoTextList = (System_Collections_Generic_List_object__o *)item->fields._Name_k__BackingField;
  if ( !mInfoTextList )
LABEL_33:
    sub_2213CDC(mInfoTextList, v19);
  if ( System_String__Contains((System_String_o *)mInfoTextList, (System_String_o *)StringLiteral_43/*"\n"*/, 0) )
  {
    mInfoTextList = (System_Collections_Generic_List_object__o *)item->fields._Name_k__BackingField;
    if ( !mInfoTextList )
      goto LABEL_33;
    mInfoTextList = (System_Collections_Generic_List_object__o *)System_String__Replace_75703400(
                                                                   (System_String_o *)mInfoTextList,
                                                                   (System_String_o *)StringLiteral_87/*"\r\n"*/,
                                                                   (System_String_o *)StringLiteral_43/*"\n"*/,
                                                                   0);
    if ( !mInfoTextList )
      goto LABEL_33;
    v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                 (System_String_o *)mInfoTextList,
                                                                 0xAu,
                                                                 0,
                                                                 0);
    mInfoTextList = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                                   v38,
                                                                   (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_string___);
    if ( !mInfoTextList )
      goto LABEL_33;
    v39 = mInfoTextList;
    nameLabelUp = this->fields.nameLabelUp;
    mInfoTextList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                   mInfoTextList,
                                                                   0,
                                                                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
    if ( !nameLabelUp )
      goto LABEL_33;
    UILabel__set_text(nameLabelUp, (System_String_o *)mInfoTextList, 0);
    mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.nameLabelUp;
    if ( !mInfoTextList )
      goto LABEL_33;
    mInfoTextList = (System_Collections_Generic_List_object__o *)((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *))mInfoTextList->klass->vtable._33_get_Item.methodPtr)(
                                                                   mInfoTextList,
                                                                   mInfoTextList->klass->vtable._33_get_Item.method);
    maxLabelWidth = this->fields.maxLabelWidth;
    if ( !maxLabelWidth )
      goto LABEL_33;
    mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.nameLabelUp;
    if ( !mInfoTextList )
      goto LABEL_33;
    UILabel__SetCondensedScale((UILabel_o *)mInfoTextList, maxLabelWidth->fields.upLabelWidth, 0, 0);
    nameLabelBottom = this->fields.nameLabelBottom;
    mInfoTextList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                   v39,
                                                                   1,
                                                                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
    if ( !nameLabelBottom )
      goto LABEL_33;
    UILabel__set_text(nameLabelBottom, (System_String_o *)mInfoTextList, 0);
    mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.nameLabelBottom;
    if ( !mInfoTextList )
      goto LABEL_33;
    mInfoTextList = (System_Collections_Generic_List_object__o *)((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *))mInfoTextList->klass->vtable._33_get_Item.methodPtr)(
                                                                   mInfoTextList,
                                                                   mInfoTextList->klass->vtable._33_get_Item.method);
    v43 = this->fields.maxLabelWidth;
    if ( !v43 )
      goto LABEL_33;
    mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.nameLabelBottom;
    if ( !mInfoTextList )
      goto LABEL_33;
    bottomLabelWidth = v43->fields.bottomLabelWidth;
  }
  else
  {
    mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.nameLabelMiddle;
    if ( !mInfoTextList )
      goto LABEL_33;
    UILabel__set_text((UILabel_o *)mInfoTextList, item->fields._Name_k__BackingField, 0);
    mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.nameLabelMiddle;
    if ( !mInfoTextList )
      goto LABEL_33;
    mInfoTextList = (System_Collections_Generic_List_object__o *)((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *))mInfoTextList->klass->vtable._33_get_Item.methodPtr)(
                                                                   mInfoTextList,
                                                                   mInfoTextList->klass->vtable._33_get_Item.method);
    v45 = this->fields.maxLabelWidth;
    if ( !v45 )
      goto LABEL_33;
    mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.nameLabelMiddle;
    if ( !mInfoTextList )
      goto LABEL_33;
    bottomLabelWidth = v45->fields.middleLabelWidth;
  }
  UILabel__SetCondensedScale((UILabel_o *)mInfoTextList, bottomLabelWidth, 0, 0);
  closedMessageLabel = (UnityEngine_Object_o *)this->fields.closedMessageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v46, v47);
  if ( UnityEngine_Object__op_Inequality(closedMessageLabel, 0, 0) )
  {
    mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.closedMessageLabel;
    if ( mInfoTextList )
    {
      UILabel__set_text((UILabel_o *)mInfoTextList, item->fields._ClosedMessage_k__BackingField, 0);
      return;
    }
    goto LABEL_33;
  }
}


void GrandQuestFolderBoardComponent__SetImage(
        GrandQuestFolderBoardComponent_o *this,
        UISprite_o *uiSprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *atlasManager; // x0

  atlasManager = this->fields.atlasManager;
  if ( !atlasManager
    || (atlasManager = (AtlasManagerUnit_o *)AtlasManagerUnit__SetUI(atlasManager, uiSprite, spriteName, 0), !uiSprite) )
  {
    sub_2213CDC(atlasManager, uiSprite);
  }
  ((void (__fastcall *)(UISprite_o *, const MethodInfo *))uiSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
    uiSprite,
    uiSprite->klass->vtable._33_MakePixelPerfect.method);
}


void GrandQuestFolderBoardComponent__SetSelectedFrameDisplay(
        GrandQuestFolderBoardComponent_o *this,
        bool isDisplay,
        const MethodInfo *method)
{
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.selectedFrame, isDisplay, 0);
}


void GrandQuestFolderBoardComponent__UpdateInfoText(GrandQuestFolderBoardComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *mInfoTextList; // x0
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *v9; // x20
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x3

  if ( (byte_596B275 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GrandQuestFolderInformationText__get_Item__);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596B275 = 1;
  }
  if ( (byte_596B276 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GrandQuestFolderInformationText__get_Count__);
    byte_596B276 = 1;
  }
  mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( mInfoTextList && mInfoTextList->fields._size )
  {
    Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                          mInfoTextList,
                                                          0,
                                                          (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GrandQuestFolderInformationText__get_Item__);
    if ( !Item )
      goto LABEL_15;
    if ( GrandQuestFolderInformationText__ChangeText(
           (GrandQuestFolderInformationText_o *)Item,
           &this->fields.mOptionInfoLb,
           v6) )
    {
      Item = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
      if ( Item )
      {
        v9 = System_Collections_Generic_List_object___get_Item(
               Item,
               0,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GrandQuestFolderInformationText__get_Item__);
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v8);
        Item = (System_Collections_Generic_List_object__o *)NetworkManager__getTime(0);
        if ( v9 )
        {
          GrandQuestFolderInformationText__SetParamFromScript(
            (GrandQuestFolderInformationText_o *)v9,
            (int64_t)Item,
            v10);
          GrandQuestFolderInformationText__SetTime(
            (GrandQuestFolderInformationText_o *)v9,
            &this->fields.mOptionInfoLb,
            &this->fields.mOptionInfoFrameSp,
            v11);
          return;
        }
      }
LABEL_15:
      sub_2213CDC(Item, v5);
    }
  }
}


GrandQuestFolderBoardItem_o *GrandQuestFolderBoardComponent__get_BoardInfo(
        GrandQuestFolderBoardComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.boardInfo;
}


System_Collections_Generic_List_GrandQuestFolderInformationText__o *GrandQuestFolderBoardComponent__get_InfoTextList(
        GrandQuestFolderBoardComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.mInfoTextList;
}


void GrandQuestFolderBoardComponent_LabelMaxWidth___ctor(
        GrandQuestFolderBoardComponent_LabelMaxWidth_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  GrandQuestFolderBoardComponent_c *v4; // x0
  int32_t NameLabelMaxWidth; // w8

  if ( (byte_596B278 & 1) == 0 )
  {
    sub_2213A60(&GrandQuestFolderBoardComponent_TypeInfo);
    byte_596B278 = 1;
  }
  v4 = GrandQuestFolderBoardComponent_TypeInfo;
  if ( !*(&GrandQuestFolderBoardComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(GrandQuestFolderBoardComponent_TypeInfo, method, v2);
    v4 = GrandQuestFolderBoardComponent_TypeInfo;
  }
  NameLabelMaxWidth = v4->static_fields->NameLabelMaxWidth;
  this->fields.upLabelWidth = NameLabelMaxWidth;
  this->fields.middleLabelWidth = NameLabelMaxWidth;
  this->fields.bottomLabelWidth = NameLabelMaxWidth;
  System_Object___ctor((Il2CppObject *)this, 0);
}