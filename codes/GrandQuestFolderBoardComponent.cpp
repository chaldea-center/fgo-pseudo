void __fastcall GrandQuestFolderBoardComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B17323 & 1) == 0 )
  {
    sub_1BCAFF8(&GrandQuestFolderBoardComponent_TypeInfo, v1);
    byte_4B17323 = 1;
  }
  GrandQuestFolderBoardComponent_TypeInfo->static_fields->NameLabelMaxWidth = 240;
}


void __fastcall GrandQuestFolderBoardComponent___ctor(GrandQuestFolderBoardComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandQuestFolderBoardComponent__CreateInfoTextList(
        GrandQuestFolderBoardComponent_o *this,
        int32_t warId,
        int64_t checkTime,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  BoardMessageEntity_array *Instance; // x0
  __int64 v15; // x1
  DataManager_o *v16; // x21
  Il2CppObject *MasterData_object; // x22
  __int64 v18; // x2
  __int64 v19; // x8
  BoardMessageEntity_array *v20; // x23
  int v21; // w29
  int v22; // w22
  BoardMessageEntity_o *v23; // x24
  System_Collections_Generic_List_object__o *mInfoTextList; // x25
  System_String_o *message; // x27
  int64_t closedAt; // x28
  GrandQuestFolderInformationText_o *v27; // x0
  const MethodInfo *v28; // x5
  Il2CppObject *v29; // x26
  BoardMessageEntity_o *v30; // x1
  System_String_o *v31; // x2
  int64_t v32; // x3
  int64_t v33; // x27
  System_String_o *v34; // x28
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v39; // [xsp+8h] [xbp-68h]

  if ( (byte_4B1731F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_BoardMessageMaster___, *(_QWORD *)&warId);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventMaster___, v7);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestMaster___, v8);
    sub_1BCAFF8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v9);
    sub_1BCAFF8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v10);
    sub_1BCAFF8(&GrandQuestFolderInformationText_TypeInfo, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GrandQuestFolderInformationText__Add__, v12);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4B1731F = 1;
  }
  GrandQuestFolderBoardComponent__ResetInfoTextList(this, *(const MethodInfo **)&warId);
  Instance = (BoardMessageEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  v16 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventMaster___);
  Instance = (BoardMessageEntity_array *)DataManager__GetMasterData_object_(
                                           v16,
                                           (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_BoardMessageMaster___);
  if ( !Instance )
    goto LABEL_31;
  v39 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  Instance = BoardMessageMaster__GetDataCondCheck((BoardMessageMaster_o *)Instance, warId, checkTime, 0LL);
  if ( !Instance )
    goto LABEL_31;
  v19 = *(_QWORD *)&Instance->max_length;
  v20 = Instance;
  v21 = v19 - 1;
  if ( (int)v19 >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      v23 = v20->m_Items[v22];
      if ( !v23 )
        break;
      switch ( v23->fields.referenceType )
      {
        case 1:
          mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
          message = v23->fields.message;
          closedAt = v23->fields.closedAt;
          v27 = (GrandQuestFolderInformationText_o *)sub_1BCB244(GrandQuestFolderInformationText_TypeInfo);
          v29 = (Il2CppObject *)v27;
          v30 = v23;
          v31 = message;
          v32 = closedAt;
          goto LABEL_22;
        case 2:
          Instance = (BoardMessageEntity_array *)DataManager__GetMasterData_object_(
                                                   v16,
                                                   (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !Instance )
            goto LABEL_31;
          Instance = (BoardMessageEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                                   v23->fields.referenceId,
                                                   (const MethodInfo_32C7E00 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_27;
          v33 = SHIDWORD(Instance->m_Items[15]);
          break;
        case 3:
          Instance = (BoardMessageEntity_array *)DataManager__GetMasterData_object_(
                                                   v16,
                                                   (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !Instance )
            goto LABEL_31;
          Instance = (BoardMessageEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                                   v23->fields.referenceId,
                                                   (const MethodInfo_32C7E00 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_27;
          v33 = SLODWORD(Instance->m_Items[16]);
          break;
        case 4:
          Instance = (BoardMessageEntity_array *)v39;
          if ( !v39 )
            goto LABEL_31;
          Instance = (BoardMessageEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                   v39,
                                                   v23->fields.referenceId,
                                                   (const MethodInfo_32C7E00 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_27;
          v33 = (int64_t)Instance->m_Items[8];
          break;
        default:
          goto LABEL_27;
      }
      if ( v33 - checkTime >= 0 )
      {
        mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
        v34 = v23->fields.message;
        v27 = (GrandQuestFolderInformationText_o *)sub_1BCB244(GrandQuestFolderInformationText_TypeInfo);
        v29 = (Il2CppObject *)v27;
        v30 = v23;
        v31 = v34;
        v32 = v33;
LABEL_22:
        GrandQuestFolderInformationText___ctor(v27, v30, v31, v32, checkTime, v28);
        if ( !mInfoTextList )
          break;
        items = mInfoTextList->fields._items;
        v36 = Method_System_Collections_Generic_List_GrandQuestFolderInformationText__Add__;
        ++mInfoTextList->fields._version;
        if ( !items )
          break;
        size = mInfoTextList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            mInfoTextList,
            v29,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v38 = &items->obj.klass + size;
          mInfoTextList->fields._size = size + 1;
          v38[4] = (Il2CppClass *)v29;
          Instance = (BoardMessageEntity_array *)sub_1BCAF9C(v38 + 4);
        }
      }
LABEL_27:
      if ( v21 == v22 )
        return;
      if ( ++v22 >= v20->max_length )
        sub_1BCB25C(Instance, v15, v18);
    }
LABEL_31:
    sub_1BCB254(Instance, v15);
  }
}


bool __fastcall GrandQuestFolderBoardComponent__ExistBoardImage(
        GrandQuestFolderBoardComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *boardSprite; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct UISprite_o *v7; // x8
  UnityEngine_Object_o *mAtlas; // x19

  if ( (byte_4B1731E & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B1731E = 1;
  }
  boardSprite = (UnityEngine_Object_o *)this->fields.boardSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(boardSprite, 0LL, 0LL);
  if ( v4 )
    return 0;
  v7 = this->fields.boardSprite;
  if ( !v7 )
    sub_1BCB254(v4, v5);
  mAtlas = (UnityEngine_Object_o *)v7->fields.mAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return !UnityEngine_Object__op_Equality(mAtlas, 0LL, 0LL);
}


int32_t __fastcall GrandQuestFolderBoardComponent__GetMoveBannerIdx(
        GrandQuestFolderBoardComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.moveBoardIdx;
}


bool __fastcall GrandQuestFolderBoardComponent__IsInfoTextListNullOrEmpty(
        GrandQuestFolderBoardComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_GrandQuestFolderInformationText__o *mInfoTextList; // x8

  if ( (byte_4B17322 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GrandQuestFolderInformationText__get_Count__, method);
    byte_4B17322 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  return !mInfoTextList || mInfoTextList->fields._size == 0;
}


void __fastcall GrandQuestFolderBoardComponent__OnTouchBoard(
        GrandQuestFolderBoardComponent_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.onTouch, 0LL);
}


void __fastcall GrandQuestFolderBoardComponent__ResetInfoTextList(
        GrandQuestFolderBoardComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_GrandQuestFolderInformationText__o *v5; // x8
  struct System_Collections_Generic_List_GrandQuestFolderInformationText__o **p_mInfoTextList; // x19
  struct System_Collections_Generic_List_GrandQuestFolderInformationText__o *mInfoTextList; // t1
  int32_t size; // w2
  int v9; // w9
  System_Collections_Generic_List_object__o *v10; // x20

  if ( (byte_4B17320 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GrandQuestFolderInformationText__Clear__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GrandQuestFolderInformationText___ctor__, v3);
    sub_1BCAFF8(&System_Collections_Generic_List_GrandQuestFolderInformationText__TypeInfo, v4);
    byte_4B17320 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  p_mInfoTextList = &this->fields.mInfoTextList;
  v5 = mInfoTextList;
  if ( mInfoTextList )
  {
    size = v5->fields._size;
    v9 = v5->fields._version + 1;
    v5->fields._size = 0;
    v5->fields._version = v9;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v5->fields._items, 0, size, 0LL);
  }
  else
  {
    v10 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_GrandQuestFolderInformationText__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_GrandQuestFolderInformationText___ctor__);
    *p_mInfoTextList = (struct System_Collections_Generic_List_GrandQuestFolderInformationText__o *)v10;
    sub_1BCAF9C(p_mInfoTextList);
  }
}


void __fastcall GrandQuestFolderBoardComponent__SetBlackMaskDisplay(
        GrandQuestFolderBoardComponent_o *this,
        bool isDisplay,
        const MethodInfo *method)
{
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.blackMask, isDisplay, 0LL);
}


void __fastcall GrandQuestFolderBoardComponent__SetBoardInfo(
        GrandQuestFolderBoardComponent_o *this,
        GrandQuestFolderBoardItem_o *item,
        AtlasManagerUnit_o *atlasManagerUnit,
        System_Action_o *onTouchCallback,
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
  System_Collections_Generic_List_object__o *mInfoTextList; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x3
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  const MethodInfo *v25; // x3
  System_String_o *v26; // x0
  System_String_o *v27; // x0
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  UILabel_o *nameLabelUp; // x21
  System_Collections_Generic_List_object__o *v34; // x20
  struct GrandQuestFolderBoardComponent_LabelMaxWidth_o *v35; // x8
  UILabel_o *nameLabelBottom; // x21
  struct GrandQuestFolderBoardComponent_LabelMaxWidth_o *v37; // x8
  int32_t middleLabelWidth; // w1
  struct GrandQuestFolderBoardComponent_LabelMaxWidth_o *maxLabelWidth; // x8
  int32_t IconId_k__BackingField; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B1731D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToList_string___, item);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GrandQuestFolderInformationText__get_Count__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__get_Item__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GrandQuestFolderInformationText__get_Item__, v11);
    sub_1BCAFF8(&StringLiteral_43/*"\n"*/, v12);
    sub_1BCAFF8(&StringLiteral_87/*"\r\n"*/, v13);
    sub_1BCAFF8(&StringLiteral_20336/*"img_questboard_mask"*/, v14);
    sub_1BCAFF8(&StringLiteral_20338/*"img_questboard_selectflame"*/, v15);
    sub_1BCAFF8(&StringLiteral_20325/*"img_questboard_"*/, v16);
    sub_1BCAFF8(&StringLiteral_20515/*"img_txt_questboard_"*/, v17);
    sub_1BCAFF8(&StringLiteral_20327/*"img_questboard_80522"*/, v18);
    byte_4B1731D = 1;
  }
  this->fields.boardInfo = item;
  sub_1BCAF9C(&this->fields.boardInfo);
  this->fields.onTouch = onTouchCallback;
  mInfoTextList = (System_Collections_Generic_List_object__o *)sub_1BCAF9C(&this->fields.onTouch);
  if ( !item )
    goto LABEL_28;
  this->fields.moveBoardIdx = item->fields.index;
  this->fields.atlasManager = atlasManagerUnit;
  sub_1BCAF9C(&this->fields.atlasManager);
  GrandQuestFolderBoardComponent__CreateInfoTextList(
    this,
    item->fields._WarId_k__BackingField,
    item->fields._ListCreatedTime_k__BackingField,
    v21);
  mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( !mInfoTextList )
    goto LABEL_28;
  if ( mInfoTextList->fields._size >= 1 )
  {
    mInfoTextList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                   mInfoTextList,
                                                                   0,
                                                                   (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_GrandQuestFolderInformationText__get_Item__);
    if ( !mInfoTextList )
      goto LABEL_28;
    GrandQuestFolderInformationText__SetTime(
      (GrandQuestFolderInformationText_o *)mInfoTextList,
      &this->fields.mOptionInfoLb,
      &this->fields.mOptionInfoFrameSp,
      v22);
  }
  IconId_k__BackingField = item->fields._IconId_k__BackingField;
  v23 = System_Int32__ToString((int32_t)&IconId_k__BackingField, 0LL);
  v24 = System_String__Concat_62450424((System_String_o *)StringLiteral_20325/*"img_questboard_"*/, v23, 0LL);
  GrandQuestFolderBoardComponent__SetImage(this, this->fields.classIconSprite, v24, v25);
  IconId_k__BackingField = item->fields._IconId_k__BackingField;
  v26 = System_Int32__ToString((int32_t)&IconId_k__BackingField, 0LL);
  v27 = System_String__Concat_62450424((System_String_o *)StringLiteral_20515/*"img_txt_questboard_"*/, v26, 0LL);
  GrandQuestFolderBoardComponent__SetImage(this, this->fields.classNameSprite, v27, v28);
  GrandQuestFolderBoardComponent__SetImage(this, this->fields.boardSprite, (System_String_o *)StringLiteral_20327/*"img_questboard_80522"*/, v29);
  GrandQuestFolderBoardComponent__SetImage(this, this->fields.blackMask, (System_String_o *)StringLiteral_20336/*"img_questboard_mask"*/, v30);
  GrandQuestFolderBoardComponent__SetImage(
    this,
    this->fields.selectedFrame,
    (System_String_o *)StringLiteral_20338/*"img_questboard_selectflame"*/,
    v31);
  mInfoTextList = (System_Collections_Generic_List_object__o *)item->fields._Name_k__BackingField;
  if ( !mInfoTextList )
LABEL_28:
    sub_1BCB254(mInfoTextList, v20);
  if ( !System_String__Contains((System_String_o *)mInfoTextList, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL) )
  {
    mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.nameLabelMiddle;
    if ( mInfoTextList )
    {
      UILabel__set_text((UILabel_o *)mInfoTextList, item->fields._Name_k__BackingField, 0LL);
      mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.nameLabelMiddle;
      if ( mInfoTextList )
      {
        mInfoTextList = (System_Collections_Generic_List_object__o *)((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppMethodPointer))mInfoTextList->klass->vtable._33_get_Item.method)(
                                                                       mInfoTextList,
                                                                       mInfoTextList->klass->vtable._34_get_Count.methodPtr);
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
  mInfoTextList = (System_Collections_Generic_List_object__o *)System_String__Replace_62496972(
                                                                 (System_String_o *)mInfoTextList,
                                                                 (System_String_o *)StringLiteral_87/*"\r\n"*/,
                                                                 (System_String_o *)StringLiteral_43/*"\n"*/,
                                                                 0LL);
  if ( !mInfoTextList )
    goto LABEL_28;
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                               (System_String_o *)mInfoTextList,
                                                               0xAu,
                                                               0,
                                                               0LL);
  mInfoTextList = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                                 v32,
                                                                 (const MethodInfo_305BB58 *)Method_System_Linq_Enumerable_ToList_string___);
  if ( !mInfoTextList )
    goto LABEL_28;
  nameLabelUp = this->fields.nameLabelUp;
  v34 = mInfoTextList;
  mInfoTextList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                 mInfoTextList,
                                                                 0,
                                                                 (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_string__get_Item__);
  if ( !nameLabelUp )
    goto LABEL_28;
  UILabel__set_text(nameLabelUp, (System_String_o *)mInfoTextList, 0LL);
  mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.nameLabelUp;
  if ( !mInfoTextList )
    goto LABEL_28;
  mInfoTextList = (System_Collections_Generic_List_object__o *)((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppMethodPointer))mInfoTextList->klass->vtable._33_get_Item.method)(
                                                                 mInfoTextList,
                                                                 mInfoTextList->klass->vtable._34_get_Count.methodPtr);
  v35 = this->fields.maxLabelWidth;
  if ( !v35 )
    goto LABEL_28;
  mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.nameLabelUp;
  if ( !mInfoTextList )
    goto LABEL_28;
  UILabel__SetCondensedScale((UILabel_o *)mInfoTextList, v35->fields.upLabelWidth, 0, 0LL);
  nameLabelBottom = this->fields.nameLabelBottom;
  mInfoTextList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                 v34,
                                                                 1,
                                                                 (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_string__get_Item__);
  if ( !nameLabelBottom )
    goto LABEL_28;
  UILabel__set_text(nameLabelBottom, (System_String_o *)mInfoTextList, 0LL);
  mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.nameLabelBottom;
  if ( !mInfoTextList )
    goto LABEL_28;
  mInfoTextList = (System_Collections_Generic_List_object__o *)((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppMethodPointer))mInfoTextList->klass->vtable._33_get_Item.method)(
                                                                 mInfoTextList,
                                                                 mInfoTextList->klass->vtable._34_get_Count.methodPtr);
  v37 = this->fields.maxLabelWidth;
  if ( !v37 )
    goto LABEL_28;
  mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.nameLabelBottom;
  if ( !mInfoTextList )
    goto LABEL_28;
  middleLabelWidth = v37->fields.bottomLabelWidth;
LABEL_27:
  UILabel__SetCondensedScale((UILabel_o *)mInfoTextList, middleLabelWidth, 0, 0LL);
}


