void __fastcall SvtEqCombineListViewManager___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  struct SvtEqCombineListViewManager_StaticFields *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_4390FC9 & 1) == 0 )
  {
    sub_B775C4(&SvtEqCombineListViewManager_TypeInfo);
    sub_B775C4(&StringLiteral_13425/*"SvtEqCombine"*/);
    byte_4390FC9 = 1;
  }
  SvtEqCombineListViewManager_TypeInfo->static_fields->COLOR_VAL = 0.375;
  SvtEqCombineListViewManager_TypeInfo->static_fields->FILTER2_MAX_KIND_NUM = 1;
  static_fields = SvtEqCombineListViewManager_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_13425/*"SvtEqCombine"*/;
  static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_13425/*"SvtEqCombine"*/;
  sub_B77560((BattleServantConfConponent_o *)&static_fields->SORT_SAVE_KEY, v8, v1, v2, v3, v4, v5, v6);
  SvtEqCombineListViewManager_TypeInfo->static_fields->isInitSystem = 0;
}


void __fastcall SvtEqCombineListViewManager___ctor(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4390FC8 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
    sub_B775C4(&System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo);
    byte_4390FC8 = 1;
  }
  this->fields.selectMax = 20;
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
  this->fields.tempMtSvtList = (struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.tempMtSvtList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall SvtEqCombineListViewManager__CancelDragEnd(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t dragStartIndex; // w20
  int32_t dragEndIndex; // w21

  dragStartIndex = this->fields.dragStartIndex;
  if ( (dragStartIndex & 0x80000000) == 0 )
  {
    dragEndIndex = this->fields.dragEndIndex;
    if ( dragStartIndex <= dragEndIndex )
    {
      do
        SvtEqCombineListViewManager__CancelDragSelect(this, dragStartIndex++, v2);
      while ( dragStartIndex <= this->fields.dragEndIndex );
    }
    else
    {
      do
        SvtEqCombineListViewManager__CancelDragSelect(this, dragEndIndex++, v2);
      while ( dragEndIndex <= this->fields.dragStartIndex );
    }
  }
  SvtEqCombineListViewManager__RefrashListDisp(this, method);
  this->fields.dragEndIndex = -1;
  *(_QWORD *)&this->fields.dragSelectSum = 0xFFFFFFFF00000000LL;
  this->fields.isDragSelect = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__CancelDragSelect(
        SvtEqCombineListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  SvtEqCombineListViewManager_o *v4; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x20
  __int64 v6; // x9
  SvtEqCombineListViewManager_o *v7; // x0
  const MethodInfo *v8; // x1

  v4 = this;
  if ( (byte_4390FC7 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (SvtEqCombineListViewManager_o *)sub_B775C4(&SvtEqCombineListViewItem_TypeInfo);
    byte_4390FC7 = 1;
  }
  itemSortList = v4->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_10;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  this = (SvtEqCombineListViewManager_o *)itemSortList->fields._items->m_Items[index];
  if ( !this )
LABEL_10:
    sub_B7769C(this, *(_QWORD *)&index);
  v6 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v6
    && (SvtEqCombineListViewItem_c *)this->klass->_2.typeHierarchy[v6 - 1] == SvtEqCombineListViewItem_TypeInfo )
  {
    LODWORD(this->fields.rightItem) = -1;
  }
  else
  {
    sub_B77990(this);
    SvtEqCombineListViewManager___ctor(v7, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SvtEqCombineListViewManager__CheckCompareQp(
        SvtEqCombineListViewManager_o *this,
        int32_t nowCombineQp,
        const MethodInfo *method)
{
  int v3; // w19
  SvtEqCombineListViewManager_o *v4; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  int size; // w22
  unsigned int v7; // w23
  ListViewItem_o *v8; // x21
  __int64 v9; // x9
  SvtEqCombineListViewManager_o *v11; // x0
  int32_t *v12; // x1
  int32_t *v13; // x2
  int32_t v14; // w3
  const MethodInfo *v15; // x4

  v3 = nowCombineQp;
  v4 = this;
  if ( (byte_4390F93 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (SvtEqCombineListViewManager_o *)sub_B775C4(&SvtEqCombineListViewItem_TypeInfo);
    byte_4390F93 = 1;
  }
  if ( !v4->fields.selectSum )
    return v3;
  itemList = v4->fields.itemList;
  if ( !itemList )
LABEL_20:
    sub_B7769C(this, *(_QWORD *)&nowCombineQp);
  size = itemList->fields._size;
  if ( size < 1 )
    return v3;
  v7 = 0;
  while ( 1 )
  {
    if ( itemList->fields._size <= v7 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v8 = itemList->fields._items->m_Items[v7];
    if ( !v8 )
      goto LABEL_20;
    v9 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v8->klass->_2.bitflags2 + 1) < (unsigned int)v9
      || (SvtEqCombineListViewItem_c *)v8->klass->_2.typeHierarchy[v9 - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    this = (SvtEqCombineListViewManager_o *)ListViewItem__get_IsSelect(v8, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 && BYTE1(v8[1].fields.sortValue1) )
    {
      this = (SvtEqCombineListViewManager_o *)v8[1].monitor;
      if ( !this )
        goto LABEL_20;
      this = (SvtEqCombineListViewManager_o *)UserServantEntity__getCombineQpSvtEq((UserServantEntity_o *)this, 0LL);
      if ( v3 < (int)this )
      {
        this = (SvtEqCombineListViewManager_o *)v8[1].monitor;
        if ( !this )
          goto LABEL_20;
        this = (SvtEqCombineListViewManager_o *)UserServantEntity__getCombineQpSvtEq((UserServantEntity_o *)this, 0LL);
        v3 = (int)this;
      }
    }
    if ( (int)++v7 >= size )
      return v3;
    itemList = v4->fields.itemList;
    if ( !itemList )
      goto LABEL_20;
  }
  sub_B77990(v8);
  return SvtEqCombineListViewManager__CheckIncrementLv(v11, v12, v13, v14, v15);
}


void __fastcall SvtEqCombineListViewManager__CheckDragMax(
        SvtEqCombineListViewManager_o *this,
        bool *isMaxLvSelected,
        const MethodInfo *method)
{
  void *itemList; // x0
  int v6; // w24
  int32_t v7; // w21
  SvtEqCombineListViewItem_o *current; // x22
  __int64 v9; // x9
  __int64 v10; // x1
  UserServantEntity_o *baseUsrSvtData; // x0
  const MethodInfo *v12; // x1
  UserServantEntity_o *v13; // x0
  _BOOL8 v14; // x0
  __int64 v15; // x1
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *combineEventList; // x0
  int32_t v18; // w25
  _BOOL8 v19; // x0
  __int64 v20; // x1
  struct UserServantEntity_o *v21; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v22; // x21
  __int64 v23; // x22
  __int64 v24; // x23
  int32_t v25; // w8
  int32_t v26; // w23
  int v27; // w22
  const MethodInfo *v28; // x4
  int32_t LevelMax; // w21
  int32_t v30; // w8
  int v31; // w21
  int32_t v32; // w22
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+8h] [xbp-A8h] BYREF
  int v34[2]; // [xsp+20h] [xbp-90h]
  int v35; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+30h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+50h] [xbp-60h] BYREF
  int32_t increLv[2]; // [xsp+78h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_4390F95 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&SvtEqCombineListViewItem_TypeInfo);
    byte_4390F95 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  memset(&v36, 0, sizeof(v36));
  v35 = 0;
  *isMaxLvSelected = 0;
  *(_QWORD *)increLv = 0LL;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_52;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v33,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v37 = v33;
  v6 = 0;
  v7 = 0;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v37,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v14 )
      break;
    current = (SvtEqCombineListViewItem_o *)v37.fields.current;
    if ( !v37.fields.current )
      goto LABEL_48;
    v9 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v37.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v9
      || (SvtEqCombineListViewItem_c *)v37.fields.current->klass->_2.typeHierarchy[v9 - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      sub_B77990(v37.fields.current);
LABEL_48:
      sub_B7769C(v14, v15);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v37.fields.current, 0LL) || current->fields.dragSelectNum >= 1 )
    {
      baseUsrSvtData = this->fields.baseUsrSvtData;
      if ( !baseUsrSvtData )
        sub_B7769C(0LL, v10);
      if ( !UserServantEntity__isLevelMax(baseUsrSvtData, 0LL) )
        goto LABEL_15;
      v13 = this->fields.baseUsrSvtData;
      if ( !v13 )
        sub_B7769C(0LL, v12);
      if ( UserServantEntity__isLevelMax(v13, 0LL) && current->fields.isLimitCntTarget )
      {
LABEL_15:
        v7 += current->fields.materialExp;
        v6 += SvtEqCombineListViewItem__get_GetAddTotalExp(current, v12);
      }
    }
  }
  v34[0] = 144;
  v35 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v37,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  v35 = 0;
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_52;
  combineEventList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)menuListCtr->fields.combineEventList;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v33,
      combineEventList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v36 = v33;
LABEL_21:
    v18 = v7;
    while ( 1 )
    {
      v19 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v36,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v19 )
        break;
      if ( !v36.fields.current )
        sub_B7769C(v19, v20);
      if ( HIDWORD(v36.fields.current[1].klass) == 17 )
      {
        v7 = UnityEngine_Mathf__CeilToInt(*(float *)&v36.fields.current[3].monitor * (float)v7, 0LL);
        goto LABEL_21;
      }
    }
    v34[0] = 243;
    v31 = ++v35;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v36,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    if ( v31 && v34[v31 - 1] == 243 )
      v35 = v31 - 1;
  }
  else
  {
    v18 = v7;
  }
  if ( this->fields.baseUsrSvtData && this->fields.itemType == 1 )
  {
    itemList = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( itemList )
    {
      itemList = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   (DataManager_o *)itemList,
                   (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
      v21 = this->fields.baseUsrSvtData;
      if ( v21 )
      {
        v22 = (DataMasterBase_WarMaster__WarEntity__int__o *)itemList;
        v24 = *(_QWORD *)&v21->fields.svtId.fields.currentCryptoKey;
        v23 = *(_QWORD *)&v21->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v39.fields.currentCryptoKey = v24;
        *(_QWORD *)&v39.fields.fakeValue = v23;
        itemList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v39, 0LL);
        if ( v22 )
        {
          itemList = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       v22,
                       (int32_t)itemList,
                       (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( itemList )
          {
            v25 = *((_DWORD *)itemList + 33);
            itemList = this->fields.baseUsrSvtData;
            this->fields.expType = v25;
            if ( itemList )
            {
              v27 = *((_DWORD *)itemList + 65);
              increLv[0] = *((_DWORD *)itemList + 64);
              v26 = increLv[0];
              LevelMax = UserServantEntity__getLevelMax((UserServantEntity_o *)itemList, 0LL);
              if ( v26 == LevelMax )
              {
                v30 = 0;
              }
              else
              {
                v32 = v18 + v6 + v27;
                while ( !SvtEqCombineListViewManager__CheckIncrementLv(this, increLv, &increLv[1], v32, v28) )
                  ;
                v30 = increLv[1];
              }
              *isMaxLvSelected = v30 >= LevelMax;
              return;
            }
          }
        }
      }
    }
LABEL_52:
    sub_B7769C(itemList, isMaxLvSelected);
  }
}


bool __fastcall SvtEqCombineListViewManager__CheckIncrementLv(
        SvtEqCombineListViewManager_o *this,
        int32_t *checkLv,
        int32_t *increLv,
        int32_t totalExp,
        const MethodInfo *method)
{
  void *baseUsrSvtData; // x0
  int32_t LevelMax; // w0
  int32_t v11; // w8
  int32_t v12; // w8
  bool result; // w0

  if ( (byte_4390F96 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4390F96 = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_16;
  LevelMax = UserServantEntity__getLevelMax((UserServantEntity_o *)baseUsrSvtData, 0LL);
  if ( *checkLv >= LevelMax )
  {
    *increLv = LevelMax;
    return 1;
  }
  baseUsrSvtData = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUsrSvtData
    || (baseUsrSvtData = DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)baseUsrSvtData,
                           (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
    || (baseUsrSvtData = ServantExpMaster__GetEntity(
                           (ServantExpMaster_o *)baseUsrSvtData,
                           this->fields.expType,
                           *checkLv,
                           0LL)) == 0LL )
  {
LABEL_16:
    sub_B7769C(baseUsrSvtData, checkLv);
  }
  v11 = *((_DWORD *)baseUsrSvtData + 6);
  if ( v11 <= totalExp )
  {
    if ( v11 != totalExp )
    {
      result = 0;
      ++*checkLv;
      return result;
    }
    v12 = *((_DWORD *)baseUsrSvtData + 5) + 1;
  }
  else
  {
    v12 = *((_DWORD *)baseUsrSvtData + 5);
  }
  *increLv = v12;
  return 1;
}


bool __fastcall SvtEqCombineListViewManager__CheckIsMaterialSelectSvt(
        SvtEqCombineListViewManager_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *selectedMtSvtList_k__BackingField; // x0
  const MethodInfo *v6; // x1
  char v7; // w19
  int v8; // w20
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4390FB0 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__);
    byte_4390FB0 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  selectedMtSvtList_k__BackingField = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields._selectedMtSvtList_k__BackingField;
  if ( selectedMtSvtList_k__BackingField )
  {
    if ( selectedMtSvtList_k__BackingField->fields._size < 1 )
    {
      LOBYTE(selectedMtSvtList_k__BackingField) = 0;
    }
    else
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v10,
        selectedMtSvtList_k__BackingField,
        (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v10,
                (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__) )
      {
        if ( !v10.fields.current )
          sub_B7769C(0LL, v6);
        if ( SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)v10.fields.current, v6) == usrSvtId )
        {
          v7 = 1;
          v8 = 2;
          goto LABEL_11;
        }
      }
      v8 = 0;
      v7 = 0;
LABEL_11:
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v10,
        (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
      LOBYTE(selectedMtSvtList_k__BackingField) = (v8 == 2) & v7;
    }
  }
  return (char)selectedMtSvtList_k__BackingField;
}


bool __fastcall SvtEqCombineListViewManager__CheckIsSelectMaterial(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.isSelectMaterial;
}


bool __fastcall SvtEqCombineListViewManager__CheckMaterialEquipped(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  SvtEqCombineListViewManager_o *v2; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  int size; // w21
  unsigned int v5; // w22
  ListViewItem_o *v6; // x20
  __int64 v7; // x9
  SvtEqCombineListViewManager_o *v9; // x0
  const MethodInfo *v10; // x1

  v2 = this;
  if ( (byte_4390FA4 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (SvtEqCombineListViewManager_o *)sub_B775C4(&SvtEqCombineListViewItem_TypeInfo);
    byte_4390FA4 = 1;
  }
  itemList = v2->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_B7769C(this, method);
  size = itemList->fields._size;
  if ( size < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( itemList->fields._size <= v5 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v6 = itemList->fields._items->m_Items[v5];
    if ( !v6 )
      goto LABEL_16;
    v7 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v7
      || (SvtEqCombineListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    this = (SvtEqCombineListViewManager_o *)ListViewItem__get_IsSelect(v6, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 && (LOBYTE(v6[1].fields.basePosition.fields.x) || LOBYTE(v6[2].fields.index)) )
      return 1;
    if ( (int)++v5 >= size )
      return 0;
    itemList = v2->fields.itemList;
    if ( !itemList )
      goto LABEL_16;
  }
  sub_B77990(v6);
  return (unsigned __int8)SvtEqCombineListViewManager__GetSelectedMaterialList(v9, v10);
}


void __fastcall SvtEqCombineListViewManager__ClearSelectedSvtList(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *selectedMtSvtList_k__BackingField; // x0

  if ( (byte_4390FA8 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__);
    byte_4390FA8 = 1;
  }
  selectedMtSvtList_k__BackingField = this->fields._selectedMtSvtList_k__BackingField;
  if ( selectedMtSvtList_k__BackingField )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)selectedMtSvtList_k__BackingField,
      (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__CloseServantCheckEquipDialog(
        SvtEqCombineListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantCheckEquipDialog_o *servantEquipCheckDialog; // x0
  const MethodInfo *v6; // x1

  servantEquipCheckDialog = this->fields.servantEquipCheckDialog;
  if ( !servantEquipCheckDialog )
    goto LABEL_6;
  ServantCheckEquipDialog__Close(servantEquipCheckDialog, 0LL);
  if ( isDecide )
  {
    SvtEqCombineListViewManager__SetSelectedMaterialInfo(this, v6);
    servantEquipCheckDialog = (ServantCheckEquipDialog_o *)this->fields.combineRootComponent;
    if ( servantEquipCheckDialog )
    {
      CombineRootComponent__SetSelectSvtEqMaterialList((CombineRootComponent_o *)servantEquipCheckDialog, 0LL);
      return;
    }
LABEL_6:
    sub_B7769C(servantEquipCheckDialog, isDecide);
  }
}


void __fastcall SvtEqCombineListViewManager__CreateList(
        SvtEqCombineListViewManager_o *this,
        int32_t type,
        int32_t modeKind,
        EventUpValSetupInfo_o *setupInfo,
        EventUpValSetupInfo_o *finishSetupInfo,
        const MethodInfo *method)
{
  SvtEqCombineListViewManager_c *v11; // x0
  ListViewSort_o *bgTxtSprite; // x0
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct ListViewSort_array *sortStatusList; // x8
  struct ListViewSort_o *v21; // x1
  struct ListViewSort_o **p_sort; // x22
  UnityEngine_GameObject_o *gameObject; // x25
  System_Int32_array **p_bonusEventIdList; // x25
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **p_bonusFinishEventIdList; // x26
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct ListViewSort_o *sort; // x8
  System_Int32_array **servantEquipFilterEventIdList; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x1
  struct ListViewSort_o *v53; // x8
  struct System_Int32_array *v54; // x9
  __int64 v55; // x10
  bool v56; // w9
  struct System_Int32_array *v57; // x9
  const MethodInfo *v58; // x2
  const MethodInfo *v59; // x2
  const MethodInfo *v60; // x4
  UILabel_o *spendQpInfoLabel; // x23
  UILabel_o *getExpInfoLabel; // x23
  const MethodInfo *v63; // x2
  const MethodInfo *v64; // x4
  const MethodInfo *v65; // x2
  __int64 v66; // x0

  if ( (byte_4390F8D & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&SvtEqCombineListViewManager_TypeInfo);
    sub_B775C4(&StringLiteral_7012/*"GET_EXP_INFO"*/);
    sub_B775C4(&StringLiteral_9440/*"NEED_QP_INFO"*/);
    byte_4390F8D = 1;
  }
  this->fields.currentType = type;
  v11 = SvtEqCombineListViewManager_TypeInfo;
  if ( (BYTE3(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
  }
  SvtEqCombineListViewManager__CreateSorteData((const MethodInfo *)v11);
  sortStatusList = SvtEqCombineListViewManager_TypeInfo->static_fields->sortStatusList;
  if ( !sortStatusList )
    goto LABEL_53;
  if ( sortStatusList->max_length <= type )
  {
    v66 = sub_B776C8(bgTxtSprite);
    sub_B77668(v66, 0LL);
  }
  v21 = sortStatusList->m_Items[type];
  this->fields.sort = v21;
  p_sort = &this->fields.sort;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v21,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  if ( !this->fields.sort )
    goto LABEL_53;
  this->fields.sort->fields.listViewKind = 1;
  bgTxtSprite = *p_sort;
  if ( !*p_sort )
    goto LABEL_53;
  ListViewSort__Load(bgTxtSprite, 0LL);
  this->fields.dragEndIndex = -1;
  *(_QWORD *)&this->fields.dragSelectSum = 0xFFFFFFFF00000000LL;
  bgTxtSprite = (ListViewSort_o *)this->fields.bgTxtSprite;
  this->fields.isDragSelect = 1;
  if ( !bgTxtSprite )
    goto LABEL_53;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgTxtSprite, 0LL);
  bgTxtSprite = (ListViewSort_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !gameObject )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0LL);
  p_bonusEventIdList = &this->fields.bonusEventIdList;
  this->fields.bonusEventIdList = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.bonusEventIdList, 0LL, v25, v26, v27, v28, v29, v30);
  p_bonusFinishEventIdList = &this->fields.bonusFinishEventIdList;
  this->fields.bonusFinishEventIdList = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.bonusFinishEventIdList, 0LL, v32, v33, v34, v35, v36, v37);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_53;
  sort->fields.isBonusKind = 0;
  if ( setupInfo )
    servantEquipFilterEventIdList = (System_Int32_array **)setupInfo->fields.servantEquipFilterEventIdList;
  else
    servantEquipFilterEventIdList = 0LL;
  *p_bonusEventIdList = (System_Int32_array *)servantEquipFilterEventIdList;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.bonusEventIdList,
    servantEquipFilterEventIdList,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  if ( finishSetupInfo )
    v52 = (System_Int32_array **)finishSetupInfo->fields.servantEquipFilterEventIdList;
  else
    v52 = 0LL;
  *p_bonusFinishEventIdList = (System_Int32_array *)v52;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.bonusFinishEventIdList, v52, v46, v47, v48, v49, v50, v51);
  v53 = *p_sort;
  if ( setupInfo )
  {
    v54 = setupInfo->fields.servantEquipFilterEventIdList;
    if ( !v54 )
      goto LABEL_53;
    v55 = *(_QWORD *)&v54->max_length;
    v56 = v55 != 0;
    if ( v55 || !finishSetupInfo )
      goto LABEL_27;
    goto LABEL_25;
  }
  if ( finishSetupInfo )
  {
LABEL_25:
    v57 = finishSetupInfo->fields.servantEquipFilterEventIdList;
    if ( !v57 )
      goto LABEL_53;
    v56 = v57->max_length != 0;
LABEL_27:
    if ( !v53 )
      goto LABEL_53;
    goto LABEL_28;
  }
  v56 = 0;
  if ( !v53 )
    goto LABEL_53;
LABEL_28:
  v53->fields.isBonusKind = v56;
  bgTxtSprite = *p_sort;
  if ( !*p_sort )
    goto LABEL_53;
  if ( bgTxtSprite->fields.isBonusKind )
    ListViewSort__AlignBonusKind2(bgTxtSprite, *p_bonusEventIdList, 0LL, 0LL, 0LL, *p_bonusFinishEventIdList, 0LL);
  bgTxtSprite = (ListViewSort_o *)this->fields.scaleChangeButton;
  if ( !bgTxtSprite )
    goto LABEL_53;
  bgTxtSprite = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgTxtSprite, 0LL);
  if ( !bgTxtSprite )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgTxtSprite, 1, 0LL);
  if ( !type )
  {
    SvtEqCombineListViewManager__SetDispActive(this, 0, v58);
    SvtEqCombineListViewManager__SetBtnEnable(this, 0, v63);
    SvtEqCombineListViewManager__SetServantList(this, 0, setupInfo, finishSetupInfo, v64);
    bgTxtSprite = (ListViewSort_o *)this->fields.selectInfoLabel;
    if ( bgTxtSprite )
    {
      bgTxtSprite = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgTxtSprite, 0LL);
      if ( bgTxtSprite )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgTxtSprite, 0, 0LL);
        goto LABEL_47;
      }
    }
    goto LABEL_53;
  }
  if ( type == 1 )
  {
    SvtEqCombineListViewManager__SetDispActive(this, 1, v58);
    SvtEqCombineListViewManager__SetBtnEnable(this, 0, v59);
    this->fields.selectMax = 20;
    SvtEqCombineListViewManager__SetServantList(this, 1, setupInfo, finishSetupInfo, v60);
    bgTxtSprite = (ListViewSort_o *)this->fields.selectInfoLabel;
    if ( bgTxtSprite )
    {
      bgTxtSprite = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgTxtSprite, 0LL);
      if ( bgTxtSprite )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgTxtSprite, 1, 0LL);
        bgTxtSprite = (ListViewSort_o *)this->fields.getExpInfo;
        if ( bgTxtSprite )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgTxtSprite, 1, 0LL);
          spendQpInfoLabel = this->fields.spendQpInfoLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          bgTxtSprite = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9440/*"NEED_QP_INFO"*/, 0LL);
          if ( spendQpInfoLabel )
          {
            UILabel__set_text(spendQpInfoLabel, (System_String_o *)bgTxtSprite, 0LL);
            getExpInfoLabel = this->fields.getExpInfoLabel;
            bgTxtSprite = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7012/*"GET_EXP_INFO"*/, 0LL);
            if ( getExpInfoLabel )
            {
              UILabel__set_text(getExpInfoLabel, (System_String_o *)bgTxtSprite, 0LL);
              goto LABEL_47;
            }
          }
        }
      }
    }
LABEL_53:
    sub_B7769C(bgTxtSprite, v13);
  }
LABEL_47:
  bgTxtSprite = (ListViewSort_o *)this->fields.bonusFilterKindButton;
  if ( !bgTxtSprite )
    goto LABEL_53;
  bgTxtSprite = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgTxtSprite, 0LL);
  if ( !*p_sort || !bgTxtSprite )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgTxtSprite, (*p_sort)->fields.isBonusKind, 0LL);
  SvtEqCombineListViewManager__SetStatusKind(this, modeKind, v65);
  if ( !type )
    EventTutorialMaster__CheckTutorial(-1, 57, 0LL, 0, 0, 0, 0, 0LL);
}


