void ExRoomQuestBoardListViewManager___cctor(const MethodInfo *method)
{
  struct ExRoomQuestBoardListViewManager_StaticFields *static_fields; // x8

  if ( (byte_596AE1C & 1) == 0 )
  {
    sub_2213A60(&ExRoomQuestBoardListViewManager_TypeInfo);
    byte_596AE1C = 1;
  }
  static_fields = ExRoomQuestBoardListViewManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->ALPHA_ANIM_SPD_RATE = 0x404000003F000000LL;
  *(_QWORD *)&static_fields->ALPHA_ANIM_COUNT_RESET_VAL = 0x70DE021F0LL;
}


void ExRoomQuestBoardListViewManager___ctor(ExRoomQuestBoardListViewManager_o *this, const MethodInfo *method)
{
  this->fields.questListViewPadding = 10;
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void ExRoomQuestBoardListViewManager__CreateList(
        ExRoomQuestBoardListViewManager_o *this,
        System_Collections_Generic_List_MapControl_QuestInfo__o *questInfoList,
        bool isAllDisp,
        int32_t focusQuestId,
        const MethodInfo *method)
{
  __int64 v9; // x22
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  NetworkManager_c *v15; // x0
  int64_t Time; // x0
  int32_t size; // w27
  int32_t v18; // w23
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  MapControl_QuestInfo_o *v20; // x25
  int32_t v21; // w26
  ExRoomQuestBoardListViewItem_o *v22; // x24
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  Il2CppClass **v32; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v33; // x20
  System_Predicate_object__o *v34; // x21
  int Index; // w0
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x1
  bool v38; // [xsp+Ch] [xbp-64h]

  if ( (byte_596AE11 & 1) == 0 )
  {
    sub_2213A60(&ExRoomQuestBoardListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__FindIndex__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_QuestInfo__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_QuestInfo__get_Item__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&System_Predicate_ListViewItem__TypeInfo);
    sub_2213A60(&Method_ExRoomQuestBoardListViewManager___c__DisplayClass16_0__CreateList_b__0__);
    sub_2213A60(&ExRoomQuestBoardListViewManager___c__DisplayClass16_0_TypeInfo);
    byte_596AE11 = 1;
  }
  v9 = sub_2213CCC(ExRoomQuestBoardListViewManager___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_21;
  v38 = isAllDisp;
  *(_DWORD *)(v9 + 16) = focusQuestId;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  ExRoomQuestBoardListViewManager__NormalizeForVerticalList(this, v12);
  v15 = NetworkManager_TypeInfo;
  this->fields.initMode = 0;
  this->fields.consumeColorReset = 0;
  if ( !*(&v15->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v15, v13, v14);
  Time = NetworkManager__getTime(0);
  this->fields.alphaAnimCnt = 0;
  this->fields.listCreatedTime = Time;
  if ( questInfoList )
  {
    size = questInfoList->fields._size;
    if ( size >= 1 )
    {
      v18 = 0;
      do
      {
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              (System_Collections_Generic_List_object__o *)questInfoList,
                                                              v18,
                                                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__get_Item__);
        if ( Item )
        {
          itemList = this->fields.itemList;
          if ( !itemList )
            goto LABEL_21;
          v20 = (MapControl_QuestInfo_o *)Item;
          v21 = itemList->fields._size;
          v22 = (ExRoomQuestBoardListViewItem_o *)sub_2213CCC(ExRoomQuestBoardListViewItem_TypeInfo);
          ExRoomQuestBoardListViewItem___ctor(v22, v21, v20, 0);
          Item = (System_Collections_Generic_List_object__o *)this->fields.itemList;
          if ( !Item )
            goto LABEL_21;
          items = Item->fields._items;
          v30 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++Item->fields._version;
          if ( !items )
            goto LABEL_21;
          v31 = Item->fields._size;
          if ( (unsigned int)v31 >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              Item,
              (Il2CppObject *)v22,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v32 = &items->obj.klass + v31;
            Item->fields._size = v31 + 1;
            v32[4] = (Il2CppClass *)v22;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v32 + 4), (int32_t)v22, v23, v24, v25, v26, v27, v28);
          }
        }
      }
      while ( size != ++v18 );
    }
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, v38, -1, 0);
  v33 = this->fields.itemList;
  v34 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_ListViewItem__TypeInfo);
  System_Predicate_object____ctor(
    v34,
    (Il2CppObject *)v9,
    Method_ExRoomQuestBoardListViewManager___c__DisplayClass16_0__CreateList_b__0__,
    0);
  if ( !v33 )
