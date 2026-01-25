void GrandQuestFolderBoardComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4CE9282 & 1) == 0 )
  {
    sub_1C7BAE8(&GrandQuestFolderBoardComponent_TypeInfo);
    byte_4CE9282 = 1;
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
  __int64 v8; // x1
  DataManager_o *v9; // x21
  Il2CppObject *MasterData_object; // x22
  il2cpp_array_size_t max_length; // x8
  BoardMessageEntity_array *v12; // x23
  int v13; // w29
  int v14; // w22
  BoardMessageEntity_o *v15; // x24
  System_Collections_Generic_List_object__o *mInfoTextList; // x25
  System_String_o *message; // x27
  int64_t closedAt; // x28
  GrandQuestFolderInformationText_o *v19; // x0
  const MethodInfo *v20; // x5
  Il2CppObject *v21; // x26
  BoardMessageEntity_o *v22; // x1
  System_String_o *v23; // x2
  int64_t v24; // x3
  int64_t v25; // x27
  System_String_o *v26; // x28
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v37; // [xsp+8h] [xbp-68h]

  if ( (byte_4CE927E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_BoardMessageMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C7BAE8(&GrandQuestFolderInformationText_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GrandQuestFolderInformationText__Add__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CE927E = 1;
  }
  GrandQuestFolderBoardComponent__ResetInfoTextList(this, *(const MethodInfo **)&warId);
  Instance = (BoardMessageEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  v9 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventMaster___);
  Instance = (BoardMessageEntity_array *)DataManager__GetMasterData_object_(
                                           v9,
                                           (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_BoardMessageMaster___);
  if ( !Instance )
    goto LABEL_31;
  v37 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  Instance = BoardMessageMaster__GetDataCondCheck((BoardMessageMaster_o *)Instance, warId, checkTime, 0);
  if ( !Instance )
    goto LABEL_31;
  max_length = Instance->max_length;
  v12 = Instance;
  v13 = max_length - 1;
  if ( (int)max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      v15 = v12->m_Items[v14];
      if ( !v15 )
        break;
      switch ( v15->fields.referenceType )
      {
        case 1:
          mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
          message = v15->fields.message;
          closedAt = v15->fields.closedAt;
          v19 = (GrandQuestFolderInformationText_o *)sub_1C7BD34(GrandQuestFolderInformationText_TypeInfo);
          v21 = (Il2CppObject *)v19;
          v22 = v15;
          v23 = message;
          v24 = closedAt;
          goto LABEL_22;
        case 2:
          Instance = (BoardMessageEntity_array *)DataManager__GetMasterData_object_(
                                                   v9,
                                                   (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !Instance )
            goto LABEL_31;
          Instance = (BoardMessageEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                                   v15->fields.referenceId,
                                                   (const MethodInfo_342E2FC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_27;
          v25 = SHIDWORD(Instance->m_Items[15]);
          break;
        case 3:
          Instance = (BoardMessageEntity_array *)DataManager__GetMasterData_object_(
                                                   v9,
                                                   (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !Instance )
            goto LABEL_31;
          Instance = (BoardMessageEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                                   v15->fields.referenceId,
                                                   (const MethodInfo_342E2FC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_27;
          v25 = SLODWORD(Instance->m_Items[16]);
          break;
        case 4:
          Instance = (BoardMessageEntity_array *)v37;
          if ( !v37 )
            goto LABEL_31;
          Instance = (BoardMessageEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                   v37,
                                                   v15->fields.referenceId,
                                                   (const MethodInfo_342E2FC *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_27;
          v25 = (int64_t)Instance->m_Items[8];
          break;
        default:
          goto LABEL_27;
      }
      if ( v25 - checkTime >= 0 )
      {
        mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
        v26 = v15->fields.message;
        v19 = (GrandQuestFolderInformationText_o *)sub_1C7BD34(GrandQuestFolderInformationText_TypeInfo);
        v21 = (Il2CppObject *)v19;
        v22 = v15;
        v23 = v26;
        v24 = v25;
LABEL_22:
        GrandQuestFolderInformationText___ctor(v19, v22, v23, v24, checkTime, v20);
        if ( !mInfoTextList )
          break;
        items = mInfoTextList->fields._items;
        v34 = Method_System_Collections_Generic_List_GrandQuestFolderInformationText__Add__;
        ++mInfoTextList->fields._version;
        if ( !items )
          break;
        size = mInfoTextList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            mInfoTextList,
            v21,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = &items->obj.klass + size;
          mInfoTextList->fields._size = size + 1;
          v36[4] = (Il2CppClass *)v21;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v36 + 4), (int32_t)v21, v27, v28, v29, v30, v31, v32);
        }
      }
LABEL_27:
      if ( v13 == v14 )
        return;
      if ( (unsigned int)++v14 >= LODWORD(v12->max_length) )
        sub_1C7BD48(Instance);
    }
LABEL_31:
    sub_1C7BD40(Instance, v8);
  }
}


bool GrandQuestFolderBoardComponent__ExistBoardImage(GrandQuestFolderBoardComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *boardSprite; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct UISprite_o *v7; // x8
  UnityEngine_Object_o *mAtlas; // x19

  if ( (byte_4CE927D & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE927D = 1;
  }
  boardSprite = (UnityEngine_Object_o *)this->fields.boardSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(boardSprite, 0, 0);
  if ( v4 )
    return 0;
  v7 = this->fields.boardSprite;
  if ( !v7 )
    sub_1C7BD40(v4, v5);
  mAtlas = (UnityEngine_Object_o *)v7->fields.mAtlas;
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

  if ( (byte_4CE9281 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GrandQuestFolderInformationText__get_Count__);
    byte_4CE9281 = 1;
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
  GrandQuestFolderBoardItem_o *p_mInfoTextList; // x19
  struct System_Collections_Generic_List_GrandQuestFolderInformationText__o *mInfoTextList; // t1
  int32_t size; // w2
  int v7; // w9
  System_Collections_Generic_List_object__o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4CE927F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GrandQuestFolderInformationText__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GrandQuestFolderInformationText___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_GrandQuestFolderInformationText__TypeInfo);
    byte_4CE927F = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  p_mInfoTextList = (GrandQuestFolderBoardItem_o *)&this->fields.mInfoTextList;
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
    v8 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_GrandQuestFolderInformationText__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_GrandQuestFolderInformationText___ctor__);
    p_mInfoTextList->klass = (GrandQuestFolderBoardItem_c *)v8;
    sub_1C7BA8C(p_mInfoTextList, (int32_t)v8, v9, v10, v11, v12, v13, v14);
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
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Collections_Generic_List_object__o *mInfoTextList; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x3
  System_String_o *v28; // x0
  System_String_o *v29; // x0
  const MethodInfo *v30; // x3
  System_String_o *v31; // x0
  System_String_o *v32; // x0
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  UILabel_o *nameLabelUp; // x22
  System_Collections_Generic_List_object__o *v39; // x21
  struct GrandQuestFolderBoardComponent_LabelMaxWidth_o *maxLabelWidth; // x8
  UILabel_o *nameLabelBottom; // x22
  struct GrandQuestFolderBoardComponent_LabelMaxWidth_o *v42; // x8
  int32_t bottomLabelWidth; // w1
  struct GrandQuestFolderBoardComponent_LabelMaxWidth_o *v44; // x8
  UnityEngine_Object_o *closedMessageLabel; // x21
  int32_t IconId_k__BackingField; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4CE927C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GrandQuestFolderInformationText__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GrandQuestFolderInformationText__get_Item__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_43/*"\n"*/);
    sub_1C7BAE8(&StringLiteral_87/*"\r\n"*/);
    sub_1C7BAE8(&StringLiteral_20693/*"img_questboard_mask"*/);
    sub_1C7BAE8(&StringLiteral_20695/*"img_questboard_selectflame"*/);
    sub_1C7BAE8(&StringLiteral_20682/*"img_questboard_"*/);
    sub_1C7BAE8(&StringLiteral_20874/*"img_txt_questboard_"*/);
    sub_1C7BAE8(&StringLiteral_20684/*"img_questboard_80522"*/);
    byte_4CE927C = 1;
  }
  this->fields.boardInfo = item;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.boardInfo,
    (int32_t)item,
    (int32_t)atlasManagerUnit,
    (int32_t)onTouchCallback,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.onTouch = onTouchCallback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.onTouch,
    (int32_t)onTouchCallback,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( !item )
    goto LABEL_33;
  this->fields.moveBoardIdx = item->fields.index;
  this->fields.atlasManager = atlasManagerUnit;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.atlasManager,
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
    v26);
  mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( !mInfoTextList )
    goto LABEL_33;
  if ( mInfoTextList->fields._size >= 1 )
  {
    mInfoTextList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                   mInfoTextList,
                                                                   0,
                                                                   (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_GrandQuestFolderInformationText__get_Item__);
    if ( !mInfoTextList )
      goto LABEL_33;
    GrandQuestFolderInformationText__SetTime(
      (GrandQuestFolderInformationText_o *)mInfoTextList,
      &this->fields.mOptionInfoLb,
      &this->fields.mOptionInfoFrameSp,
      v27);
  }
  IconId_k__BackingField = item->fields._IconId_k__BackingField;
  v28 = System_Int32__ToString((int32_t)&IconId_k__BackingField, 0);
  v29 = System_String__Concat_64176912((System_String_o *)StringLiteral_20682/*"img_questboard_"*/, v28, 0);
  GrandQuestFolderBoardComponent__SetImage(this, this->fields.classIconSprite, v29, v30);
  IconId_k__BackingField = item->fields._IconId_k__BackingField;
  v31 = System_Int32__ToString((int32_t)&IconId_k__BackingField, 0);
  v32 = System_String__Concat_64176912((System_String_o *)StringLiteral_20874/*"img_txt_questboard_"*/, v31, 0);
  GrandQuestFolderBoardComponent__SetImage(this, this->fields.classNameSprite, v32, v33);
  GrandQuestFolderBoardComponent__SetImage(this, this->fields.boardSprite, (System_String_o *)StringLiteral_20684/*"img_questboard_80522"*/, v34);
  GrandQuestFolderBoardComponent__SetImage(this, this->fields.blackMask, (System_String_o *)StringLiteral_20693/*"img_questboard_mask"*/, v35);
  GrandQuestFolderBoardComponent__SetImage(
    this,
    this->fields.selectedFrame,
    (System_String_o *)StringLiteral_20695/*"img_questboard_selectflame"*/,
    v36);
  mInfoTextList = (System_Collections_Generic_List_object__o *)item->fields._Name_k__BackingField;
  if ( !mInfoTextList )
LABEL_33:
    sub_1C7BD40(mInfoTextList, v19);
  if ( System_String__Contains((System_String_o *)mInfoTextList, (System_String_o *)StringLiteral_43/*"\n"*/, 0) )
  {
    mInfoTextList = (System_Collections_Generic_List_object__o *)item->fields._Name_k__BackingField;
    if ( !mInfoTextList )
      goto LABEL_33;
    mInfoTextList = (System_Collections_Generic_List_object__o *)System_String__Replace_64223476(
                                                                   (System_String_o *)mInfoTextList,
                                                                   (System_String_o *)StringLiteral_87/*"\r\n"*/,
                                                                   (System_String_o *)StringLiteral_43/*"\n"*/,
                                                                   0);
    if ( !mInfoTextList )
      goto LABEL_33;
    v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                 (System_String_o *)mInfoTextList,
                                                                 0xAu,
                                                                 0,
                                                                 0);
    mInfoTextList = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                                   v37,
                                                                   (const MethodInfo_31B3E80 *)Method_System_Linq_Enumerable_ToList_string___);
    if ( !mInfoTextList )
      goto LABEL_33;
    nameLabelUp = this->fields.nameLabelUp;
    v39 = mInfoTextList;
    mInfoTextList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                   mInfoTextList,
                                                                   0,
                                                                   (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_string__get_Item__);
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
                                                                   (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_string__get_Item__);
    if ( !nameLabelBottom )
      goto LABEL_33;
    UILabel__set_text(nameLabelBottom, (System_String_o *)mInfoTextList, 0);
    mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.nameLabelBottom;
    if ( !mInfoTextList )
      goto LABEL_33;
    mInfoTextList = (System_Collections_Generic_List_object__o *)((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *))mInfoTextList->klass->vtable._33_get_Item.methodPtr)(
                                                                   mInfoTextList,
                                                                   mInfoTextList->klass->vtable._33_get_Item.method);
    v42 = this->fields.maxLabelWidth;
    if ( !v42 )
      goto LABEL_33;
    mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.nameLabelBottom;
    if ( !mInfoTextList )
      goto LABEL_33;
    bottomLabelWidth = v42->fields.bottomLabelWidth;
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
    v44 = this->fields.maxLabelWidth;
    if ( !v44 )
      goto LABEL_33;
    mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.nameLabelMiddle;
    if ( !mInfoTextList )
      goto LABEL_33;
    bottomLabelWidth = v44->fields.middleLabelWidth;
  }
  UILabel__SetCondensedScale((UILabel_o *)mInfoTextList, bottomLabelWidth, 0, 0);
  closedMessageLabel = (UnityEngine_Object_o *)this->fields.closedMessageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C7BD40(atlasManager, uiSprite);
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
  Il2CppObject *v7; // x21
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x3

  if ( (byte_4CE9280 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GrandQuestFolderInformationText__get_Item__);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE9280 = 1;
  }
  if ( (byte_4CE9281 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GrandQuestFolderInformationText__get_Count__);
    byte_4CE9281 = 1;
  }
  mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( mInfoTextList && mInfoTextList->fields._size )
  {
    Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                          mInfoTextList,
                                                          0,
                                                          (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_GrandQuestFolderInformationText__get_Item__);
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
        v7 = System_Collections_Generic_List_object___get_Item(
               Item,
               0,
               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_GrandQuestFolderInformationText__get_Item__);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Item = (System_Collections_Generic_List_object__o *)NetworkManager__getTime(0);
        if ( v7 )
        {
          GrandQuestFolderInformationText__SetParamFromScript(
            (GrandQuestFolderInformationText_o *)v7,
            (int64_t)Item,
            v8);
          GrandQuestFolderInformationText__SetTime(
            (GrandQuestFolderInformationText_o *)v7,
            &this->fields.mOptionInfoLb,
            &this->fields.mOptionInfoFrameSp,
            v9);
          return;
        }
      }
LABEL_15:
      sub_1C7BD40(Item, v5);
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

  if ( (byte_4CE9283 & 1) == 0 )
  {
    sub_1C7BAE8(&GrandQuestFolderBoardComponent_TypeInfo);
    byte_4CE9283 = 1;
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