void ExRoomQuestBoardListViewObject___ctor(ExRoomQuestBoardListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596AE28 & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    byte_596AE28 = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void ExRoomQuestBoardListViewObject__Awake(ExRoomQuestBoardListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_596AE20 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ExRoomQuestBoardListViewItemDraw___);
    byte_596AE20 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_2213CDC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ExRoomQuestBoardListViewItemDraw___);
  this->fields.itemDraw = (struct ExRoomQuestBoardListViewItemDraw_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void ExRoomQuestBoardListViewObject__CallQuestInformation(
        ExRoomQuestBoardListViewObject_o *this,
        ExRoomQuestBoardListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *questInformation; // x20
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x1
  QuestInformationComponent_o *v9; // x0
  __int64 v10; // x1
  struct MapControl_QuestInfo_o *QuestInfo_k__BackingField; // x8
  _BOOL8 v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_596AE26 & 1) == 0 )
  {
    this = (ExRoomQuestBoardListViewObject_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AE26 = 1;
  }
  questInformation = (UnityEngine_Object_o *)ExRoomQuestBoardListViewObject__get_questInformation(
                                               this,
                                               (const MethodInfo *)item);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  v7 = UnityEngine_Object__op_Equality(questInformation, 0, 0);
  if ( !v7 )
  {
    v9 = ExRoomQuestBoardListViewObject__get_questInformation((ExRoomQuestBoardListViewObject_o *)v7, v8);
    if ( !item )
      goto LABEL_13;
    QuestInfo_k__BackingField = item->fields._QuestInfo_k__BackingField;
    if ( !QuestInfo_k__BackingField || !v9 )
      goto LABEL_13;
    v12 = QuestInformationComponent__Setup(v9, QuestInfo_k__BackingField->fields.questId, 1, 0, 0, 0);
    if ( v12 )
    {
      v9 = ExRoomQuestBoardListViewObject__get_questInformation((ExRoomQuestBoardListViewObject_o *)v12, v13);
      if ( v9 )
      {
        QuestInformationComponent__Open(v9, 0);
        return;
      }
LABEL_13:
      sub_2213CDC(v9, v10);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ExRoomQuestBoardListViewObject__CallQuestInformationCloseAtAll(
        ExRoomQuestBoardListViewObject_o *this,
        bool isPlaySe,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *questInformation; // x20
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x1
  QuestInformationComponent_o *v9; // x0
  __int64 v10; // x1

  if ( (byte_596AE27 & 1) == 0 )
  {
    this = (ExRoomQuestBoardListViewObject_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AE27 = 1;
  }
  questInformation = (UnityEngine_Object_o *)ExRoomQuestBoardListViewObject__get_questInformation(
                                               this,
                                               (const MethodInfo *)isPlaySe);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  v7 = UnityEngine_Object__op_Equality(questInformation, 0, 0);
  if ( !v7 )
  {
    v9 = ExRoomQuestBoardListViewObject__get_questInformation((ExRoomQuestBoardListViewObject_o *)v7, v8);
    if ( !v9 )
      sub_2213CDC(0, v10);
    QuestInformationComponent__CloseWindow(v9, isPlaySe, 0);
  }
}


ExRoomQuestBoardListViewItem_o *ExRoomQuestBoardListViewObject__GetItem(
        ExRoomQuestBoardListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_596AE22 & 1) == 0 )
  {
    sub_2213A60(&ExRoomQuestBoardListViewItem_TypeInfo);
    byte_596AE22 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = ExRoomQuestBoardListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (ExRoomQuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == ExRoomQuestBoardListViewItem_TypeInfo )
    return (ExRoomQuestBoardListViewItem_o *)this->fields.linkItem;
  return 0;
}


int32_t ExRoomQuestBoardListViewObject__GetShowingQuestInformationQuestId(
        ExRoomQuestBoardListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  UnityEngine_Object_o *questInformation; // x19
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  QuestInformationComponent_o *v8; // x0
  __int64 v9; // x1

  if ( (byte_596AE25 & 1) == 0 )
  {
    this = (ExRoomQuestBoardListViewObject_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AE25 = 1;
  }
  questInformation = (UnityEngine_Object_o *)ExRoomQuestBoardListViewObject__get_questInformation(this, method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v2, v3);
  v5 = UnityEngine_Object__op_Equality(questInformation, 0, 0);
  if ( v5 )
    return 0;
  v8 = ExRoomQuestBoardListViewObject__get_questInformation((ExRoomQuestBoardListViewObject_o *)v5, v6);
  if ( !v8 )
    sub_2213CDC(0, v9);
  return v8->fields.settedQuestId;
}


void ExRoomQuestBoardListViewObject__OnChangeAlphaAnim(
        ExRoomQuestBoardListViewObject_o *this,
        const MethodInfo *method)
{
  ExRoomQuestBoardListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_2213CDC(0, method);
  ExRoomQuestBoardListViewItemDraw__OnChangeAlphaAnim(itemDraw, 0);
}


// local variable allocation has failed, the output may be wrong!
void ExRoomQuestBoardListViewObject__OnClickInfoBtn(
        ExRoomQuestBoardListViewObject_o *this,
        bool isOpened,
        const MethodInfo *method)
{
  ExRoomQuestBoardListViewObject_o *v4; // x19
  const MethodInfo *v5; // x1
  ExRoomQuestBoardListViewItem_o *Item; // x0
  const MethodInfo *v7; // x1
  ExRoomQuestBoardListViewItem_o *v8; // x20
  MapControl_QuestInfo_o *QuestInfo_k__BackingField; // x0
  QuestEntity_o *Mine; // x0
  __int64 v11; // x2
  struct MapControl_QuestInfo_o *v12; // x8
  int32_t questId; // w22
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *v16; // x22
  _BOOL8 v17; // x0
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x2
  struct MapControl_QuestInfo_o *v20; // x8
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  ExRoomQuestBoardListViewObject_o *v23; // x0
  const MethodInfo *v24; // x2

  v4 = this;
  if ( (byte_596AE23 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_ExRoomQuestBoardListViewObject_OnClickInfoBtn__);
    this = (ExRoomQuestBoardListViewObject_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AE23 = 1;
  }
  if ( !ExRoomQuestBoardListViewObject__QuestInfoBusy(this, (const MethodInfo *)isOpened) )
  {
    Item = ExRoomQuestBoardListViewObject__GetItem(v4, v5);
    if ( Item )
    {
      v8 = Item;
      QuestInfo_k__BackingField = Item->fields._QuestInfo_k__BackingField;
      if ( QuestInfo_k__BackingField )
      {
        if ( QuestInfo_k__BackingField->fields.dispType != 2 )
          goto LABEL_16;
        Mine = MapControl_QuestInfo__GetMine(QuestInfo_k__BackingField, 0);
        if ( !Mine )
          goto LABEL_31;
        if ( !QuestEntity__HasFlag(Mine, 0x400000000000000LL, 0) )
          goto LABEL_16;
        Mine = (QuestEntity_o *)v8->fields._QuestInfo_k__BackingField;
        if ( !Mine )
          goto LABEL_31;
        Mine = MapControl_QuestInfo__GetMine((MapControl_QuestInfo_o *)Mine, 0);
        if ( !Mine )
          goto LABEL_31;
        if ( Mine->fields.afterClear != 5 )
          goto LABEL_16;
        v12 = v8->fields._QuestInfo_k__BackingField;
        if ( !v12 )
          goto LABEL_31;
        questId = v12->fields.questId;
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v7, v11);
        if ( CondType__IsQuestClear_47284152(questId, -1, 0, 0) )
        {
LABEL_16:
          v16 = (UnityEngine_Object_o *)ExRoomQuestBoardListViewObject__get_exRoomQuestBoardListViewManager(v4, v7);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
          v17 = UnityEngine_Object__op_Inequality(v16, 0, 0);
          if ( v17 )
          {
            Mine = (QuestEntity_o *)ExRoomQuestBoardListViewObject__get_exRoomQuestBoardListViewManager(v4, v18);
            if ( !Mine )
              goto LABEL_31;
            ExRoomQuestBoardListViewManager__SetShowingInfoAllOff((ExRoomQuestBoardListViewManager_o *)Mine, v7);
          }
          Mine = (QuestEntity_o *)ExRoomQuestBoardListViewObject__GetShowingQuestInformationQuestId(
                                    (ExRoomQuestBoardListViewObject_o *)v17,
                                    v18);
          v20 = v8->fields._QuestInfo_k__BackingField;
          if ( v20 )
          {
            if ( (_DWORD)Mine == v20->fields.questId )
            {
              ExRoomQuestBoardListViewObject__CallQuestInformationCloseAtAll(
                (ExRoomQuestBoardListViewObject_o *)Mine,
                1,
                v19);
              return;
            }
            if ( !isOpened )
            {
              v21 = Method_ExRoomQuestBoardListViewObject_OnClickInfoBtn__;
              if ( (*((_BYTE *)Method_ExRoomQuestBoardListViewObject_OnClickInfoBtn__ + 83) & 2) != 0 )
                v21 = (_QWORD *)sub_2213A78(Method_ExRoomQuestBoardListViewObject_OnClickInfoBtn__);
              v22 = (System_Reflection_MethodBase_o *)sub_2213A44(v21, v21[4]);
              OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0, 0);
            }
            Mine = (QuestEntity_o *)v4->fields.itemDraw;
            if ( Mine )
            {
              ExRoomQuestBoardListViewItemDraw__SetInfoShowing((ExRoomQuestBoardListViewItemDraw_o *)Mine, 1, 0);
              ExRoomQuestBoardListViewObject__CallQuestInformation(v23, v8, v24);
              return;
            }
          }
LABEL_31:
          sub_2213CDC(Mine, v7);
        }
      }
    }
  }
}


void ExRoomQuestBoardListViewObject__OnStartFadeOutAlphaAnim(
        ExRoomQuestBoardListViewObject_o *this,
        const MethodInfo *method)
{
  ExRoomQuestBoardListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_2213CDC(0, method);
  ExRoomQuestBoardListViewItemDraw__OnStartFadeOutAlphaAnim(itemDraw, 0);
}


bool ExRoomQuestBoardListViewObject__QuestInfoBusy(ExRoomQuestBoardListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  UnityEngine_Object_o *questInformation; // x19
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  QuestInformationComponent_o *v8; // x0
  __int64 v9; // x1
  _BOOL8 isMoving; // x0
  const MethodInfo *v11; // x1

  if ( (byte_596AE24 & 1) == 0 )
  {
    this = (ExRoomQuestBoardListViewObject_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AE24 = 1;
  }
  questInformation = (UnityEngine_Object_o *)ExRoomQuestBoardListViewObject__get_questInformation(this, method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v2, v3);
  v5 = UnityEngine_Object__op_Equality(questInformation, 0, 0);
  if ( v5 )
    return 0;
  v8 = ExRoomQuestBoardListViewObject__get_questInformation((ExRoomQuestBoardListViewObject_o *)v5, v6);
  if ( !v8 )
    goto LABEL_12;
  isMoving = QuestInformationComponent__isMoving(v8, 0);
  if ( isMoving )
    return 1;
  v8 = ExRoomQuestBoardListViewObject__get_questInformation((ExRoomQuestBoardListViewObject_o *)isMoving, v11);
  if ( !v8 )
LABEL_12:
    sub_2213CDC(v8, v9);
  return QuestInformationComponent__isListBuilding(v8, 0);
}


void ExRoomQuestBoardListViewObject__SetItem(
        ExRoomQuestBoardListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ExRoomQuestBoardListViewItemDraw_o *itemDraw; // x20
  const MethodInfo *v8; // x1
  ExRoomQuestBoardListViewManager_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x3
  __int64 naturalAligment; // x9

  if ( (byte_596AE21 & 1) == 0 )
  {
    sub_2213A60(&ExRoomQuestBoardListViewItem_TypeInfo);
    byte_596AE21 = 1;
  }
  ListViewObject__SetItem_50850568((ListViewObject_o *)this, item, seed, 0);
  itemDraw = this->fields.itemDraw;
  v9 = ExRoomQuestBoardListViewObject__get_exRoomQuestBoardListViewManager(this, v8);
  if ( !itemDraw )
LABEL_9:
    sub_2213CDC(v9, v10);
  if ( item )
  {
    naturalAligment = ExRoomQuestBoardListViewItem_TypeInfo->_2.naturalAligment;
    if ( item->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (ExRoomQuestBoardListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] != ExRoomQuestBoardListViewItem_TypeInfo )
    {
      v9 = (ExRoomQuestBoardListViewManager_o *)sub_221405C(item, ExRoomQuestBoardListViewItem_TypeInfo, v9, v11);
      goto LABEL_9;
    }
  }
  ExRoomQuestBoardListViewItemDraw__SetItem(itemDraw, (ExRoomQuestBoardListViewItem_o *)item, v9, 0);
}


void ExRoomQuestBoardListViewObject__Update(ExRoomQuestBoardListViewObject_o *this, const MethodInfo *method)
{
  ExRoomQuestBoardListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_2213CDC(0, method);
  ExRoomQuestBoardListViewItemDraw__UpdateItem(itemDraw, 0);
}


ExRoomQuestBoardListViewItemDraw_o *ExRoomQuestBoardListViewObject__get_ItemDraw(
        ExRoomQuestBoardListViewObject_o *this,
        const MethodInfo *method)
{
  return this->fields.itemDraw;
}


ExRoomQuestBoardListViewManager_o *ExRoomQuestBoardListViewObject__get_exRoomQuestBoardListViewManager(
        ExRoomQuestBoardListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x11

  if ( (byte_596AE1E & 1) == 0 )
  {
    sub_2213A60(&ExRoomQuestBoardListViewManager_TypeInfo);
    byte_596AE1E = 1;
  }
  manager = this->fields.manager;
  if ( !manager )
    return 0;
  naturalAligment = ExRoomQuestBoardListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (ExRoomQuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == ExRoomQuestBoardListViewManager_TypeInfo )
    return (ExRoomQuestBoardListViewManager_o *)this->fields.manager;
  return 0;
}


QuestInformationComponent_o *ExRoomQuestBoardListViewObject__get_questInformation(
        ExRoomQuestBoardListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalSceneComponent_c *v3; // x0
  struct TerminalSceneComponent_o *mInstance; // x8

  if ( (byte_596AE1F & 1) == 0 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596AE1F = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v3->static_fields->mInstance;
  if ( !mInstance )
    sub_2213CDC(v3, method);
  return mInstance->fields.mQuestInformation;
}