void __fastcall SvtEqCombineListViewManager__CreateSorteData(const MethodInfo *method)
{
  SvtEqCombineListViewManager_c *v1; // x0
  __int64 v2; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  SvtEqCombineListViewManager_c *v9; // x8
  System_Int32_array **v10; // x19
  struct SvtEqCombineListViewManager_StaticFields *static_fields; // x0
  SvtEqCombineListViewManager_c *v12; // x0
  __int64 v13; // x9
  int v14; // w8
  unsigned __int64 v15; // x23
  struct SvtEqCombineListViewManager_StaticFields *v16; // x8
  unsigned int *sortStatusList; // x24
  System_String_o *SORT_SAVE_KEY; // x19
  System_String_o *v19; // x0
  System_String_o *v20; // x20
  ListViewSort_o *v21; // x19
  __int64 v22; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  unsigned int *v30; // x0
  unsigned int v31; // w10
  __int64 v32; // x0
  __int64 v33; // x0
  int v34; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4390F88 & 1) == 0 )
  {
    sub_B775C4(&ListViewSort___TypeInfo);
    sub_B775C4(&ListViewSort_TypeInfo);
    sub_B775C4(&SvtEqCombineListViewManager_TypeInfo);
    byte_4390F88 = 1;
  }
  v34 = 0;
  v1 = SvtEqCombineListViewManager_TypeInfo;
  if ( (BYTE3(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
    v1 = SvtEqCombineListViewManager_TypeInfo;
  }
  if ( !v1->static_fields->isInitSystem )
  {
    v2 = sub_B775DC(ListViewSort___TypeInfo, 2LL);
    v9 = SvtEqCombineListViewManager_TypeInfo;
    v10 = (System_Int32_array **)v2;
    if ( (BYTE3(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
      v9 = SvtEqCombineListViewManager_TypeInfo;
    }
    static_fields = v9->static_fields;
    static_fields->sortStatusList = (struct ListViewSort_array *)v10;
    sub_B77560((BattleServantConfConponent_o *)&static_fields->sortStatusList, v10, v3, v4, v5, v6, v7, v8);
    v12 = SvtEqCombineListViewManager_TypeInfo;
    v13 = 0LL;
    v14 = (BYTE3(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr) >> 2) & 1;
    do
    {
      v15 = v13;
      if ( (v14 & 1) != 0 && !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = SvtEqCombineListViewManager_TypeInfo;
      }
      v16 = v12->static_fields;
      sortStatusList = (unsigned int *)v16->sortStatusList;
      SORT_SAVE_KEY = v16->SORT_SAVE_KEY;
      v34 = v15 + 1;
      v19 = System_Int32__ToString((int32_t)&v34, 0LL);
      v20 = System_String__Concat_44901936(SORT_SAVE_KEY, v19, 0LL);
      v21 = (ListViewSort_o *)sub_B77694(ListViewSort_TypeInfo);
      ListViewSort___ctor_34308400(v21, v20, 3, 0, 0LL);
      if ( !sortStatusList )
        sub_B7769C(v22, v23);
      if ( v21 )
      {
        v22 = sub_B77684(v21, *(_QWORD *)(*(_QWORD *)sortStatusList + 64LL));
        if ( !v22 )
        {
          v33 = sub_B776BC(0LL);
          sub_B77668(v33, 0LL);
        }
      }
      if ( v15 >= sortStatusList[6] )
      {
        v32 = sub_B776C8(v22);
        sub_B77668(v32, 0LL);
      }
      v30 = &sortStatusList[2 * v15];
      *((_QWORD *)v30 + 4) = v21;
      sub_B77560((BattleServantConfConponent_o *)(v30 + 8), (System_Int32_array **)v21, v24, v25, v26, v27, v28, v29);
      v12 = SvtEqCombineListViewManager_TypeInfo;
      v13 = 1LL;
      v31 = WORD1(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
      v14 = (v31 >> 10) & 1;
    }
    while ( !v15 );
    if ( (v31 & 0x400) != 0 && !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
      v12 = SvtEqCombineListViewManager_TypeInfo;
    }
    v12->static_fields->isInitSystem = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__DecideDragSelect(
        SvtEqCombineListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  SvtEqCombineListViewManager_o *v4; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x21
  ListViewItem_o *v6; // x19
  __int64 v7; // x9
  _BOOL4 isDragSelect; // w21
  bool IsSelect; // w0
  int32_t selectSum; // w8
  int32_t selectNum; // w21
  int32_t klass; // w9
  _BOOL8 v13; // x0
  __int64 v14; // x1
  void *v15; // x0
  int v16; // w1
  __int64 v17; // x20
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4390FC6 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (SvtEqCombineListViewManager_o *)sub_B775C4(&SvtEqCombineListViewItem_TypeInfo);
    byte_4390FC6 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  itemSortList = v4->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_24;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  v6 = itemSortList->fields._items->m_Items[index];
  if ( !v6 )
    goto LABEL_24;
  v7 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) >= (unsigned int)v7
    && (SvtEqCombineListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] == SvtEqCombineListViewItem_TypeInfo )
  {
    if ( v6[2].fields.sortIndex < 1 )
      goto LABEL_22;
    isDragSelect = v4->fields.isDragSelect;
    IsSelect = ListViewItem__get_IsSelect(v6, 0LL);
    if ( isDragSelect )
    {
      if ( !IsSelect )
      {
        selectSum = v4->fields.selectSum;
        if ( selectSum < v4->fields.selectMax )
        {
          v6->fields.selectNum = selectSum;
          ++v4->fields.selectSum;
        }
      }
      goto LABEL_22;
    }
    if ( !IsSelect )
      goto LABEL_22;
    selectNum = v6->fields.selectNum;
    ListViewItem__set_IsSelect(v6, 0, 0LL);
    BYTE2(v6[1].fields.sortStr1) = 0;
    this = (SvtEqCombineListViewManager_o *)v4->fields.itemList;
    --v4->fields.selectSum;
    if ( this )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v18,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
        (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( 1 )
      {
        v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v18,
                (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v13 )
          break;
        if ( !v18.fields.current )
          sub_B7769C(v13, v14);
        klass = (int32_t)v18.fields.current[1].klass;
        if ( klass > selectNum )
          LODWORD(v18.fields.current[1].klass) = klass - 1;
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v18,
        (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      goto LABEL_22;
    }
LABEL_24:
    sub_B7769C(this, *(_QWORD *)&index);
  }
  sub_B77990(v6);
  if ( v16 != 1 )
    _Unwind_Resume(v15);
  v17 = *(_QWORD *)__cxa_begin_catch(v15);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( v17 )
    sub_B77668(v17, 0LL);
LABEL_22:
  v6[2].fields.sortIndex = -1;
}


void __fastcall SvtEqCombineListViewManager__DeleteContinueData(const MethodInfo *method)
{
  SvtEqCombineListViewManager_c *v1; // x0
  __int64 v2; // x1
  int v3; // w8
  ListViewSort_o *v4; // x0
  unsigned int v5; // w20
  const char *namespaze; // x8
  __int64 v7; // x0

  if ( (byte_4390F89 & 1) == 0 )
  {
    sub_B775C4(&SvtEqCombineListViewManager_TypeInfo);
    byte_4390F89 = 1;
  }
  v1 = SvtEqCombineListViewManager_TypeInfo;
  if ( (BYTE3(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
  }
  SvtEqCombineListViewManager__CreateSorteData((const MethodInfo *)v1);
  v3 = 0;
  do
  {
    v4 = (ListViewSort_o *)SvtEqCombineListViewManager_TypeInfo;
    v5 = v3;
    if ( (BYTE3(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
      v4 = (ListViewSort_o *)SvtEqCombineListViewManager_TypeInfo;
    }
    namespaze = v4[1].klass->_1.namespaze;
    if ( !namespaze )
      goto LABEL_15;
    if ( v5 >= *((_DWORD *)namespaze + 6) )
    {
      v7 = sub_B776C8(v4);
      sub_B77668(v7, 0LL);
    }
    v4 = *(ListViewSort_o **)&namespaze[8 * v5 + 32];
    if ( !v4 )
LABEL_15:
      sub_B7769C(v4, v2);
    ListViewSort__DeleteContinueData(v4, 0LL);
    v3 = 1;
  }
  while ( !v5 );
}


void __fastcall SvtEqCombineListViewManager__DestroyList(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_B7769C(0LL, v3);
  ListViewSort__Save(sort, 0LL);
  this->fields.bonusEventIdList = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.bonusEventIdList, 0LL, v5, v6, v7, v8, v9, v10);
  this->fields.bonusFinishEventIdList = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.bonusFinishEventIdList, 0LL, v11, v12, v13, v14, v15, v16);
}


void __fastcall SvtEqCombineListViewManager__EndClickTabChoice(
        SvtEqCombineListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  SvtEqCombineListViewManager__SetStatusKind(this, 2, method);
  SvtEqCombineListViewManager__ReleaseAll(this, v4);
  SvtEqCombineListViewManager__ModifyList(this, 0, v5);
  SvtEqCombineListViewManager__SetMode_35212208(this, 2, v6);
}


void __fastcall SvtEqCombineListViewManager__EndClickTabLock(
        SvtEqCombineListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  SvtEqCombineListViewManager__SetStatusKind(this, 1, method);
  SvtEqCombineListViewManager__ReleaseAll(this, v4);
  SvtEqCombineListViewManager__ModifyList(this, 0, v5);
  SvtEqCombineListViewManager__SetMode_35212208(this, 2, v6);
}


void __fastcall SvtEqCombineListViewManager__EndClickTabStatus(
        SvtEqCombineListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  SvtEqCombineListViewManager__SetStatusKind(this, 0, method);
  SvtEqCombineListViewManager__ModifyList(this, 0, v4);
  SvtEqCombineListViewManager__SetMode_35212208(this, 2, v5);
}


void __fastcall SvtEqCombineListViewManager__EndCloseSelectFilterKind(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall SvtEqCombineListViewManager__EndSelectFilterKind(
        SvtEqCombineListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4390FB2 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_SvtEqCombineListViewManager_EndCloseSelectFilterKind__);
    byte_4390FB2 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    SvtEqCombineListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SvtEqCombineListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_B7769C(v8, v9);
  CommonUI__CloseServantFilterSelectMenu(Instance, v7, 0LL);
}


void __fastcall SvtEqCombineListViewManager__EndSelectSortKind(
        SvtEqCombineListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4390FB7 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4390FB7 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v6);
  CommonUI__CloseServantSortSelectMenu(Instance, 0LL, 0LL);
}


void __fastcall SvtEqCombineListViewManager__EndStatusSync(
        SvtEqCombineListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  SvtEqCombineListViewManager_RequestCallbackFunc_o *requestCallback; // x19
  BattleServantConfConponent_o *p_requestCallback; // x0

  requestCallback = this->fields.requestCallback;
  if ( requestCallback )
  {
    p_requestCallback = (BattleServantConfConponent_o *)&this->fields.requestCallback;
    p_requestCallback->klass = 0LL;
    sub_B77560(p_requestCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    SvtEqCombineListViewManager_RequestCallbackFunc__Invoke(requestCallback, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall SvtEqCombineListViewManager__GetAmountSortValue(
        SvtEqCombineListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  SvtEqCombineListViewManager_o *v4; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  int size; // w22
  int v7; // w23
  int64_t v8; // x21
  __int64 v9; // x9
  SvtEqCombineListViewItem_o *v11; // x0
  ListViewSort_o *v12; // x1
  const MethodInfo *v13; // x2

  v3 = svtId;
  v4 = this;
  if ( (byte_4390FBA & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (SvtEqCombineListViewManager_o *)sub_B775C4(&SvtEqCombineListViewItem_TypeInfo);
    byte_4390FBA = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_B7769C(this, *(_QWORD *)&svtId);
  size = itemList->fields._size;
  if ( size < 1 )
  {
    return 0LL;
  }
  else
  {
    v7 = 0;
    v8 = 0LL;
    while ( 1 )
    {
      if ( itemList->fields._size <= (unsigned int)v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      this = (SvtEqCombineListViewManager_o *)itemList->fields._items->m_Items[v7];
      if ( !this )
        goto LABEL_15;
      *(_QWORD *)&svtId = SvtEqCombineListViewItem_TypeInfo;
      v9 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v9
        || (SvtEqCombineListViewItem_c *)this->klass->_2.typeHierarchy[v9 - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        break;
      }
      ++v7;
      if ( LODWORD(this->fields.clipOffset.fields.x) == v3 )
        ++v8;
      if ( v7 >= size )
        return v8;
      itemList = v4->fields.itemList;
      if ( !itemList )
        goto LABEL_15;
    }
    sub_B77990(this);
    return SvtEqCombineListViewItem__IsMatchFilter(v11, v12, v13);
  }
}


int32_t __fastcall SvtEqCombineListViewManager__GetBaseCollectionLv(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v6; // q1
  UserServantCollectionMaster_o *v7; // x20
  struct UserServantEntity_o *v8; // x8
  int64_t v9; // x19
  __int64 v10; // x21
  __int64 v11; // x22
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4390F98 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4390F98 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_16;
  v6 = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.fakeValue;
  v7 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v15.fields.fakeValue = v6;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v14 = v15;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v14, 0LL);
  v8 = this->fields.baseUsrSvtData;
  if ( !v8 )
    goto LABEL_16;
  v9 = Instance;
  v11 = *(_QWORD *)&v8->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&v8->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v16.fields.currentCryptoKey = v11;
  *(_QWORD *)&v16.fields.fakeValue = v10;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v16, 0LL);
  if ( !v7 )
LABEL_16:
    sub_B7769C(Instance, v4);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v7, v9, Instance, 0LL);
  if ( EntityDefinitely )
    LODWORD(EntityDefinitely) = EntityDefinitely->fields.maxLv;
  return (int)EntityDefinitely;
}


int32_t __fastcall SvtEqCombineListViewManager__GetCombineInfoMsgLbFontSize(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (unsigned int)(this->fields.modeKind - 1) < 2 )
    return 14;
  if ( this->fields.currentType )
    return 12;
  return 20;
}


bool __fastcall SvtEqCombineListViewManager__GetDragSelect(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.isDragSelect;
}


int32_t __fastcall SvtEqCombineListViewManager__GetFriendShipSvtEquipNum(
        SvtEqCombineListViewManager_o *this,
        UserServantEntity_array *list,
        const MethodInfo *method)
{
  signed int max_length; // w8
  signed int v5; // w21
  int32_t v6; // w20
  __int64 v8; // x0

  if ( !list )
    goto LABEL_11;
  max_length = list->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    v6 = 0;
    while ( 1 )
    {
      if ( v5 >= (unsigned int)max_length )
      {
        v8 = sub_B776C8(this);
        sub_B77668(v8, 0LL);
      }
      this = (SvtEqCombineListViewManager_o *)list->m_Items[v5];
      if ( !this )
        break;
      this = (SvtEqCombineListViewManager_o *)UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)this, 0LL);
      max_length = list->max_length;
      ++v5;
      v6 += (unsigned __int8)this & 1;
      if ( v5 >= max_length )
        return v6;
    }
LABEL_11:
    sub_B7769C(this, list);
  }
  return 0;
}


SvtEqCombineListViewItem_o *__fastcall SvtEqCombineListViewManager__GetItem(
        SvtEqCombineListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  SvtEqCombineListViewItem_o *result; // x0
  __int64 v7; // x9

  if ( (byte_4390F99 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&SvtEqCombineListViewItem_TypeInfo);
    byte_4390F99 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  result = (SvtEqCombineListViewItem_o *)itemList->fields._items->m_Items[index];
  if ( result )
  {
    v7 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v7
      || (SvtEqCombineListViewItem_c *)result->klass->_2.typeHierarchy[v7 - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      sub_B77990(result);
      return 0LL;
    }
  }
  return result;
}


UserServantEntity_o *__fastcall SvtEqCombineListViewManager__GetSelectBaseSvtData(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  BattleServantConfConponent_o *p_baseUsrSvtData; // x19
  BattleServantConfConponent_c *klass; // x8
  Il2CppType byval_arg; // q1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v8; // x20
  System_Int32_array **Entity; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-30h]

  if ( (byte_4390F97 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4390F97 = 1;
  }
  if ( !this->fields.baseUsrSvtData )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  p_baseUsrSvtData = (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  klass = p_baseUsrSvtData->klass;
  if ( !p_baseUsrSvtData->klass )
    goto LABEL_13;
  byval_arg = klass->_1.byval_arg;
  v8 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
  *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
  *(Il2CppType *)&v18.fields.fakeValue = byval_arg;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v17 = v18;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v17, 0LL);
  if ( !v8 )
LABEL_13:
    sub_B7769C(Instance, v4);
  Entity = (System_Int32_array **)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                    v8,
                                    (int64_t)Instance,
                                    (const MethodInfo_21FBABC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_baseUsrSvtData->klass = (BattleServantConfConponent_c *)Entity;
  sub_B77560(p_baseUsrSvtData, Entity, v10, v11, v12, v13, v14, v15);
  return (UserServantEntity_o *)p_baseUsrSvtData->klass;
}


SetCombineData_o *__fastcall SvtEqCombineListViewManager__GetSelectCombineData(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.combineData;
}


UserServantEntity_o *__fastcall SvtEqCombineListViewManager__GetSelectUsrSvtEntity(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.selectUsrSvtEntity;
}


System_Collections_Generic_List_SvtEqCombineListViewItem__o *__fastcall SvtEqCombineListViewManager__GetSelectedMaterialList(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  SvtEqCombineListViewManager___c_c *IsSelect; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  int size; // w22
  unsigned int v8; // w23
  ListViewItem_o *v9; // x21
  __int64 v10; // x9
  struct SvtEqCombineListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__139_0; // x21
  Il2CppObject *v13; // x22
  struct SvtEqCombineListViewManager___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  int v21; // w8
  int v22; // w22
  __int64 v23; // x21
  unsigned int v24; // w23
  __int64 v25; // x8
  System_Collections_Generic_List_SvtEqCombineListViewItem__o *result; // x0
  SvtEqCombineListViewManager_o *v27; // x0
  const MethodInfo *v28; // x1

  if ( (byte_4390FA5 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Comparison_SvtEqCombineListViewItem___ctor__);
    sub_B775C4(&System_Comparison_SvtEqCombineListViewItem__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo);
    sub_B775C4(&SvtEqCombineListViewItem_TypeInfo);
    sub_B775C4(&Method_SvtEqCombineListViewManager___c__GetSelectedMaterialList_b__139_0__);
    sub_B775C4(&SvtEqCombineListViewManager___c_TypeInfo);
    byte_4390FA5 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_39;
  size = itemList->fields._size;
  if ( size < 1 )
  {
LABEL_17:
    IsSelect = SvtEqCombineListViewManager___c_TypeInfo;
    if ( (BYTE3(SvtEqCombineListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SvtEqCombineListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager___c_TypeInfo);
      IsSelect = SvtEqCombineListViewManager___c_TypeInfo;
    }
    static_fields = IsSelect->static_fields;
    _9__139_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__139_0;
    if ( !_9__139_0 )
    {
      if ( (BYTE3(IsSelect->vtable._0_Equals.methodPtr) & 4) != 0 && !IsSelect->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(IsSelect);
        static_fields = SvtEqCombineListViewManager___c_TypeInfo->static_fields;
      }
      v13 = (Il2CppObject *)static_fields->__9;
      _9__139_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_SvtEqCombineListViewItem__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__139_0,
        v13,
        Method_SvtEqCombineListViewManager___c__GetSelectedMaterialList_b__139_0__,
        (const MethodInfo_2B42C0C *)Method_System_Comparison_SvtEqCombineListViewItem___ctor__);
      v14 = SvtEqCombineListViewManager___c_TypeInfo->static_fields;
      v14->__9__139_0 = (struct System_Comparison_SvtEqCombineListViewItem__o *)_9__139_0;
      sub_B77560(
        (BattleServantConfConponent_o *)&v14->__9__139_0,
        (System_Int32_array **)_9__139_0,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
    }
    if ( v3 )
    {
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v3,
        (System_Comparison_T__o *)_9__139_0,
        (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Sort__);
      v21 = v3->fields._size;
      if ( v21 < 1 )
        return (System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v3;
      v22 = 0;
      v23 = 4LL;
      while ( 1 )
      {
        v24 = v23 - 4;
        if ( v21 <= (unsigned int)(v23 - 4) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v25 = *((_QWORD *)&v3->fields._items->obj.klass + v23);
        if ( !v25 )
          break;
        if ( *(_DWORD *)(v25 + 156) > v22 )
        {
          if ( v3->fields._size <= v24 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
          v22 = *(_DWORD *)(v25 + 156);
          if ( v3->fields._size <= v24 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
          this->fields.lastSelectIndex = *(_DWORD *)(v25 + 24);
        }
        v21 = v3->fields._size;
        if ( (int)++v23 - 4 >= v21 )
          return (System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v3;
      }
    }
LABEL_39:
    sub_B7769C(IsSelect, v5);
  }
  v8 = 0;
  while ( 1 )
  {
    if ( itemList->fields._size <= v8 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v9 = itemList->fields._items->m_Items[v8];
    if ( !v9 )
      goto LABEL_39;
    v10 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v9->klass->_2.bitflags2 + 1) < (unsigned int)v10
      || (SvtEqCombineListViewItem_c *)v9->klass->_2.typeHierarchy[v10 - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    IsSelect = (SvtEqCombineListViewManager___c_c *)ListViewItem__get_IsSelect(v9, 0LL);
    if ( ((unsigned __int8)IsSelect & 1) != 0 )
    {
      if ( !v3 )
        goto LABEL_39;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Add__);
    }
    if ( (int)++v8 >= size )
      goto LABEL_17;
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_39;
  }
  sub_B77990(v9);
  SvtEqCombineListViewManager__SetSelectedMaterialInfo(v27, v28);
  return result;
}


bool __fastcall SvtEqCombineListViewManager__GetSwapChoiceList(
        SvtEqCombineListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v6; // x23
  System_Collections_Generic_List_long__o *v7; // x22
  int64_t v8; // x0
  SvtEqCombineListViewItem_c *v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  int size; // w24
  unsigned int v18; // w25
  __int64 v19; // x9
  __int64 v20; // x8
  __int128 v21; // q0
  const MethodInfo_30EBD98 *v22; // x2
  int64_t v23; // x1
  System_Collections_Generic_List_long__o *v24; // x0
  __int128 v25; // q0
  System_Int64_array *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int64_array *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  bool result; // w0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  SvtEqCombineListViewManager_o *v47; // x0
  const MethodInfo *v48; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+50h] [xbp-70h]

  if ( (byte_4390FBD & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_long__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_long__TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&SvtEqCombineListViewItem_TypeInfo);
    byte_4390FBD = 1;
  }
  v6 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
  v7 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( size < 1 )
  {
LABEL_28:
    if ( v6 && v7 )
    {
      if ( v7->fields._size + v6->fields._size < 1 )
      {
        *choiceList = 0LL;
        sub_B77560((BattleServantConfConponent_o *)choiceList, 0LL, v10, v11, v12, v13, v14, v15);
        *unchoiceList = 0LL;
        sub_B77560((BattleServantConfConponent_o *)unchoiceList, 0LL, v41, v42, v43, v44, v45, v46);
        return 0;
      }
      else
      {
        v26 = System_Collections_Generic_List_long___ToArray(
                v6,
                (const MethodInfo_30EDEA4 *)Method_System_Collections_Generic_List_long__ToArray__);
        *choiceList = v26;
        sub_B77560((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v26, v27, v28, v29, v30, v31, v32);
        v33 = System_Collections_Generic_List_long___ToArray(
                v7,
                (const MethodInfo_30EDEA4 *)Method_System_Collections_Generic_List_long__ToArray__);
        *unchoiceList = v33;
        sub_B77560(
          (BattleServantConfConponent_o *)unchoiceList,
          (System_Int32_array **)v33,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39);
        return 1;
      }
    }
LABEL_33:
    sub_B7769C(v8, v9);
  }
  v18 = 0;
  while ( 1 )
  {
    if ( itemList->fields._size <= v18 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v8 = (int64_t)itemList->fields._items->m_Items[v18];
    if ( !v8 )
      goto LABEL_33;
    v9 = SvtEqCombineListViewItem_TypeInfo;
    v19 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v8 + 300LL) < (unsigned int)v19
      || *(SvtEqCombineListViewItem_c **)(*(_QWORD *)(*(_QWORD *)v8 + 200LL) + 8 * v19 - 8) != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    v20 = *(_QWORD *)(v8 + 120);
    if ( v20 && *(_BYTE *)(v8 + 246) )
    {
      if ( *(_BYTE *)(v8 + 165) )
      {
        v21 = *(_OWORD *)(v20 + 32);
        *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(v20 + 16);
        *(_OWORD *)&v52.fields.fakeValue = v21;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v51 = v52;
        v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v51, 0LL);
        if ( !v7 )
          goto LABEL_33;
        v22 = (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__;
        v23 = v8;
        v24 = v7;
      }
      else
      {
        v25 = *(_OWORD *)(v20 + 32);
        *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(v20 + 16);
        *(_OWORD *)&v52.fields.fakeValue = v25;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v50 = v52;
        v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v50, 0LL);
        if ( !v6 )
          goto LABEL_33;
        v22 = (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__;
        v23 = v8;
        v24 = v6;
      }
      System_Collections_Generic_List_long___Add(v24, v23, v22);
    }
    if ( (int)++v18 >= size )
      goto LABEL_28;
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_33;
  }
  sub_B77990(v8);
  SvtEqCombineListViewManager__OnClickNormalStatus(v47, v48);
  return result;
}


bool __fastcall SvtEqCombineListViewManager__GetSwapLockList(
        SvtEqCombineListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v6; // x23
  System_Collections_Generic_List_long__o *v7; // x22
  int64_t v8; // x0
  SvtEqCombineListViewItem_c *v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  int size; // w24
  unsigned int v18; // w25
  __int64 v19; // x9
  __int64 v20; // x8
  __int128 v21; // q0
  const MethodInfo_30EBD98 *v22; // x2
  int64_t v23; // x1
  System_Collections_Generic_List_long__o *v24; // x0
  __int128 v25; // q0
  System_Int64_array *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int64_array *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  SvtEqCombineListViewManager_o *v47; // x0
  System_Int64_array **v48; // x1
  System_Int64_array **v49; // x2
  const MethodInfo *v50; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+50h] [xbp-70h]

  if ( (byte_4390FBC & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_long__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_long__TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&SvtEqCombineListViewItem_TypeInfo);
    byte_4390FBC = 1;
  }
  v6 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
  v7 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( size < 1 )
  {
LABEL_28:
    if ( v6 && v7 )
    {
      if ( v7->fields._size + v6->fields._size < 1 )
      {
        *lockList = 0LL;
        sub_B77560((BattleServantConfConponent_o *)lockList, 0LL, v10, v11, v12, v13, v14, v15);
        *unlockList = 0LL;
        sub_B77560((BattleServantConfConponent_o *)unlockList, 0LL, v41, v42, v43, v44, v45, v46);
        return 0;
      }
      else
      {
        v26 = System_Collections_Generic_List_long___ToArray(
                v6,
                (const MethodInfo_30EDEA4 *)Method_System_Collections_Generic_List_long__ToArray__);
        *lockList = v26;
        sub_B77560((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v26, v27, v28, v29, v30, v31, v32);
        v33 = System_Collections_Generic_List_long___ToArray(
                v7,
                (const MethodInfo_30EDEA4 *)Method_System_Collections_Generic_List_long__ToArray__);
        *unlockList = v33;
        sub_B77560((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v33, v34, v35, v36, v37, v38, v39);
        return 1;
      }
    }
LABEL_33:
    sub_B7769C(v8, v9);
  }
  v18 = 0;
  while ( 1 )
  {
    if ( itemList->fields._size <= v18 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v8 = (int64_t)itemList->fields._items->m_Items[v18];
    if ( !v8 )
      goto LABEL_33;
    v9 = SvtEqCombineListViewItem_TypeInfo;
    v19 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v8 + 300LL) < (unsigned int)v19
      || *(SvtEqCombineListViewItem_c **)(*(_QWORD *)(*(_QWORD *)v8 + 200LL) + 8 * v19 - 8) != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    v20 = *(_QWORD *)(v8 + 120);
    if ( v20 && *(_BYTE *)(v8 + 245) )
    {
      if ( *(_BYTE *)(v8 + 160) )
      {
        v21 = *(_OWORD *)(v20 + 32);
        *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)(v20 + 16);
        *(_OWORD *)&v54.fields.fakeValue = v21;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v53 = v54;
        v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v53, 0LL);
        if ( !v7 )
          goto LABEL_33;
        v22 = (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__;
        v23 = v8;
        v24 = v7;
      }
      else
      {
        v25 = *(_OWORD *)(v20 + 32);
        *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)(v20 + 16);
        *(_OWORD *)&v54.fields.fakeValue = v25;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v52 = v54;
        v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v52, 0LL);
        if ( !v6 )
          goto LABEL_33;
        v22 = (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__;
        v23 = v8;
        v24 = v6;
      }
      System_Collections_Generic_List_long___Add(v24, v23, v22);
    }
    if ( (int)++v18 >= size )
      goto LABEL_28;
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_33;
  }
  sub_B77990(v8);
  return SvtEqCombineListViewManager__GetSwapChoiceList(v47, v48, v49, v50);
}


void __fastcall SvtEqCombineListViewManager__InitBackListView(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  SvtEqCombineListViewManager__StatusRequest(this, 0LL, v2);
  SvtEqCombineListViewManager__SetStatusKind(this, 0, v4);
}


void __fastcall SvtEqCombineListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  SvtEqCombineListViewManager_c *v2; // x0
  unsigned int i; // w20
  struct ListViewSort_array *sortStatusList; // x8
  __int64 v5; // x0

  if ( (byte_4390F8A & 1) == 0 )
  {
    sub_B775C4(&SvtEqCombineListViewManager_TypeInfo);
    byte_4390F8A = 1;
  }
  v2 = SvtEqCombineListViewManager_TypeInfo;
  if ( (BYTE3(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
    v2 = SvtEqCombineListViewManager_TypeInfo;
  }
  if ( v2->static_fields->isInitSystem )
  {
    for ( i = 0; ; i = 1 )
    {
      if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v2);
        v2 = SvtEqCombineListViewManager_TypeInfo;
      }
      sortStatusList = v2->static_fields->sortStatusList;
      if ( !sortStatusList )
        goto LABEL_17;
      if ( i >= sortStatusList->max_length )
      {
        v5 = sub_B776C8(v2);
        sub_B77668(v5, 0LL);
      }
      v2 = (SvtEqCombineListViewManager_c *)sortStatusList->m_Items[i];
      if ( !v2 )
LABEL_17:
        sub_B7769C(v2, v1);
      ListViewSort__InitLoad((ListViewSort_o *)v2, 0LL);
      if ( i )
        break;
      v2 = SvtEqCombineListViewManager_TypeInfo;
    }
  }
}


bool __fastcall SvtEqCombineListViewManager__IsDragEnable(
        SvtEqCombineListViewManager_o *this,
        SvtEqCombineListViewItem_o *item,
        const MethodInfo *method)
{
  bool result; // w0
  int32_t currentType; // w8

  if ( this->fields.modeKind )
    return 0;
  currentType = this->fields.currentType;
  result = 0;
  if ( currentType == 1 && item )
  {
    if ( SvtEqCombineListViewItem__get_IsCanNotSelect(item, (const MethodInfo *)item) )
      return 0;
    return ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL)
        || this->fields.modeKind
        || this->fields.selectSum < this->fields.selectMax;
  }
  return result;
}


bool __fastcall SvtEqCombineListViewManager__IsDragStart(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.dragStartIndex >= 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SvtEqCombineListViewManager__IsSelectEnable(
        SvtEqCombineListViewManager_o *this,
        SvtEqCombineListViewItem_o *item,
        int32_t addSum,
        bool isDrag,
        const MethodInfo *method)
{
  bool isMaxLvSelected; // [xsp+Ch] [xbp-14h] BYREF

  isMaxLvSelected = 0;
  if ( !item )
    return 0;
  if ( this->fields.modeKind )
    return 1;
  if ( isDrag
    && this->fields.itemType == 1
    && (SvtEqCombineListViewManager__CheckDragMax(this, &isMaxLvSelected, *(const MethodInfo **)&addSum), isMaxLvSelected) )
  {
    return 0;
  }
  else
  {
    return this->fields.selectSum + addSum < this->fields.selectMax;
  }
}


void __fastcall SvtEqCombineListViewManager__ModifyItem(
        SvtEqCombineListViewManager_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UserGameEntity_o *SelfUserGame; // x19
  DataManager_o *Instance; // x0
  UserServantEntity_o *Entity; // x20
  _BOOL8 v9; // x0
  SvtEqCombineListViewItem_c *v10; // x1
  Il2CppObject *current; // x21
  __int64 v12; // x9
  _OWORD *monitor; // x8
  _QWORD *p_monitor; // x22
  __int128 v15; // q0
  int64_t v16; // x0
  __int128 v17; // q0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  int64_t UserSvtId; // x0
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1
  UnityEngine_Object_o *v27; // x22
  __int64 v28; // x1
  void *v29; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_4390F9A & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&SvtEqCombineListViewItem_TypeInfo);
    byte_4390F9A = 1;
  }
  memset(&v33, 0, sizeof(v33));
  if ( !this->fields.itemList )
    return;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( usrSvtId < 1 )
  {
    Entity = 0LL;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
LABEL_39:
      sub_B7769C(Instance, v5);
    }
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
               usrSvtId,
               (const MethodInfo_21FBABC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_39;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v33.fields.current = (Il2CppObject *)v32.fields.fakeValue;
  *(_OWORD *)&v33.fields.list = *(_OWORD *)&v32.fields.currentCryptoKey;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v33,
           (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v9 )
      break;
    current = v33.fields.current;
    if ( v33.fields.current )
    {
      v10 = SvtEqCombineListViewItem_TypeInfo;
      v12 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v33.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v12
        || (SvtEqCombineListViewItem_c *)v33.fields.current->klass->_2.typeHierarchy[v12 - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        sub_B77990(v33.fields.current);
LABEL_34:
        sub_B7769C(UserSvtId, v25);
      }
    }
    if ( Entity )
    {
      if ( !v33.fields.current )
        sub_B7769C(v9, v10);
      p_monitor = &v33.fields.current[7].monitor;
      monitor = v33.fields.current[7].monitor;
      if ( !monitor )
        sub_B7769C(v9, v10);
      v15 = monitor[2];
      *(_OWORD *)&v32.fields.currentCryptoKey = monitor[1];
      *(_OWORD *)&v32.fields.fakeValue = v15;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v31 = v32;
      v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v31, 0LL);
      v17 = *(_OWORD *)&Entity->fields.id.fields.fakeValue;
      *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v30.fields.fakeValue = v17;
      if ( v16 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v30, 0LL) )
      {
        *p_monitor = Entity;
        sub_B77560(
          (BattleServantConfConponent_o *)&current[7].monitor,
          (System_Int32_array **)Entity,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23);
      }
    }
    else if ( !v33.fields.current )
    {
      sub_B7769C(v9, v10);
    }
    UserSvtId = SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)current, (const MethodInfo *)v10);
    if ( !SelfUserGame )
      goto LABEL_34;
    BYTE4(current[10].klass) = UserSvtId == SelfUserGame->fields.favoriteUserSvtId;
    SvtEqCombineListViewItem__ModifyLockItem((SvtEqCombineListViewItem_o *)current, v25);
    SvtEqCombineListViewItem__ModifyChoiceItem((SvtEqCombineListViewItem_o *)current, v26);
    v27 = (UnityEngine_Object_o *)current[6].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v27, 0LL, 0LL) )
    {
      v29 = current[6].monitor;
      if ( !v29 )
        sub_B7769C(0LL, v28);
      (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v29 + 392LL))(
        v29,
        current,
        *(_QWORD *)(*(_QWORD *)v29 + 400LL));
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v33,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__ModifyList(
        SvtEqCombineListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  bool v3; // w21
  SvtEqCombineListViewManager_o *v4; // x19
  int32_t currentType; // w8
  void *ServantEquipList; // x21
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v7; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x23
  int v9; // w8
  __int64 v10; // x26
  __int64 v11; // x24
  __int128 v12; // q0
  struct UserServantEntity_o *v13; // x8
  __int128 v14; // q0
  SvtEqCombineListViewManager_o *v15; // x25
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v16; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x23
  int size; // w8
  int32_t i; // w21
  WarBoardAIRoute_RouteData_o *v20; // x8
  __int128 v21; // q0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v23; // q0
  SvtEqCombineListViewManager_o *v24; // x24
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *selectedMtSvtList_k__BackingField; // x20
  signed __int64 v26; // x8
  unsigned __int64 v27; // x25
  unsigned int v28; // w27
  SvtEqCombineListViewItem_o *v29; // x20
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v31; // q1
  __int64 v32; // x28
  __int128 v33; // q0
  SvtEqCombineListViewManager_o *v34; // x24
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 v36; // x24
  int v37; // w26
  unsigned int v38; // w25
  __int64 v39; // x8
  __int128 v40; // q0
  SvtEqCombineListViewManager_o *v41; // x23
  __int64 v42; // x20
  struct System_Collections_Generic_List_ListViewItem__o *v43; // x22
  SvtEqCombineListViewItem_o *v44; // x22
  __int64 v45; // x9
  struct UserServantEntity_o *v46; // x8
  __int128 v47; // q0
  struct UserServantEntity_o *v48; // x8
  __int128 v49; // q0
  int64_t v50; // x0
  const MethodInfo *v51; // x5
  __int64 v52; // x0
  SvtEqCombineListViewManager_o *v53; // x0
  ListViewObject_o *v54; // x1
  ListViewItem_o *v55; // x2
  const MethodInfo *v56; // x3
  bool isIconSizeChangea; // [xsp+Ch] [xbp-1A4h]
  bool isIconSizeChangeb; // [xsp+Ch] [xbp-1A4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+10h] [xbp-1A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+30h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+50h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+70h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+90h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+B0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+D0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+F0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+110h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+130h] [xbp-80h]

  v3 = isIconSizeChange;
  v4 = this;
  if ( (byte_4390F9D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__Remove__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor___69411152);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (SvtEqCombineListViewManager_o *)sub_B775C4(&SvtEqCombineListViewItem_TypeInfo);
    byte_4390F9D = 1;
  }
  currentType = v4->fields.currentType;
  isIconSizeChangea = v3;
  if ( currentType == 1 )
  {
    this = (SvtEqCombineListViewManager_o *)v4->fields.userServantMaster;
    if ( !this )
      goto LABEL_106;
    ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)this, 0LL);
    v16 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B77694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v16,
      (System_Collections_Generic_IEnumerable_T__o *)ServantEquipList,
      (const MethodInfo_30527CC *)Method_System_Collections_Generic_List_UserServantEntity___ctor___69411152);
    v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v17,
      (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( v4->fields.baseUsrSvtData )
    {
      if ( !v16 )
        goto LABEL_106;
      size = v16->fields._size;
      if ( size >= 1 )
      {
        for ( i = 0; i < size; ++i )
        {
          if ( size <= (unsigned int)i )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
          v20 = v16->fields._items->m_Items[i];
          if ( !v20 )
            goto LABEL_106;
          v21 = *(_OWORD *)&v20->fields.baseSquare;
          *(_OWORD *)&v68.fields.currentCryptoKey = *(_OWORD *)&v20->fields.flagNow;
          *(_OWORD *)&v68.fields.fakeValue = v21;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v65 = v68;
          this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(
                                                    &v65,
                                                    0LL);
          baseUsrSvtData = v4->fields.baseUsrSvtData;
          if ( !baseUsrSvtData )
            goto LABEL_106;
          v23 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
          v24 = this;
          *(_OWORD *)&v64.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v64.fields.fakeValue = v23;
          this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(
                                                    &v64,
                                                    0LL);
          if ( v24 == this )
            System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
              (System_Collections_Generic_List_XWeaponTrail_Element__o *)v16,
              i,
              (const MethodInfo_3054F88 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
          size = v16->fields._size;
        }
      }
      this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v16,
                                                (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      ServantEquipList = this;
    }
    selectedMtSvtList_k__BackingField = v4->fields._selectedMtSvtList_k__BackingField;
    if ( selectedMtSvtList_k__BackingField )
    {
      LODWORD(v26) = selectedMtSvtList_k__BackingField->fields._size;
      if ( (int)v26 >= 1 )
      {
        v27 = 0LL;
        while ( 1 )
        {
          if ( v27 >= (unsigned int)v26 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
          if ( !v16 )
            goto LABEL_106;
          if ( v16->fields._size >= 1 )
            break;
LABEL_66:
          selectedMtSvtList_k__BackingField = v4->fields._selectedMtSvtList_k__BackingField;
          if ( !selectedMtSvtList_k__BackingField )
            goto LABEL_106;
          v26 = selectedMtSvtList_k__BackingField->fields._size;
          if ( (__int64)++v27 >= v26 )
          {
            if ( !v17 )
              goto LABEL_106;
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v17,
              (System_Collections_Generic_IEnumerable_T__o *)v16,
              (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
            this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v17,
                                                      (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
            ServantEquipList = this;
            goto LABEL_70;
          }
        }
        v28 = 0;
        v29 = selectedMtSvtList_k__BackingField->fields._items->m_Items[v27];
        while ( 1 )
        {
          if ( !ServantEquipList )
            goto LABEL_106;
          if ( v28 >= *((_DWORD *)ServantEquipList + 6) )
            break;
          if ( !v29 )
            goto LABEL_106;
          userSvtEntity = v29->fields.userSvtEntity;
          if ( !userSvtEntity )
            goto LABEL_106;
          v31 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
          v32 = *((_QWORD *)ServantEquipList + (int)v28 + 4);
          *(_OWORD *)&v68.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v68.fields.fakeValue = v31;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v63 = v68;
          this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(
                                                    &v63,
                                                    0LL);
          if ( !v32 )
            goto LABEL_106;
          v33 = *(_OWORD *)(v32 + 32);
          v34 = this;
          *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)(v32 + 16);
          *(_OWORD *)&v62.fields.fakeValue = v33;
          this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(
                                                    &v62,
                                                    0LL);
          if ( v34 == this )
          {
            if ( !v17 )
              goto LABEL_106;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v17,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v29->fields.userSvtEntity,
              (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
            this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                                                      (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v16,
                                                      (WarBoardManager_TaskList_o *)v29->fields.userSvtEntity,
                                                      (const MethodInfo_3054C44 *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
          }
          if ( (signed int)++v28 >= v16->fields._size )
            goto LABEL_66;
        }
LABEL_104:
        v52 = sub_B776C8(this);
        sub_B77668(v52, 0LL);
      }
    }
LABEL_70:
    if ( !ServantEquipList )
      goto LABEL_106;
    if ( !*((_QWORD *)ServantEquipList + 3) )
    {
      this = (SvtEqCombineListViewManager_o *)v4->fields.emptyListNoticeLabel;
      if ( !this )
        goto LABEL_106;
      this = (SvtEqCombineListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
      if ( !this )
        goto LABEL_106;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    }
  }
  else
  {
    if ( currentType )
      goto LABEL_106;
    this = (SvtEqCombineListViewManager_o *)v4->fields.levelUpInfoImg;
    if ( !this )
      goto LABEL_106;
    this = (SvtEqCombineListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_106;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (SvtEqCombineListViewManager_o *)v4->fields.userServantMaster;
    if ( !this )
      goto LABEL_106;
    this = (SvtEqCombineListViewManager_o *)UserServantMaster__getServantEquipList((UserServantMaster_o *)this, 0LL);
    if ( !this )
      goto LABEL_106;
    ServantEquipList = this;
    if ( !this->fields.dropObjectList )
    {
      this = (SvtEqCombineListViewManager_o *)v4->fields.emptyListNoticeLabel;
      if ( !this )
        goto LABEL_106;
      this = (SvtEqCombineListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
      if ( !this )
        goto LABEL_106;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    }
    v7 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B77694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)ServantEquipList,
      (const MethodInfo_30527CC *)Method_System_Collections_Generic_List_UserServantEntity___ctor___69411152);
    v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v8,
      (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( v4->fields.baseUsrSvtData )
    {
      v9 = *((_DWORD *)ServantEquipList + 6);
      if ( v9 >= 1 )
      {
        v10 = 0LL;
        while ( (unsigned int)v10 < v9 )
        {
          v11 = *((_QWORD *)ServantEquipList + v10 + 4);
          if ( !v11 )
            goto LABEL_106;
          v12 = *(_OWORD *)(v11 + 32);
          *(_OWORD *)&v68.fields.currentCryptoKey = *(_OWORD *)(v11 + 16);
          *(_OWORD *)&v68.fields.fakeValue = v12;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v67 = v68;
          this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(
                                                    &v67,
                                                    0LL);
          v13 = v4->fields.baseUsrSvtData;
          if ( !v13 )
            goto LABEL_106;
          v14 = *(_OWORD *)&v13->fields.id.fields.fakeValue;
          v15 = this;
          *(_OWORD *)&v66.fields.currentCryptoKey = *(_OWORD *)&v13->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v66.fields.fakeValue = v14;
          this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(
                                                    &v66,
                                                    0LL);
          if ( v15 == this )
          {
            if ( !v8 )
              goto LABEL_106;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v8,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v11,
              (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
            if ( !v7 )
              goto LABEL_106;
            this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                                                      (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v7,
                                                      (WarBoardManager_TaskList_o *)v11,
                                                      (const MethodInfo_3054C44 *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
          }
          v9 = *((_DWORD *)ServantEquipList + 6);
          if ( (int)++v10 >= v9 )
            goto LABEL_27;
        }
        goto LABEL_104;
      }
LABEL_27:
      if ( !v8 )
        goto LABEL_106;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v8,
        (System_Collections_Generic_IEnumerable_T__o *)v7,
        (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                                (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      ServantEquipList = this;
      if ( !this )
        goto LABEL_106;
    }
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_106;
  v36 = *((_QWORD *)ServantEquipList + 3);
  if ( (int)v36 >= 1 )
  {
    v37 = itemList->fields._size;
    v38 = 0;
    isIconSizeChangeb = isIconSizeChangea;
    while ( 1 )
    {
      v39 = *((_QWORD *)ServantEquipList + (int)v38 + 4);
      if ( !v39 )
        goto LABEL_106;
      v40 = *(_OWORD *)(v39 + 32);
      *(_OWORD *)&v68.fields.currentCryptoKey = *(_OWORD *)(v39 + 16);
      *(_OWORD *)&v68.fields.fakeValue = v40;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v61 = v68;
      this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(
                                                &v61,
                                                0LL);
      if ( v37 >= 1 )
        break;
LABEL_102:
      if ( (int)++v38 >= (int)v36 )
        return;
      if ( v38 >= *((_DWORD *)ServantEquipList + 6) )
        goto LABEL_104;
    }
    v41 = this;
    v42 = 0LL;
    while ( 1 )
    {
      v43 = v4->fields.itemList;
      if ( !v43 )
        goto LABEL_106;
      if ( v43->fields._size <= (unsigned int)v42 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v44 = (SvtEqCombineListViewItem_o *)v43->fields._items->m_Items[v42];
      if ( !v44 )
        goto LABEL_106;
      *(_QWORD *)&isIconSizeChange = SvtEqCombineListViewItem_TypeInfo;
      v45 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v44->klass->_2.bitflags2 + 1) < (unsigned int)v45
        || (SvtEqCombineListViewItem_c *)v44->klass->_2.typeHierarchy[v45 - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        break;
      }
      v46 = v44->fields.userSvtEntity;
      if ( v46 )
      {
        v47 = *(_OWORD *)&v46->fields.id.fields.fakeValue;
        *(_OWORD *)&v68.fields.currentCryptoKey = *(_OWORD *)&v46->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v68.fields.fakeValue = v47;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v60 = v68;
        this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(
                                                  &v60,
                                                  0LL);
        if ( this == v41 )
        {
          v48 = v44->fields.userSvtEntity;
          if ( v48 )
          {
            v49 = *(_OWORD *)&v48->fields.id.fields.fakeValue;
            *(_OWORD *)&v68.fields.currentCryptoKey = *(_OWORD *)&v48->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v68.fields.fakeValue = v49;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v59 = v68;
            v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v59, 0LL);
            SvtEqCombineListViewManager__ModifyLockItem_35209520(v4, v44, v50, 1, isIconSizeChangeb, v51);
            goto LABEL_102;
          }
LABEL_106:
          sub_B7769C(this, isIconSizeChange);
        }
      }
      if ( (int)++v42 >= v37 )
        goto LABEL_102;
    }
    sub_B77990(v44);
    SvtEqCombineListViewManager__SetObjectItem(v53, v54, v55, v56);
  }
}


void __fastcall SvtEqCombineListViewManager__ModifyLockItem(
        SvtEqCombineListViewManager_o *this,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  UserServantEntity_o *Entity; // x21
  bool v11; // w20
  int64_t v12; // x0
  SvtEqCombineListViewItem_c *v13; // x1
  Il2CppObject *current; // x22
  __int64 v15; // x9
  _OWORD *monitor; // x8
  _QWORD *p_monitor; // x23
  __int128 v18; // q0
  int64_t v19; // x0
  __int128 v20; // q0
  int64_t v21; // x24
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x1
  UnityEngine_Object_o *v29; // x23
  __int64 v30; // x1
  void *v31; // x0
  __int64 v32; // x1
  ListViewObject_o *v33; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+50h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+70h] [xbp-70h] BYREF

  if ( (byte_4390F9B & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&SvtEqCombineListViewItem_TypeInfo);
    byte_4390F9B = 1;
  }
  memset(&v38, 0, sizeof(v38));
  if ( !this->fields.itemList )
    return;
  UserGameMaster__getSelfUserGame(0LL);
  if ( usrSvtId < 1 )
  {
    Entity = 0LL;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
LABEL_44:
      sub_B7769C(Instance, v8);
    }
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
               usrSvtId,
               (const MethodInfo_21FBABC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_44;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v37,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v38.fields.current = (Il2CppObject *)v37.fields.fakeValue;
  *(_OWORD *)&v38.fields.list = *(_OWORD *)&v37.fields.currentCryptoKey;
  v11 = !isIconSizeChange && isInit;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v38,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v12 & 1) == 0 )
      break;
    current = v38.fields.current;
    if ( v38.fields.current )
    {
      v13 = SvtEqCombineListViewItem_TypeInfo;
      v15 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v38.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v15
        || (SvtEqCombineListViewItem_c *)v38.fields.current->klass->_2.typeHierarchy[v15 - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        sub_B77990(v38.fields.current);
LABEL_38:
        sub_B7769C(v12, v13);
      }
    }
    if ( Entity )
    {
      if ( !v38.fields.current )
        sub_B7769C(v12, v13);
      p_monitor = &v38.fields.current[7].monitor;
      monitor = v38.fields.current[7].monitor;
      if ( !monitor )
        goto LABEL_38;
      v18 = monitor[2];
      *(_OWORD *)&v37.fields.currentCryptoKey = monitor[1];
      *(_OWORD *)&v37.fields.fakeValue = v18;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v36 = v37;
      v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v36, 0LL);
      v20 = *(_OWORD *)&Entity->fields.id.fields.fakeValue;
      v21 = v19;
      *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v35.fields.fakeValue = v20;
      v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v35, 0LL);
      if ( v21 == v12 )
      {
        *p_monitor = Entity;
        sub_B77560(
          (BattleServantConfConponent_o *)&current[7].monitor,
          (System_Int32_array **)Entity,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27);
      }
    }
    if ( v11 )
    {
      if ( !current )
        sub_B7769C(v12, v13);
      SvtEqCombineListViewItem__ModifyLockItem((SvtEqCombineListViewItem_o *)current, (const MethodInfo *)v13);
      SvtEqCombineListViewItem__ModifyChoiceItem((SvtEqCombineListViewItem_o *)current, v28);
    }
    else if ( !current )
    {
      sub_B7769C(v12, v13);
    }
    v29 = (UnityEngine_Object_o *)current[6].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v29, 0LL, 0LL) )
    {
      v31 = current[6].monitor;
      if ( !v31 )
        sub_B7769C(0LL, v30);
      (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v31 + 392LL))(
        v31,
        current,
        *(_QWORD *)(*(_QWORD *)v31 + 400LL));
      if ( isIconSizeChange )
      {
        v33 = (ListViewObject_o *)current[6].monitor;
        if ( !v33 )
          sub_B7769C(0LL, v32);
        ListViewObject__SetItemSeed(v33, (ListViewItem_o *)current, this->fields.seed, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall SvtEqCombineListViewManager__ModifyLockItem_35209520(
        SvtEqCombineListViewManager_o *this,
        SvtEqCombineListViewItem_o *servantItem,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  SvtEqCombineListViewManager_o *v10; // x20
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v12; // q1
  SvtEqCombineListViewManager_o *v13; // x23
  int64_t v14; // x0
  __int128 v15; // q0
  SvtEqCombineListViewManager_o *v16; // x25
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x1
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+40h] [xbp-60h]

  v10 = this;
  if ( (byte_4390F9C & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (SvtEqCombineListViewManager_o *)sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4390F9C = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (SvtEqCombineListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_28;
    this = (SvtEqCombineListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_28;
    this = (SvtEqCombineListViewManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                              (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                              usrSvtId,
                                              (const MethodInfo_21FBABC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( this )
    {
      if ( !servantItem )
        goto LABEL_28;
      userSvtEntity = servantItem->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_28;
      v12 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      v13 = this;
      *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v27.fields.fakeValue = v12;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v26 = v27;
      v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v26, 0LL);
      v15 = *(_OWORD *)&v13->fields.indicator;
      v16 = (SvtEqCombineListViewManager_o *)v14;
      *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&v13->fields.m_CachedPtr;
      *(_OWORD *)&v25.fields.fakeValue = v15;
      this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(
                                                &v25,
                                                0LL);
      if ( v16 == this )
      {
        servantItem->fields.userSvtEntity = (struct UserServantEntity_o *)v13;
        sub_B77560(
          (BattleServantConfConponent_o *)&servantItem->fields.userSvtEntity,
          (System_Int32_array **)v13,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22);
      }
    }
  }
  if ( isIconSizeChange || !isInit )
  {
    if ( !servantItem )
      goto LABEL_28;
  }
  else
  {
    if ( !servantItem )
      goto LABEL_28;
    SvtEqCombineListViewItem__ModifyLockItem(servantItem, (const MethodInfo *)servantItem);
    SvtEqCombineListViewItem__ModifyChoiceItem(servantItem, v23);
  }
  viewObject = (UnityEngine_Object_o *)servantItem->fields.viewObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
  {
    this = (SvtEqCombineListViewManager_o *)servantItem->fields.viewObject;
    if ( this )
    {
      ((void (__fastcall *)(SvtEqCombineListViewManager_o *, SvtEqCombineListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
        this,
        servantItem,
        this->klass->vtable._6_GetDragRoot.methodPtr);
      if ( !isIconSizeChange )
        return;
      this = (SvtEqCombineListViewManager_o *)servantItem->fields.viewObject;
      if ( this )
      {
        ListViewObject__SetItemSeed((ListViewObject_o *)this, (ListViewItem_o *)servantItem, v10->fields.seed, 0LL);
        return;
      }
    }
LABEL_28:
    sub_B7769C(this, servantItem);
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickBonusFilterKind(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_4390FB4 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_4390FB4 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_B7769C(0LL, v3);
    ListViewSort__IncBonusKind2(
      sort,
      this->fields.bonusEventIdList,
      0LL,
      0LL,
      0LL,
      this->fields.bonusFinishEventIdList,
      0LL,
      0LL);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickChoiceTab(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  SvtEqCombineListViewManager_RequestCallbackFunc_o *v4; // x20
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2

  if ( (byte_4390FC0 & 1) == 0 )
  {
    sub_B775C4(&SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_SvtEqCombineListViewManager_EndClickTabChoice__);
    byte_4390FC0 = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( this->fields.modeKind )
    {
      v4 = (SvtEqCombineListViewManager_RequestCallbackFunc_o *)sub_B77694(SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo);
      SvtEqCombineListViewManager_RequestCallbackFunc___ctor(
        v4,
        (Il2CppObject *)this,
        Method_SvtEqCombineListViewManager_EndClickTabChoice__,
        0LL);
      SvtEqCombineListViewManager__StatusRequest(this, v4, v5);
    }
    else
    {
      SvtEqCombineListViewManager__SetStatusKind(this, 2, v3);
      SvtEqCombineListViewManager__ReleaseAll(this, v6);
      SvtEqCombineListViewManager__ModifyList(this, 0, v7);
      SvtEqCombineListViewManager__SetMode_35212208(this, 2, v8);
    }
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickCollectLock(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  SvtEqCombineListViewManager_RequestCallbackFunc_o *v4; // x20
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2

  if ( (byte_4390FBF & 1) == 0 )
  {
    sub_B775C4(&SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_SvtEqCombineListViewManager_EndClickTabLock__);
    byte_4390FBF = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( this->fields.modeKind )
    {
      v4 = (SvtEqCombineListViewManager_RequestCallbackFunc_o *)sub_B77694(SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo);
      SvtEqCombineListViewManager_RequestCallbackFunc___ctor(
        v4,
        (Il2CppObject *)this,
        Method_SvtEqCombineListViewManager_EndClickTabLock__,
        0LL);
      SvtEqCombineListViewManager__StatusRequest(this, v4, v5);
    }
    else
    {
      SvtEqCombineListViewManager__SetStatusKind(this, 1, v3);
      SvtEqCombineListViewManager__ReleaseAll(this, v6);
      SvtEqCombineListViewManager__ModifyList(this, 0, v7);
      SvtEqCombineListViewManager__SetMode_35212208(this, 2, v8);
    }
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickDecide(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct CombineRootComponent_o *v4; // x0
  __int64 v5; // x1
  CombineRootComponent_o *combineRootComponent; // x8
  const MethodInfo *v7; // x1
  ServantCheckEquipDialog_o *servantEquipCheckDialog; // x20
  System_Collections_Generic_List_SvtEqCombineListViewItem__o *SelectedMaterialList; // x21
  ServantCheckEquipDialog_ClickDelegate_o *v10; // x22

  if ( (byte_4390FA3 & 1) == 0 )
  {
    sub_B775C4(&ServantCheckEquipDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_SvtEqCombineListViewManager_CloseServantCheckEquipDialog__);
    byte_4390FA3 = 1;
  }
  if ( this->fields.isDecideFlg )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v4 = (struct CombineRootComponent_o *)SvtEqCombineListViewManager__CheckMaterialEquipped(this, v3);
    combineRootComponent = this->fields.combineRootComponent;
    this->fields._isOpenCheckEquipDialog_k__BackingField = (unsigned __int8)v4 & 1;
    if ( !combineRootComponent )
      goto LABEL_19;
    CombineRootComponent__SetBackSelect(combineRootComponent, 1, 0LL);
    if ( this->fields._isOpenCheckEquipDialog_k__BackingField )
    {
      servantEquipCheckDialog = this->fields.servantEquipCheckDialog;
      SelectedMaterialList = SvtEqCombineListViewManager__GetSelectedMaterialList(this, v7);
      v10 = (ServantCheckEquipDialog_ClickDelegate_o *)sub_B77694(ServantCheckEquipDialog_ClickDelegate_TypeInfo);
      ServantCheckEquipDialog_ClickDelegate___ctor(
        v10,
        (Il2CppObject *)this,
        Method_SvtEqCombineListViewManager_CloseServantCheckEquipDialog__,
        0LL);
      if ( servantEquipCheckDialog )
      {
        ServantCheckEquipDialog__Open(servantEquipCheckDialog, SelectedMaterialList, 0, v10, 0LL);
        return;
      }
LABEL_19:
      sub_B7769C(v4, v5);
    }
    SvtEqCombineListViewManager__SetSelectedMaterialInfo(this, v7);
    v4 = this->fields.combineRootComponent;
    if ( !v4 )
      goto LABEL_19;
    if ( v4->fields.state == 4 )
      CombineRootComponent__SetSelectSvtEqMaterialList(v4, 0LL);
  }
  else
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickFilter2Kind(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct ListViewSort_o *sort; // x8
  int32_t filter2Kind; // w20
  int32_t v7; // w9

  if ( (byte_4390FB5 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&SvtEqCombineListViewManager_TypeInfo);
    byte_4390FB5 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    sort = this->fields.sort;
    if ( !sort
      || (filter2Kind = sort->fields.filter2Kind,
          (BYTE3(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0)
      && !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished
      && (j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo), (sort = this->fields.sort) == 0LL) )
    {
      sub_B7769C(v3, v4);
    }
    if ( filter2Kind + 1 <= SvtEqCombineListViewManager_TypeInfo->static_fields->FILTER2_MAX_KIND_NUM )
      v7 = filter2Kind + 1;
    else
      v7 = 0;
    sort->fields.filter2Kind = v7;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickFilterKind(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v5; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4390FB1 & 1) == 0 )
  {
    sub_B775C4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_SvtEqCombineListViewManager_EndSelectFilterKind__);
    byte_4390FB1 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v5 = (CommonUI_o *)Instance;
    v6 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B77694(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_SvtEqCombineListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v5 )
      sub_B7769C(v7, v8);
    CommonUI__OpenServantFilterSelectMenu_18063096(v5, 5, sort, (ListViewManager_o *)this, v6, -1, 0LL);
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickListView(
        SvtEqCombineListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall SvtEqCombineListViewManager__OnClickLockModeItem(
        SvtEqCombineListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  SvtEqCombineListViewManager_o *v4; // x19
  __int64 v5; // x9
  SvtEqCombineListViewItem_o *Item; // x20
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v8; // q1
  int64_t v9; // x0
  const MethodInfo *v10; // x4
  const MethodInfo *v11; // x2
  SvtEqCombineListViewManager_o *v12; // x0
  SvtEqCombineListViewItem_o *v13; // x1
  const MethodInfo *v14; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_4390FAE & 1) == 0 )
  {
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    this = (SvtEqCombineListViewManager_o *)sub_B775C4(&SvtEqCombineListViewObject_TypeInfo);
    byte_4390FAE = 1;
  }
  if ( !obj )
    goto LABEL_15;
  v5 = *(&SvtEqCombineListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5
    || (SvtEqCombineListViewObject_c *)obj->klass->_2.typeHierarchy[v5 - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    sub_B77990(obj);
    SvtEqCombineListViewManager__IsDragEnable(v12, v13, v14);
    return;
  }
  Item = SvtEqCombineListViewObject__GetItem(
           (SvtEqCombineListViewObject_o *)obj,
           (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(11, 0LL);
  if ( !Item || (userSvtEntity = Item->fields.userSvtEntity, Item->fields.isSwapLock ^= 1u, !userSvtEntity) )
LABEL_15:
    sub_B7769C(this, obj);
  v8 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v16.fields.fakeValue = v8;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v15 = v16;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v15, 0LL);
  SvtEqCombineListViewManager__ModifyLockItem(v4, v9, 0, 0, v10);
  SvtEqCombineListViewManager__SetMode_35212208(v4, 3, v11);
}


void __fastcall SvtEqCombineListViewManager__OnClickNormalStatus(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  SvtEqCombineListViewManager_RequestCallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4390FBE & 1) == 0 )
  {
    sub_B775C4(&SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_SvtEqCombineListViewManager_EndClickTabStatus__);
    byte_4390FBE = 1;
  }
  if ( this->fields.modeKind )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v3 = (SvtEqCombineListViewManager_RequestCallbackFunc_o *)sub_B77694(SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo);
    SvtEqCombineListViewManager_RequestCallbackFunc___ctor(
      v3,
      (Il2CppObject *)this,
      Method_SvtEqCombineListViewManager_EndClickTabStatus__,
      0LL);
    SvtEqCombineListViewManager__StatusRequest(this, v3, v4);
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickReleaseAll(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4390FA9 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_4390FA9 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  SvtEqCombineListViewManager__ReleaseAll(this, v3);
}


void __fastcall SvtEqCombineListViewManager__OnClickScaleChange(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *ScaleKindSpriteName; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int32_t v13; // w8
  struct ListViewSort_o *sort; // x8
  UISprite_o *scaleChangeButtonSprite; // x20
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2

  if ( (byte_4390FBB & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_4390FBB = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v13 = 2;
    goto LABEL_12;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v13 = 3;
    goto LABEL_12;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v13 = 1;
LABEL_12:
    this->fields.scaleType = v13;
    this->fields.seed = smallSizeSeed;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)smallSizeSeed,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
  }
  sort = this->fields.sort;
  if ( !sort
    || (sort->fields.iconScaleKind = this->fields.scaleType, (ScaleKindSpriteName = this->fields.sort) == 0LL)
    || (scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite,
        ScaleKindSpriteName = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(
                                                  ScaleKindSpriteName,
                                                  this->fields.scaleType,
                                                  0LL),
        !scaleChangeButtonSprite) )
  {
    sub_B7769C(ScaleKindSpriteName, v4);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)ScaleKindSpriteName, 0LL);
  SvtEqCombineListViewManager__ModifyList(this, 1, v16);
  SvtEqCombineListViewManager__SetMode_35212208(this, 2, v17);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall SvtEqCombineListViewManager__OnClickSelectBase(
        SvtEqCombineListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  SvtEqCombineListViewManager_o *v4; // x19
  __int64 v5; // x9
  struct UserServantEntity_o *baseUsrSvtData; // x8
  SvtEqCombineListViewItem_o *v7; // x21
  __int128 v8; // q1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  SoundManager_c *v15; // x0
  int32_t v16; // w0
  System_Int32_array **userSvtEntity; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  SvtEqCombineListViewManager_o *v24; // x0
  ListViewObject_o *v25; // x1
  const MethodInfo *v26; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_4390FAC & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    this = (SvtEqCombineListViewManager_o *)sub_B775C4(&SvtEqCombineListViewObject_TypeInfo);
    byte_4390FAC = 1;
  }
  if ( !obj )
    goto LABEL_39;
  v5 = *(&SvtEqCombineListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5
    || (SvtEqCombineListViewObject_c *)obj->klass->_2.typeHierarchy[v5 - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    sub_B77990(obj);
    SvtEqCombineListViewManager__OnClickListView(v24, v25, v26);
    return;
  }
  this = (SvtEqCombineListViewManager_o *)SvtEqCombineListViewObject__GetItem(
                                            (SvtEqCombineListViewObject_o *)obj,
                                            (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo);
  baseUsrSvtData = v4->fields.baseUsrSvtData;
  v7 = (SvtEqCombineListViewItem_o *)this;
  if ( !baseUsrSvtData )
  {
    if ( !this )
      goto LABEL_39;
LABEL_18:
    if ( v7->fields.type )
    {
      v15 = SoundManager_TypeInfo;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
        goto LABEL_20;
      goto LABEL_32;
    }
    if ( v7->fields.isLvMax && v7->fields.isLimitCntMax )
    {
      v15 = SoundManager_TypeInfo;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
        goto LABEL_30;
    }
    else
    {
      v15 = SoundManager_TypeInfo;
      if ( !v7->fields.isSvtEqMaterial )
      {
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
        {
LABEL_20:
          if ( !v15->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v15);
        }
LABEL_32:
        v16 = 0;
        goto LABEL_33;
      }
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
      {
LABEL_30:
        v16 = 2;
LABEL_33:
        SoundManager__playSystemSe(v16, 0LL);
        userSvtEntity = (System_Int32_array **)v7->fields.userSvtEntity;
        v4->fields.baseUsrSvtData = (struct UserServantEntity_o *)userSvtEntity;
        sub_B77560(
          (BattleServantConfConponent_o *)&v4->fields.baseUsrSvtData,
          userSvtEntity,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23);
        goto LABEL_34;
      }
    }
    if ( !v15->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v15);
    goto LABEL_30;
  }
  v8 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
  *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v28.fields.fakeValue = v8;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v27 = v28;
  this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(
                                            &v27,
                                            0LL);
  if ( !v7 )
LABEL_39:
    sub_B7769C(this, obj);
  if ( this != (SvtEqCombineListViewManager_o *)SvtEqCombineListViewItem__get_UserSvtId(v7, (const MethodInfo *)obj) )
    goto LABEL_18;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  v4->fields.baseUsrSvtData = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&v4->fields.baseUsrSvtData, 0LL, v9, v10, v11, v12, v13, v14);
  this = (SvtEqCombineListViewManager_o *)v4->fields.tempMtSvtList;
  if ( !this )
    goto LABEL_39;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
    (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__);
LABEL_34:
  this = (SvtEqCombineListViewManager_o *)v4->fields.combineRootComponent;
  if ( !this )
    goto LABEL_39;
  CombineRootComponent__SetBackSelect((CombineRootComponent_o *)this, v4->fields.baseUsrSvtData != 0LL, 0LL);
  this = (SvtEqCombineListViewManager_o *)v4->fields.combineRootComponent;
  if ( !this )
    goto LABEL_39;
  if ( HIDWORD(this->fields.getBasicExpLabel) == 4 )
    CombineRootComponent__ShowBaseSvtEq((CombineRootComponent_o *)this, 0LL);
}


void __fastcall SvtEqCombineListViewManager__OnClickSelectMaterial(
        SvtEqCombineListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  SvtEqCombineListViewManager_o *v4; // x19
  __int64 v5; // x9
  ListViewItem_o *v6; // x20
  const MethodInfo *v7; // x1
  int32_t selectNum; // w21
  int32_t klass; // w9
  _BOOL8 v10; // x0
  __int64 v11; // x1
  int32_t selectSum; // w8
  void *v13; // x0
  int v14; // w1
  __int64 v15; // x20
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4390FAD & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    this = (SvtEqCombineListViewManager_o *)sub_B775C4(&SvtEqCombineListViewObject_TypeInfo);
    byte_4390FAD = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( !obj )
    goto LABEL_21;
  v5 = *(&SvtEqCombineListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5
    || (SvtEqCombineListViewObject_c *)obj->klass->_2.typeHierarchy[v5 - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    sub_B77990(obj);
    if ( v14 != 1 )
      _Unwind_Resume(v13);
    v15 = *(_QWORD *)__cxa_begin_catch(v13);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v16,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( v15 )
      sub_B77668(v15, 0LL);
    goto LABEL_18;
  }
  this = (SvtEqCombineListViewManager_o *)SvtEqCombineListViewObject__GetItem(
                                            (SvtEqCombineListViewObject_o *)obj,
                                            (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo);
  if ( !this )
    goto LABEL_21;
  v6 = (ListViewItem_o *)this;
  if ( ListViewItem__get_IsSelect((ListViewItem_o *)this, 0LL) )
  {
    selectNum = v6->fields.selectNum;
    ListViewItem__set_IsSelect(v6, 0, 0LL);
    this = (SvtEqCombineListViewManager_o *)v4->fields.itemList;
    --v4->fields.selectSum;
    if ( this )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v16,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
        (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( 1 )
      {
        v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v16,
                (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v10 )
          break;
        if ( !v16.fields.current )
          sub_B7769C(v10, v11);
        klass = (int32_t)v16.fields.current[1].klass;
        if ( klass > selectNum )
          LODWORD(v16.fields.current[1].klass) = klass - 1;
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v16,
        (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      goto LABEL_18;
    }
LABEL_21:
    sub_B7769C(this, obj);
  }
  selectSum = v4->fields.selectSum;
  if ( v4->fields.modeKind || selectSum < v4->fields.selectMax )
  {
    v6->fields.selectNum = selectSum;
    ++v4->fields.selectSum;
LABEL_18:
    SvtEqCombineListViewManager__RefrashListDisp(v4, v7);
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickSortAscendingOrder(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4390FB8 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_4390FB8 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_B7769C(v3, v4);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickSortKind(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t itemType; // w23
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v6; // x21
  ServantSortSelectMenu_CallbackFunc_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4390FB6 & 1) == 0 )
  {
    sub_B775C4(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_SvtEqCombineListViewManager_EndSelectSortKind__);
    byte_4390FB6 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    itemType = this->fields.itemType;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v6 = (CommonUI_o *)Instance;
    v7 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B77694(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_SvtEqCombineListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v6 )
      sub_B7769C(v8, v9);
    CommonUI__OpenServantSortSelectMenu(v6, 2, sort, itemType == 1, v7, 0LL);
  }
}


void __fastcall SvtEqCombineListViewManager__OnLongPushListView(
        SvtEqCombineListViewManager_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  SvtEqCombineListViewItem_c *v5; // x1
  __int64 v6; // x9
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *selectedMtSvtList_k__BackingField; // x0
  int64_t UserSvtId; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  UnityEngine_Behaviour_o *scrollView; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct UserServantEntity_o *monitor; // x1
  void *v19; // x0
  int v20; // w1
  __int64 v21; // x21
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4390FAF & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&SvtEqCombineListViewItem_TypeInfo);
    byte_4390FAF = 1;
  }
  memset(&v23, 0, sizeof(v23));
  if ( (unsigned int)(this->fields.modeKind - 1) >= 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( item
      && ((v5 = SvtEqCombineListViewItem_TypeInfo,
           v6 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1),
           *(&item->klass->_2.bitflags2 + 1) < (unsigned int)v6)
       || (SvtEqCombineListViewItem_c *)item->klass->_2.typeHierarchy[v6 - 1] != SvtEqCombineListViewItem_TypeInfo) )
    {
      sub_B77990(item);
      if ( v20 != 1 )
        _Unwind_Resume(v19);
      v21 = *(_QWORD *)__cxa_begin_catch(v19);
      __cxa_end_catch();
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v23,
        (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
      if ( v21 )
        sub_B77668(v21, 0LL);
    }
    else
    {
      selectedMtSvtList_k__BackingField = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields._selectedMtSvtList_k__BackingField;
      this->fields.isSelectMaterial = 0;
      if ( selectedMtSvtList_k__BackingField && selectedMtSvtList_k__BackingField->fields._size >= 1 )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v22,
          selectedMtSvtList_k__BackingField,
          (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__);
        v23 = v22;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v23,
                  (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__) )
        {
          if ( !v23.fields.current )
            sub_B7769C(0LL, v10);
          UserSvtId = SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)v23.fields.current, v10);
          if ( !item )
            sub_B7769C(UserSvtId, v9);
          if ( UserSvtId == SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)item, v9) )
            this->fields.isSelectMaterial = 1;
        }
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v23,
          (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
      }
    }
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !scrollView
      || (UnityEngine_Behaviour__set_enabled(scrollView, 0, 0LL), !item)
      || (monitor = (struct UserServantEntity_o *)item[1].monitor,
          this->fields.selectUsrSvtEntity = monitor,
          sub_B77560(
            (BattleServantConfConponent_o *)&this->fields.selectUsrSvtEntity,
            (System_Int32_array **)monitor,
            v12,
            v13,
            v14,
            v15,
            v16,
            v17),
          (scrollView = (UnityEngine_Behaviour_o *)this->fields.combineRootComponent) == 0LL) )
    {
      sub_B7769C(scrollView, v5);
    }
    if ( *((_DWORD *)&scrollView[17].fields + 1) == 4 )
      CombineRootComponent__SelectShowServant((CombineRootComponent_o *)scrollView, 0LL);
  }
}


void __fastcall SvtEqCombineListViewManager__OnMoveEnd(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UIScrollView_o *v14; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_4390FA2 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4390FA2 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v14 = this->fields.scrollView;
        if ( !v14
          || (((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
                v14,
                1LL,
                v14->klass->vtable._9_SetDragAmount.methodPtr),
              (v14 = this->fields.scrollView) == 0LL) )
        {
          sub_B7769C(v14, v7);
        }
        UIScrollView__UpdatePosition(v14, 0LL);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B77560((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
      if ( callbackFunc2 )
        System_Action__Invoke(callbackFunc2, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__RefrashListDisp(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_SvtEqCombineListViewObject__o *ObjectList; // x20
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t CombineQpSvtEq; // w0
  const MethodInfo *v7; // x2
  int32_t v8; // w21
  __int64 itemList; // x0
  SvtEqCombineListViewItem_o *current; // x22
  __int64 v11; // x9
  __int64 v12; // x1
  UserServantEntity_o *v13; // x0
  const MethodInfo *v14; // x1
  UserServantEntity_o *v15; // x0
  int32_t addTotalExp; // w23
  _BOOL8 v17; // x0
  __int64 v18; // x1
  UILabel_o *selectInfoLabel; // x21
  System_String_o *v20; // x22
  __int64 v21; // x2
  Il2CppObject *v22; // x23
  __int64 v23; // x2
  Il2CppObject *v24; // x0
  __int64 v25; // x2
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *combineEventList; // x0
  Il2CppObject *v28; // x22
  int klass_high; // w8
  _BOOL8 v30; // x0
  __int64 v31; // x1
  int v32; // w27
  int v33; // w8
  UILabel_o *spendQpLabel; // x21
  Il2CppObject *v35; // x0
  __int64 v36; // x2
  UIWidget_o *v37; // x21
  int v38; // s0
  UILabel_o *getBasicExpLabel; // x21
  Il2CppObject *v43; // x0
  UILabel_o *getAccExpLabel; // x21
  __int64 v45; // x2
  Il2CppObject *v46; // x0
  const MethodInfo *v47; // x2
  struct UserServantEntity_o *v48; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v49; // x21
  __int64 v50; // x22
  __int64 v51; // x23
  int32_t v52; // w8
  const MethodInfo *v53; // x4
  int32_t LevelMax; // w21
  struct UserServantEntity_o *v55; // x8
  int32_t increLv; // w22
  int32_t lv; // w23
  bool v58; // w22
  Il2CppObject *v59; // x21
  __int64 v60; // x9
  _BOOL8 v61; // x0
  __int64 v62; // x1
  int v63; // w27
  bool v64; // w1
  SvtEqCombineListViewManager_o *v65; // x0
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *tempMtSvtList; // x8
  int32_t size; // w8
  int v68; // w8
  __int64 v69; // x21
  int32_t selectMax; // [xsp+4h] [xbp-BCh] BYREF
  System_Collections_Generic_List_Enumerator_T__o v71; // [xsp+8h] [xbp-B8h] BYREF
  int v72[3]; // [xsp+20h] [xbp-A0h]
  int v73; // [xsp+2Ch] [xbp-94h]
  System_Collections_Generic_List_Enumerator_T__o v74; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v75; // [xsp+50h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16

  if ( (byte_4390F94 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Item__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&SvtEqCombineListViewItem_TypeInfo);
    sub_B775C4(&StringLiteral_24013/*"{0:N0}"*/);
    sub_B775C4(&StringLiteral_12702/*"SUM_INFO"*/);
    byte_4390F94 = 1;
  }
  memset(&v75, 0, sizeof(v75));
  memset(&v74, 0, sizeof(v74));
  v73 = 0;
  ObjectList = SvtEqCombineListViewManager__get_ObjectList(this, method);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  *(_QWORD *)&this->fields.selectQp = 0LL;
  this->fields.addTotalExp = 0;
  this->fields.isAllUpMax = 0;
  if ( baseUsrSvtData && this->fields.itemType == 1 )
  {
    CombineQpSvtEq = UserServantEntity__getCombineQpSvtEq(baseUsrSvtData, 0LL);
    v8 = SvtEqCombineListViewManager__CheckCompareQp(this, CombineQpSvtEq, v7);
  }
  else
  {
    v8 = 0;
  }
  itemList = (__int64)this->fields.itemList;
  if ( !itemList )
    goto LABEL_94;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v71,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v75 = v71;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v75,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v17 )
      break;
    current = (SvtEqCombineListViewItem_o *)v75.fields.current;
    if ( !v75.fields.current )
      goto LABEL_93;
    v11 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v75.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v11
      || (SvtEqCombineListViewItem_c *)v75.fields.current->klass->_2.typeHierarchy[v11 - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      sub_B77990(v75.fields.current);
LABEL_93:
      sub_B7769C(v17, v18);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v75.fields.current, 0LL) )
    {
      v13 = this->fields.baseUsrSvtData;
      this->fields.selectQp += v8;
      if ( !v13 )
        goto LABEL_96;
      if ( !UserServantEntity__isLevelMax(v13, 0LL) )
        goto LABEL_18;
      v15 = this->fields.baseUsrSvtData;
      if ( !v15 )
        sub_B7769C(0LL, v14);
      if ( UserServantEntity__isLevelMax(v15, 0LL) && current->fields.isLimitCntTarget )
      {
LABEL_18:
        addTotalExp = this->fields.addTotalExp;
        this->fields.selectExp += current->fields.materialExp;
        this->fields.addTotalExp = SvtEqCombineListViewItem__get_GetAddTotalExp(current, v14) + addTotalExp;
      }
    }
    else
    {
      current->fields.isMaxSelect = this->fields.selectSum >= this->fields.selectMax;
    }
  }
  v72[0] = 255;
  v73 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v75,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  v73 = 0;
  selectInfoLabel = this->fields.selectInfoLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_12702/*"SUM_INFO"*/, 0LL);
  LODWORD(v71.fields.list) = this->fields.selectSum;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v71, v21);
  selectMax = this->fields.selectMax;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &selectMax, v23);
  itemList = (__int64)System_String__Format_44897472(v20, v22, v24, 0LL);
  if ( !selectInfoLabel )
    goto LABEL_94;
  UILabel__set_text(selectInfoLabel, (System_String_o *)itemList, 0LL);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_94;
  combineEventList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)menuListCtr->fields.combineEventList;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v71,
      combineEventList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v74 = v71;
    while ( 1 )
    {
      v30 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v74,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v30 )
        break;
      v28 = v74.fields.current;
      if ( !v74.fields.current )
        sub_B7769C(v30, v31);
      klass_high = HIDWORD(v74.fields.current[1].klass);
      if ( klass_high == 17 )
      {
        this->fields.selectExp = UnityEngine_Mathf__CeilToInt(
                                   *(float *)&v74.fields.current[3].monitor * (float)this->fields.selectExp,
                                   0LL);
        klass_high = HIDWORD(v28[1].klass);
      }
      if ( klass_high == 16 )
        this->fields.selectQp = UnityEngine_Mathf__CeilToInt(
                                  *(float *)&v28[3].monitor * (float)this->fields.selectQp,
                                  0LL);
    }
    v72[0] = 445;
    v32 = ++v73;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v74,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    if ( v32 )
    {
      v33 = v32 - 1;
      if ( v72[v32 - 1] == 445 )
      {
        --v32;
        v73 = v33;
      }
    }
  }
  else
  {
    v32 = 0;
  }
  spendQpLabel = this->fields.spendQpLabel;
  LODWORD(v71.fields.list) = this->fields.selectQp;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v71, v25);
  itemList = (__int64)System_String__Format((System_String_o *)StringLiteral_24013/*"{0:N0}"*/, v35, 0LL);
  if ( !spendQpLabel )
    goto LABEL_94;
  UILabel__set_text(spendQpLabel, (System_String_o *)itemList, 0LL);
  if ( this->fields.itemType == 1 )
  {
    v37 = (UIWidget_o *)this->fields.spendQpLabel;
    if ( this->fields.selectQp <= this->fields.userQP )
    {
      *(UnityEngine_Color_o *)&v38 = UnityEngine_Color__get_white(0LL);
      if ( !v37 )
        goto LABEL_94;
    }
    else
    {
      *(UnityEngine_Color_o *)&v38 = UnityEngine_Color__get_red(0LL);
      if ( !v37 )
        goto LABEL_94;
    }
    UIWidget__set_color(v37, *(UnityEngine_Color_o *)&v38, 0LL);
  }
  getBasicExpLabel = this->fields.getBasicExpLabel;
  LODWORD(v71.fields.list) = this->fields.selectExp;
  v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v71, v36);
  itemList = (__int64)System_String__Format((System_String_o *)StringLiteral_24013/*"{0:N0}"*/, v43, 0LL);
  if ( !getBasicExpLabel
    || (UILabel__set_text(getBasicExpLabel, (System_String_o *)itemList, 0LL),
        getAccExpLabel = this->fields.getAccExpLabel,
        selectMax = this->fields.addTotalExp,
        v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &selectMax, v45),
        itemList = (__int64)System_String__Format((System_String_o *)StringLiteral_24013/*"{0:N0}"*/, v46, 0LL),
        !getAccExpLabel) )
  {
LABEL_94:
    sub_B7769C(itemList, v3);
  }
  UILabel__set_text(getAccExpLabel, (System_String_o *)itemList, 0LL);
  if ( this->fields.baseUsrSvtData && this->fields.itemType == 1 )
  {
    itemList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !itemList )
      goto LABEL_94;
    itemList = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)itemList,
                          (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
    v48 = this->fields.baseUsrSvtData;
    if ( !v48 )
      goto LABEL_94;
    v49 = (DataMasterBase_WarMaster__WarEntity__int__o *)itemList;
    v51 = *(_QWORD *)&v48->fields.svtId.fields.currentCryptoKey;
    v50 = *(_QWORD *)&v48->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v76.fields.currentCryptoKey = v51;
    *(_QWORD *)&v76.fields.fakeValue = v50;
    itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v76, 0LL);
    if ( !v49 )
      goto LABEL_94;
    itemList = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                          v49,
                          itemList,
                          (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !itemList )
      goto LABEL_94;
    v52 = *(_DWORD *)(itemList + 132);
    itemList = (__int64)this->fields.baseUsrSvtData;
    this->fields.expType = v52;
    if ( !itemList )
      goto LABEL_94;
    this->fields.totalExp = *(_DWORD *)(itemList + 260) + this->fields.selectExp + this->fields.addTotalExp;
    this->fields.checkLv = *(_DWORD *)(itemList + 256);
    LevelMax = UserServantEntity__getLevelMax((UserServantEntity_o *)itemList, 0LL);
    if ( this->fields.checkLv != LevelMax )
    {
      do
        itemList = SvtEqCombineListViewManager__CheckIncrementLv(
                     this,
                     &this->fields.checkLv,
                     &this->fields.increLv,
                     this->fields.totalExp,
                     v53);
      while ( (itemList & 1) == 0 );
      v55 = this->fields.baseUsrSvtData;
      if ( !v55 )
        goto LABEL_94;
      itemList = (__int64)this->fields.levelUpInfoImg;
      if ( !itemList )
        goto LABEL_94;
      increLv = this->fields.increLv;
      lv = v55->fields.lv;
      itemList = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemList, 0LL);
      if ( !itemList )
        goto LABEL_94;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, increLv - lv >= 1, 0LL);
    }
    itemList = (__int64)this->fields.itemList;
    if ( !itemList )
      goto LABEL_94;
    v58 = this->fields.increLv >= LevelMax;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v71,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v75 = v71;
    while ( 1 )
    {
      v61 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v75,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v61 )
        break;
      v59 = v75.fields.current;
      if ( !v75.fields.current )
        sub_B7769C(v61, v62);
      v60 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v75.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v60
        || (SvtEqCombineListViewItem_c *)v75.fields.current->klass->_2.typeHierarchy[v60 - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        sub_B77990(v75.fields.current);
LABEL_96:
        sub_B7769C(v13, v12);
      }
      if ( !ListViewItem__get_IsSelect((ListViewItem_o *)v75.fields.current, 0LL) )
        BYTE2(v59[15].klass) = v58;
    }
    v72[v32] = 903;
    v63 = ++v73;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v75,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( v63 && v72[v63 - 1] == 903 )
      v73 = v63 - 1;
  }
  if ( this->fields.selectSum >= 1 )
  {
    v64 = 1;
    v65 = this;
    goto LABEL_77;
  }
  tempMtSvtList = this->fields.tempMtSvtList;
  if ( !tempMtSvtList )
    goto LABEL_94;
  if ( tempMtSvtList->fields._size <= 0 )
  {
    v65 = this;
    v64 = 0;
LABEL_77:
    SvtEqCombineListViewManager__SetBtnEnable(v65, v64, v47);
    if ( !ObjectList )
      goto LABEL_94;
    goto LABEL_83;
  }
  itemList = (__int64)this->fields.allReleaseButton;
  if ( !itemList )
    goto LABEL_94;
  itemList = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)itemList + 536LL))(
               itemList,
               3LL,
               1LL,
               *(_QWORD *)(*(_QWORD *)itemList + 544LL));
  if ( !ObjectList )
    goto LABEL_94;
LABEL_83:
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    v68 = ObjectList->fields._size;
    if ( v68 >= 1 )
    {
      v69 = 0LL;
      while ( 1 )
      {
        if ( v68 <= (unsigned int)v69 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        itemList = (__int64)ObjectList->fields._items->m_Items[v69];
        if ( !itemList )
          break;
        (*(void (__fastcall **)(__int64, bool, _QWORD))(*(_QWORD *)itemList + 456LL))(
          itemList,
          this->fields.isInput,
          *(_QWORD *)(*(_QWORD *)itemList + 464LL));
        v68 = ObjectList->fields._size;
        if ( (int)++v69 >= v68 )
          return;
      }
      goto LABEL_94;
    }
  }
}


void __fastcall SvtEqCombineListViewManager__ReleaseAll(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *itemList; // x0
  Il2CppObject *current; // x20
  __int64 v5; // x9
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x1
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4390FAA & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B775C4(&SvtEqCombineListViewItem_TypeInfo);
    byte_4390FAA = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( this->fields.selectSum >= 1 )
  {
    itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_17;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v9,
      itemList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v10 = v9;
    while ( 1 )
    {
      v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v10,
             (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v6 )
        break;
      current = v10.fields.current;
      if ( !v10.fields.current )
        goto LABEL_16;
      ListViewItem__set_IsSelect((ListViewItem_o *)v10.fields.current, 0, 0LL);
      v5 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&current->klass->_2.bitflags2 + 1) < (unsigned int)v5
        || (SvtEqCombineListViewItem_c *)current->klass->_2.typeHierarchy[v5 - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        sub_B77990(current);
LABEL_16:
        sub_B7769C(v6, v7);
      }
      BYTE2(current[10].monitor) = 0;
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v10,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.levelUpInfoImg;
    this->fields.selectSum = 0;
    if ( !itemList
      || (itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemList, 0LL)) == 0LL )
    {
LABEL_17:
      sub_B7769C(itemList, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, 0, 0LL);
    *(_QWORD *)&this->fields.totalExp = 0LL;
    this->fields.checkLv = 0;
    SvtEqCombineListViewManager__RefrashListDisp(this, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__RequestListObject(
        SvtEqCombineListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4390FA0 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Count__);
    sub_B775C4(&Method_SvtEqCombineListViewManager_OnMoveEnd__);
    sub_B775C4(&StringLiteral_10218/*"OnMoveEnd"*/);
    byte_4390FA0 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SvtEqCombineListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B7769C(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10218/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v15,
      ObjectList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v15,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__MoveNext__) )
    {
      current = v15.fields.current;
      v11 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_SvtEqCombineListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B7769C(v12, v13);
      zero = UnityEngine_Vector3__get_zero(0LL);
      SvtEqCombineListViewObject__Init(
        (SvtEqCombineListViewObject_o *)current,
        mode,
        v11,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v14);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v15,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__RequestListObject_35213320(
        SvtEqCombineListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4390FA1 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Count__);
    sub_B775C4(&Method_SvtEqCombineListViewManager_OnMoveEnd__);
    sub_B775C4(&StringLiteral_10218/*"OnMoveEnd"*/);
    byte_4390FA1 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SvtEqCombineListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B7769C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10218/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v13,
      ObjectList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v13,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__MoveNext__) )
    {
      current = v13.fields.current;
      v9 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_SvtEqCombineListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B7769C(v10, v11);
      zero = UnityEngine_Vector3__get_zero(0LL);
      SvtEqCombineListViewObject__Init(
        (SvtEqCombineListViewObject_o *)current,
        mode,
        v9,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v12);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v13,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__Dispose__);
  }
}


void __fastcall SvtEqCombineListViewManager__ResetInit(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *selectedMtSvtList_k__BackingField; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *tempMtSvtList; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4390FAB & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_4390FAB = 1;
  }
  memset(&v14, 0, sizeof(v14));
  this->fields.baseUsrSvtData = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.baseUsrSvtData, 0LL, v2, v3, v4, v5, v6, v7);
  selectedMtSvtList_k__BackingField = this->fields._selectedMtSvtList_k__BackingField;
  if ( selectedMtSvtList_k__BackingField )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)selectedMtSvtList_k__BackingField,
      (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__);
  tempMtSvtList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.tempMtSvtList;
  if ( !tempMtSvtList )
    goto LABEL_16;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    tempMtSvtList,
    (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__);
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v14,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v14,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( !v14.fields.current )
        sub_B7769C(0LL, v13);
      ListViewItem__set_IsSelect((ListViewItem_o *)v14.fields.current, 0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v14,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  tempMtSvtList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.levelUpInfoImg;
  this->fields.selectSum = 0;
  if ( !tempMtSvtList
    || (tempMtSvtList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                                     (UnityEngine_Component_o *)tempMtSvtList,
                                                                                     0LL)) == 0LL )
  {
LABEL_16:
    sub_B7769C(tempMtSvtList, v9);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tempMtSvtList, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__SetBtnEnable(
        SvtEqCombineListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Component_o *decideBtnBg; // x0
  WebViewObject_o *Component_WebViewObject; // x21
  int v7; // s0
  __int64 v11; // x1

  if ( (byte_4390F90 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4390F90 = 1;
  }
  decideBtnBg = (UnityEngine_Component_o *)this->fields.decideBtnBg;
  this->fields.isDecideFlg = isEnable;
  if ( !decideBtnBg )
LABEL_13:
    sub_B7769C(decideBtnBg, isEnable);
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              decideBtnBg,
                              (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( this->fields.isDecideFlg )
  {
    *(UnityEngine_Color_o *)&v7 = UnityEngine_Color__get_white(0LL);
    if ( !Component_WebViewObject )
      goto LABEL_13;
  }
  else
  {
    *(UnityEngine_Color_o *)&v7 = UnityEngine_Color__get_gray(0LL);
    if ( !Component_WebViewObject )
      goto LABEL_13;
  }
  UIWidget__set_color((UIWidget_o *)Component_WebViewObject, *(UnityEngine_Color_o *)&v7, 0LL);
  decideBtnBg = (UnityEngine_Component_o *)this->fields.allReleaseButton;
  if ( !decideBtnBg )
    goto LABEL_13;
  if ( isEnable )
    v11 = 0LL;
  else
    v11 = 3LL;
  ((void (__fastcall *)(UnityEngine_Component_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))decideBtnBg->klass[1]._1.implementedInterfaces)(
    decideBtnBg,
    v11,
    1LL,
    decideBtnBg->klass[1]._1.interfaceOffsets);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__SetDispActive(
        SvtEqCombineListViewManager_o *this,
        bool isShow,
        const MethodInfo *method)
{
  UnityEngine_Component_o *allReleaseButton; // x0
  int v6; // s3
  float v7; // s4
  float v8; // s5
  float v9; // s6
  SvtEqCombineListViewManager_c *v10; // x0
  float COLOR_VAL; // s0
  float v12; // s1
  float v13; // s2
  UIWidget_o *v14; // x21
  int v15; // s0
  int v16; // s1
  int v17; // s2
  int v18; // s3
  UIWidget_o *v19; // x21
  int v20; // s0
  int v21; // s1
  int v22; // s2
  int v23; // s3
  UIWidget_o *v24; // x21
  int v25; // s0
  int v26; // s1
  int v27; // s2
  int v28; // s3
  UIWidget_o *v29; // x21
  int v30; // s0
  int v31; // s1
  int v32; // s2
  int v33; // s3
  UIWidget_o *v34; // x21
  int v35; // s0
  int v36; // s1
  int v37; // s2
  int v38; // s3
  UIWidget_o *v39; // x21
  int v40; // s0
  int v41; // s1
  int v42; // s2
  int v43; // s3
  UIWidget_o *v44; // x21
  int v45; // s0
  int v46; // s1
  int v47; // s2
  int v48; // s3
  UIWidget_o *v49; // x21
  int v50; // s0
  int v51; // s1
  int v52; // s2
  int v53; // s3
  UIWidget_o *v54; // x21
  int v55; // s0
  int v56; // s1
  int v57; // s2
  int v58; // s3
  UIWidget_o *v59; // x21
  int v60; // s0
  int v61; // s1
  int v62; // s2
  int v63; // s3
  UIWidget_o *v64; // x21
  int v65; // s0
  int v66; // s1
  int v67; // s2
  int v68; // s3
  UIWidget_o *v69; // x21
  int v70; // s0
  int v71; // s1
  int v72; // s2
  int v73; // s3
  UIWidget_o *v74; // x21
  int v75; // s0
  int v76; // s1
  int v77; // s2
  int v78; // s3
  UIWidget_o *v79; // x20
  int v80; // s0
  int v81; // s1
  int v82; // s2
  int v83; // s3
  __int64 v84; // [xsp+0h] [xbp-30h] BYREF
  __int64 v85; // [xsp+8h] [xbp-28h]

  if ( (byte_4390F8F & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_B775C4(&SvtEqCombineListViewManager_TypeInfo);
    byte_4390F8F = 1;
  }
  v84 = 0LL;
  v85 = 0LL;
  allReleaseButton = (UnityEngine_Component_o *)this->fields.allReleaseButton;
  if ( !allReleaseButton )
    goto LABEL_81;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(allReleaseButton, 0LL);
  if ( !allReleaseButton )
    goto LABEL_81;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allReleaseButton, isShow, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !allReleaseButton )
    goto LABEL_81;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(allReleaseButton, 0LL);
  if ( !allReleaseButton )
    goto LABEL_81;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allReleaseButton, isShow, 0LL);
  v10 = SvtEqCombineListViewManager_TypeInfo;
  if ( (BYTE3(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
    v10 = SvtEqCombineListViewManager_TypeInfo;
  }
  COLOR_VAL = v10->static_fields->COLOR_VAL;
  v12 = COLOR_VAL;
  v13 = COLOR_VAL;
  UnityEngine_Color___ctor_41410832(*(UnityEngine_Color_o *)(&v6 - 3), v7, v8, v9, (const MethodInfo *)&v84);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.spendQpBg;
  if ( !allReleaseButton )
LABEL_81:
    sub_B7769C(allReleaseButton, isShow);
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v14 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v15 = UnityEngine_Color__get_white(0LL);
    if ( !v14 )
      goto LABEL_81;
  }
  else
  {
    v16 = HIDWORD(v84);
    v15 = v84;
    v18 = HIDWORD(v85);
    v17 = v85;
    if ( !allReleaseButton )
      goto LABEL_81;
  }
  UIWidget__set_color(v14, *(UnityEngine_Color_o *)&v15, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.spendQpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_81;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v19 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v20 = UnityEngine_Color__get_white(0LL);
    if ( !v19 )
      goto LABEL_81;
  }
  else
  {
    v21 = HIDWORD(v84);
    v20 = v84;
    v23 = HIDWORD(v85);
    v22 = v85;
    if ( !allReleaseButton )
      goto LABEL_81;
  }
  UIWidget__set_color(v19, *(UnityEngine_Color_o *)&v20, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.spendQpLabel;
  if ( !allReleaseButton )
    goto LABEL_81;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v24 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v25 = UnityEngine_Color__get_white(0LL);
    if ( !v24 )
      goto LABEL_81;
  }
  else
  {
    v26 = HIDWORD(v84);
    v25 = v84;
    v28 = HIDWORD(v85);
    v27 = v85;
    if ( !allReleaseButton )
      goto LABEL_81;
  }
  UIWidget__set_color(v24, *(UnityEngine_Color_o *)&v25, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.getExpBg;
  if ( !allReleaseButton )
    goto LABEL_81;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v29 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v30 = UnityEngine_Color__get_white(0LL);
    if ( !v29 )
      goto LABEL_81;
  }
  else
  {
    v31 = HIDWORD(v84);
    v30 = v84;
    v33 = HIDWORD(v85);
    v32 = v85;
    if ( !allReleaseButton )
      goto LABEL_81;
  }
  UIWidget__set_color(v29, *(UnityEngine_Color_o *)&v30, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.getExpBgImg;
  if ( !allReleaseButton )
    goto LABEL_81;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v34 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v35 = UnityEngine_Color__get_white(0LL);
    if ( !v34 )
      goto LABEL_81;
  }
  else
  {
    v36 = HIDWORD(v84);
    v35 = v84;
    v38 = HIDWORD(v85);
    v37 = v85;
    if ( !allReleaseButton )
      goto LABEL_81;
  }
  UIWidget__set_color(v34, *(UnityEngine_Color_o *)&v35, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.getExpLabel;
  if ( !allReleaseButton )
    goto LABEL_81;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v39 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v40 = UnityEngine_Color__get_white(0LL);
    if ( !v39 )
      goto LABEL_81;
  }
  else
  {
    v41 = HIDWORD(v84);
    v40 = v84;
    v43 = HIDWORD(v85);
    v42 = v85;
    if ( !allReleaseButton )
      goto LABEL_81;
  }
  UIWidget__set_color(v39, *(UnityEngine_Color_o *)&v40, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.getBasicExpLabel;
  if ( !allReleaseButton )
    goto LABEL_81;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v44 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v45 = UnityEngine_Color__get_white(0LL);
    if ( !v44 )
      goto LABEL_81;
  }
  else
  {
    v46 = HIDWORD(v84);
    v45 = v84;
    v48 = HIDWORD(v85);
    v47 = v85;
    if ( !allReleaseButton )
      goto LABEL_81;
  }
  UIWidget__set_color(v44, *(UnityEngine_Color_o *)&v45, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.getAccExpLabel;
  if ( !allReleaseButton )
    goto LABEL_81;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v49 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v50 = UnityEngine_Color__get_white(0LL);
    if ( !v49 )
      goto LABEL_81;
  }
  else
  {
    v51 = HIDWORD(v84);
    v50 = v84;
    v53 = HIDWORD(v85);
    v52 = v85;
    if ( !allReleaseButton )
      goto LABEL_81;
  }
  UIWidget__set_color(v49, *(UnityEngine_Color_o *)&v50, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.haveQpBg;
  if ( !allReleaseButton )
    goto LABEL_81;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v54 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v55 = UnityEngine_Color__get_white(0LL);
    if ( !v54 )
      goto LABEL_81;
  }
  else
  {
    v56 = HIDWORD(v84);
    v55 = v84;
    v58 = HIDWORD(v85);
    v57 = v85;
    if ( !allReleaseButton )
      goto LABEL_81;
  }
  UIWidget__set_color(v54, *(UnityEngine_Color_o *)&v55, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.haveQpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_81;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v59 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v60 = UnityEngine_Color__get_white(0LL);
    if ( !v59 )
      goto LABEL_81;
  }
  else
  {
    v61 = HIDWORD(v84);
    v60 = v84;
    v63 = HIDWORD(v85);
    v62 = v85;
    if ( !allReleaseButton )
      goto LABEL_81;
  }
  UIWidget__set_color(v59, *(UnityEngine_Color_o *)&v60, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.haveQpLabel;
  if ( !allReleaseButton )
    goto LABEL_81;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v64 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v65 = UnityEngine_Color__get_white(0LL);
    if ( !v64 )
      goto LABEL_81;
  }
  else
  {
    v66 = HIDWORD(v84);
    v65 = v84;
    v68 = HIDWORD(v85);
    v67 = v85;
    if ( !allReleaseButton )
      goto LABEL_81;
  }
  UIWidget__set_color(v64, *(UnityEngine_Color_o *)&v65, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.nextExpBg;
  if ( !allReleaseButton )
    goto LABEL_81;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v69 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v70 = UnityEngine_Color__get_white(0LL);
    if ( !v69 )
      goto LABEL_81;
  }
  else
  {
    v71 = HIDWORD(v84);
    v70 = v84;
    v73 = HIDWORD(v85);
    v72 = v85;
    if ( !allReleaseButton )
      goto LABEL_81;
  }
  UIWidget__set_color(v69, *(UnityEngine_Color_o *)&v70, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.nextExpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_81;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v74 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v75 = UnityEngine_Color__get_white(0LL);
    if ( !v74 )
      goto LABEL_81;
  }
  else
  {
    v76 = HIDWORD(v84);
    v75 = v84;
    v78 = HIDWORD(v85);
    v77 = v85;
    if ( !allReleaseButton )
      goto LABEL_81;
  }
  UIWidget__set_color(v74, *(UnityEngine_Color_o *)&v75, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.nextExpLabel;
  if ( !allReleaseButton )
    goto LABEL_81;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v79 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v80 = UnityEngine_Color__get_white(0LL);
    if ( !v79 )
      goto LABEL_81;
  }
  else
  {
    v81 = HIDWORD(v84);
    v80 = v84;
    v83 = HIDWORD(v85);
    v82 = v85;
    if ( !allReleaseButton )
      goto LABEL_81;
  }
  UIWidget__set_color(v79, *(UnityEngine_Color_o *)&v80, 0LL);
}


void __fastcall SvtEqCombineListViewManager__SetDragEnd(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x2
  int32_t dragStartIndex; // w20
  int32_t dragEndIndex; // w21

  if ( (byte_4390FC5 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_4390FC5 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  dragStartIndex = this->fields.dragStartIndex;
  if ( (dragStartIndex & 0x80000000) == 0 )
  {
    dragEndIndex = this->fields.dragEndIndex;
    if ( dragStartIndex <= dragEndIndex )
    {
      do
        SvtEqCombineListViewManager__DecideDragSelect(this, dragStartIndex++, v4);
      while ( dragStartIndex <= this->fields.dragEndIndex );
    }
    else
    {
      do
        SvtEqCombineListViewManager__DecideDragSelect(this, dragEndIndex++, v4);
      while ( dragEndIndex <= this->fields.dragStartIndex );
    }
  }
  SvtEqCombineListViewManager__RefrashListDisp(this, v3);
  this->fields.dragEndIndex = -1;
  *(_QWORD *)&this->fields.dragSelectSum = 0xFFFFFFFF00000000LL;
  this->fields.isDragSelect = 1;
}


void __fastcall SvtEqCombineListViewManager__SetDragMove(
        SvtEqCombineListViewManager_o *this,
        int32_t moveIndex,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( this->fields.dragEndIndex != moveIndex )
    SvtEqCombineListViewManager__SetDragSelectItem(this, this->fields.dragStartIndex, moveIndex, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SvtEqCombineListViewManager__SetDragSelect(
        SvtEqCombineListViewManager_o *this,
        int32_t index,
        bool isDragSelect,
        const MethodInfo *method)
{
  SvtEqCombineListViewManager_o *v6; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x22
  ListViewItem_o *v8; // x19
  SvtEqCombineListViewItem_c *v9; // x1
  __int64 v10; // x9
  int32_t sortIndex; // w8
  bool v12; // w21
  _BOOL4 v13; // w21
  bool IsSelect; // w0
  const MethodInfo *v15; // x4
  int v16; // w8
  UnityEngine_Object_o *viewObject; // x20
  __int64 v18; // x9
  bool result; // w0
  SvtEqCombineListViewObject_o *v20; // x0
  const MethodInfo *v21; // x1

  v6 = this;
  if ( (byte_4390FC3 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&SvtEqCombineListViewItem_TypeInfo);
    this = (SvtEqCombineListViewManager_o *)sub_B775C4(&SvtEqCombineListViewObject_TypeInfo);
    byte_4390FC3 = 1;
  }
  itemSortList = v6->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_34;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  v8 = itemSortList->fields._items->m_Items[index];
  if ( !v8 )
    goto LABEL_34;
  v9 = SvtEqCombineListViewItem_TypeInfo;
  v10 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v8->klass->_2.bitflags2 + 1) < (unsigned int)v10
    || (SvtEqCombineListViewItem_c *)v8->klass->_2.typeHierarchy[v10 - 1] != SvtEqCombineListViewItem_TypeInfo )
  {
    this = (SvtEqCombineListViewManager_o *)v8;
    goto LABEL_36;
  }
  sortIndex = v8[2].fields.sortIndex;
  if ( !isDragSelect )
  {
    if ( (sortIndex & 0x80000000) != 0 )
      goto LABEL_24;
    if ( !ListViewItem__get_IsSelect(v8, 0LL) && v8[2].fields.sortIndex >= 1 )
      --v6->fields.dragSelectSum;
    v12 = 0;
    v16 = -1;
    goto LABEL_21;
  }
  if ( (sortIndex & 0x80000000) == 0 )
  {
LABEL_24:
    v12 = 0;
    goto LABEL_25;
  }
  v8[2].fields.sortIndex = 0;
  v12 = 0;
  if ( SvtEqCombineListViewItem__get_IsCanNotSelect((SvtEqCombineListViewItem_o *)v8, (const MethodInfo *)v9) )
    goto LABEL_25;
  v13 = v6->fields.isDragSelect;
  IsSelect = ListViewItem__get_IsSelect(v8, 0LL);
  if ( !v13 )
  {
    if ( !IsSelect )
      goto LABEL_24;
    v12 = 0;
    v16 = 1;
LABEL_21:
    v8[2].fields.sortIndex = v16;
    goto LABEL_25;
  }
  if ( IsSelect )
    goto LABEL_24;
  v12 = 1;
  if ( SvtEqCombineListViewManager__IsSelectEnable(
         v6,
         (SvtEqCombineListViewItem_o *)v8,
         v6->fields.dragSelectSum,
         1,
         v15) )
  {
    ++v6->fields.dragSelectSum;
    v8[2].fields.sortIndex = 1;
    goto LABEL_24;
  }
LABEL_25:
  viewObject = (UnityEngine_Object_o *)v8->fields.viewObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
    return v12;
  this = (SvtEqCombineListViewManager_o *)v8->fields.viewObject;
  if ( !this )
LABEL_34:
    sub_B7769C(this, *(_QWORD *)&index);
  v18 = *(&SvtEqCombineListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v18
    && (SvtEqCombineListViewObject_c *)this->klass->_2.typeHierarchy[v18 - 1] == SvtEqCombineListViewObject_TypeInfo )
  {
    SvtEqCombineListViewObject__SetupDisp(
      (SvtEqCombineListViewObject_o *)this,
      (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo);
    return v12;
  }
LABEL_36:
  sub_B77990(this);
  SvtEqCombineListViewObject__SetupDisp(v20, v21);
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__SetDragSelectItem(
        SvtEqCombineListViewManager_o *this,
        int32_t startIndex,
        int32_t endIndex,
        const MethodInfo *method)
{
  int32_t v5; // w21
  SvtEqCombineListViewManager_o *v6; // x19
  int32_t dragStartIndex; // w8
  int32_t dragEndIndex; // w9
  int v9; // w25
  int v10; // w26
  int32_t v11; // w23
  int32_t v12; // w24
  int32_t v13; // w22
  int v14; // w27
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x20
  SvtEqCombineListViewManager_o *v16; // x20
  __int64 v17; // x9
  UnityEngine_Object_o *clipRange; // x21
  __int64 v19; // x9
  SvtEqCombineListViewManager_o *v20; // x0
  int32_t v21; // w1
  bool v22; // w2
  const MethodInfo *v23; // x3

  v5 = startIndex;
  v6 = this;
  if ( (byte_4390FC2 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&SvtEqCombineListViewItem_TypeInfo);
    this = (SvtEqCombineListViewManager_o *)sub_B775C4(&SvtEqCombineListViewObject_TypeInfo);
    byte_4390FC2 = 1;
  }
  dragStartIndex = v6->fields.dragStartIndex;
  if ( (dragStartIndex & 0x80000000) != 0 )
  {
    v9 = -1;
    v10 = -1;
  }
  else
  {
    dragEndIndex = v6->fields.dragEndIndex;
    if ( dragStartIndex <= dragEndIndex )
      v9 = v6->fields.dragEndIndex;
    else
      v9 = v6->fields.dragStartIndex;
    if ( dragStartIndex <= dragEndIndex )
      v10 = v6->fields.dragStartIndex;
    else
      v10 = v6->fields.dragEndIndex;
  }
  v6->fields.dragStartIndex = v5;
  v6->fields.dragEndIndex = endIndex;
  if ( (v5 & 0x80000000) != 0 )
  {
    v11 = -1;
    v12 = -1;
    if ( (v10 & 0x80000000) != 0 )
      goto LABEL_28;
  }
  else
  {
    if ( v5 <= endIndex )
      v11 = endIndex;
    else
      v11 = v5;
    if ( v5 <= endIndex )
      v12 = v5;
    else
      v12 = endIndex;
    if ( (v10 & 0x80000000) != 0 )
      goto LABEL_28;
  }
  if ( v10 <= v9 )
  {
    v13 = v10;
    do
    {
      if ( v13 > v11 || (v12 & 0x80000000) != 0 || v13 < v12 )
        this = (SvtEqCombineListViewManager_o *)SvtEqCombineListViewManager__SetDragSelect(v6, v13, 0, method);
      ++v13;
    }
    while ( v13 <= v9 );
  }
LABEL_28:
  if ( (v5 & 0x80000000) == 0 )
  {
    if ( v5 <= endIndex )
    {
      do
      {
        if ( v5 > v9 || (v10 & 0x80000000) != 0 || v5 < v10 )
          this = (SvtEqCombineListViewManager_o *)SvtEqCombineListViewManager__SetDragSelect(v6, v5, 1, method);
        ++v5;
      }
      while ( v5 <= endIndex );
    }
    else
    {
      do
      {
        if ( v5 > v9 || (v10 & 0x80000000) != 0 || v5 < v10 )
          this = (SvtEqCombineListViewManager_o *)SvtEqCombineListViewManager__SetDragSelect(v6, v5, 1, method);
        --v5;
      }
      while ( v5 >= endIndex );
    }
    if ( v6->fields.isDragSelect && (v12 & 0x80000000) == 0 && v12 <= v11 )
    {
      v14 = v6->fields.selectSum + 1;
      while ( 1 )
      {
        itemSortList = v6->fields.itemSortList;
        if ( !itemSortList )
          goto LABEL_62;
        if ( itemSortList->fields._size <= (unsigned int)v12 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v16 = (SvtEqCombineListViewManager_o *)itemSortList->fields._items->m_Items[v12];
        if ( !v16 )
LABEL_62:
          sub_B7769C(this, *(_QWORD *)&startIndex);
        *(_QWORD *)&startIndex = SvtEqCombineListViewItem_TypeInfo;
        v17 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v17
          || (SvtEqCombineListViewItem_c *)v16->klass->_2.typeHierarchy[v17 - 1] != SvtEqCombineListViewItem_TypeInfo )
        {
          break;
        }
        if ( SLODWORD(v16->fields.rightItem) >= 1 )
        {
          LODWORD(v16->fields.rightItem) = v14;
          clipRange = (UnityEngine_Object_o *)v16->fields.clipRange;
          ++v14;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          this = (SvtEqCombineListViewManager_o *)UnityEngine_Object__op_Inequality(clipRange, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (SvtEqCombineListViewManager_o *)v16->fields.clipRange;
            if ( !this )
              goto LABEL_62;
            v19 = *(&SvtEqCombineListViewObject_TypeInfo->_2.bitflags2 + 1);
            if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v19
              || (SvtEqCombineListViewObject_c *)this->klass->_2.typeHierarchy[v19 - 1] != SvtEqCombineListViewObject_TypeInfo )
            {
              goto LABEL_64;
            }
            SvtEqCombineListViewObject__SetupDisp(
              (SvtEqCombineListViewObject_o *)this,
              (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo);
          }
        }
        if ( ++v12 > v11 )
          return;
      }
      this = v16;
LABEL_64:
      sub_B77990(this);
      SvtEqCombineListViewManager__SetDragSelect(v20, v21, v22, v23);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__SetDragStart(
        SvtEqCombineListViewManager_o *this,
        int32_t startIndex,
        bool isDragSelect,
        const MethodInfo *method)
{
  int32_t v5; // w20
  SvtEqCombineListViewManager_o *v6; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x25
  int size; // w21
  int v9; // w22
  __int64 v10; // x9
  UnityEngine_Object_o *scrollView; // x20

  v5 = startIndex;
  v6 = this;
  if ( (byte_4390FC4 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    this = (SvtEqCombineListViewManager_o *)sub_B775C4(&SvtEqCombineListViewItem_TypeInfo);
    byte_4390FC4 = 1;
  }
  v6->fields.dragEndIndex = -1;
  *(_QWORD *)&v6->fields.dragSelectSum = 0xFFFFFFFF00000000LL;
  itemSortList = v6->fields.itemSortList;
  v6->fields.isDragSelect = isDragSelect;
  if ( !itemSortList )
    goto LABEL_22;
  size = itemSortList->fields._size;
  if ( size >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( itemSortList->fields._size <= (unsigned int)v9 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      this = (SvtEqCombineListViewManager_o *)itemSortList->fields._items->m_Items[v9];
      if ( !this )
        goto LABEL_22;
      *(_QWORD *)&startIndex = SvtEqCombineListViewItem_TypeInfo;
      v10 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v10
        || (SvtEqCombineListViewItem_c *)this->klass->_2.typeHierarchy[v10 - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        break;
      }
      ++v9;
      LODWORD(this->fields.rightItem) = -1;
      if ( v9 >= size )
        goto LABEL_14;
      itemSortList = v6->fields.itemSortList;
      if ( !itemSortList )
        goto LABEL_22;
    }
    sub_B77990(this);
LABEL_22:
    sub_B7769C(this, *(_QWORD *)&startIndex);
  }
LABEL_14:
  SvtEqCombineListViewManager__SetDragSelectItem(v6, v5, v5, method);
  scrollView = (UnityEngine_Object_o *)v6->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    this = (SvtEqCombineListViewManager_o *)v6->fields.scrollView;
    if ( !this )
      goto LABEL_22;
    UIScrollView__Press((UIScrollView_o *)this, 0, 0LL);
  }
}


void __fastcall SvtEqCombineListViewManager__SetFilterButtonImage(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_4390FB3 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17332/*"btn_filter_on"*/);
    sub_B775C4(&StringLiteral_17331/*"btn_filter"*/);
    byte_4390FB3 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B7769C(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17331/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17332/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0LL);
}


void __fastcall SvtEqCombineListViewManager__SetMaterialSvtInfo(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  SvtEqCombineListViewManager_o *v2; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *selectedMtSvtList_k__BackingField; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v5; // x21
  Il2CppObject *current; // x20
  __int64 v7; // x26
  int size; // w8
  SvtEqCombineListViewItem_o *v9; // x21
  __int64 v10; // x9
  int64_t UserSvtId; // x0
  const MethodInfo *v12; // x1
  int64_t v13; // x22
  int64_t v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+20h] [xbp-60h] BYREF

  v2 = this;
  if ( (byte_4390F92 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (SvtEqCombineListViewManager_o *)sub_B775C4(&SvtEqCombineListViewItem_TypeInfo);
    byte_4390F92 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  itemList = v2->fields.itemList;
  if ( !itemList )
    sub_B7769C(this, method);
  if ( itemList->fields._size >= 1 )
  {
    selectedMtSvtList_k__BackingField = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v2->fields._selectedMtSvtList_k__BackingField;
    if ( selectedMtSvtList_k__BackingField )
    {
      if ( selectedMtSvtList_k__BackingField->fields._size >= 1 )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v16,
          selectedMtSvtList_k__BackingField,
          (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__);
        v17 = v16;
LABEL_21:
        while ( 1 )
        {
          v14 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v17,
                  (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__);
          if ( (v14 & 1) == 0 )
            break;
          v5 = v2->fields.itemList;
          if ( !v5 )
            goto LABEL_25;
          current = v17.fields.current;
          v7 = 0LL;
          while ( 1 )
          {
            size = v5->fields._size;
            if ( (int)v7 >= size )
              goto LABEL_21;
            if ( size <= (unsigned int)v7 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
            v9 = (SvtEqCombineListViewItem_o *)v5->fields._items->m_Items[v7];
            if ( !v9 )
              sub_B7769C(v14, v15);
            v10 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v9->klass->_2.bitflags2 + 1) < (unsigned int)v10
              || (SvtEqCombineListViewItem_c *)v9->klass->_2.typeHierarchy[v10 - 1] != SvtEqCombineListViewItem_TypeInfo )
            {
              sub_B77990(v9);
LABEL_25:
              sub_B7769C(v14, v15);
            }
            UserSvtId = SvtEqCombineListViewItem__get_UserSvtId(
                          v9,
                          (const MethodInfo *)SvtEqCombineListViewItem_TypeInfo);
            if ( !current )
              sub_B7769C(UserSvtId, v12);
            v13 = UserSvtId;
            v14 = SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)current, v12);
            if ( v13 == v14 )
              break;
            v5 = v2->fields.itemList;
            ++v7;
            if ( !v5 )
              goto LABEL_25;
          }
          v9->fields.isCanNotLock = 1;
        }
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v17,
          (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
      }
    }
  }
}


void __fastcall SvtEqCombineListViewManager__SetMode(
        SvtEqCombineListViewManager_o *this,
        int32_t mode,
        SvtEqCombineListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  SvtEqCombineListViewManager__SetMode_35212208(this, mode, v10);
}


void __fastcall SvtEqCombineListViewManager__SetMode_35212208(
        SvtEqCombineListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *ObjectSum; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *scrollView; // x21
  const MethodInfo *v8; // x2
  int32_t v9; // w1
  int v10; // w23
  char v11; // w24
  _BOOL8 v12; // x0
  __int64 v13; // x1
  ListViewItem_o *current; // x21
  __int64 v15; // x9
  const MethodInfo *v16; // x1
  int32_t selectNum; // w28
  __int64 v18; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  int32_t klass; // w9
  _BOOL8 v21; // x0
  __int64 v22; // x1
  int v23; // w28
  int v24; // w22
  const MethodInfo *v25; // x1
  _BYTE v26[32]; // [xsp+8h] [xbp-B8h] BYREF
  int v27; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_4390F9F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&SvtEqCombineListViewItem_TypeInfo);
    byte_4390F9F = 1;
  }
  memset(&v29, 0, sizeof(v29));
  memset(&v28, 0, sizeof(v28));
  v27 = 0;
  this->fields.initMode = mode;
  ObjectSum = (UnityEngine_Behaviour_o *)ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  this->fields.callbackCount = (int)ObjectSum;
  if ( !this )
    goto LABEL_46;
  ListViewManager__set_IsInput((ListViewManager_o *)this, (mode | 1) == 3, 0LL);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    ObjectSum = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !ObjectSum )
      goto LABEL_46;
    if ( !UnityEngine_Behaviour__get_enabled(ObjectSum, 0LL) )
    {
      ObjectSum = (UnityEngine_Behaviour_o *)this->fields.scrollView;
      if ( !ObjectSum )
        goto LABEL_46;
      UnityEngine_Behaviour__set_enabled(ObjectSum, 1, 0LL);
      ObjectSum = (UnityEngine_Behaviour_o *)this->fields.scrollView;
      if ( !ObjectSum )
        goto LABEL_46;
      UIScrollView__UpdatePosition((UIScrollView_o *)ObjectSum, 0LL);
    }
  }
  if ( (unsigned int)(mode - 1) < 2 )
  {
    ObjectSum = (UnityEngine_Behaviour_o *)this->fields.itemList;
    if ( ObjectSum )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v26,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectSum,
        (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v10 = 0;
      v11 = 0;
      v29 = *(System_Collections_Generic_List_Enumerator_T__o *)v26;
      while ( 1 )
      {
        v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v29,
                (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v12 )
          break;
        current = (ListViewItem_o *)v29.fields.current;
        if ( !v29.fields.current )
          goto LABEL_45;
        v15 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v29.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v15
          || (SvtEqCombineListViewItem_c *)v29.fields.current->klass->_2.typeHierarchy[v15 - 1] != SvtEqCombineListViewItem_TypeInfo )
        {
          sub_B77990(v29.fields.current);
LABEL_45:
          sub_B7769C(v12, v13);
        }
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v29.fields.current, 0LL)
          && SvtEqCombineListViewItem__get_IsCanNotSelect((SvtEqCombineListViewItem_o *)current, v16) )
        {
          selectNum = current->fields.selectNum;
          ListViewItem__set_IsSelect(current, 0, 0LL);
          itemList = this->fields.itemList;
          --this->fields.selectSum;
          if ( !itemList )
            sub_B7769C(0LL, v18);
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v26,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
            (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v28 = *(System_Collections_Generic_List_Enumerator_T__o *)v26;
          while ( 1 )
          {
            v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v28,
                    (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v21 )
              break;
            if ( !v28.fields.current )
              sub_B7769C(v21, v22);
            klass = (int32_t)v28.fields.current[1].klass;
            if ( klass > selectNum )
              LODWORD(v28.fields.current[1].klass) = klass - 1;
          }
          *(_DWORD *)&v26[4 * v10 + 24] = 252;
          v23 = ++v27;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v28,
            (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          v10 = 0;
          v11 = 1;
          if ( v23 )
          {
            v11 = 1;
            v10 = v23;
            if ( *(_DWORD *)&v26[4 * v23 + 20] == 252 )
            {
              v11 = 1;
              v10 = v23 - 1;
              v27 = v23 - 1;
            }
          }
        }
      }
      *(_DWORD *)&v26[4 * v10 + 24] = 280;
      v24 = ++v27;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v29,
        (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( v24 && *(_DWORD *)&v26[4 * v24 + 20] == 280 )
        v27 = v24 - 1;
      if ( (v11 & 1) != 0 )
        SvtEqCombineListViewManager__RefrashListDisp(this, v25);
      if ( mode == 2 )
        v9 = 4;
      else
        v9 = 2;
      goto LABEL_42;
    }
LABEL_46:
    sub_B7769C(ObjectSum, v6);
  }
  if ( mode != 3 )
    return;
  v9 = 5;
LABEL_42:
  SvtEqCombineListViewManager__RequestListObject_35213320(this, v9, v8);
}


void __fastcall SvtEqCombineListViewManager__SetMode_35213264(
        SvtEqCombineListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  SvtEqCombineListViewManager__SetMode_35212208(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__SetObjectItem(
        SvtEqCombineListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  SvtEqCombineListViewManager_o *v5; // x20
  __int64 v6; // x9
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  float v9; // s0
  int v10; // s1
  int32_t v13; // w1

  v5 = this;
  if ( (byte_4390F9E & 1) == 0 )
  {
    this = (SvtEqCombineListViewManager_o *)sub_B775C4(&SvtEqCombineListViewObject_TypeInfo);
    byte_4390F9E = 1;
  }
  if ( !obj )
LABEL_11:
    sub_B7769C(this, obj);
  v6 = *(&SvtEqCombineListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (SvtEqCombineListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    sub_B77990(obj);
    goto LABEL_11;
  }
  initMode = v5->fields.initMode;
  *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 2 )
    v13 = 4;
  else
    v13 = 2;
  SvtEqCombineListViewObject__Init(
    (SvtEqCombineListViewObject_o *)obj,
    v13,
    0LL,
    v9,
    *(UnityEngine_Vector3_o *)&v10,
    v8);
}


void __fastcall SvtEqCombineListViewManager__SetReleaseBtnEnable(
        SvtEqCombineListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct UICommonButton_o *allReleaseButton; // x0
  __int64 v4; // x1

  allReleaseButton = this->fields.allReleaseButton;
  if ( !allReleaseButton )
    sub_B7769C(0LL, isEnable);
  if ( isEnable )
    v4 = 0LL;
  else
    v4 = 3LL;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))allReleaseButton->klass->vtable._14_SetState.method)(
    allReleaseButton,
    v4,
    1LL,
    allReleaseButton->klass->vtable._15_OnPress.methodPtr);
}


void __fastcall SvtEqCombineListViewManager__SetSelectBaseSvtData(
        SvtEqCombineListViewManager_o *this,
        UserServantEntity_o *resData,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.baseUsrSvtData = resData;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)resData,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SvtEqCombineListViewManager__SetSelectMaterialList(
        SvtEqCombineListViewManager_o *this,
        System_Collections_Generic_List_SvtEqCombineListViewItem__o *selectedItems,
        const MethodInfo *method)
{
  SetCombineData_o *v5; // x22
  struct SetCombineData_o **p_combineData; // x19
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  char *combineData; // x0
  System_Int32_array **baseUsrSvtData; // x1
  struct SetCombineData_o *v22; // x8
  struct SetCombineData_o *v23; // x8
  struct SetCombineData_o *v24; // x8
  struct SetCombineData_o *v25; // x8
  struct SetCombineData_o *v26; // x8
  struct SetCombineData_o *v27; // x8
  System_Collections_Generic_Dictionary_long__bool__o *v28; // x20
  _BOOL8 v29; // x0
  const MethodInfo *v30; // x1
  SvtEqCombineListViewItem_o *current; // x21
  const MethodInfo *v32; // x1
  int64_t UserSvtId; // x0
  int isUseSupportEquip; // w8
  struct SetCombineData_o *v35; // x21
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Collections_Generic_List_Enumerator_T__o v49; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4390FA7 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_long__bool__Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_long__bool___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_long__bool__get_Keys__);
    sub_B775C4(&System_Collections_Generic_Dictionary_long__bool__TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__);
    sub_B775C4(&SetCombineData_TypeInfo);
    byte_4390FA7 = 1;
  }
  memset(&v50, 0, sizeof(v50));
  v5 = (SetCombineData_o *)sub_B77694(SetCombineData_TypeInfo);
  SetCombineData___ctor(v5, 0LL);
  p_combineData = &this->fields.combineData;
  this->fields.combineData = v5;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.combineData,
    (System_Int32_array **)v5,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  combineData = (char *)this->fields.combineData;
  if ( !combineData )
    goto LABEL_29;
  baseUsrSvtData = (System_Int32_array **)this->fields.baseUsrSvtData;
  *((_QWORD *)combineData + 2) = baseUsrSvtData;
  sub_B77560((BattleServantConfConponent_o *)(combineData + 16), baseUsrSvtData, v14, v15, v16, v17, v18, v19);
  if ( !*p_combineData )
    goto LABEL_29;
  (*p_combineData)->fields.selectSum = this->fields.selectSum;
  v22 = this->fields.combineData;
  if ( !v22 )
    goto LABEL_29;
  v22->fields.spendQp = this->fields.selectQp;
  v23 = this->fields.combineData;
  if ( !v23 )
    goto LABEL_29;
  v23->fields.getExp = this->fields.selectExp;
  v24 = this->fields.combineData;
  if ( !v24 )
    goto LABEL_29;
  v24->fields.getAddExp = this->fields.addTotalExp;
  v25 = this->fields.combineData;
  if ( !v25 )
    goto LABEL_29;
  v25->fields.getHpAdjustVal = this->fields.getHpUpVal;
  v26 = this->fields.combineData;
  if ( !v26 )
    goto LABEL_29;
  v26->fields.getAtkAdjustVal = this->fields.getAtkUpVal;
  v27 = this->fields.combineData;
  if ( !v27 )
    goto LABEL_29;
  v27->fields.isAdjustMax = this->fields.isAllUpMax;
  v28 = (System_Collections_Generic_Dictionary_long__bool__o *)sub_B77694(System_Collections_Generic_Dictionary_long__bool__TypeInfo);
  System_Collections_Generic_Dictionary_long__bool____ctor(
    v28,
    (const MethodInfo_2FA6964 *)Method_System_Collections_Generic_Dictionary_long__bool___ctor__);
  if ( !selectedItems )
    goto LABEL_29;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v49,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)selectedItems,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__);
  v50 = v49;
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v50,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__);
    if ( !v29 )
      break;
    current = (SvtEqCombineListViewItem_o *)v50.fields.current;
    if ( !v50.fields.current )
      sub_B7769C(v29, v30);
    if ( SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)v50.fields.current, v30) >= 1 )
    {
      UserSvtId = SvtEqCombineListViewItem__get_UserSvtId(current, v32);
      if ( current->fields.isEquiped )
      {
        isUseSupportEquip = 1;
        if ( !v28 )
          goto LABEL_28;
      }
      else
      {
        isUseSupportEquip = current->fields.isUseSupportEquip;
        if ( !v28 )
LABEL_28:
          sub_B7769C(UserSvtId, UserSvtId);
      }
      System_Collections_Generic_Dictionary_long__bool___Add(
        v28,
        UserSvtId,
        isUseSupportEquip != 0,
        (const MethodInfo_2FA751C *)Method_System_Collections_Generic_Dictionary_long__bool__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v50,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
  if ( !v28 )
    goto LABEL_29;
  if ( System_Collections_Generic_Dictionary_long__bool___get_Count(
         v28,
         (const MethodInfo_2FA7114 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__) < 1 )
    return;
  v35 = *p_combineData;
  Keys = System_Collections_Generic_Dictionary_long__bool___get_Keys(
           v28,
           (const MethodInfo_2FA7124 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Keys__);
  combineData = (char *)System_Linq_Enumerable__ToArray_long_(
                          (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                          (const MethodInfo_1D3D558 *)Method_System_Linq_Enumerable_ToArray_long___);
  if ( !v35
    || (v35->fields.materialUsrSvtIdList = (struct System_Int64_array *)combineData,
        sub_B77560(
          (BattleServantConfConponent_o *)&v35->fields.materialUsrSvtIdList,
          (System_Int32_array **)combineData,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42),
        (combineData = (char *)*p_combineData) == 0LL) )
  {
LABEL_29:
    sub_B7769C(combineData, v13);
  }
  *((_QWORD *)combineData + 8) = v28;
  sub_B77560(
    (BattleServantConfConponent_o *)(combineData + 64),
    (System_Int32_array **)v28,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
}


void __fastcall SvtEqCombineListViewManager__SetSelectedMaterialInfo(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o **p_selectedMtSvtList_k__BackingField; // x21
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  SvtEqCombineListViewItem_c *v11; // x1
  int64_t tempMtSvtList; // x0
  const MethodInfo *v13; // x1
  System_Collections_Generic_List_SvtEqCombineListViewItem__o *SelectedMaterialList; // x20
  System_Collections_Generic_List_long__o *v15; // x22
  int size; // w23
  __int64 v17; // x24
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x27
  __int64 v19; // x9
  struct System_Int64_array *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x2
  SvtEqCombineListViewManager_o *v28; // x0
  System_Collections_Generic_List_SvtEqCombineListViewItem__o *v29; // x1

  if ( (byte_4390FA6 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_long__TypeInfo);
    sub_B775C4(&SvtEqCombineListViewItem_TypeInfo);
    byte_4390FA6 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
  p_selectedMtSvtList_k__BackingField = &this->fields._selectedMtSvtList_k__BackingField;
  this->fields._selectedMtSvtList_k__BackingField = (struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._selectedMtSvtList_k__BackingField,
    (System_Int32_array **)v3,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  tempMtSvtList = (int64_t)this->fields.tempMtSvtList;
  if ( !tempMtSvtList )
    goto LABEL_22;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)tempMtSvtList,
    (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__);
  SelectedMaterialList = SvtEqCombineListViewManager__GetSelectedMaterialList(this, v13);
  v15 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
  if ( !SelectedMaterialList )
    goto LABEL_22;
  size = SelectedMaterialList->fields._size;
  if ( size < 1 )
  {
LABEL_17:
    tempMtSvtList = (int64_t)this->fields.tempMtSvtList;
    if ( tempMtSvtList )
    {
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)tempMtSvtList,
        (System_Collections_Generic_IEnumerable_T__o *)SelectedMaterialList,
        (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__AddRange__);
      tempMtSvtList = (int64_t)*p_selectedMtSvtList_k__BackingField;
      if ( *p_selectedMtSvtList_k__BackingField )
      {
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)tempMtSvtList,
          (System_Collections_Generic_IEnumerable_T__o *)SelectedMaterialList,
          (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__AddRange__);
        if ( v15 )
        {
          v20 = System_Collections_Generic_List_long___ToArray(
                  v15,
                  (const MethodInfo_30EDEA4 *)Method_System_Collections_Generic_List_long__ToArray__);
          this->fields.highRarityList = v20;
          sub_B77560(
            (BattleServantConfConponent_o *)&this->fields.highRarityList,
            (System_Int32_array **)v20,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26);
          v28 = this;
          v29 = SelectedMaterialList;
          goto LABEL_21;
        }
      }
    }
LABEL_22:
    sub_B7769C(tempMtSvtList, v11);
  }
  v17 = 0LL;
  while ( 1 )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_22;
    if ( itemList->fields._size <= (unsigned int)v17 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    tempMtSvtList = (int64_t)itemList->fields._items->m_Items[v17];
    if ( !tempMtSvtList )
      goto LABEL_22;
    v11 = SvtEqCombineListViewItem_TypeInfo;
    v19 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)tempMtSvtList + 300LL) < (unsigned int)v19
      || *(SvtEqCombineListViewItem_c **)(*(_QWORD *)(*(_QWORD *)tempMtSvtList + 200LL) + 8 * v19 - 8) != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    if ( *(int *)(tempMtSvtList + 156) >= 3 )
    {
      tempMtSvtList = SvtEqCombineListViewItem__get_UserSvtId(
                        (SvtEqCombineListViewItem_o *)tempMtSvtList,
                        (const MethodInfo *)SvtEqCombineListViewItem_TypeInfo);
      if ( !v15 )
        goto LABEL_22;
      System_Collections_Generic_List_long___Add(
        v15,
        tempMtSvtList,
        (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__);
    }
    if ( (int)++v17 >= size )
      goto LABEL_17;
  }
  sub_B77990(tempMtSvtList);
LABEL_21:
  SvtEqCombineListViewManager__SetSelectMaterialList(v28, v29, v27);
}


void __fastcall SvtEqCombineListViewManager__SetSelectedSvtList(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *tempMtSvtList; // x1

  tempMtSvtList = this->fields.tempMtSvtList;
  if ( tempMtSvtList )
  {
    this->fields._selectedMtSvtList_k__BackingField = tempMtSvtList;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields._selectedMtSvtList_k__BackingField,
      (System_Int32_array **)tempMtSvtList,
      v2,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__SetServantList(
        SvtEqCombineListViewManager_o *this,
        int32_t type,
        EventUpValSetupInfo_o *setupInfo,
        EventUpValSetupInfo_o *finishSetupInfo,
        const MethodInfo *method)
{
  int64_t emptyListNoticeLabel; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct ListViewSort_o *sort; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeButtonSprite; // x23
  struct UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantMaster_o **p_userServantMaster; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UserGameEntity_o *SelfUserGame; // x22
  __int64 v26; // x2
  int32_t qp; // w8
  UILabel_o *haveQpLabel; // x24
  Il2CppObject *v29; // x0
  UILabel_o *nextExpLabel; // x24
  __int64 v31; // x2
  Il2CppObject *v32; // x0
  int v33; // w9
  UserServantEntity_array *ServantEquipList; // x24
  const MethodInfo *v35; // x2
  int v36; // w20
  int32_t FriendShipSvtEquipNum; // w0
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v38; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x27
  int max_length; // w8
  __int64 v41; // x21
  UserServantEntity_o *v42; // x28
  __int128 v43; // q0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v45; // q0
  int64_t v46; // x25
  UILabel_o *v47; // x26
  __int64 v48; // x2
  Il2CppObject *v49; // x0
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v50; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v51; // x0
  const MethodInfo *v52; // x2
  int size; // w8
  int32_t v54; // w24
  WarBoardAIRoute_RouteData_o *v55; // x8
  __int128 v56; // q0
  struct UserServantEntity_o *v57; // x8
  __int128 v58; // q0
  int64_t v59; // x26
  il2cpp_array_size_t v60; // w20
  int32_t v61; // w0
  int v62; // w20
  UILabel_o *v63; // x25
  __int64 v64; // x2
  Il2CppObject *v65; // x0
  int v66; // w21
  int v67; // w8
  unsigned int v68; // w25
  Il2CppClass **v69; // x20
  Il2CppClass *v70; // x8
  UserServantEntity_o **v71; // x20
  Il2CppClass *v72; // t1
  Il2CppType byval_arg; // q0
  int64_t v74; // x26
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *selectedMtSvtList_k__BackingField; // x27
  int v76; // w8
  int v77; // w28
  int v78; // w21
  int32_t v79; // w23
  _BOOL4 v80; // w28
  UserServantEntity_array *v81; // x22
  UserServantEntity_o *v82; // x20
  UserServantEntity_o *v83; // x21
  int64_t favoriteUserSvtId; // x24
  SvtEqCombineListViewItem_o *v85; // x27
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *v86; // x8
  UILabel_o *servantInfoLabel; // x20
  System_String_o *v88; // x21
  __int64 v89; // x2
  Il2CppObject *v90; // x22
  __int64 v91; // x2
  Il2CppObject *v92; // x0
  const MethodInfo *v93; // x1
  const MethodInfo *v94; // x1
  __int64 v95; // x0
  const MethodInfo *v96; // [xsp+8h] [xbp-168h]
  int v97; // [xsp+14h] [xbp-15Ch]
  int v98; // [xsp+18h] [xbp-158h]
  UserGameEntity_o *v101; // [xsp+30h] [xbp-140h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v103; // [xsp+40h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v104; // [xsp+60h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v105; // [xsp+80h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v106; // [xsp+A0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v107; // [xsp+C0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v108; // [xsp+E0h] [xbp-90h] BYREF
  int32_t svtEquipKeep; // [xsp+108h] [xbp-68h] BYREF
  float barExp; // [xsp+10Ch] [xbp-64h] BYREF
  int32_t lateExp[2]; // [xsp+110h] [xbp-60h] BYREF

  if ( (byte_4390F91 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__Remove__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor___69411152);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&SvtEqCombineListViewItem_TypeInfo);
    sub_B775C4(&StringLiteral_24013/*"{0:N0}"*/);
    sub_B775C4(&StringLiteral_12702/*"SUM_INFO"*/);
    byte_4390F91 = 1;
  }
  *(_QWORD *)lateExp = 0LL;
  barExp = 0.0;
  emptyListNoticeLabel = (int64_t)this->fields.emptyListNoticeLabel;
  if ( !emptyListNoticeLabel )
    goto LABEL_111;
  emptyListNoticeLabel = (int64_t)UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)emptyListNoticeLabel,
                                    0LL);
  if ( !emptyListNoticeLabel )
    goto LABEL_111;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 0, 0LL);
  sort = this->fields.sort;
  this->fields.itemType = type;
  if ( !sort )
    goto LABEL_111;
  iconScaleKind = sort->fields.iconScaleKind;
  this->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    normalSizeSeed = this->fields.normalSizeSeed;
    goto LABEL_12;
  }
  if ( iconScaleKind == 2 )
  {
    normalSizeSeed = this->fields.smallSizeSeed;
    goto LABEL_12;
  }
  if ( iconScaleKind == 3 )
  {
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
LABEL_12:
    this->fields.seed = normalSizeSeed;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)normalSizeSeed,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  emptyListNoticeLabel = (int64_t)this->fields.sort;
  if ( !emptyListNoticeLabel )
    goto LABEL_111;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  emptyListNoticeLabel = (int64_t)ListViewSort__GetScaleKindSpriteName(
                                    (ListViewSort_o *)emptyListNoticeLabel,
                                    this->fields.scaleType,
                                    0LL);
  if ( !scaleChangeButtonSprite )
    goto LABEL_111;
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)emptyListNoticeLabel, 0LL);
  emptyListNoticeLabel = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !emptyListNoticeLabel )
    goto LABEL_111;
  MasterData_WarQuestSelectionMaster = (struct UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)emptyListNoticeLabel,
                                                                       (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = &this->fields.userServantMaster;
  this->fields.userServantMaster = MasterData_WarQuestSelectionMaster;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.userServantMaster,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !SelfUserGame )
    goto LABEL_111;
  qp = SelfUserGame->fields.qp;
  haveQpLabel = this->fields.haveQpLabel;
  this->fields.userQP = qp;
  LODWORD(v108.fields.currentCryptoKey) = qp;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v108, v26);
  emptyListNoticeLabel = (int64_t)System_String__Format((System_String_o *)StringLiteral_24013/*"{0:N0}"*/, v29, 0LL);
  if ( !haveQpLabel )
    goto LABEL_111;
  UILabel__set_text(haveQpLabel, (System_String_o *)emptyListNoticeLabel, 0LL);
  *(_OWORD *)&this->fields.selectSum = 0u;
  this->fields.isAllUpMax = 0;
  *(_QWORD *)&this->fields.getHpUpVal = 0LL;
  lateExp[0] = 0;
  nextExpLabel = this->fields.nextExpLabel;
  svtEquipKeep = 0;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtEquipKeep, v31);
  emptyListNoticeLabel = (int64_t)System_String__Format((System_String_o *)StringLiteral_24013/*"{0:N0}"*/, v32, 0LL);
  if ( !nextExpLabel )
    goto LABEL_111;
  UILabel__set_text(nextExpLabel, (System_String_o *)emptyListNoticeLabel, 0LL);
  v101 = SelfUserGame;
  if ( type )
  {
    v33 = 0;
    ServantEquipList = 0LL;
  }
  else
  {
    emptyListNoticeLabel = (int64_t)this->fields.levelUpInfoImg;
    if ( !emptyListNoticeLabel )
      goto LABEL_111;
    emptyListNoticeLabel = (int64_t)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)emptyListNoticeLabel,
                                      0LL);
    if ( !emptyListNoticeLabel )
      goto LABEL_111;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 0, 0LL);
    emptyListNoticeLabel = (int64_t)*p_userServantMaster;
    if ( !*p_userServantMaster )
      goto LABEL_111;
    emptyListNoticeLabel = (int64_t)UserServantMaster__getServantEquipList(
                                      (UserServantMaster_o *)emptyListNoticeLabel,
                                      0LL);
    if ( !emptyListNoticeLabel )
      goto LABEL_111;
    v36 = *(_DWORD *)(emptyListNoticeLabel + 24);
    ServantEquipList = (UserServantEntity_array *)emptyListNoticeLabel;
    FriendShipSvtEquipNum = SvtEqCombineListViewManager__GetFriendShipSvtEquipNum(
                              (SvtEqCombineListViewManager_o *)emptyListNoticeLabel,
                              (UserServantEntity_array *)emptyListNoticeLabel,
                              v35);
    v97 = v36 - FriendShipSvtEquipNum;
    if ( FriendShipSvtEquipNum <= 0 && v97 <= 0 )
    {
      emptyListNoticeLabel = (int64_t)this->fields.emptyListNoticeLabel;
      if ( !emptyListNoticeLabel )
        goto LABEL_111;
      emptyListNoticeLabel = (int64_t)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)emptyListNoticeLabel,
                                        0LL);
      if ( !emptyListNoticeLabel )
        goto LABEL_111;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 1, 0LL);
    }
    v38 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B77694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v38,
      (System_Collections_Generic_IEnumerable_T__o *)ServantEquipList,
      (const MethodInfo_30527CC *)Method_System_Collections_Generic_List_UserServantEntity___ctor___69411152);
    v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v39,
      (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( !this->fields.baseUsrSvtData )
      goto LABEL_75;
    max_length = ServantEquipList->max_length;
    if ( max_length >= 1 )
    {
      v41 = 0LL;
      while ( (unsigned int)v41 < max_length )
      {
        v42 = ServantEquipList->m_Items[v41];
        if ( !v42 )
          goto LABEL_111;
        v43 = *(_OWORD *)&v42->fields.id.fields.fakeValue;
        *(_OWORD *)&v108.fields.currentCryptoKey = *(_OWORD *)&v42->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v108.fields.fakeValue = v43;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v107 = v108;
        emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v107, 0LL);
        baseUsrSvtData = this->fields.baseUsrSvtData;
        if ( !baseUsrSvtData )
          goto LABEL_111;
        v45 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
        v46 = emptyListNoticeLabel;
        *(_OWORD *)&v106.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v106.fields.fakeValue = v45;
        emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v106, 0LL);
        if ( v46 == emptyListNoticeLabel )
        {
          if ( !v39 )
            goto LABEL_111;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v39,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v42,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
          if ( !v38 )
            goto LABEL_111;
          emptyListNoticeLabel = System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                                   (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v38,
                                   (WarBoardManager_TaskList_o *)v42,
                                   (const MethodInfo_3054C44 *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
        }
        max_length = ServantEquipList->max_length;
        if ( (int)++v41 >= max_length )
          goto LABEL_44;
      }
LABEL_112:
      v95 = sub_B776C8(emptyListNoticeLabel);
      sub_B77668(v95, 0LL);
    }
LABEL_44:
    if ( !v39 )
      goto LABEL_111;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v39,
      (System_Collections_Generic_IEnumerable_T__o *)v38,
      (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    emptyListNoticeLabel = (int64_t)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v39,
                                      (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    p_userServantMaster = &this->fields.userServantMaster;
    if ( !this->fields.baseUsrSvtData )
      goto LABEL_111;
    ServantEquipList = (UserServantEntity_array *)emptyListNoticeLabel;
    UserServantEntity__getExpInfo(this->fields.baseUsrSvtData, &lateExp[1], lateExp, &barExp, 0LL);
    v47 = this->fields.nextExpLabel;
    LODWORD(v108.fields.currentCryptoKey) = lateExp[0];
    v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v108, v48);
    emptyListNoticeLabel = (int64_t)System_String__Format((System_String_o *)StringLiteral_24013/*"{0:N0}"*/, v49, 0LL);
    if ( !v47 )
      goto LABEL_111;
    UILabel__set_text(v47, (System_String_o *)emptyListNoticeLabel, 0LL);
    v33 = v97;
  }
  if ( type != 1 )
  {
    v97 = v33;
    if ( !ServantEquipList )
      goto LABEL_111;
LABEL_75:
    v66 = 0;
    goto LABEL_76;
  }
  emptyListNoticeLabel = (int64_t)*p_userServantMaster;
  if ( !*p_userServantMaster )
    goto LABEL_111;
  ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)emptyListNoticeLabel, 0LL);
  v50 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B77694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v50,
    (System_Collections_Generic_IEnumerable_T__o *)ServantEquipList,
    (const MethodInfo_30527CC *)Method_System_Collections_Generic_List_UserServantEntity___ctor___69411152);
  v51 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v51,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( this->fields.baseUsrSvtData )
  {
    if ( !v50 )
      goto LABEL_111;
    size = v50->fields._size;
    if ( size >= 1 )
    {
      v54 = 0;
      while ( 1 )
      {
        if ( size <= (unsigned int)v54 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v55 = v50->fields._items->m_Items[v54];
        if ( !v55 )
          break;
        v56 = *(_OWORD *)&v55->fields.baseSquare;
        *(_OWORD *)&v108.fields.currentCryptoKey = *(_OWORD *)&v55->fields.flagNow;
        *(_OWORD *)&v108.fields.fakeValue = v56;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v105 = v108;
        emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v105, 0LL);
        v57 = this->fields.baseUsrSvtData;
        if ( !v57 )
          break;
        v58 = *(_OWORD *)&v57->fields.id.fields.fakeValue;
        v59 = emptyListNoticeLabel;
        *(_OWORD *)&v104.fields.currentCryptoKey = *(_OWORD *)&v57->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v104.fields.fakeValue = v58;
        emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v104, 0LL);
        if ( v59 == emptyListNoticeLabel )
          System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)v50,
            v54,
            (const MethodInfo_3054F88 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
        size = v50->fields._size;
        if ( ++v54 >= size )
          goto LABEL_64;
      }
LABEL_111:
      sub_B7769C(emptyListNoticeLabel, *(_QWORD *)&type);
    }