LABEL_21:
    sub_2213CDC(Item, v11);
  Index = System_Collections_Generic_List_object___FindIndex(
            (System_Collections_Generic_List_object__o *)v33,
            (System_Predicate_T__o *)v34,
            (const MethodInfo_44844B8 *)Method_System_Collections_Generic_List_ListViewItem__FindIndex__);
  if ( Index >= 1 )
    ListViewManager__SetTopItem((ListViewManager_o *)this, Index, 0);
  ExRoomQuestBoardListViewManager__UpdateScrollEnabled(this, v36);
  ExRoomQuestBoardListViewManager__SetupQuestListViewBg(this, v37);
}


int32_t ExRoomQuestBoardListViewManager__GetAlphaAnimCnt(
        ExRoomQuestBoardListViewManager_o *this,
        int32_t length,
        const MethodInfo *method)
{
  return this->fields.alphaAnimCnt % length;
}


int32_t ExRoomQuestBoardListViewManager__GetInitMode(ExRoomQuestBoardListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.initMode;
}


int32_t ExRoomQuestBoardListViewManager__GetNextAlphaAnimCnt(
        ExRoomQuestBoardListViewManager_o *this,
        int32_t length,
        const MethodInfo *method)
{
  return (this->fields.alphaAnimCnt + 1) % length;
}


bool ExRoomQuestBoardListViewManager__IsConsumeColorReset(
        ExRoomQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.consumeColorReset;
}