void __fastcall GrandQuestFolderBoardComponent__SetImage(
        GrandQuestFolderBoardComponent_o *this,
        UISprite_o *uiSprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *atlasManager; // x0

  atlasManager = this->fields.atlasManager;
  if ( !atlasManager
    || (atlasManager = (AtlasManagerUnit_o *)AtlasManagerUnit__SetUI(atlasManager, uiSprite, spriteName, 0LL), !uiSprite) )
  {
    sub_1BCB254(atlasManager, uiSprite);
  }
  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))uiSprite->klass->vtable._33_MakePixelPerfect.method)(
    uiSprite,
    uiSprite->klass->vtable._34_get_minWidth.methodPtr);
}


void __fastcall GrandQuestFolderBoardComponent__SetSelectedFrameDisplay(
        GrandQuestFolderBoardComponent_o *this,
        bool isDisplay,
        const MethodInfo *method)
{
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.selectedFrame, isDisplay, 0LL);
}


void __fastcall GrandQuestFolderBoardComponent__UpdateInfoText(
        GrandQuestFolderBoardComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *mInfoTextList; // x0
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  Il2CppObject *v8; // x21
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x3

  if ( (byte_4B17321 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GrandQuestFolderInformationText__get_Item__, method);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v3);
    byte_4B17321 = 1;
  }
  if ( (byte_4B17322 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GrandQuestFolderInformationText__get_Count__, method);
    byte_4B17322 = 1;
  }
  mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( mInfoTextList && mInfoTextList->fields._size )
  {
    Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                          mInfoTextList,
                                                          0,
                                                          (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_GrandQuestFolderInformationText__get_Item__);
    if ( !Item )
      goto LABEL_15;
    if ( GrandQuestFolderInformationText__ChangeText(
           (GrandQuestFolderInformationText_o *)Item,
           &this->fields.mOptionInfoLb,
           v7) )
    {
      Item = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
      if ( Item )
      {
        v8 = System_Collections_Generic_List_object___get_Item(
               Item,
               0,
               (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_GrandQuestFolderInformationText__get_Item__);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Item = (System_Collections_Generic_List_object__o *)NetworkManager__getTime(0LL);
        if ( v8 )
        {
          GrandQuestFolderInformationText__SetParamFromScript(
            (GrandQuestFolderInformationText_o *)v8,
            (int64_t)Item,
            v9);
          GrandQuestFolderInformationText__SetTime(
            (GrandQuestFolderInformationText_o *)v8,
            &this->fields.mOptionInfoLb,
            &this->fields.mOptionInfoFrameSp,
            v10);
          return;
        }
      }
LABEL_15:
      sub_1BCB254(Item, v6);
    }
  }
}


GrandQuestFolderBoardItem_o *__fastcall GrandQuestFolderBoardComponent__get_BoardInfo(
        GrandQuestFolderBoardComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.boardInfo;
}


System_Collections_Generic_List_GrandQuestFolderInformationText__o *__fastcall GrandQuestFolderBoardComponent__get_InfoTextList(
        GrandQuestFolderBoardComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.mInfoTextList;
}


void __fastcall GrandQuestFolderBoardComponent_LabelMaxWidth___ctor(
        GrandQuestFolderBoardComponent_LabelMaxWidth_o *this,
        const MethodInfo *method)
{
  GrandQuestFolderBoardComponent_c *v3; // x0
  int32_t NameLabelMaxWidth; // w8

  if ( (byte_4B17324 & 1) == 0 )
  {
    sub_1BCAFF8(&GrandQuestFolderBoardComponent_TypeInfo, method);
    byte_4B17324 = 1;
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
  System_Object___ctor((Il2CppObject *)this, 0LL);
}