LABEL_64:
    emptyListNoticeLabel = (int64_t)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v50,
                                      (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    ServantEquipList = (UserServantEntity_array *)emptyListNoticeLabel;
  }
  if ( !ServantEquipList )
    goto LABEL_111;
  v60 = ServantEquipList->max_length;
  v61 = SvtEqCombineListViewManager__GetFriendShipSvtEquipNum(
          (SvtEqCombineListViewManager_o *)emptyListNoticeLabel,
          ServantEquipList,
          v52);
  v62 = v60 - v61;
  if ( v61 <= 0 && v62 <= 0 )
  {
    emptyListNoticeLabel = (int64_t)this->fields.emptyListNoticeLabel;
    if ( !emptyListNoticeLabel )
      goto LABEL_111;
    emptyListNoticeLabel = (int64_t)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)emptyListNoticeLabel,
                                      0LL);
    if ( !emptyListNoticeLabel )
      goto LABEL_111;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 1, 0LL);
  }
  emptyListNoticeLabel = (int64_t)this->fields.baseUsrSvtData;
  v97 = v62;
  if ( !emptyListNoticeLabel )
    goto LABEL_111;
  UserServantEntity__getExpInfo((UserServantEntity_o *)emptyListNoticeLabel, &lateExp[1], lateExp, &barExp, 0LL);
  v63 = this->fields.nextExpLabel;
  LODWORD(v108.fields.currentCryptoKey) = lateExp[0];
  v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v108, v64);
  emptyListNoticeLabel = (int64_t)System_String__Format((System_String_o *)StringLiteral_24013/*"{0:N0}"*/, v65, 0LL);
  if ( !v63 )
    goto LABEL_111;
  UILabel__set_text(v63, (System_String_o *)emptyListNoticeLabel, 0LL);
  v66 = 1;