void ExRoomQuestBoardListViewManager__NormalizeForVerticalList(
        ExRoomQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *scrollView; // x20
  __int64 v5; // x1
  UIScrollView_o *v6; // x0
  UIScrollView_o *v7; // x19

  if ( (byte_596AE12 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AE12 = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    v6 = this->fields.scrollView;
    if ( !v6 )
      goto LABEL_12;
    UIScrollView__DisableSpring(v6, 0);
    v7 = this->fields.scrollView;
    if ( !byte_5969AE0 )
    {
      v6 = (UIScrollView_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    if ( !v7 )
LABEL_12:
      sub_2213CDC(v6, v5);
    UIScrollView__set_currentMomentum(v7, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  }
}


void ExRoomQuestBoardListViewManager__OnChangeAlphaAnim(
        ExRoomQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  ExRoomQuestBoardListViewItemDraw_o *v5; // x0
  __int64 v6; // x1
  __int64 v7; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_object__o *v8; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596AE1B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ExRoomQuestBoardListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ExRoomQuestBoardListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ExRoomQuestBoardListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ExRoomQuestBoardListViewObject__GetEnumerator__);
    byte_596AE1B = 1;
  }
  memset(&v9, 0, sizeof(v9));
  ObjectList = (System_Collections_Generic_List_object__o *)ExRoomQuestBoardListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !ObjectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    ObjectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ExRoomQuestBoardListViewObject__GetEnumerator__);
  v7 = 0;
  v8 = &v9;
  while ( 1 )
  {
    v5 = (ExRoomQuestBoardListViewItemDraw_o *)System_Collections_Generic_List_Enumerator_object___MoveNext(
                                                 &v9,
                                                 (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ExRoomQuestBoardListViewObject__MoveNext__);
    if ( ((unsigned __int8)v5 & 1) == 0 )
      break;
    if ( !v9.fields._current
      || (v5 = *(ExRoomQuestBoardListViewItemDraw_o **)((char *)&v9.fields._current->klass + (unsigned __int64)&dword_78)) == 0 )
    {
      sub_2213CDC(v5, v6);
    }
    ExRoomQuestBoardListViewItemDraw__OnChangeAlphaAnim(v5, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ExRoomQuestBoardListViewObject__Dispose__);
  this->fields.consumeColorReset = 0;
}


void ExRoomQuestBoardListViewManager__OnClickListView(
        ExRoomQuestBoardListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ExRoomQuestBoardListViewItem_o *Item; // x0
  struct MapControl_QuestInfo_o *QuestInfo_k__BackingField; // x20
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  struct System_Action_MapControl_QuestInfo__o *onClickQuestBoard; // x8

  if ( (byte_596AE15 & 1) == 0 )
  {
    sub_2213A60(&Method_ExRoomQuestBoardListViewManager_OnClickListView__);
    sub_2213A60(&ExRoomQuestBoardListViewObject_TypeInfo);
    byte_596AE15 = 1;
  }
  if ( this->fields.initMode == 2 )
  {
    if ( obj )
    {
      naturalAligment = ExRoomQuestBoardListViewObject_TypeInfo->_2.naturalAligment;
      if ( obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (ExRoomQuestBoardListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == ExRoomQuestBoardListViewObject_TypeInfo )
      {
        Item = ExRoomQuestBoardListViewObject__GetItem((ExRoomQuestBoardListViewObject_o *)obj, (const MethodInfo *)obj);
        if ( Item )
        {
          QuestInfo_k__BackingField = Item->fields._QuestInfo_k__BackingField;
          if ( QuestInfo_k__BackingField )
          {
            v8 = Method_ExRoomQuestBoardListViewManager_OnClickListView__;
            if ( QuestInfo_k__BackingField->fields.dispType == 2 )
            {
              if ( (*((_BYTE *)Method_ExRoomQuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
                v8 = (_QWORD *)sub_2213A78(Method_ExRoomQuestBoardListViewManager_OnClickListView__);
              v9 = (System_Reflection_MethodBase_o *)sub_2213A44(v8, v8[4]);
              OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0, 0);
            }
            else
            {
              if ( (*((_BYTE *)Method_ExRoomQuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
                v8 = (_QWORD *)sub_2213A78(Method_ExRoomQuestBoardListViewManager_OnClickListView__);
              v10 = (System_Reflection_MethodBase_o *)sub_2213A44(v8, v8[4]);
              OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
              onClickQuestBoard = this->fields.onClickQuestBoard;
              if ( onClickQuestBoard )
                ((void (__fastcall *)(intptr_t, struct MapControl_QuestInfo_o *, intptr_t))onClickQuestBoard->fields.invoke_impl)(
                  onClickQuestBoard->fields.method_code,
                  QuestInfo_k__BackingField,
                  onClickQuestBoard->fields.method);
            }
          }
        }
      }
    }
  }
}


void ExRoomQuestBoardListViewManager__OnStartFadeOutAlphaAnim(
        ExRoomQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  ExRoomQuestBoardListViewItemDraw_o *v5; // x0
  __int64 v6; // x1
  __int64 v7; // [xsp+8h] [xbp-48h]
  System_Collections_Generic_List_Enumerator_object__o *v8; // [xsp+10h] [xbp-40h]
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_596AE1A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ExRoomQuestBoardListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ExRoomQuestBoardListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ExRoomQuestBoardListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ExRoomQuestBoardListViewObject__GetEnumerator__);
    byte_596AE1A = 1;
  }
  memset(&v9, 0, sizeof(v9));
  ObjectList = (System_Collections_Generic_List_object__o *)ExRoomQuestBoardListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !ObjectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    ObjectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ExRoomQuestBoardListViewObject__GetEnumerator__);
  v7 = 0;
  v8 = &v9;
  while ( 1 )
  {
    v5 = (ExRoomQuestBoardListViewItemDraw_o *)System_Collections_Generic_List_Enumerator_object___MoveNext(
                                                 &v9,
                                                 (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ExRoomQuestBoardListViewObject__MoveNext__);
    if ( ((unsigned __int8)v5 & 1) == 0 )
      break;
    if ( !v9.fields._current
      || (v5 = *(ExRoomQuestBoardListViewItemDraw_o **)((char *)&v9.fields._current->klass + (unsigned __int64)&dword_78)) == 0 )
    {
      sub_2213CDC(v5, v6);
    }
    ExRoomQuestBoardListViewItemDraw__OnStartFadeOutAlphaAnim(v5, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ExRoomQuestBoardListViewObject__Dispose__);
}


void ExRoomQuestBoardListViewManager__RequestConsumeColorReset(
        ExRoomQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  this->fields.consumeColorReset = 1;
}


void ExRoomQuestBoardListViewManager__ResetAlphaAnimTime(
        ExRoomQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  float realtimeSinceStartup; // s0
  ExRoomQuestBoardListViewManager_c *v6; // x0
  float v7; // s8
  System_Func_float__float__float__float__o *v8; // x20
  AlphaTransitionCalculator_o *v9; // x21
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x1
  AlphaTransitionCalculator_o *rewardIconAlphaCalculator; // x0

  if ( (byte_596AE19 & 1) == 0 )
  {
    sub_2213A60(&AlphaTransitionCalculator_TypeInfo);
    sub_2213A60(&ExRoomQuestBoardListViewManager_TypeInfo);
    byte_596AE19 = 1;
  }
  this->fields.alphaAnimNow = 1.0;
  realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
  v6 = ExRoomQuestBoardListViewManager_TypeInfo;
  this->fields.alphaAnimTimeOld = realtimeSinceStartup;
  if ( !*(&v6->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v6, v3, v4);
    v6 = ExRoomQuestBoardListViewManager_TypeInfo;
  }
  v7 = ChangedFPSUtil__CovertFrameNumToSecond(v6->static_fields->REWARD_ICON_FADE_FRAME_NUM, 0);
  v8 = ExtraEasing__AsymptoticSeriesFloat(
         ExRoomQuestBoardListViewManager_TypeInfo->static_fields->ALPHA_ANIM_SPD_RATE,
         (float)ExRoomQuestBoardListViewManager_TypeInfo->static_fields->REWARD_ICON_FADE_FRAME_NUM,
         0);
  v9 = (AlphaTransitionCalculator_o *)sub_2213CCC(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v9, v7, v8, 0);
  this->fields.rewardIconAlphaCalculator = v9;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.rewardIconAlphaCalculator,
    (int32_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  rewardIconAlphaCalculator = this->fields.rewardIconAlphaCalculator;
  if ( !rewardIconAlphaCalculator )
    sub_2213CDC(0, v16);
  AlphaTransitionCalculator__MakeFadeInFinished(rewardIconAlphaCalculator, 0);
}


void ExRoomQuestBoardListViewManager__SetInitMode(
        ExRoomQuestBoardListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  this->fields.initMode = mode;
}


void ExRoomQuestBoardListViewManager__SetOnClickQuestBoard(
        ExRoomQuestBoardListViewManager_o *this,
        System_Action_MapControl_QuestInfo__o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.onClickQuestBoard = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onClickQuestBoard,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void ExRoomQuestBoardListViewManager__SetPanelClipping(
        ExRoomQuestBoardListViewManager_o *this,
        int32_t clipping,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollViewPanel; // x21
  __int64 v6; // x1
  UIPanel_o *v7; // x0

  if ( (byte_596AE17 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AE17 = 1;
  }
  scrollViewPanel = (UnityEngine_Object_o *)this->fields.scrollViewPanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&clipping, method);
  if ( !UnityEngine_Object__op_Equality(scrollViewPanel, 0, 0) )
  {
    v7 = this->fields.scrollViewPanel;
    if ( !v7 )
      sub_2213CDC(0, v6);
    UIPanel__set_clipping(v7, clipping, 0);
  }
}


void ExRoomQuestBoardListViewManager__SetShowingInfoAllOff(
        ExRoomQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  _BOOL8 v5; // x0
  __int64 v6; // x1
  ExRoomQuestBoardListViewItemDraw_o *v7; // x0
  __int64 v8; // [xsp+8h] [xbp-48h]
  System_Collections_Generic_List_Enumerator_object__o *v9; // [xsp+10h] [xbp-40h]
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_596AE16 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ExRoomQuestBoardListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ExRoomQuestBoardListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ExRoomQuestBoardListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ExRoomQuestBoardListViewObject__GetEnumerator__);
    byte_596AE16 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  ObjectList = (System_Collections_Generic_List_object__o *)ExRoomQuestBoardListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !ObjectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    ObjectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ExRoomQuestBoardListViewObject__GetEnumerator__);
  v8 = 0;
  v9 = &v10;
  while ( 1 )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ExRoomQuestBoardListViewObject__MoveNext__);
    if ( !v5 )
      break;
    if ( !v10.fields._current )
      sub_2213CDC(v5, v6);
    v7 = *(ExRoomQuestBoardListViewItemDraw_o **)((char *)&v10.fields._current->klass + (unsigned __int64)&dword_78);
    if ( !v7 )
      sub_2213CDC(0, v6);
    ExRoomQuestBoardListViewItemDraw__SetInfoShowing(v7, 0, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ExRoomQuestBoardListViewObject__Dispose__);
}


void ExRoomQuestBoardListViewManager__SetupQuestListViewBg(
        ExRoomQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *questListViewBgSprite; // x20
  int32_t ItemSum; // w20
  UnityEngine_Vector2_o v6; // x1
  UnityEngine_Vector2_o v7; // x2
  UnityEngine_Vector2_o Pitch; // kr00_8
  int y; // w21
  UIWidget_o *v10; // x0
  int v11; // w8

  if ( (byte_596AE14 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AE14 = 1;
  }
  questListViewBgSprite = (UnityEngine_Object_o *)this->fields.questListViewBgSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(questListViewBgSprite, 0, 0) )
  {
    ItemSum = ListViewManager__get_ItemSum((ListViewManager_o *)this, 0);
    Pitch = ListViewManager__getPitch((ListViewManager_o *)this, 0);
    if ( Pitch.fields.y == INFINITY )
      y = 0x80000000;
    else
      y = (int)Pitch.fields.y;
    if ( !byte_596AEF6 )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_596AEF6 = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))j_il2cpp_runtime_class_init_0)(System_Math_TypeInfo, v6, v7);
    v10 = (UIWidget_o *)this->fields.questListViewBgSprite;
    if ( !v10 )
      sub_2213CDC(0, v6);
    if ( y >= 0 )
      v11 = y;
    else
      v11 = -y;
    UIWidget__set_height(v10, v11 * ItemSum + 2 * this->fields.questListViewPadding, 0);
  }
}


void ExRoomQuestBoardListViewManager__Update(ExRoomQuestBoardListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ListViewManager__Update((ListViewManager_o *)this, 0);
  ExRoomQuestBoardListViewManager__UpdateAlphaAnim(this, v3);
}


void ExRoomQuestBoardListViewManager__UpdateAlphaAnim(
        ExRoomQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  TransitionCalculator_float__o *rewardIconAlphaCalculator; // x0
  __int64 v4; // x1
  float v5; // s0
  AlphaTransitionCalculator_o *v6; // x0
  __int64 v7; // x2
  float realtimeSinceStartup; // s8
  float alphaAnimTimeOld; // s9
  ExRoomQuestBoardListViewManager_c *v10; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  __int64 v13; // x2
  float v14; // s0
  int32_t alphaAnimCnt; // w8
  ExRoomQuestBoardListViewManager_c *v16; // x0
  int32_t v17; // w21
  int32_t ALPHA_ANIM_COUNT_RESET_VAL; // w8
  int32_t v19; // w21

  if ( (byte_596AE18 & 1) == 0 )
  {
    sub_2213A60(&ExRoomQuestBoardListViewManager_TypeInfo);
    sub_2213A60(&Method_TransitionCalculator_float__Update__);
    byte_596AE18 = 1;
  }
  rewardIconAlphaCalculator = (TransitionCalculator_float__o *)this->fields.rewardIconAlphaCalculator;
  if ( rewardIconAlphaCalculator )
  {
    v5 = TransitionCalculator_float___Update(
           rewardIconAlphaCalculator,
           (const MethodInfo_3BE940C *)Method_TransitionCalculator_float__Update__);
    v6 = this->fields.rewardIconAlphaCalculator;
    this->fields.alphaAnimNow = v5;
    if ( !v6 )
      goto LABEL_22;
    if ( AlphaTransitionCalculator__IsFadeInFinished(v6, 0) )
    {
      realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
      alphaAnimTimeOld = this->fields.alphaAnimTimeOld;
      v10 = ExRoomQuestBoardListViewManager_TypeInfo;
      if ( !*(&ExRoomQuestBoardListViewManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ExRoomQuestBoardListViewManager_TypeInfo, v4, v7);
        v10 = ExRoomQuestBoardListViewManager_TypeInfo;
      }
      if ( (float)(realtimeSinceStartup - alphaAnimTimeOld) >= v10->static_fields->ALPHA_ANIM_TIME_INTERVAL )
      {
        v6 = this->fields.rewardIconAlphaCalculator;
        if ( v6 )
        {
          AlphaTransitionCalculator__StartFadeOut(v6, 0);
          ExRoomQuestBoardListViewManager__OnStartFadeOutAlphaAnim(this, v11);
          return;
        }
LABEL_22:
        sub_2213CDC(v6, v4);
      }
    }
    else
    {
      v6 = this->fields.rewardIconAlphaCalculator;
      if ( !v6 )
        goto LABEL_22;
      if ( AlphaTransitionCalculator__IsFadeOutFinished(v6, 0) )
      {
        v6 = this->fields.rewardIconAlphaCalculator;
        if ( !v6 )
          goto LABEL_22;
        AlphaTransitionCalculator__StartFadeIn(v6, 0);
        v14 = UnityEngine_Time__get_realtimeSinceStartup(0);
        alphaAnimCnt = this->fields.alphaAnimCnt;
        this->fields.alphaAnimTimeOld = v14;
        v16 = ExRoomQuestBoardListViewManager_TypeInfo;
        v17 = alphaAnimCnt + 1;
        this->fields.alphaAnimCnt = alphaAnimCnt + 1;
        if ( !*(&v16->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v16, v12, v13);
          v16 = ExRoomQuestBoardListViewManager_TypeInfo;
        }
        ALPHA_ANIM_COUNT_RESET_VAL = v16->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
        if ( v17 >= ALPHA_ANIM_COUNT_RESET_VAL )
        {
          v19 = this->fields.alphaAnimCnt;
          if ( !*(&v16->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v16, v12, v13);
            ALPHA_ANIM_COUNT_RESET_VAL = ExRoomQuestBoardListViewManager_TypeInfo->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
          }
          this->fields.alphaAnimCnt = v19 - ALPHA_ANIM_COUNT_RESET_VAL;
        }
        ExRoomQuestBoardListViewManager__OnChangeAlphaAnim(this, v12);
      }
    }
  }
}


void ExRoomQuestBoardListViewManager__UpdateScrollEnabled(
        ExRoomQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *scrollView; // x20
  int v5; // w8
  UnityEngine_Behaviour_o *gameObject; // x0
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x8
  bool CanScrollList; // w8
  _BOOL4 v10; // w20
  __int64 v11; // x2
  bool v12; // w20
  UIScrollView_o *v13; // x20
  UnityEngine_Object_o *scrollBar; // x21
  bool isRight; // [xsp+8h] [xbp-38h] BYREF
  bool isLeft; // [xsp+Ch] [xbp-34h] BYREF
  bool isBottom; // [xsp+18h] [xbp-28h] BYREF
  bool isTop; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_596AE13 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AE13 = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  isTop = 0;
  isBottom = 0;
  v5 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  isLeft = 0;
  isRight = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  gameObject = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Equality(scrollView, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
    return;
  v8 = this->fields.scrollView;
  if ( !v8 )
    goto LABEL_25;
  v8->fields.disableDragIfFits = 1;
  CanScrollList = ListViewManager__GetCanScrollList((ListViewManager_o *)this, &isTop, &isBottom, &isLeft, &isRight, 0);
  gameObject = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( CanScrollList )
  {
    if ( !gameObject )
      goto LABEL_25;
    v10 = isBottom || isTop || isLeft || isRight;
    UnityEngine_Behaviour__set_enabled(gameObject, isBottom || isTop || isLeft || isRight, 0);
    if ( v10 )
    {
      v12 = 1;
      goto LABEL_18;
    }
  }
  else
  {
    if ( !gameObject )
      goto LABEL_25;
    UnityEngine_Behaviour__set_enabled(gameObject, 0, 0);
  }
  gameObject = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !gameObject )
    goto LABEL_25;
  UIScrollView__DisableSpring((UIScrollView_o *)gameObject, 0);
  v13 = this->fields.scrollView;
  if ( !byte_5969AE0 )
  {
    gameObject = (UnityEngine_Behaviour_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v13 )
    goto LABEL_25;
  UIScrollView__set_currentMomentum(v13, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  v12 = 0;
LABEL_18:
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v11);
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0, 0) )
  {
    gameObject = (UnityEngine_Behaviour_o *)this->fields.scrollBar;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)gameObject,
                                                0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v12, 0);
        return;
      }
    }
LABEL_25:
    sub_2213CDC(gameObject, v7);
  }
}


