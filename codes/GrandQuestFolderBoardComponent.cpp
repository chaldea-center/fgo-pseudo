void GrandQuestFolderBoardComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4C3DCE1 & 1) == 0 )
  {
    sub_1C37058(&GrandQuestFolderBoardComponent_TypeInfo);
    byte_4C3DCE1 = 1;
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
  DataManager_o *v8; // x21
  Il2CppObject *MasterData_object; // x22
  il2cpp_array_size_t max_length; // x8
  BoardMessageEntity_array *v11; // x23
  int v12; // w29
  int v13; // w22
  BoardMessageEntity_o *v14; // x24
  System_Collections_Generic_List_object__o *mInfoTextList; // x25
  System_String_o *message; // x27
  int64_t closedAt; // x28
  GrandQuestFolderInformationText_o *v18; // x0
  const MethodInfo *v19; // x5
  Il2CppObject *v20; // x26
  BoardMessageEntity_o *v21; // x1
  System_String_o *v22; // x2
  int64_t v23; // x3
  int64_t v24; // x27
  System_String_o *v25; // x28
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v30; // [xsp+8h] [xbp-68h]

  if ( (byte_4C3DCDD & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_BoardMessageMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C37058(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C37058(&GrandQuestFolderInformationText_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_GrandQuestFolderInformationText__Add__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3DCDD = 1;
  }
  GrandQuestFolderBoardComponent__ResetInfoTextList(this, *(const MethodInfo **)&warId);
  Instance = (BoardMessageEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  v8 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventMaster___);
  Instance = (BoardMessageEntity_array *)DataManager__GetMasterData_object_(
                                           v8,
                                           (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_BoardMessageMaster___);
  if ( !Instance )
    goto LABEL_31;
  v30 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  Instance = BoardMessageMaster__GetDataCondCheck((BoardMessageMaster_o *)Instance, warId, checkTime, 0);
  if ( !Instance )
    goto LABEL_31;
  max_length = Instance->max_length;
  v11 = Instance;
  v12 = max_length - 1;
  if ( (int)max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      v14 = v11->m_Items[v13];
      if ( !v14 )
        break;
      switch ( v14->fields.referenceType )
      {
        case 1:
          mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
          message = v14->fields.message;
          closedAt = v14->fields.closedAt;
          v18 = (GrandQuestFolderInformationText_o *)sub_1C372A4(GrandQuestFolderInformationText_TypeInfo);
          v20 = (Il2CppObject *)v18;
          v21 = v14;
          v22 = message;
          v23 = closedAt;
          goto LABEL_22;
        case 2:
          Instance = (BoardMessageEntity_array *)DataManager__GetMasterData_object_(
                                                   v8,
                                                   (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !Instance )
            goto LABEL_31;
          Instance = (BoardMessageEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                                   v14->fields.referenceId,
                                                   (const MethodInfo_33A10A0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_27;
          v24 = SHIDWORD(Instance->m_Items[15]);
          break;
        case 3:
          Instance = (BoardMessageEntity_array *)DataManager__GetMasterData_object_(
                                                   v8,
                                                   (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !Instance )
            goto LABEL_31;
          Instance = (BoardMessageEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                                   v14->fields.referenceId,
                                                   (const MethodInfo_33A10A0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_27;
          v24 = SLODWORD(Instance->m_Items[16]);
          break;
        case 4:
          Instance = (BoardMessageEntity_array *)v30;
          if ( !v30 )
            goto LABEL_31;
          Instance = (BoardMessageEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                   v30,
                                                   v14->fields.referenceId,
                                                   (const MethodInfo_33A10A0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_27;
          v24 = (int64_t)Instance->m_Items[8];
          break;
        default:
          goto LABEL_27;
      }
      if ( v24 - checkTime >= 0 )
      {
        mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
        v25 = v14->fields.message;
        v18 = (GrandQuestFolderInformationText_o *)sub_1C372A4(GrandQuestFolderInformationText_TypeInfo);
        v20 = (Il2CppObject *)v18;
        v21 = v14;
        v22 = v25;
        v23 = v24;
LABEL_22:
        GrandQuestFolderInformationText___ctor(v18, v21, v22, v23, checkTime, v19);
        if ( !mInfoTextList )
          break;
        items = mInfoTextList->fields._items;
        v27 = Method_System_Collections_Generic_List_GrandQuestFolderInformationText__Add__;
        ++mInfoTextList->fields._version;
        if ( !items )
          break;
        size = mInfoTextList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            mInfoTextList,
            v20,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = &items->obj.klass + size;
          mInfoTextList->fields._size = size + 1;
          v29[4] = (Il2CppClass *)v20;
          Instance = (BoardMessageEntity_array *)sub_1C36FFC(v29 + 4, v20);
        }
      }
LABEL_27:
      if ( v12 == v13 )
        return;
      if ( (unsigned int)++v13 >= LODWORD(v11->max_length) )
        sub_1C372BC(Instance);
    }
LABEL_31:
    sub_1C372B4(Instance);
  }
}


bool GrandQuestFolderBoardComponent__ExistBoardImage(GrandQuestFolderBoardComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *boardSprite; // x20
  _BOOL8 v4; // x0
  struct UISprite_o *v6; // x8
  UnityEngine_Object_o *mAtlas; // x19

  if ( (byte_4C3DCDC & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3DCDC = 1;
  }
  boardSprite = (UnityEngine_Object_o *)this->fields.boardSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(boardSprite, 0, 0);
  if ( v4 )
    return 0;
  v6 = this->fields.boardSprite;
  if ( !v6 )
    sub_1C372B4(v4);
  mAtlas = (UnityEngine_Object_o *)v6->fields.mAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return !UnityEngine_Object__op_Equality(mAtlas, 0, 0);
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

  if ( (byte_4C3DCE0 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_GrandQuestFolderInformationText__get_Count__);
    byte_4C3DCE0 = 1;
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
  struct System_Collections_Generic_List_GrandQuestFolderInformationText__o **p_mInfoTextList; // x19
  struct System_Collections_Generic_List_GrandQuestFolderInformationText__o *mInfoTextList; // t1
  int32_t size; // w2
  int v7; // w9
  System_Collections_Generic_List_object__o *v8; // x20

  if ( (byte_4C3DCDE & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_GrandQuestFolderInformationText__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_GrandQuestFolderInformationText___ctor__);
    sub_1C37058(&System_Collections_Generic_List_GrandQuestFolderInformationText__TypeInfo);
    byte_4C3DCDE = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  p_mInfoTextList = &this->fields.mInfoTextList;
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
    v8 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GrandQuestFolderInformationText__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GrandQuestFolderInformationText___ctor__);
    *p_mInfoTextList = (struct System_Collections_Generic_List_GrandQuestFolderInformationText__o *)v8;
    sub_1C36FFC(p_mInfoTextList, v8);
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
  System_Collections_Generic_List_object__o *mInfoTextList; // x0
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x3
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  const MethodInfo *v14; // x3
  System_String_o *v15; // x0
  System_String_o *v16; // x0
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  UILabel_o *nameLabelUp; // x21
  System_Collections_Generic_List_object__o *v23; // x20
  struct GrandQuestFolderBoardComponent_LabelMaxWidth_o *v24; // x8
  UILabel_o *nameLabelBottom; // x21
  struct GrandQuestFolderBoardComponent_LabelMaxWidth_o *v26; // x8
  int32_t middleLabelWidth; // w1
  struct GrandQuestFolderBoardComponent_LabelMaxWidth_o *maxLabelWidth; // x8
  int32_t IconId_k__BackingField; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C3DCDB & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1C37058(&Method_System_Collections_Generic_List_GrandQuestFolderInformationText__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_GrandQuestFolderInformationText__get_Item__);
    sub_1C37058(&StringLiteral_43/*"\n"*/);
    sub_1C37058(&StringLiteral_87/*"\r\n"*/);
    sub_1C37058(&StringLiteral_20522/*"img_questboard_mask"*/);
    sub_1C37058(&StringLiteral_20524/*"img_questboard_selectflame"*/);
    sub_1C37058(&StringLiteral_20511/*"img_questboard_"*/);
    sub_1C37058(&StringLiteral_20702/*"img_txt_questboard_"*/);
    sub_1C37058(&StringLiteral_20513/*"img_questboard_80522"*/);
    byte_4C3DCDB = 1;
  }
  this->fields.boardInfo = item;
  sub_1C36FFC(&this->fields.boardInfo, item);
  this->fields.onTouch = onTouchCallback;
  mInfoTextList = (System_Collections_Generic_List_object__o *)sub_1C36FFC(&this->fields.onTouch, onTouchCallback);
  if ( !item )
    goto LABEL_28;
  this->fields.moveBoardIdx = item->fields.index;
  this->fields.atlasManager = atlasManagerUnit;
  sub_1C36FFC(&this->fields.atlasManager, atlasManagerUnit);
  GrandQuestFolderBoardComponent__CreateInfoTextList(
    this,
    item->fields._WarId_k__BackingField,
    item->fields._ListCreatedTime_k__BackingField,
    v10);
  mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( !mInfoTextList )
    goto LABEL_28;
  if ( mInfoTextList->fields._size >= 1 )
  {
    mInfoTextList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                   mInfoTextList,
                                                                   0,
                                                                   (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_GrandQuestFolderInformationText__get_Item__);
    if ( !mInfoTextList )
      goto LABEL_28;
    GrandQuestFolderInformationText__SetTime(
      (GrandQuestFolderInformationText_o *)mInfoTextList,
      &this->fields.mOptionInfoLb,
      &this->fields.mOptionInfoFrameSp,
      v11);
  }
  IconId_k__BackingField = item->fields._IconId_k__BackingField;
  v12 = System_Int32__ToString((int32_t)&IconId_k__BackingField, 0);
  v13 = System_String__Concat_63561656((System_String_o *)StringLiteral_20511/*"img_questboard_"*/, v12, 0);
  GrandQuestFolderBoardComponent__SetImage(this, this->fields.classIconSprite, v13, v14);
  IconId_k__BackingField = item->fields._IconId_k__BackingField;
  v15 = System_Int32__ToString((int32_t)&IconId_k__BackingField, 0);
  v16 = System_String__Concat_63561656((System_String_o *)StringLiteral_20702/*"img_txt_questboard_"*/, v15, 0);
  GrandQuestFolderBoardComponent__SetImage(this, this->fields.classNameSprite, v16, v17);
  GrandQuestFolderBoardComponent__SetImage(this, this->fields.boardSprite, (System_String_o *)StringLiteral_20513/*"img_questboard_80522"*/, v18);
  GrandQuestFolderBoardComponent__SetImage(this, this->fields.blackMask, (System_String_o *)StringLiteral_20522/*"img_questboard_mask"*/, v19);
  GrandQuestFolderBoardComponent__SetImage(
    this,
    this->fields.selectedFrame,
    (System_String_o *)StringLiteral_20524/*"img_questboard_selectflame"*/,
    v20);
  mInfoTextList = (System_Collections_Generic_List_object__o *)item->fields._Name_k__BackingField;
  if ( !mInfoTextList )
LABEL_28:
    sub_1C372B4(mInfoTextList);
  if ( !System_String__Contains((System_String_o *)mInfoTextList, (System_String_o *)StringLiteral_43/*"\n"*/, 0) )
  {
    mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.nameLabelMiddle;
    if ( mInfoTextList )
    {
      UILabel__set_text((UILabel_o *)mInfoTextList, item->fields._Name_k__BackingField, 0);
      mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.nameLabelMiddle;
      if ( mInfoTextList )
      {
        mInfoTextList = (System_Collections_Generic_List_object__o *)((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *))mInfoTextList->klass->vtable._33_get_Item.methodPtr)(
                                                                       mInfoTextList,
                                                                       mInfoTextList->klass->vtable._33_get_Item.method);
        maxLabelWidth = this->fields.maxLabelWidth;
        if ( maxLabelWidth )
        {
          mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.nameLabelMiddle;
          if ( mInfoTextList )
          {
            middleLabelWidth = maxLabelWidth->fields.middleLabelWidth;
            goto LABEL_27;
          }
        }
      }
    }
    goto LABEL_28;
  }
  mInfoTextList = (System_Collections_Generic_List_object__o *)item->fields._Name_k__BackingField;
  if ( !mInfoTextList )
    goto LABEL_28;
  mInfoTextList = (System_Collections_Generic_List_object__o *)System_String__Replace_63608204(
                                                                 (System_String_o *)mInfoTextList,
                                                                 (System_String_o *)StringLiteral_87/*"\r\n"*/,
                                                                 (System_String_o *)StringLiteral_43/*"\n"*/,
                                                                 0);
  if ( !mInfoTextList )
    goto LABEL_28;
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                               (System_String_o *)mInfoTextList,
                                                               0xAu,
                                                               0,
                                                               0);
  mInfoTextList = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                                 v21,
                                                                 (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_string___);
  if ( !mInfoTextList )
    goto LABEL_28;
  nameLabelUp = this->fields.nameLabelUp;
  v23 = mInfoTextList;
  mInfoTextList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                 mInfoTextList,
                                                                 0,
                                                                 (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_string__get_Item__);
  if ( !nameLabelUp )
    goto LABEL_28;
  UILabel__set_text(nameLabelUp, (System_String_o *)mInfoTextList, 0);
  mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.nameLabelUp;
  if ( !mInfoTextList )
    goto LABEL_28;
  mInfoTextList = (System_Collections_Generic_List_object__o *)((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *))mInfoTextList->klass->vtable._33_get_Item.methodPtr)(
                                                                 mInfoTextList,
                                                                 mInfoTextList->klass->vtable._33_get_Item.method);
  v24 = this->fields.maxLabelWidth;
  if ( !v24 )
    goto LABEL_28;
  mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.nameLabelUp;
  if ( !mInfoTextList )
    goto LABEL_28;
  UILabel__SetCondensedScale((UILabel_o *)mInfoTextList, v24->fields.upLabelWidth, 0, 0);
  nameLabelBottom = this->fields.nameLabelBottom;
  mInfoTextList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                 v23,
                                                                 1,
                                                                 (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_string__get_Item__);
  if ( !nameLabelBottom )
    goto LABEL_28;
  UILabel__set_text(nameLabelBottom, (System_String_o *)mInfoTextList, 0);
  mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.nameLabelBottom;
  if ( !mInfoTextList )
    goto LABEL_28;
  mInfoTextList = (System_Collections_Generic_List_object__o *)((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *))mInfoTextList->klass->vtable._33_get_Item.methodPtr)(
                                                                 mInfoTextList,
                                                                 mInfoTextList->klass->vtable._33_get_Item.method);
  v26 = this->fields.maxLabelWidth;
  if ( !v26 )
    goto LABEL_28;
  mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.nameLabelBottom;
  if ( !mInfoTextList )
    goto LABEL_28;
  middleLabelWidth = v26->fields.bottomLabelWidth;
LABEL_27:
  UILabel__SetCondensedScale((UILabel_o *)mInfoTextList, middleLabelWidth, 0, 0);
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
    sub_1C372B4(atlasManager);
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
  const MethodInfo *v5; // x2
  Il2CppObject *v6; // x21
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x3

  if ( (byte_4C3DCDF & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_GrandQuestFolderInformationText__get_Item__);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3DCDF = 1;
  }
  if ( (byte_4C3DCE0 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_GrandQuestFolderInformationText__get_Count__);
    byte_4C3DCE0 = 1;
  }
  mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( mInfoTextList && mInfoTextList->fields._size )
  {
    Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                          mInfoTextList,
                                                          0,
                                                          (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_GrandQuestFolderInformationText__get_Item__);
    if ( !Item )
      goto LABEL_15;
    if ( GrandQuestFolderInformationText__ChangeText(
           (GrandQuestFolderInformationText_o *)Item,
           &this->fields.mOptionInfoLb,
           v5) )
    {
      Item = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
      if ( Item )
      {
        v6 = System_Collections_Generic_List_object___get_Item(
               Item,
               0,
               (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_GrandQuestFolderInformationText__get_Item__);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Item = (System_Collections_Generic_List_object__o *)NetworkManager__getTime(0);
        if ( v6 )
        {
          GrandQuestFolderInformationText__SetParamFromScript(
            (GrandQuestFolderInformationText_o *)v6,
            (int64_t)Item,
            v7);
          GrandQuestFolderInformationText__SetTime(
            (GrandQuestFolderInformationText_o *)v6,
            &this->fields.mOptionInfoLb,
            &this->fields.mOptionInfoFrameSp,
            v8);
          return;
        }
      }
LABEL_15:
      sub_1C372B4(Item);
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
  GrandQuestFolderBoardComponent_c *v3; // x0
  int32_t NameLabelMaxWidth; // w8

  if ( (byte_4C3DCE2 & 1) == 0 )
  {
    sub_1C37058(&GrandQuestFolderBoardComponent_TypeInfo);
    byte_4C3DCE2 = 1;
  }
  v3 = GrandQuestFolderBoardComponent_TypeInfo;
  if ( !GrandQuestFolderBoardComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandQuestFolderBoardComponent_TypeInfo);
    v3 = GrandQuestFolderBoardComponent_TypeInfo;
  }
  NameLabelMaxWidth = v3->static_fields->NameLabelMaxWidth;
  this->fields.upLabelWidth = NameLabelMaxWidth;
  this->fields.middleLabelWidth = NameLabelMaxWidth;
  this->fields.bottomLabelWidth = NameLabelMaxWidth;
  System_Object___ctor((Il2CppObject *)this, 0);
}