LABEL_76:
  v67 = ServantEquipList->max_length;
  if ( v67 >= 1 )
  {
    v68 = 0;
    v98 = v66;
    while ( v68 < v67 )
    {
      v69 = &ServantEquipList->obj.klass + (int)v68;
      v72 = v69[4];
      v71 = (UserServantEntity_o **)(v69 + 4);
      v70 = v72;
      if ( !v72 )
        goto LABEL_111;
      byval_arg = v70->_1.byval_arg;
      *(_OWORD *)&v108.fields.currentCryptoKey = *(_OWORD *)&v70->_1.name;
      *(Il2CppType *)&v108.fields.fakeValue = byval_arg;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v103 = v108;
      emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v103, 0LL);
      v74 = emptyListNoticeLabel;
      if ( v66
        && (selectedMtSvtList_k__BackingField = this->fields._selectedMtSvtList_k__BackingField) != 0LL
        && (v76 = selectedMtSvtList_k__BackingField->fields._size, v76 >= 1) )
      {
        v77 = 0;
        v78 = 0;
        v79 = 0;
        do
        {
          if ( v76 <= (unsigned int)v77 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
          emptyListNoticeLabel = (int64_t)selectedMtSvtList_k__BackingField->fields._items->m_Items[v77];
          if ( !emptyListNoticeLabel )
            goto LABEL_111;
          emptyListNoticeLabel = SvtEqCombineListViewItem__get_UserSvtId(
                                   (SvtEqCombineListViewItem_o *)emptyListNoticeLabel,
                                   *(const MethodInfo **)&type);
          selectedMtSvtList_k__BackingField = this->fields._selectedMtSvtList_k__BackingField;
          if ( !selectedMtSvtList_k__BackingField )
            goto LABEL_111;
          v76 = selectedMtSvtList_k__BackingField->fields._size;
          if ( emptyListNoticeLabel == v74 )
            v79 = v77;
          ++v77;
          if ( emptyListNoticeLabel == v74 )
            v78 = 1;
        }
        while ( v77 < v76 );
        v80 = v78;
      }
      else
      {
        v80 = 0;
        v79 = 0;
      }
      if ( v68 >= ServantEquipList->max_length )
        break;
      v81 = ServantEquipList;
      v82 = *v71;
      v83 = this->fields.baseUsrSvtData;
      favoriteUserSvtId = v101->fields.favoriteUserSvtId;
      v85 = (SvtEqCombineListViewItem_o *)sub_B77694(SvtEqCombineListViewItem_TypeInfo);
      SvtEqCombineListViewItem___ctor(
        v85,
        type,
        v68,
        v82,
        v74 == favoriteUserSvtId,
        v83,
        v80,
        setupInfo,
        finishSetupInfo,
        v96);
      v66 = v98;
      if ( (v98 & v80) == 1 )
      {
        if ( !v85 )
          goto LABEL_111;
        v85->fields.selectNum = v79;
        v86 = this->fields._selectedMtSvtList_k__BackingField;
        ++this->fields.selectSum;
        if ( !v86 )
          goto LABEL_111;
        if ( v79 == v86->fields._size - 1 )
          v85->fields.isLastSelectMaterial = 1;
      }
      emptyListNoticeLabel = (int64_t)this->fields.itemList;
      if ( !emptyListNoticeLabel )
        goto LABEL_111;
      ServantEquipList = v81;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)emptyListNoticeLabel,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v85,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      v67 = v81->max_length;
      if ( (int)++v68 >= v67 )
        goto LABEL_106;
    }
    goto LABEL_112;
  }