float ExRoomQuestBoardListViewManager__get_AlphaAnimNow(
        ExRoomQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.alphaAnimNow;
}


int64_t ExRoomQuestBoardListViewManager__get_ListCreatedTime(
        ExRoomQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.listCreatedTime;
}


System_Collections_Generic_List_ExRoomQuestBoardListViewObject__o *ExRoomQuestBoardListViewManager__get_ObjectList(
        ExRoomQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596AE10 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ExRoomQuestBoardListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_ExRoomQuestBoardListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ExRoomQuestBoardListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ExRoomQuestBoardListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AE10 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ExRoomQuestBoardListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ExRoomQuestBoardListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ExRoomQuestBoardListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_ExRoomQuestBoardListViewObject__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_2213CDC(Component_object, Component_object);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v18, v12, v13, v14, v15, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ExRoomQuestBoardListViewObject__o *)v3;
}


void ExRoomQuestBoardListViewManager___c__DisplayClass16_0___ctor(
        ExRoomQuestBoardListViewManager___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ExRoomQuestBoardListViewManager___c__DisplayClass16_0___CreateList_b__0(
        ExRoomQuestBoardListViewManager___c__DisplayClass16_0_o *this,
        ListViewItem_o *n,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ListViewItem_o *v4; // x19
  ExRoomQuestBoardListViewManager___c__DisplayClass16_0_o *v5; // x20
  __int64 naturalAligment; // x9
  ListViewItem_c *klass; // x8

  v4 = n;
  v5 = this;
  if ( (byte_596AE1D & 1) == 0 )
  {
    this = (ExRoomQuestBoardListViewManager___c__DisplayClass16_0_o *)sub_2213A60(&ExRoomQuestBoardListViewItem_TypeInfo);
    byte_596AE1D = 1;
  }
  if ( !v4 )
LABEL_9:
    sub_2213CDC(this, n);
  n = (ListViewItem_o *)ExRoomQuestBoardListViewItem_TypeInfo;
  naturalAligment = ExRoomQuestBoardListViewItem_TypeInfo->_2.naturalAligment;
  if ( v4->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (ExRoomQuestBoardListViewItem_c *)v4->klass->_2.typeHierarchy[naturalAligment - 1] != ExRoomQuestBoardListViewItem_TypeInfo )
  {
    this = (ExRoomQuestBoardListViewManager___c__DisplayClass16_0_o *)sub_221405C(
                                                                        v4,
                                                                        ExRoomQuestBoardListViewItem_TypeInfo,
                                                                        method,
                                                                        v3);
    goto LABEL_9;
  }
  klass = v4[1].klass;
  if ( !klass )
    goto LABEL_9;
  return LODWORD(klass->_1.name) == v5->fields.focusQuestId;
}