LABEL_106:
  SvtEqCombineListViewManager__RefrashListDisp(this, *(const MethodInfo **)&type);
  servantInfoLabel = this->fields.servantInfoLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v88 = LocalizationManager__Get((System_String_o *)StringLiteral_12702/*"SUM_INFO"*/, 0LL);
  LODWORD(v108.fields.currentCryptoKey) = v97;
  v90 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v108, v89);
  svtEquipKeep = v101->fields.svtEquipKeep;
  v92 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtEquipKeep, v91);
  emptyListNoticeLabel = (int64_t)System_String__Format_44897472(v88, v90, v92, 0LL);
  if ( !servantInfoLabel )
    goto LABEL_111;
  UILabel__set_text(servantInfoLabel, (System_String_o *)emptyListNoticeLabel, 0LL);
  SvtEqCombineListViewManager__SetMaterialSvtInfo(this, v93);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  SvtEqCombineListViewManager__SetFilterButtonImage(this, v94);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
}


void __fastcall SvtEqCombineListViewManager__SetSortButtonImage(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v4; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v6; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v8; // x8
  int32_t sortKind; // w9
  System_String_o **v10; // x8
  struct ListViewSort_o *v11; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v13; // x9
  System_String_o **v14; // x10
  System_String_o **v15; // x8
  struct ListViewSort_o *v16; // x8
  System_String_o **v17; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v19; // x20

  if ( (byte_4390FB9 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_17360/*"btn_sort_up"*/);
    sub_B775C4(&StringLiteral_17444/*"btn_txt_up"*/);
    sub_B775C4(&StringLiteral_17400/*"btn_txt_new"*/);
    sub_B775C4(&StringLiteral_17390/*"btn_txt_down"*/);
    sub_B775C4(&StringLiteral_17407/*"btn_txt_old"*/);
    sub_B775C4(&StringLiteral_17357/*"btn_sort_down"*/);
    byte_4390FB9 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_46;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v6 )
      goto LABEL_46;
    UILabel__set_text(v6, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v8 = this->fields.sort;
    if ( !v8 )
      goto LABEL_46;
    sortKind = v8->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_46;
      v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17407/*"btn_txt_old"*/ : &StringLiteral_17400/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v10, 0LL);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_46;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_46;
      isAscendingOrder = v11->fields.isAscendingOrder;
      v13 = (System_String_o **)&StringLiteral_17357/*"btn_sort_down"*/;
      v14 = (System_String_o **)&StringLiteral_17360/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_46;
      v15 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17444/*"btn_txt_up"*/ : &StringLiteral_17390/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
      v16 = this->fields.sort;
      if ( !v16 )
        goto LABEL_46;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_46;
      isAscendingOrder = v16->fields.isAscendingOrder;
      v13 = (System_String_o **)&StringLiteral_17360/*"btn_sort_up"*/;
      v14 = (System_String_o **)&StringLiteral_17357/*"btn_sort_down"*/;
    }
    if ( isAscendingOrder )
      v17 = v13;
    else
      v17 = v14;
    UISprite__set_spriteName((UISprite_o *)sort, *v17, 0LL);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( sort )
    {
      v19 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusKind2Text_34346624(
                                 sort,
                                 this->fields.bonusEventIdList,
                                 0LL,
                                 0LL,
                                 0LL,
                                 this->fields.bonusFinishEventIdList,
                                 0LL);
      if ( v19 )
      {
        UILabel__set_text(v19, (System_String_o *)sort, 0LL);
        sort = (ListViewSort_o *)this->fields.bonusFilterKindLabel;
        if ( sort )
        {
          UIWidget__set_width((UIWidget_o *)sort, 144, 0LL);
          sort = (ListViewSort_o *)this->fields.bonusFilterKindLabel;
          if ( sort )
          {
            ((void (__fastcall *)(ListViewSort_o *, void *))sort->klass[2]._1.typeMetadataHandle)(
              sort,
              sort->klass[2]._1.interopData);
            sort = (ListViewSort_o *)this->fields.bonusFilterKindLabel;
            if ( sort )
            {
              UILabel__SetCondensedScale((UILabel_o *)sort, 144, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_46:
    sub_B7769C(sort, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__SetStatusKind(
        SvtEqCombineListViewManager_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  int32_t v3; // w20
  UnityEngine_Behaviour_o *statusTabButton; // x0
  __int64 *v6; // x8
  UICommonButton_o *v7; // x21
  bool enabled; // w0
  __int64 *v9; // x8
  UICommonButton_o *lockTabButton; // x21
  bool v11; // w0
  __int64 *v12; // x8
  UICommonButton_o *choiceTabButton; // x20
  bool v14; // w0
  int32_t currentType; // w8
  UILabel_o *combineInfoMsgLb; // x20
  __int64 *v17; // x8
  int32_t v18; // w8
  UILabel_o *v19; // x20
  __int64 *v20; // x8

  v3 = modeKind;
  if ( (byte_4390F8E & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_17463/*"button_allchoice_reg"*/);
    sub_B775C4(&StringLiteral_17466/*"button_alllock_unreg"*/);
    sub_B775C4(&StringLiteral_11962/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_B775C4(&StringLiteral_11963/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_B775C4(&StringLiteral_17479/*"button_select_reg"*/);
    sub_B775C4(&StringLiteral_7197/*"HEADER_MSG_SVTEQ_MATERIAL"*/);
    sub_B775C4(&StringLiteral_7196/*"HEADER_MSG_SVTEQ_BASE"*/);
    sub_B775C4(&StringLiteral_17480/*"button_select_unreg"*/);
    sub_B775C4(&StringLiteral_17465/*"button_alllock_reg"*/);
    sub_B775C4(&StringLiteral_17464/*"button_allchoice_unreg"*/);
    byte_4390F8E = 1;
  }
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  this->fields.modeKind = v3;
  if ( !statusTabButton )
    goto LABEL_56;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
    statusTabButton,
    1LL,
    statusTabButton->klass[1]._1.byval_arg.data);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_56;
  UnityEngine_Behaviour__set_enabled(statusTabButton, v3 != 0, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabSprite;
  if ( !statusTabButton )
    goto LABEL_56;
  v6 = &StringLiteral_17479/*"button_select_reg"*/;
  if ( v3 )
    v6 = &StringLiteral_17480/*"button_select_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v6, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_56;
  statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                 statusTabButton,
                                                 0LL,
                                                 0LL,
                                                 statusTabButton->klass[1]._1.interfaceOffsets);
  v7 = this->fields.statusTabButton;
  if ( !v7 )
    goto LABEL_56;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0LL);
  UICommonButton__SetColliderEnable(v7, enabled, 0, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_56;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
    statusTabButton,
    1LL,
    statusTabButton->klass[1]._1.byval_arg.data);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_56;
  UnityEngine_Behaviour__set_enabled(statusTabButton, v3 != 1, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
  if ( !statusTabButton )
    goto LABEL_56;
  v9 = &StringLiteral_17465/*"button_alllock_reg"*/;
  if ( v3 != 1 )
    v9 = &StringLiteral_17466/*"button_alllock_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v9, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_56;
  statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                 statusTabButton,
                                                 0LL,
                                                 0LL,
                                                 statusTabButton->klass[1]._1.interfaceOffsets);
  lockTabButton = this->fields.lockTabButton;
  if ( !lockTabButton )
    goto LABEL_56;
  v11 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
  UICommonButton__SetColliderEnable(lockTabButton, v11, 0, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_56;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
    statusTabButton,
    1LL,
    statusTabButton->klass[1]._1.byval_arg.data);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_56;
  UnityEngine_Behaviour__set_enabled(statusTabButton, v3 != 2, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
  if ( !statusTabButton )
    goto LABEL_56;
  v12 = &StringLiteral_17463/*"button_allchoice_reg"*/;
  if ( v3 != 2 )
    v12 = &StringLiteral_17464/*"button_allchoice_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v12, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_56;
  statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                 statusTabButton,
                                                 0LL,
                                                 0LL,
                                                 statusTabButton->klass[1]._1.interfaceOffsets);
  choiceTabButton = this->fields.choiceTabButton;
  if ( !choiceTabButton )
    goto LABEL_56;
  v14 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
  UICommonButton__SetColliderEnable(choiceTabButton, v14, 0, 0LL);
  currentType = this->fields.currentType;
  if ( currentType == 1 )
  {
    combineInfoMsgLb = this->fields.combineInfoMsgLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v17 = &StringLiteral_7197/*"HEADER_MSG_SVTEQ_MATERIAL"*/;
  }
  else
  {
    if ( currentType )
      goto LABEL_36;
    combineInfoMsgLb = this->fields.combineInfoMsgLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v17 = &StringLiteral_7196/*"HEADER_MSG_SVTEQ_BASE"*/;
  }
  statusTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v17, 0LL);
  if ( !combineInfoMsgLb )
    goto LABEL_56;
  UILabel__set_text(combineInfoMsgLb, (System_String_o *)statusTabButton, 0LL);
LABEL_36:
  v18 = this->fields.modeKind;
  if ( v18 == 1 )
  {
    v19 = this->fields.combineInfoMsgLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v20 = &StringLiteral_11963/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
  }
  else
  {
    if ( v18 != 2 )
      goto LABEL_48;
    v19 = this->fields.combineInfoMsgLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v20 = &StringLiteral_11962/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
  }
  statusTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v20, 0LL);
  if ( !v19 )
    goto LABEL_56;
  UILabel__set_text(v19, (System_String_o *)statusTabButton, 0LL);
LABEL_48:
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.combineInfoMsgLb;
  if ( (unsigned int)(this->fields.modeKind - 1) >= 2 )
  {
    if ( this->fields.currentType )
      *(_QWORD *)&modeKind = 12LL;
    else
      *(_QWORD *)&modeKind = 20LL;
    if ( statusTabButton )
      goto LABEL_55;
LABEL_56:
    sub_B7769C(statusTabButton, *(_QWORD *)&modeKind);
  }
  *(_QWORD *)&modeKind = 14LL;
  if ( !statusTabButton )
    goto LABEL_56;
LABEL_55:
  UILabel__set_fontSize((UILabel_o *)statusTabButton, modeKind, 0LL);
}


void __fastcall SvtEqCombineListViewManager__StatusRequest(
        SvtEqCombineListViewManager_o *this,
        SvtEqCombineListViewManager_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t modeKind; // w8
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  CardStatusSyncRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v15; // x1
  System_Int64_array *v16; // x2
  System_Int64_array *v17; // x1
  bool v18; // w4
  bool v19; // w5
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  NetworkManager_ResultCallbackFunc_o *v26; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_4390FC1 & 1) == 0 )
  {
    sub_B775C4(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B775C4(&Method_SvtEqCombineListViewManager_EndStatusSync__);
    byte_4390FC1 = 1;
  }
  lockList = 0LL;
  choiceList = 0LL;
  unlockList = 0LL;
  unchoiceList = 0LL;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    if ( SvtEqCombineListViewManager__GetSwapChoiceList(this, &choiceList, &unchoiceList, v3) )
    {
      this->fields.requestCallback = callback;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.requestCallback,
        (System_Int32_array **)callback,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      v26 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v26,
        (Il2CppObject *)this,
        Method_SvtEqCombineListViewManager_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                       v26,
                                                                       (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        v16 = unchoiceList;
        v17 = choiceList;
        v19 = 1;
        v18 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_B7769C(Request_WarBoardWallAttackRequest, v15);
    }
  }
  else if ( modeKind == 1 && SvtEqCombineListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.requestCallback,
      (System_Int32_array **)callback,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    v13 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_SvtEqCombineListViewManager_EndStatusSync__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                     v13,
                                                                     (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( Request_WarBoardWallAttackRequest )
    {
      v16 = unlockList;
      v17 = lockList;
      v18 = 1;
      v19 = 0;
LABEL_17:
      CardStatusSyncRequest__beginRequest(Request_WarBoardWallAttackRequest, v17, v16, 0, v18, v19, 0LL);
      return;
    }
    goto LABEL_21;
  }
  if ( callback )
    SvtEqCombineListViewManager_RequestCallbackFunc__Invoke(callback, 0, 0LL);
}


void __fastcall SvtEqCombineListViewManager__add_callbackFunc(
        SvtEqCombineListViewManager_o *this,
        SvtEqCombineListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct SvtEqCombineListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SvtEqCombineListViewManager_o *v10; // x0
  SvtEqCombineListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4390F84 & 1) == 0 )
  {
    sub_B775C4(&SvtEqCombineListViewManager_CallbackFunc_TypeInfo);
    byte_4390F84 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (SvtEqCombineListViewManager_CallbackFunc_c *)v7->klass != SvtEqCombineListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B6BFDC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v7);
  SvtEqCombineListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall SvtEqCombineListViewManager__add_callbackFunc2(
        SvtEqCombineListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SvtEqCombineListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4390F86 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_4390F86 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_B6BFDC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v7);
  SvtEqCombineListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_SvtEqCombineListViewObject__o *__fastcall SvtEqCombineListViewManager__get_ClippingObjectList(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  SvtEqCombineListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v10; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4390F8C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___);
    sub_B775C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject___ctor__);
    sub_B775C4(&System_Collections_Generic_List_SvtEqCombineListViewObject__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4390F8C = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_SvtEqCombineListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7769C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v18.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B7769C(v7, v8);
      Component_srcLineSprite = (SvtEqCombineListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  (UnityEngine_GameObject_o *)current,
                                                                  (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___);
      v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B7769C(0LL, v10);
      Item = (ListViewItem_o *)SvtEqCombineListViewObject__GetItem(Component_srcLineSprite, v10);
      if ( !Item )
        sub_B7769C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_24185472((ListViewManager_o *)this, Item, 0LL);
        if ( v14 )
        {
          if ( !v3 )
            sub_B7769C(v14, v15);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v3 )
          sub_B7769C(Item, v13);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          v11,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SvtEqCombineListViewObject__o *)v3;
}


System_Collections_Generic_List_SvtEqCombineListViewObject__o *__fastcall SvtEqCombineListViewManager__get_ObjectList(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4390F8B & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___);
    sub_B775C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject___ctor__);
    sub_B775C4(&System_Collections_Generic_List_SvtEqCombineListViewObject__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4390F8B = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_SvtEqCombineListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7769C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B7769C(v7, v8);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___);
      if ( !v3 )
        sub_B7769C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        Component_srcLineSprite,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SvtEqCombineListViewObject__o *)v3;
}


int32_t __fastcall SvtEqCombineListViewManager__get_getModeKind(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.modeKind;
}


bool __fastcall SvtEqCombineListViewManager__get_isOpenCheckEquipDialog(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields._isOpenCheckEquipDialog_k__BackingField;
}


System_Collections_Generic_List_SvtEqCombineListViewItem__o *__fastcall SvtEqCombineListViewManager__get_selectedMtSvtList(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields._selectedMtSvtList_k__BackingField;
}


void __fastcall SvtEqCombineListViewManager__remove_callbackFunc(
        SvtEqCombineListViewManager_o *this,
        SvtEqCombineListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct SvtEqCombineListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SvtEqCombineListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4390F85 & 1) == 0 )
  {
    sub_B775C4(&SvtEqCombineListViewManager_CallbackFunc_TypeInfo);
    byte_4390F85 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (SvtEqCombineListViewManager_CallbackFunc_c *)v7->klass != SvtEqCombineListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B6BFDC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v7);
  SvtEqCombineListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall SvtEqCombineListViewManager__remove_callbackFunc2(
        SvtEqCombineListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SvtEqCombineListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4390F87 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_4390F87 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_B6BFDC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v7);
  SvtEqCombineListViewManager__get_isOpenCheckEquipDialog(v10, v11);
}


void __fastcall SvtEqCombineListViewManager__set_isOpenCheckEquipDialog(
        SvtEqCombineListViewManager_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isOpenCheckEquipDialog_k__BackingField = value;
}


void __fastcall SvtEqCombineListViewManager__set_selectedMtSvtList(
        SvtEqCombineListViewManager_o *this,
        System_Collections_Generic_List_SvtEqCombineListViewItem__o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._selectedMtSvtList_k__BackingField = value;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._selectedMtSvtList_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager_CallbackFunc___ctor(
        SvtEqCombineListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B77560(p_method);
}


System_IAsyncResult_o *__fastcall SvtEqCombineListViewManager_CallbackFunc__BeginInvoke(
        SvtEqCombineListViewManager_CallbackFunc_o *this,
        int32_t kind,
        System_Int32_array *list,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11[3]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-24h] BYREF

  v12 = kind;
  if ( (byte_43886E5 & 1) == 0 )
  {
    sub_B775C4(&SvtEqCombineListViewManager_ResultKind_TypeInfo);
    byte_43886E5 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(SvtEqCombineListViewManager_ResultKind_TypeInfo, &v12, list);
  v11[1] = (__int64)list;
  return (System_IAsyncResult_o *)sub_B77568(this, v11, callback, object);
}


void __fastcall SvtEqCombineListViewManager_CallbackFunc__EndInvoke(
        SvtEqCombineListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager_CallbackFunc__Invoke(
        SvtEqCombineListViewManager_CallbackFunc_o *this,
        int32_t kind,
        System_Int32_array *list,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  SvtEqCombineListViewManager_CallbackFunc_o **v8; // x26
  __int64 v9; // x27
  unsigned int v10; // w24
  __int64 class_0; // x0
  __int64 v12; // x8
  unsigned int v13; // w23
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, System_Int32_array *, _QWORD); // x0
  SvtEqCombineListViewManager_CallbackFunc_o *v20; // x8
  __int64 *v21; // x22
  __int64 v22; // x23
  void (__fastcall *v23)(unsigned int *, System_Int32_array *, __int64); // x24
  char v24; // w24
  char v25; // w0
  unsigned int v26; // w24
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+Ch] [xbp-54h] BYREF
  SvtEqCombineListViewManager_CallbackFunc_o *v33; // [xsp+18h] [xbp-48h] BYREF

  v33 = this;
  v32 = kind;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v33;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (SvtEqCombineListViewManager_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, System_Int32_array *, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&kind);
      if ( (sub_B775F4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 2 )
        goto LABEL_36;
      v23((unsigned int *)v32, list, v22);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v21 )
    {
      v23(&v32 - 4, list, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B775EC(v22);
      v25 = sub_B779F0(v22);
      if ( (v24 & 1) != 0 )
      {
        v26 = v32;
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_B0F4C0(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, System_Int32_array *, _QWORD))sub_B77674(v17, v22);
        (*v19)(v21, v26, list, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v12 = *v21;
          v13 = v32;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v12 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_B0F4C0(v21, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, System_Int32_array *, _QWORD))v16)(
            v21,
            v13,
            list,
            *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, System_Int32_array *, _QWORD))(*v21
                                                                                  + 16LL
                                                                                  * *(unsigned __int16 *)(v22 + 72)
                                                                                  + 312))(
            v21,
            v32,
            list,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, System_Int32_array *, __int64))v23)(v21, v32, list, v22);
    goto LABEL_38;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager_RequestCallbackFunc___ctor(
        SvtEqCombineListViewManager_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B77560(p_method);
}


System_IAsyncResult_o *__fastcall SvtEqCombineListViewManager_RequestCallbackFunc__BeginInvoke(
        SvtEqCombineListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isRequest;
  if ( (byte_43886E6 & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    byte_43886E6 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback);
  return (System_IAsyncResult_o *)sub_B77568(this, v9, callback, object);
}


void __fastcall SvtEqCombineListViewManager_RequestCallbackFunc__EndInvoke(
        SvtEqCombineListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager_RequestCallbackFunc__Invoke(
        SvtEqCombineListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  SvtEqCombineListViewManager_RequestCallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  SvtEqCombineListViewManager_RequestCallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  SvtEqCombineListViewManager_RequestCallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (SvtEqCombineListViewManager_RequestCallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v18->fields.extra_arg, isRequest);
      if ( (sub_B775F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(isRequest, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B775EC(v20);
      v23 = sub_B779F0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_B0F4C0(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B77674(v15, v20);
        (*v17)(v19, isRequest, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_B0F4C0(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, isRequest, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            isRequest,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, isRequest, v20);
    goto LABEL_37;
  }
}


void __fastcall SvtEqCombineListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct SvtEqCombineListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_43886E4 & 1) == 0 )
  {
    sub_B775C4(&SvtEqCombineListViewManager___c_TypeInfo);
    byte_43886E4 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(SvtEqCombineListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = SvtEqCombineListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SvtEqCombineListViewManager___c_o *)v1;
  sub_B77560(static_fields);
}


void __fastcall SvtEqCombineListViewManager___c___ctor(
        SvtEqCombineListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall SvtEqCombineListViewManager___c___GetSelectedMaterialList_b__139_0(
        SvtEqCombineListViewManager___c_o *this,
        SvtEqCombineListViewItem_o *a,
        SvtEqCombineListViewItem_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B7769C(this, a);
  return a->fields.selectNum - b->fields.selectNum;
}