void __fastcall SvtEqCombineListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  struct SvtEqCombineListViewManager_StaticFields *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_421A0BD & 1) == 0 )
  {
    sub_B0D8A4(&SvtEqCombineListViewManager_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_13221/*"SvtEqCombine"*/, v8);
    byte_421A0BD = 1;
  }
  SvtEqCombineListViewManager_TypeInfo->static_fields->COLOR_VAL = 0.375;
  SvtEqCombineListViewManager_TypeInfo->static_fields->FILTER2_MAX_KIND_NUM = 1;
  static_fields = SvtEqCombineListViewManager_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_13221/*"SvtEqCombine"*/;
  static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_13221/*"SvtEqCombine"*/;
  sub_B0D840((BattleServantConfConponent_o *)&static_fields->SORT_SAVE_KEY, v10, v2, v3, v4, v5, v6, v7);
  SvtEqCombineListViewManager_TypeInfo->static_fields->isInitSystem = 0;
}


void __fastcall SvtEqCombineListViewManager___ctor(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_421A0BC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo, v4);
    byte_421A0BC = 1;
  }
  this->fields.selectMax = 20;
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
  this->fields.tempMtSvtList = (struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.tempMtSvtList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x20
  __int64 v7; // x9
  SvtEqCombineListViewManager_o *v8; // x0
  const MethodInfo *v9; // x1

  v4 = this;
  if ( (byte_421A0BB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    this = (SvtEqCombineListViewManager_o *)sub_B0D8A4(&SvtEqCombineListViewItem_TypeInfo, v5);
    byte_421A0BB = 1;
  }
  itemSortList = v4->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_10;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  this = (SvtEqCombineListViewManager_o *)itemSortList->fields._items->m_Items[index];
  if ( !this )
LABEL_10:
    sub_B0D97C(this);
  v7 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v7
    && (SvtEqCombineListViewItem_c *)this->klass->_2.typeHierarchy[v7 - 1] == SvtEqCombineListViewItem_TypeInfo )
  {
    LODWORD(this->fields.rightItem) = -1;
  }
  else
  {
    sub_B0DC70(this);
    SvtEqCombineListViewManager___ctor(v8, v9);
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
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  int size; // w22
  unsigned int v9; // w23
  ListViewItem_o *v10; // x21
  __int64 v11; // x9
  SvtEqCombineListViewManager_o *v13; // x0
  int32_t *v14; // x1
  int32_t *v15; // x2
  int32_t v16; // w3
  const MethodInfo *v17; // x4

  v3 = nowCombineQp;
  v4 = this;
  if ( (byte_421A087 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&nowCombineQp);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    this = (SvtEqCombineListViewManager_o *)sub_B0D8A4(&SvtEqCombineListViewItem_TypeInfo, v6);
    byte_421A087 = 1;
  }
  if ( !v4->fields.selectSum )
    return v3;
  itemList = v4->fields.itemList;
  if ( !itemList )
LABEL_20:
    sub_B0D97C(this);
  size = itemList->fields._size;
  if ( size < 1 )
    return v3;
  v9 = 0;
  while ( 1 )
  {
    if ( itemList->fields._size <= v9 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v10 = itemList->fields._items->m_Items[v9];
    if ( !v10 )
      goto LABEL_20;
    v11 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v10->klass->_2.bitflags2 + 1) < (unsigned int)v11
      || (SvtEqCombineListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    this = (SvtEqCombineListViewManager_o *)ListViewItem__get_IsSelect(v10, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 && BYTE1(v10[1].fields.sortValue1) )
    {
      this = (SvtEqCombineListViewManager_o *)v10[1].monitor;
      if ( !this )
        goto LABEL_20;
      this = (SvtEqCombineListViewManager_o *)UserServantEntity__getCombineQpSvtEq((UserServantEntity_o *)this, 0LL);
      if ( v3 < (int)this )
      {
        this = (SvtEqCombineListViewManager_o *)v10[1].monitor;
        if ( !this )
          goto LABEL_20;
        this = (SvtEqCombineListViewManager_o *)UserServantEntity__getCombineQpSvtEq((UserServantEntity_o *)this, 0LL);
        v3 = (int)this;
      }
    }
    if ( (int)++v9 >= size )
      return v3;
    itemList = v4->fields.itemList;
    if ( !itemList )
      goto LABEL_20;
  }
  sub_B0DC70(v10);
  return SvtEqCombineListViewManager__CheckIncrementLv(v13, v14, v15, v16, v17);
}


void __fastcall SvtEqCombineListViewManager__CheckDragMax(
        SvtEqCombineListViewManager_o *this,
        bool *isMaxLvSelected,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  void *itemList; // x0
  int v19; // w24
  int32_t v20; // w21
  SvtEqCombineListViewItem_o *current; // x22
  __int64 v22; // x9
  UserServantEntity_o *baseUsrSvtData; // x0
  const MethodInfo *v24; // x1
  UserServantEntity_o *v25; // x0
  _BOOL8 v26; // x0
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *combineEventList; // x0
  int32_t v29; // w25
  _BOOL8 v30; // x0
  struct UserServantEntity_o *v31; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v32; // x21
  __int64 v33; // x22
  __int64 v34; // x23
  int32_t v35; // w8
  int32_t v36; // w23
  int v37; // w22
  const MethodInfo *v38; // x4
  int32_t LevelMax; // w21
  int32_t v40; // w8
  int v41; // w21
  int32_t v42; // w22
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+8h] [xbp-A8h] BYREF
  int v44[2]; // [xsp+20h] [xbp-90h]
  int v45; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_T__o v46; // [xsp+30h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v47; // [xsp+50h] [xbp-60h] BYREF
  int32_t increLv[2]; // [xsp+78h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_421A089 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, isMaxLvSelected);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v14);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B0D8A4(&SvtEqCombineListViewItem_TypeInfo, v17);
    byte_421A089 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  memset(&v46, 0, sizeof(v46));
  v45 = 0;
  *isMaxLvSelected = 0;
  *(_QWORD *)increLv = 0LL;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_52;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v43,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v47 = v43;
  v19 = 0;
  v20 = 0;
  while ( 1 )
  {
    v26 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v47,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v26 )
      break;
    current = (SvtEqCombineListViewItem_o *)v47.fields.current;
    if ( !v47.fields.current )
      goto LABEL_48;
    v22 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v47.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v22
      || (SvtEqCombineListViewItem_c *)v47.fields.current->klass->_2.typeHierarchy[v22 - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      sub_B0DC70(v47.fields.current);
LABEL_48:
      sub_B0D97C(v26);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v47.fields.current, 0LL) || current->fields.dragSelectNum >= 1 )
    {
      baseUsrSvtData = this->fields.baseUsrSvtData;
      if ( !baseUsrSvtData )
        sub_B0D97C(0LL);
      if ( !UserServantEntity__isLevelMax(baseUsrSvtData, 0LL) )
        goto LABEL_15;
      v25 = this->fields.baseUsrSvtData;
      if ( !v25 )
        sub_B0D97C(0LL);
      if ( UserServantEntity__isLevelMax(v25, 0LL) && current->fields.isLimitCntTarget )
      {
LABEL_15:
        v20 += current->fields.materialExp;
        v19 += SvtEqCombineListViewItem__get_GetAddTotalExp(current, v24);
      }
    }
  }
  v44[0] = 144;
  v45 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v47,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  v45 = 0;
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_52;
  combineEventList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)menuListCtr->fields.combineEventList;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v43,
      combineEventList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v46 = v43;
LABEL_21:
    v29 = v20;
    while ( 1 )
    {
      v30 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v46,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v30 )
        break;
      if ( !v46.fields.current )
        sub_B0D97C(v30);
      if ( HIDWORD(v46.fields.current[1].klass) == 17 )
      {
        v20 = UnityEngine_Mathf__CeilToInt(*(float *)&v46.fields.current[3].monitor * (float)v20, 0LL);
        goto LABEL_21;
      }
    }
    v44[0] = 243;
    v41 = ++v45;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v46,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    if ( v41 && v44[v41 - 1] == 243 )
      v45 = v41 - 1;
  }
  else
  {
    v29 = v20;
  }
  if ( this->fields.baseUsrSvtData && this->fields.itemType == 1 )
  {
    itemList = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( itemList )
    {
      itemList = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   (DataManager_o *)itemList,
                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
      v31 = this->fields.baseUsrSvtData;
      if ( v31 )
      {
        v32 = (DataMasterBase_WarMaster__WarEntity__int__o *)itemList;
        v34 = *(_QWORD *)&v31->fields.svtId.fields.currentCryptoKey;
        v33 = *(_QWORD *)&v31->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v49.fields.currentCryptoKey = v34;
        *(_QWORD *)&v49.fields.fakeValue = v33;
        itemList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v49, 0LL);
        if ( v32 )
        {
          itemList = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       v32,
                       (int32_t)itemList,
                       (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( itemList )
          {
            v35 = *((_DWORD *)itemList + 33);
            itemList = this->fields.baseUsrSvtData;
            this->fields.expType = v35;
            if ( itemList )
            {
              v37 = *((_DWORD *)itemList + 65);
              increLv[0] = *((_DWORD *)itemList + 64);
              v36 = increLv[0];
              LevelMax = UserServantEntity__getLevelMax((UserServantEntity_o *)itemList, 0LL);
              if ( v36 == LevelMax )
              {
                v40 = 0;
              }
              else
              {
                v42 = v29 + v19 + v37;
                while ( !SvtEqCombineListViewManager__CheckIncrementLv(this, increLv, &increLv[1], v42, v38) )
                  ;
                v40 = increLv[1];
              }
              *isMaxLvSelected = v40 >= LevelMax;
              return;
            }
          }
        }
      }
    }
LABEL_52:
    sub_B0D97C(itemList);
  }
}


bool __fastcall SvtEqCombineListViewManager__CheckIncrementLv(
        SvtEqCombineListViewManager_o *this,
        int32_t *checkLv,
        int32_t *increLv,
        int32_t totalExp,
        const MethodInfo *method)
{
  __int64 v9; // x1
  void *baseUsrSvtData; // x0
  int32_t LevelMax; // w0
  int32_t v12; // w8
  int32_t v13; // w8
  bool result; // w0

  if ( (byte_421A08A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantExpMaster___, checkLv);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_421A08A = 1;
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
  baseUsrSvtData = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUsrSvtData
    || (baseUsrSvtData = DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)baseUsrSvtData,
                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
    || (baseUsrSvtData = ServantExpMaster__GetEntity(
                           (ServantExpMaster_o *)baseUsrSvtData,
                           this->fields.expType,
                           *checkLv,
                           0LL)) == 0LL )
  {
LABEL_16:
    sub_B0D97C(baseUsrSvtData);
  }
  v12 = *((_DWORD *)baseUsrSvtData + 6);
  if ( v12 <= totalExp )
  {
    if ( v12 != totalExp )
    {
      result = 0;
      ++*checkLv;
      return result;
    }
    v13 = *((_DWORD *)baseUsrSvtData + 5) + 1;
  }
  else
  {
    v13 = *((_DWORD *)baseUsrSvtData + 5);
  }
  *increLv = v13;
  return 1;
}


bool __fastcall SvtEqCombineListViewManager__CheckIsMaterialSelectSvt(
        SvtEqCombineListViewManager_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *selectedMtSvtList_k__BackingField; // x0
  const MethodInfo *v10; // x1
  char v11; // w19
  int v12; // w20
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_421A0A4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__, usrSvtId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v8);
    byte_421A0A4 = 1;
  }
  memset(&v14, 0, sizeof(v14));
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
        &v14,
        selectedMtSvtList_k__BackingField,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v14,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__) )
      {
        if ( !v14.fields.current )
          sub_B0D97C(0LL);
        if ( SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)v14.fields.current, v10) == usrSvtId )
        {
          v11 = 1;
          v12 = 2;
          goto LABEL_11;
        }
      }
      v12 = 0;
      v11 = 0;
LABEL_11:
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v14,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
      LOBYTE(selectedMtSvtList_k__BackingField) = (v12 == 2) & v11;
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
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  int size; // w21
  unsigned int v7; // w22
  ListViewItem_o *v8; // x20
  __int64 v9; // x9
  SvtEqCombineListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  v2 = this;
  if ( (byte_421A098 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v3);
    this = (SvtEqCombineListViewManager_o *)sub_B0D8A4(&SvtEqCombineListViewItem_TypeInfo, v4);
    byte_421A098 = 1;
  }
  itemList = v2->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_B0D97C(this);
  size = itemList->fields._size;
  if ( size < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( itemList->fields._size <= v7 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v8 = itemList->fields._items->m_Items[v7];
    if ( !v8 )
      goto LABEL_16;
    v9 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v8->klass->_2.bitflags2 + 1) < (unsigned int)v9
      || (SvtEqCombineListViewItem_c *)v8->klass->_2.typeHierarchy[v9 - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    this = (SvtEqCombineListViewManager_o *)ListViewItem__get_IsSelect(v8, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 && (LOBYTE(v8[1].fields.basePosition.fields.x) || LOBYTE(v8[2].fields.index)) )
      return 1;
    if ( (int)++v7 >= size )
      return 0;
    itemList = v2->fields.itemList;
    if ( !itemList )
      goto LABEL_16;
  }
  sub_B0DC70(v8);
  return (unsigned __int8)SvtEqCombineListViewManager__GetSelectedMaterialList(v11, v12);
}


void __fastcall SvtEqCombineListViewManager__ClearSelectedSvtList(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *selectedMtSvtList_k__BackingField; // x0

  if ( (byte_421A09C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__, method);
    byte_421A09C = 1;
  }
  selectedMtSvtList_k__BackingField = this->fields._selectedMtSvtList_k__BackingField;
  if ( selectedMtSvtList_k__BackingField )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)selectedMtSvtList_k__BackingField,
      (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__);
}


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
    sub_B0D97C(servantEquipCheckDialog);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__CreateList(
        SvtEqCombineListViewManager_o *this,
        int32_t type,
        int32_t modeKind,
        EventUpValSetupInfo_o *setupInfo,
        EventUpValSetupInfo_o *finishSetupInfo,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  SvtEqCombineListViewManager_c *v14; // x0
  ListViewSort_o *bgTxtSprite; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct ListViewSort_array *sortStatusList; // x8
  struct ListViewSort_o *v23; // x1
  struct ListViewSort_o **p_sort; // x22
  UnityEngine_GameObject_o *gameObject; // x25
  System_Int32_array **p_bonusEventIdList; // x25
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **p_bonusFinishEventIdList; // x26
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct ListViewSort_o *sort; // x8
  System_Int32_array **servantEquipFilterEventIdList; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x1
  struct ListViewSort_o *v55; // x8
  struct System_Int32_array *v56; // x9
  __int64 v57; // x10
  bool v58; // w9
  struct System_Int32_array *v59; // x9
  const MethodInfo *v60; // x2
  const MethodInfo *v61; // x2
  const MethodInfo *v62; // x4
  UILabel_o *spendQpInfoLabel; // x23
  UILabel_o *getExpInfoLabel; // x23
  const MethodInfo *v65; // x2
  const MethodInfo *v66; // x4
  const MethodInfo *v67; // x2
  __int64 v68; // x0

  if ( (byte_421A081 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, *(_QWORD *)&type);
    sub_B0D8A4(&SvtEqCombineListViewManager_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_6879/*"GET_EXP_INFO"*/, v12);
    sub_B0D8A4(&StringLiteral_9295/*"NEED_QP_INFO"*/, v13);
    byte_421A081 = 1;
  }
  this->fields.currentType = type;
  v14 = SvtEqCombineListViewManager_TypeInfo;
  if ( (BYTE3(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
  }
  SvtEqCombineListViewManager__CreateSorteData((const MethodInfo *)v14);
  sortStatusList = SvtEqCombineListViewManager_TypeInfo->static_fields->sortStatusList;
  if ( !sortStatusList )
    goto LABEL_53;
  if ( sortStatusList->max_length <= type )
  {
    v68 = sub_B0D9A8(bgTxtSprite);
    sub_B0D948(v68, 0LL);
  }
  v23 = sortStatusList->m_Items[type];
  this->fields.sort = v23;
  p_sort = &this->fields.sort;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v23,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
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
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.bonusEventIdList, 0LL, v27, v28, v29, v30, v31, v32);
  p_bonusFinishEventIdList = &this->fields.bonusFinishEventIdList;
  this->fields.bonusFinishEventIdList = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.bonusFinishEventIdList, 0LL, v34, v35, v36, v37, v38, v39);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_53;
  sort->fields.isBonusKind = 0;
  if ( setupInfo )
    servantEquipFilterEventIdList = (System_Int32_array **)setupInfo->fields.servantEquipFilterEventIdList;
  else
    servantEquipFilterEventIdList = 0LL;
  *p_bonusEventIdList = (System_Int32_array *)servantEquipFilterEventIdList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.bonusEventIdList,
    servantEquipFilterEventIdList,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  if ( finishSetupInfo )
    v54 = (System_Int32_array **)finishSetupInfo->fields.servantEquipFilterEventIdList;
  else
    v54 = 0LL;
  *p_bonusFinishEventIdList = (System_Int32_array *)v54;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.bonusFinishEventIdList, v54, v48, v49, v50, v51, v52, v53);
  v55 = *p_sort;
  if ( setupInfo )
  {
    v56 = setupInfo->fields.servantEquipFilterEventIdList;
    if ( !v56 )
      goto LABEL_53;
    v57 = *(_QWORD *)&v56->max_length;
    v58 = v57 != 0;
    if ( v57 || !finishSetupInfo )
      goto LABEL_27;
    goto LABEL_25;
  }
  if ( finishSetupInfo )
  {
LABEL_25:
    v59 = finishSetupInfo->fields.servantEquipFilterEventIdList;
    if ( !v59 )
      goto LABEL_53;
    v58 = v59->max_length != 0;
LABEL_27:
    if ( !v55 )
      goto LABEL_53;
    goto LABEL_28;
  }
  v58 = 0;
  if ( !v55 )
    goto LABEL_53;
LABEL_28:
  v55->fields.isBonusKind = v58;
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
    SvtEqCombineListViewManager__SetDispActive(this, 0, v60);
    SvtEqCombineListViewManager__SetBtnEnable(this, 0, v65);
    SvtEqCombineListViewManager__SetServantList(this, 0, setupInfo, finishSetupInfo, v66);
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
    SvtEqCombineListViewManager__SetDispActive(this, 1, v60);
    SvtEqCombineListViewManager__SetBtnEnable(this, 0, v61);
    this->fields.selectMax = 20;
    SvtEqCombineListViewManager__SetServantList(this, 1, setupInfo, finishSetupInfo, v62);
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
          bgTxtSprite = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9295/*"NEED_QP_INFO"*/, 0LL);
          if ( spendQpInfoLabel )
          {
            UILabel__set_text(spendQpInfoLabel, (System_String_o *)bgTxtSprite, 0LL);
            getExpInfoLabel = this->fields.getExpInfoLabel;
            bgTxtSprite = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6879/*"GET_EXP_INFO"*/, 0LL);
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
    sub_B0D97C(bgTxtSprite);
  }
LABEL_47:
  bgTxtSprite = (ListViewSort_o *)this->fields.bonusFilterKindButton;
  if ( !bgTxtSprite )
    goto LABEL_53;
  bgTxtSprite = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgTxtSprite, 0LL);
  if ( !*p_sort || !bgTxtSprite )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgTxtSprite, (*p_sort)->fields.isBonusKind, 0LL);
  SvtEqCombineListViewManager__SetStatusKind(this, modeKind, v67);
  if ( !type )
    EventTutorialMaster__CheckTutorial(-1, 57, 0LL, 0, 0, 0, 0, 0LL);
}


void __fastcall SvtEqCombineListViewManager__CreateSorteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  SvtEqCombineListViewManager_c *v4; // x0
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  SvtEqCombineListViewManager_c *v12; // x8
  System_Int32_array **v13; // x19
  struct SvtEqCombineListViewManager_StaticFields *static_fields; // x0
  SvtEqCombineListViewManager_c *v15; // x0
  __int64 v16; // x9
  int v17; // w8
  unsigned __int64 v18; // x23
  struct SvtEqCombineListViewManager_StaticFields *v19; // x8
  unsigned int *sortStatusList; // x24
  System_String_o *SORT_SAVE_KEY; // x19
  System_String_o *v22; // x0
  System_String_o *v23; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  ListViewSort_o *v26; // x19
  __int64 v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  unsigned int *v34; // x0
  unsigned int v35; // w10
  __int64 v36; // x0
  __int64 v37; // x0
  int v38; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_421A07C & 1) == 0 )
  {
    sub_B0D8A4(&ListViewSort___TypeInfo, v1);
    sub_B0D8A4(&ListViewSort_TypeInfo, v2);
    sub_B0D8A4(&SvtEqCombineListViewManager_TypeInfo, v3);
    byte_421A07C = 1;
  }
  v38 = 0;
  v4 = SvtEqCombineListViewManager_TypeInfo;
  if ( (BYTE3(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
    v4 = SvtEqCombineListViewManager_TypeInfo;
  }
  if ( !v4->static_fields->isInitSystem )
  {
    v5 = sub_B0D8BC(ListViewSort___TypeInfo, 2LL);
    v12 = SvtEqCombineListViewManager_TypeInfo;
    v13 = (System_Int32_array **)v5;
    if ( (BYTE3(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
      v12 = SvtEqCombineListViewManager_TypeInfo;
    }
    static_fields = v12->static_fields;
    static_fields->sortStatusList = (struct ListViewSort_array *)v13;
    sub_B0D840((BattleServantConfConponent_o *)&static_fields->sortStatusList, v13, v6, v7, v8, v9, v10, v11);
    v15 = SvtEqCombineListViewManager_TypeInfo;
    v16 = 0LL;
    v17 = (BYTE3(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr) >> 2) & 1;
    do
    {
      v18 = v16;
      if ( (v17 & 1) != 0 && !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = SvtEqCombineListViewManager_TypeInfo;
      }
      v19 = v15->static_fields;
      sortStatusList = (unsigned int *)v19->sortStatusList;
      SORT_SAVE_KEY = v19->SORT_SAVE_KEY;
      v38 = v18 + 1;
      v22 = System_Int32__ToString((int32_t)&v38, 0LL);
      v23 = System_String__Concat_43849904(SORT_SAVE_KEY, v22, 0LL);
      v26 = (ListViewSort_o *)sub_B0D974(ListViewSort_TypeInfo, v24, v25);
      ListViewSort___ctor_32823364(v26, v23, 3, 0, 0LL);
      if ( !sortStatusList )
        sub_B0D97C(v27);
      if ( v26 )
      {
        v27 = sub_B0D964(v26, *(_QWORD *)(*(_QWORD *)sortStatusList + 64LL));
        if ( !v27 )
        {
          v37 = sub_B0D99C(0LL);
          sub_B0D948(v37, 0LL);
        }
      }
      if ( v18 >= sortStatusList[6] )
      {
        v36 = sub_B0D9A8(v27);
        sub_B0D948(v36, 0LL);
      }
      v34 = &sortStatusList[2 * v18];
      *((_QWORD *)v34 + 4) = v26;
      sub_B0D840((BattleServantConfConponent_o *)(v34 + 8), (System_Int32_array **)v26, v28, v29, v30, v31, v32, v33);
      v15 = SvtEqCombineListViewManager_TypeInfo;
      v16 = 1LL;
      v35 = WORD1(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
      v17 = (v35 >> 10) & 1;
    }
    while ( !v18 );
    if ( (v35 & 0x400) != 0 && !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
      v15 = SvtEqCombineListViewManager_TypeInfo;
    }
    v15->static_fields->isInitSystem = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__DecideDragSelect(
        SvtEqCombineListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  SvtEqCombineListViewManager_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x21
  ListViewItem_o *v11; // x19
  __int64 v12; // x9
  _BOOL4 isDragSelect; // w21
  bool IsSelect; // w0
  int32_t selectSum; // w8
  int32_t selectNum; // w21
  int32_t klass; // w9
  _BOOL8 v18; // x0
  void *v19; // x0
  int v20; // w1
  __int64 v21; // x20
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_421A0BA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&index);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    this = (SvtEqCombineListViewManager_o *)sub_B0D8A4(&SvtEqCombineListViewItem_TypeInfo, v9);
    byte_421A0BA = 1;
  }
  memset(&v22, 0, sizeof(v22));
  itemSortList = v4->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_24;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v11 = itemSortList->fields._items->m_Items[index];
  if ( !v11 )
    goto LABEL_24;
  v12 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v11->klass->_2.bitflags2 + 1) >= (unsigned int)v12
    && (SvtEqCombineListViewItem_c *)v11->klass->_2.typeHierarchy[v12 - 1] == SvtEqCombineListViewItem_TypeInfo )
  {
    if ( v11[2].fields.sortIndex < 1 )
      goto LABEL_22;
    isDragSelect = v4->fields.isDragSelect;
    IsSelect = ListViewItem__get_IsSelect(v11, 0LL);
    if ( isDragSelect )
    {
      if ( !IsSelect )
      {
        selectSum = v4->fields.selectSum;
        if ( selectSum < v4->fields.selectMax )
        {
          v11->fields.selectNum = selectSum;
          ++v4->fields.selectSum;
        }
      }
      goto LABEL_22;
    }
    if ( !IsSelect )
      goto LABEL_22;
    selectNum = v11->fields.selectNum;
    ListViewItem__set_IsSelect(v11, 0, 0LL);
    BYTE2(v11[1].fields.sortStr1) = 0;
    this = (SvtEqCombineListViewManager_o *)v4->fields.itemList;
    --v4->fields.selectSum;
    if ( this )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v22,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( 1 )
      {
        v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v22,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v18 )
          break;
        if ( !v22.fields.current )
          sub_B0D97C(v18);
        klass = (int32_t)v22.fields.current[1].klass;
        if ( klass > selectNum )
          LODWORD(v22.fields.current[1].klass) = klass - 1;
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v22,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      goto LABEL_22;
    }
LABEL_24:
    sub_B0D97C(this);
  }
  sub_B0DC70(v11);
  if ( v20 != 1 )
    _Unwind_Resume(v19);
  v21 = *(_QWORD *)__cxa_begin_catch(v19);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v22,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( v21 )
    sub_B0D948(v21, 0LL);
LABEL_22:
  v11[2].fields.sortIndex = -1;
}


void __fastcall SvtEqCombineListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  SvtEqCombineListViewManager_c *v2; // x0
  int v3; // w8
  ListViewSort_o *v4; // x0
  unsigned int v5; // w20
  const char *namespaze; // x8
  __int64 v7; // x0

  if ( (byte_421A07D & 1) == 0 )
  {
    sub_B0D8A4(&SvtEqCombineListViewManager_TypeInfo, v1);
    byte_421A07D = 1;
  }
  v2 = SvtEqCombineListViewManager_TypeInfo;
  if ( (BYTE3(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
  }
  SvtEqCombineListViewManager__CreateSorteData((const MethodInfo *)v2);
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
      v7 = sub_B0D9A8(v4);
      sub_B0D948(v7, 0LL);
    }
    v4 = *(ListViewSort_o **)&namespaze[8 * v5 + 32];
    if ( !v4 )
LABEL_15:
      sub_B0D97C(v4);
    ListViewSort__DeleteContinueData(v4, 0LL);
    v3 = 1;
  }
  while ( !v5 );
}


void __fastcall SvtEqCombineListViewManager__DestroyList(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_B0D97C(0LL);
  ListViewSort__Save(sort, 0LL);
  this->fields.bonusEventIdList = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.bonusEventIdList, 0LL, v4, v5, v6, v7, v8, v9);
  this->fields.bonusFinishEventIdList = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.bonusFinishEventIdList, 0LL, v10, v11, v12, v13, v14, v15);
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
  SvtEqCombineListViewManager__SetMode_34092964(this, 2, v6);
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
  SvtEqCombineListViewManager__SetMode_34092964(this, 2, v6);
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
  SvtEqCombineListViewManager__SetMode_34092964(this, 2, v5);
}


void __fastcall SvtEqCombineListViewManager__EndCloseSelectFilterKind(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__EndSelectFilterKind(
        SvtEqCombineListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  CommonUI_o *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x21
  __int64 v12; // x0

  if ( (byte_421A0A6 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&Method_SvtEqCombineListViewManager_EndCloseSelectFilterKind__, v6);
    byte_421A0A6 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    SvtEqCombineListViewManager__SetFilterButtonImage(this, v7);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_SvtEqCombineListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_B0D97C(v12);
  CommonUI__CloseServantFilterSelectMenu(Instance, v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__EndSelectSortKind(
        SvtEqCombineListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_421A0AB & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_421A0AB = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
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
    sub_B0D840(p_requestCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    SvtEqCombineListViewManager_RequestCallbackFunc__Invoke(requestCallback, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall SvtEqCombineListViewManager__GetAmountSortValue(
        SvtEqCombineListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  SvtEqCombineListViewManager_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  int size; // w22
  int v9; // w23
  int64_t v10; // x21
  __int64 v11; // x9
  SvtEqCombineListViewItem_o *v13; // x0
  ListViewSort_o *v14; // x1
  const MethodInfo *v15; // x2

  v4 = this;
  if ( (byte_421A0AE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    this = (SvtEqCombineListViewManager_o *)sub_B0D8A4(&SvtEqCombineListViewItem_TypeInfo, v6);
    byte_421A0AE = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_B0D97C(this);
  size = itemList->fields._size;
  if ( size < 1 )
  {
    return 0LL;
  }
  else
  {
    v9 = 0;
    v10 = 0LL;
    while ( 1 )
    {
      if ( itemList->fields._size <= (unsigned int)v9 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      this = (SvtEqCombineListViewManager_o *)itemList->fields._items->m_Items[v9];
      if ( !this )
        goto LABEL_15;
      v11 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v11
        || (SvtEqCombineListViewItem_c *)this->klass->_2.typeHierarchy[v11 - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        break;
      }
      ++v9;
      if ( LODWORD(this->fields.clipOffset.fields.x) == svtId )
        ++v10;
      if ( v9 >= size )
        return v10;
      itemList = v4->fields.itemList;
      if ( !itemList )
        goto LABEL_15;
    }
    sub_B0DC70(this);
    return SvtEqCombineListViewItem__IsMatchFilter(v13, v14, v15);
  }
}


int32_t __fastcall SvtEqCombineListViewManager__GetBaseCollectionLv(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int64_t Instance; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v8; // q1
  UserServantCollectionMaster_o *v9; // x20
  struct UserServantEntity_o *v10; // x8
  int64_t v11; // x19
  __int64 v12; // x21
  __int64 v13; // x22
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_421A08C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_421A08C = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_16;
  v8 = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.fakeValue;
  v9 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v17.fields.fakeValue = v8;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v16 = v17;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v16, 0LL);
  v10 = this->fields.baseUsrSvtData;
  if ( !v10 )
    goto LABEL_16;
  v11 = Instance;
  v13 = *(_QWORD *)&v10->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&v10->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v13;
  *(_QWORD *)&v18.fields.fakeValue = v12;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v18, 0LL);
  if ( !v9 )
LABEL_16:
    sub_B0D97C(Instance);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v9, v11, Instance, 0LL);
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
        v8 = sub_B0D9A8(this);
        sub_B0D948(v8, 0LL);
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
    sub_B0D97C(this);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
SvtEqCombineListViewItem_o *__fastcall SvtEqCombineListViewManager__GetItem(
        SvtEqCombineListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  SvtEqCombineListViewItem_o *result; // x0
  __int64 v8; // x9

  if ( (byte_421A08D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B0D8A4(&SvtEqCombineListViewItem_TypeInfo, v5);
    byte_421A08D = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  result = (SvtEqCombineListViewItem_o *)itemList->fields._items->m_Items[index];
  if ( result )
  {
    v8 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v8
      || (SvtEqCombineListViewItem_c *)result->klass->_2.typeHierarchy[v8 - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      sub_B0DC70(result);
      return 0LL;
    }
  }
  return result;
}


UserServantEntity_o *__fastcall SvtEqCombineListViewManager__GetSelectBaseSvtData(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  BattleServantConfConponent_o *p_baseUsrSvtData; // x19
  BattleServantConfConponent_c *klass; // x8
  Il2CppType byval_arg; // q1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v10; // x20
  System_Int32_array **Entity; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-30h]

  if ( (byte_421A08B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_421A08B = 1;
  }
  if ( !this->fields.baseUsrSvtData )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  p_baseUsrSvtData = (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  klass = p_baseUsrSvtData->klass;
  if ( !p_baseUsrSvtData->klass )
    goto LABEL_13;
  byval_arg = klass->_1.byval_arg;
  v10 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
  *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
  *(Il2CppType *)&v20.fields.fakeValue = byval_arg;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v19 = v20;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v19, 0LL);
  if ( !v10 )
LABEL_13:
    sub_B0D97C(Instance);
  Entity = (System_Int32_array **)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                    v10,
                                    (int64_t)Instance,
                                    (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_baseUsrSvtData->klass = (BattleServantConfConponent_c *)Entity;
  sub_B0D840(p_baseUsrSvtData, Entity, v12, v13, v14, v15, v16, v17);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x20
  SvtEqCombineListViewManager___c_c *IsSelect; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  int size; // w22
  unsigned int v22; // w23
  ListViewItem_o *v23; // x21
  __int64 v24; // x9
  struct SvtEqCombineListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__139_0; // x21
  Il2CppObject *v27; // x22
  struct SvtEqCombineListViewManager___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  int v35; // w8
  int v36; // w22
  __int64 v37; // x21
  unsigned int v38; // w23
  __int64 v39; // x8
  System_Collections_Generic_List_SvtEqCombineListViewItem__o *result; // x0
  SvtEqCombineListViewManager_o *v41; // x0
  const MethodInfo *v42; // x1

  if ( (byte_421A099 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_SvtEqCombineListViewItem___ctor__, method);
    sub_B0D8A4(&System_Comparison_SvtEqCombineListViewItem__TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Sort__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo, v12);
    sub_B0D8A4(&SvtEqCombineListViewItem_TypeInfo, v13);
    sub_B0D8A4(&Method_SvtEqCombineListViewManager___c__GetSelectedMaterialList_b__139_0__, v14);
    sub_B0D8A4(&SvtEqCombineListViewManager___c_TypeInfo, v15);
    byte_421A099 = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
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
      v27 = (Il2CppObject *)static_fields->__9;
      _9__139_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                              System_Comparison_SvtEqCombineListViewItem__TypeInfo,
                                                                              v18,
                                                                              v19);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__139_0,
        v27,
        Method_SvtEqCombineListViewManager___c__GetSelectedMaterialList_b__139_0__,
        (const MethodInfo_2412E90 *)Method_System_Comparison_SvtEqCombineListViewItem___ctor__);
      v28 = SvtEqCombineListViewManager___c_TypeInfo->static_fields;
      v28->__9__139_0 = (struct System_Comparison_SvtEqCombineListViewItem__o *)_9__139_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v28->__9__139_0,
        (System_Int32_array **)_9__139_0,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
    }
    if ( v16 )
    {
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v16,
        (System_Comparison_T__o *)_9__139_0,
        (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Sort__);
      v35 = v16->fields._size;
      if ( v35 < 1 )
        return (System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v16;
      v36 = 0;
      v37 = 4LL;
      while ( 1 )
      {
        v38 = v37 - 4;
        if ( v35 <= (unsigned int)(v37 - 4) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v39 = *((_QWORD *)&v16->fields._items->obj.klass + v37);
        if ( !v39 )
          break;
        if ( *(_DWORD *)(v39 + 156) > v36 )
        {
          if ( v16->fields._size <= v38 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v36 = *(_DWORD *)(v39 + 156);
          if ( v16->fields._size <= v38 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          this->fields.lastSelectIndex = *(_DWORD *)(v39 + 24);
        }
        v35 = v16->fields._size;
        if ( (int)++v37 - 4 >= v35 )
          return (System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v16;
      }
    }
LABEL_39:
    sub_B0D97C(IsSelect);
  }
  v22 = 0;
  while ( 1 )
  {
    if ( itemList->fields._size <= v22 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v23 = itemList->fields._items->m_Items[v22];
    if ( !v23 )
      goto LABEL_39;
    v24 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v23->klass->_2.bitflags2 + 1) < (unsigned int)v24
      || (SvtEqCombineListViewItem_c *)v23->klass->_2.typeHierarchy[v24 - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    IsSelect = (SvtEqCombineListViewManager___c_c *)ListViewItem__get_IsSelect(v23, 0LL);
    if ( ((unsigned __int8)IsSelect & 1) != 0 )
    {
      if ( !v16 )
        goto LABEL_39;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v16,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Add__);
    }
    if ( (int)++v22 >= size )
      goto LABEL_17;
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_39;
  }
  sub_B0DC70(v23);
  SvtEqCombineListViewManager__SetSelectedMaterialInfo(v41, v42);
  return result;
}


bool __fastcall SvtEqCombineListViewManager__GetSwapChoiceList(
        SvtEqCombineListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_long__o *v14; // x23
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_long__o *v17; // x22
  int64_t v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  int size; // w24
  unsigned int v27; // w25
  __int64 v28; // x9
  __int64 v29; // x8
  __int128 v30; // q0
  const MethodInfo_2FB5EB0 *v31; // x2
  int64_t v32; // x1
  System_Collections_Generic_List_long__o *v33; // x0
  __int128 v34; // q0
  System_Int64_array *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int64_array *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  bool result; // w0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  SvtEqCombineListViewManager_o *v56; // x0
  const MethodInfo *v57; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+50h] [xbp-70h]

  if ( (byte_421A0B1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, choiceList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Count__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B0D8A4(&SvtEqCombineListViewItem_TypeInfo, v13);
    byte_421A0B1 = 1;
  }
  v14 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     choiceList,
                                                     unchoiceList);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  v17 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, v15, v16);
  System_Collections_Generic_List_long____ctor(
    v17,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( size < 1 )
  {
LABEL_28:
    if ( v14 && v17 )
    {
      if ( v17->fields._size + v14->fields._size < 1 )
      {
        *choiceList = 0LL;
        sub_B0D840((BattleServantConfConponent_o *)choiceList, 0LL, v19, v20, v21, v22, v23, v24);
        *unchoiceList = 0LL;
        sub_B0D840((BattleServantConfConponent_o *)unchoiceList, 0LL, v50, v51, v52, v53, v54, v55);
        return 0;
      }
      else
      {
        v35 = System_Collections_Generic_List_long___ToArray(
                v14,
                (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
        *choiceList = v35;
        sub_B0D840((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v35, v36, v37, v38, v39, v40, v41);
        v42 = System_Collections_Generic_List_long___ToArray(
                v17,
                (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
        *unchoiceList = v42;
        sub_B0D840(
          (BattleServantConfConponent_o *)unchoiceList,
          (System_Int32_array **)v42,
          v43,
          v44,
          v45,
          v46,
          v47,
          v48);
        return 1;
      }
    }
LABEL_33:
    sub_B0D97C(v18);
  }
  v27 = 0;
  while ( 1 )
  {
    if ( itemList->fields._size <= v27 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v18 = (int64_t)itemList->fields._items->m_Items[v27];
    if ( !v18 )
      goto LABEL_33;
    v28 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v18 + 300LL) < (unsigned int)v28
      || *(SvtEqCombineListViewItem_c **)(*(_QWORD *)(*(_QWORD *)v18 + 200LL) + 8 * v28 - 8) != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    v29 = *(_QWORD *)(v18 + 120);
    if ( v29 && *(_BYTE *)(v18 + 246) )
    {
      if ( *(_BYTE *)(v18 + 165) )
      {
        v30 = *(_OWORD *)(v29 + 32);
        *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)(v29 + 16);
        *(_OWORD *)&v61.fields.fakeValue = v30;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v60 = v61;
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v60, 0LL);
        if ( !v17 )
          goto LABEL_33;
        v31 = (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__;
        v32 = v18;
        v33 = v17;
      }
      else
      {
        v34 = *(_OWORD *)(v29 + 32);
        *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)(v29 + 16);
        *(_OWORD *)&v61.fields.fakeValue = v34;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v59 = v61;
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v59, 0LL);
        if ( !v14 )
          goto LABEL_33;
        v31 = (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__;
        v32 = v18;
        v33 = v14;
      }
      System_Collections_Generic_List_long___Add(v33, v32, v31);
    }
    if ( (int)++v27 >= size )
      goto LABEL_28;
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_33;
  }
  sub_B0DC70(v18);
  SvtEqCombineListViewManager__OnClickNormalStatus(v56, v57);
  return result;
}


bool __fastcall SvtEqCombineListViewManager__GetSwapLockList(
        SvtEqCombineListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_long__o *v14; // x23
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_long__o *v17; // x22
  int64_t v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  int size; // w24
  unsigned int v27; // w25
  __int64 v28; // x9
  __int64 v29; // x8
  __int128 v30; // q0
  const MethodInfo_2FB5EB0 *v31; // x2
  int64_t v32; // x1
  System_Collections_Generic_List_long__o *v33; // x0
  __int128 v34; // q0
  System_Int64_array *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int64_array *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  SvtEqCombineListViewManager_o *v56; // x0
  System_Int64_array **v57; // x1
  System_Int64_array **v58; // x2
  const MethodInfo *v59; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+50h] [xbp-70h]

  if ( (byte_421A0B0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, lockList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Count__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B0D8A4(&SvtEqCombineListViewItem_TypeInfo, v13);
    byte_421A0B0 = 1;
  }
  v14 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     lockList,
                                                     unlockList);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  v17 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, v15, v16);
  System_Collections_Generic_List_long____ctor(
    v17,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( size < 1 )
  {
LABEL_28:
    if ( v14 && v17 )
    {
      if ( v17->fields._size + v14->fields._size < 1 )
      {
        *lockList = 0LL;
        sub_B0D840((BattleServantConfConponent_o *)lockList, 0LL, v19, v20, v21, v22, v23, v24);
        *unlockList = 0LL;
        sub_B0D840((BattleServantConfConponent_o *)unlockList, 0LL, v50, v51, v52, v53, v54, v55);
        return 0;
      }
      else
      {
        v35 = System_Collections_Generic_List_long___ToArray(
                v14,
                (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
        *lockList = v35;
        sub_B0D840((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v35, v36, v37, v38, v39, v40, v41);
        v42 = System_Collections_Generic_List_long___ToArray(
                v17,
                (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
        *unlockList = v42;
        sub_B0D840((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v42, v43, v44, v45, v46, v47, v48);
        return 1;
      }
    }
LABEL_33:
    sub_B0D97C(v18);
  }
  v27 = 0;
  while ( 1 )
  {
    if ( itemList->fields._size <= v27 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v18 = (int64_t)itemList->fields._items->m_Items[v27];
    if ( !v18 )
      goto LABEL_33;
    v28 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v18 + 300LL) < (unsigned int)v28
      || *(SvtEqCombineListViewItem_c **)(*(_QWORD *)(*(_QWORD *)v18 + 200LL) + 8 * v28 - 8) != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    v29 = *(_QWORD *)(v18 + 120);
    if ( v29 && *(_BYTE *)(v18 + 245) )
    {
      if ( *(_BYTE *)(v18 + 160) )
      {
        v30 = *(_OWORD *)(v29 + 32);
        *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)(v29 + 16);
        *(_OWORD *)&v63.fields.fakeValue = v30;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v62 = v63;
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v62, 0LL);
        if ( !v17 )
          goto LABEL_33;
        v31 = (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__;
        v32 = v18;
        v33 = v17;
      }
      else
      {
        v34 = *(_OWORD *)(v29 + 32);
        *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)(v29 + 16);
        *(_OWORD *)&v63.fields.fakeValue = v34;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v61 = v63;
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v61, 0LL);
        if ( !v14 )
          goto LABEL_33;
        v31 = (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__;
        v32 = v18;
        v33 = v14;
      }
      System_Collections_Generic_List_long___Add(v33, v32, v31);
    }
    if ( (int)++v27 >= size )
      goto LABEL_28;
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_33;
  }
  sub_B0DC70(v18);
  return SvtEqCombineListViewManager__GetSwapChoiceList(v56, v57, v58, v59);
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

  if ( (byte_421A07E & 1) == 0 )
  {
    sub_B0D8A4(&SvtEqCombineListViewManager_TypeInfo, v1);
    byte_421A07E = 1;
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
        v5 = sub_B0D9A8(v2);
        sub_B0D948(v5, 0LL);
      }
      v2 = (SvtEqCombineListViewManager_c *)sortStatusList->m_Items[i];
      if ( !v2 )
LABEL_17:
        sub_B0D97C(v2);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UserGameEntity_o *SelfUserGame; // x19
  DataManager_o *Instance; // x0
  UserServantEntity_o *Entity; // x20
  _BOOL8 v17; // x0
  SvtEqCombineListViewItem_c *v18; // x1
  Il2CppObject *current; // x21
  __int64 v20; // x9
  _OWORD *monitor; // x8
  _QWORD *p_monitor; // x22
  __int128 v23; // q0
  int64_t v24; // x0
  __int128 v25; // q0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  int64_t UserSvtId; // x0
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x1
  UnityEngine_Object_o *v35; // x22
  void *v36; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_421A08E & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v9);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B0D8A4(&SvtEqCombineListViewItem_TypeInfo, v13);
    byte_421A08E = 1;
  }
  memset(&v40, 0, sizeof(v40));
  if ( !this->fields.itemList )
    return;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( usrSvtId < 1 )
  {
    Entity = 0LL;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
LABEL_39:
      sub_B0D97C(Instance);
    }
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
               usrSvtId,
               (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_39;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v39,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v40.fields.current = (Il2CppObject *)v39.fields.fakeValue;
  *(_OWORD *)&v40.fields.list = *(_OWORD *)&v39.fields.currentCryptoKey;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v40,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v17 )
      break;
    current = v40.fields.current;
    if ( v40.fields.current )
    {
      v18 = SvtEqCombineListViewItem_TypeInfo;
      v20 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v40.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v20
        || (SvtEqCombineListViewItem_c *)v40.fields.current->klass->_2.typeHierarchy[v20 - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        sub_B0DC70(v40.fields.current);
LABEL_34:
        sub_B0D97C(UserSvtId);
      }
    }
    if ( Entity )
    {
      if ( !v40.fields.current )
        sub_B0D97C(v17);
      p_monitor = &v40.fields.current[7].monitor;
      monitor = v40.fields.current[7].monitor;
      if ( !monitor )
        sub_B0D97C(v17);
      v23 = monitor[2];
      *(_OWORD *)&v39.fields.currentCryptoKey = monitor[1];
      *(_OWORD *)&v39.fields.fakeValue = v23;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v38 = v39;
      v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v38, 0LL);
      v25 = *(_OWORD *)&Entity->fields.id.fields.fakeValue;
      *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v37.fields.fakeValue = v25;
      if ( v24 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v37, 0LL) )
      {
        *p_monitor = Entity;
        sub_B0D840(
          (BattleServantConfConponent_o *)&current[7].monitor,
          (System_Int32_array **)Entity,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
      }
    }
    else if ( !v40.fields.current )
    {
      sub_B0D97C(v17);
    }
    UserSvtId = SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)current, (const MethodInfo *)v18);
    if ( !SelfUserGame )
      goto LABEL_34;
    BYTE4(current[10].klass) = UserSvtId == SelfUserGame->fields.favoriteUserSvtId;
    SvtEqCombineListViewItem__ModifyLockItem((SvtEqCombineListViewItem_o *)current, v33);
    SvtEqCombineListViewItem__ModifyChoiceItem((SvtEqCombineListViewItem_o *)current, v34);
    v35 = (UnityEngine_Object_o *)current[6].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v35, 0LL, 0LL) )
    {
      v36 = current[6].monitor;
      if ( !v36 )
        sub_B0D97C(0LL);
      (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v36 + 392LL))(
        v36,
        current,
        *(_QWORD *)(*(_QWORD *)v36 + 400LL));
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v40,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__ModifyList(
        SvtEqCombineListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  SvtEqCombineListViewManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
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
  int32_t currentType; // w8
  __int64 v21; // x1
  __int64 v22; // x2
  void *ServantEquipList; // x21
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v24; // x22
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x23
  int v28; // w8
  __int64 v29; // x26
  __int64 v30; // x24
  __int128 v31; // q0
  struct UserServantEntity_o *v32; // x8
  __int128 v33; // q0
  SvtEqCombineListViewManager_o *v34; // x25
  __int64 v35; // x1
  __int64 v36; // x2
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v37; // x22
  __int64 v38; // x1
  __int64 v39; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v40; // x23
  int size; // w8
  int32_t i; // w21
  WarBoardAIRoute_RouteData_o *v43; // x8
  __int128 v44; // q0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v46; // q0
  SvtEqCombineListViewManager_o *v47; // x24
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *selectedMtSvtList_k__BackingField; // x20
  signed __int64 v49; // x8
  unsigned __int64 v50; // x25
  unsigned int v51; // w27
  SvtEqCombineListViewItem_o *v52; // x20
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v54; // q1
  __int64 v55; // x28
  __int128 v56; // q0
  SvtEqCombineListViewManager_o *v57; // x24
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 v59; // x24
  int v60; // w26
  unsigned int v61; // w25
  __int64 v62; // x8
  __int128 v63; // q0
  SvtEqCombineListViewManager_o *v64; // x23
  __int64 v65; // x20
  struct System_Collections_Generic_List_ListViewItem__o *v66; // x22
  SvtEqCombineListViewItem_o *v67; // x22
  __int64 v68; // x9
  struct UserServantEntity_o *v69; // x8
  __int128 v70; // q0
  struct UserServantEntity_o *v71; // x8
  __int128 v72; // q0
  int64_t v73; // x0
  const MethodInfo *v74; // x5
  __int64 v75; // x0
  SvtEqCombineListViewManager_o *v76; // x0
  ListViewObject_o *v77; // x1
  ListViewItem_o *v78; // x2
  const MethodInfo *v79; // x3
  bool isIconSizeChangea; // [xsp+Ch] [xbp-1A4h]
  bool isIconSizeChangeb; // [xsp+Ch] [xbp-1A4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+10h] [xbp-1A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+30h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v84; // [xsp+50h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v85; // [xsp+70h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v86; // [xsp+90h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+B0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+D0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89; // [xsp+F0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v90; // [xsp+110h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v91; // [xsp+130h] [xbp-80h]

  v4 = this;
  if ( (byte_421A091 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, isIconSizeChange);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__Remove__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity___ctor___67898584, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v16);
    sub_B0D8A4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v17);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18);
    this = (SvtEqCombineListViewManager_o *)sub_B0D8A4(&SvtEqCombineListViewItem_TypeInfo, v19);
    byte_421A091 = 1;
  }
  currentType = v4->fields.currentType;
  isIconSizeChangea = isIconSizeChange;
  if ( currentType == 1 )
  {
    this = (SvtEqCombineListViewManager_o *)v4->fields.userServantMaster;
    if ( !this )
      goto LABEL_106;
    ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)this, 0LL);
    v37 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                            System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                            v35,
                                                                            v36);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v37,
      (System_Collections_Generic_IEnumerable_T__o *)ServantEquipList,
      (const MethodInfo_2FC4C1C *)Method_System_Collections_Generic_List_UserServantEntity___ctor___67898584);
    v40 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                                                    v38,
                                                                                                    v39);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v40,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( v4->fields.baseUsrSvtData )
    {
      if ( !v37 )
        goto LABEL_106;
      size = v37->fields._size;
      if ( size >= 1 )
      {
        for ( i = 0; i < size; ++i )
        {
          if ( size <= (unsigned int)i )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v43 = v37->fields._items->m_Items[i];
          if ( !v43 )
            goto LABEL_106;
          v44 = *(_OWORD *)&v43->fields.baseSquare;
          *(_OWORD *)&v91.fields.currentCryptoKey = *(_OWORD *)&v43->fields.flagNow;
          *(_OWORD *)&v91.fields.fakeValue = v44;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v88 = v91;
          this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
                                                    &v88,
                                                    0LL);
          baseUsrSvtData = v4->fields.baseUsrSvtData;
          if ( !baseUsrSvtData )
            goto LABEL_106;
          v46 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
          v47 = this;
          *(_OWORD *)&v87.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v87.fields.fakeValue = v46;
          this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
                                                    &v87,
                                                    0LL);
          if ( v47 == this )
            System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
              (System_Collections_Generic_List_XWeaponTrail_Element__o *)v37,
              i,
              (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
          size = v37->fields._size;
        }
      }
      this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v37,
                                                (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      ServantEquipList = this;
    }
    selectedMtSvtList_k__BackingField = v4->fields._selectedMtSvtList_k__BackingField;
    if ( selectedMtSvtList_k__BackingField )
    {
      LODWORD(v49) = selectedMtSvtList_k__BackingField->fields._size;
      if ( (int)v49 >= 1 )
      {
        v50 = 0LL;
        while ( 1 )
        {
          if ( v50 >= (unsigned int)v49 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          if ( !v37 )
            goto LABEL_106;
          if ( v37->fields._size >= 1 )
            break;
LABEL_66:
          selectedMtSvtList_k__BackingField = v4->fields._selectedMtSvtList_k__BackingField;
          if ( !selectedMtSvtList_k__BackingField )
            goto LABEL_106;
          v49 = selectedMtSvtList_k__BackingField->fields._size;
          if ( (__int64)++v50 >= v49 )
          {
            if ( !v40 )
              goto LABEL_106;
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v40,
              (System_Collections_Generic_IEnumerable_T__o *)v37,
              (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
            this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v40,
                                                      (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
            ServantEquipList = this;
            goto LABEL_70;
          }
        }
        v51 = 0;
        v52 = selectedMtSvtList_k__BackingField->fields._items->m_Items[v50];
        while ( 1 )
        {
          if ( !ServantEquipList )
            goto LABEL_106;
          if ( v51 >= *((_DWORD *)ServantEquipList + 6) )
            break;
          if ( !v52 )
            goto LABEL_106;
          userSvtEntity = v52->fields.userSvtEntity;
          if ( !userSvtEntity )
            goto LABEL_106;
          v54 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
          v55 = *((_QWORD *)ServantEquipList + (int)v51 + 4);
          *(_OWORD *)&v91.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v91.fields.fakeValue = v54;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v86 = v91;
          this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
                                                    &v86,
                                                    0LL);
          if ( !v55 )
            goto LABEL_106;
          v56 = *(_OWORD *)(v55 + 32);
          v57 = this;
          *(_OWORD *)&v85.fields.currentCryptoKey = *(_OWORD *)(v55 + 16);
          *(_OWORD *)&v85.fields.fakeValue = v56;
          this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
                                                    &v85,
                                                    0LL);
          if ( v57 == this )
          {
            if ( !v40 )
              goto LABEL_106;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v40,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v52->fields.userSvtEntity,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
            this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                                                      (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v37,
                                                      (WarBoardManager_TaskList_o *)v52->fields.userSvtEntity,
                                                      (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
          }
          if ( (signed int)++v51 >= v37->fields._size )
            goto LABEL_66;
        }
LABEL_104:
        v75 = sub_B0D9A8(this);
        sub_B0D948(v75, 0LL);
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
    v24 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                            System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                            v21,
                                                                            v22);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v24,
      (System_Collections_Generic_IEnumerable_T__o *)ServantEquipList,
      (const MethodInfo_2FC4C1C *)Method_System_Collections_Generic_List_UserServantEntity___ctor___67898584);
    v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                                                    v25,
                                                                                                    v26);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v27,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( v4->fields.baseUsrSvtData )
    {
      v28 = *((_DWORD *)ServantEquipList + 6);
      if ( v28 >= 1 )
      {
        v29 = 0LL;
        while ( (unsigned int)v29 < v28 )
        {
          v30 = *((_QWORD *)ServantEquipList + v29 + 4);
          if ( !v30 )
            goto LABEL_106;
          v31 = *(_OWORD *)(v30 + 32);
          *(_OWORD *)&v91.fields.currentCryptoKey = *(_OWORD *)(v30 + 16);
          *(_OWORD *)&v91.fields.fakeValue = v31;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v90 = v91;
          this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
                                                    &v90,
                                                    0LL);
          v32 = v4->fields.baseUsrSvtData;
          if ( !v32 )
            goto LABEL_106;
          v33 = *(_OWORD *)&v32->fields.id.fields.fakeValue;
          v34 = this;
          *(_OWORD *)&v89.fields.currentCryptoKey = *(_OWORD *)&v32->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v89.fields.fakeValue = v33;
          this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
                                                    &v89,
                                                    0LL);
          if ( v34 == this )
          {
            if ( !v27 )
              goto LABEL_106;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v27,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
            if ( !v24 )
              goto LABEL_106;
            this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                                                      (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v24,
                                                      (WarBoardManager_TaskList_o *)v30,
                                                      (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
          }
          v28 = *((_DWORD *)ServantEquipList + 6);
          if ( (int)++v29 >= v28 )
            goto LABEL_27;
        }
        goto LABEL_104;
      }
LABEL_27:
      if ( !v27 )
        goto LABEL_106;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v27,
        (System_Collections_Generic_IEnumerable_T__o *)v24,
        (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v27,
                                                (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      ServantEquipList = this;
      if ( !this )
        goto LABEL_106;
    }
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_106;
  v59 = *((_QWORD *)ServantEquipList + 3);
  if ( (int)v59 >= 1 )
  {
    v60 = itemList->fields._size;
    v61 = 0;
    isIconSizeChangeb = isIconSizeChangea;
    while ( 1 )
    {
      v62 = *((_QWORD *)ServantEquipList + (int)v61 + 4);
      if ( !v62 )
        goto LABEL_106;
      v63 = *(_OWORD *)(v62 + 32);
      *(_OWORD *)&v91.fields.currentCryptoKey = *(_OWORD *)(v62 + 16);
      *(_OWORD *)&v91.fields.fakeValue = v63;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v84 = v91;
      this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
                                                &v84,
                                                0LL);
      if ( v60 >= 1 )
        break;
LABEL_102:
      if ( (int)++v61 >= (int)v59 )
        return;
      if ( v61 >= *((_DWORD *)ServantEquipList + 6) )
        goto LABEL_104;
    }
    v64 = this;
    v65 = 0LL;
    while ( 1 )
    {
      v66 = v4->fields.itemList;
      if ( !v66 )
        goto LABEL_106;
      if ( v66->fields._size <= (unsigned int)v65 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v67 = (SvtEqCombineListViewItem_o *)v66->fields._items->m_Items[v65];
      if ( !v67 )
        goto LABEL_106;
      v68 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v67->klass->_2.bitflags2 + 1) < (unsigned int)v68
        || (SvtEqCombineListViewItem_c *)v67->klass->_2.typeHierarchy[v68 - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        break;
      }
      v69 = v67->fields.userSvtEntity;
      if ( v69 )
      {
        v70 = *(_OWORD *)&v69->fields.id.fields.fakeValue;
        *(_OWORD *)&v91.fields.currentCryptoKey = *(_OWORD *)&v69->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v91.fields.fakeValue = v70;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v83 = v91;
        this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
                                                  &v83,
                                                  0LL);
        if ( this == v64 )
        {
          v71 = v67->fields.userSvtEntity;
          if ( v71 )
          {
            v72 = *(_OWORD *)&v71->fields.id.fields.fakeValue;
            *(_OWORD *)&v91.fields.currentCryptoKey = *(_OWORD *)&v71->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v91.fields.fakeValue = v72;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v82 = v91;
            v73 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v82, 0LL);
            SvtEqCombineListViewManager__ModifyLockItem_34090276(v4, v67, v73, 1, isIconSizeChangeb, v74);
            goto LABEL_102;
          }
LABEL_106:
          sub_B0D97C(this);
        }
      }
      if ( (int)++v65 >= v60 )
        goto LABEL_102;
    }
    sub_B0DC70(v67);
    SvtEqCombineListViewManager__SetObjectItem(v76, v77, v78, v79);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  DataManager_o *Instance; // x0
  UserServantEntity_o *Entity; // x21
  bool v19; // w20
  int64_t v20; // x0
  SvtEqCombineListViewItem_c *v21; // x1
  Il2CppObject *current; // x22
  __int64 v23; // x9
  _OWORD *monitor; // x8
  _QWORD *p_monitor; // x23
  __int128 v26; // q0
  int64_t v27; // x0
  __int128 v28; // q0
  int64_t v29; // x24
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  const MethodInfo *v36; // x1
  UnityEngine_Object_o *v37; // x23
  void *v38; // x0
  ListViewObject_o *v39; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+50h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+70h] [xbp-70h] BYREF

  if ( (byte_421A08F & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v12);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v13);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B0D8A4(&SvtEqCombineListViewItem_TypeInfo, v16);
    byte_421A08F = 1;
  }
  memset(&v44, 0, sizeof(v44));
  if ( !this->fields.itemList )
    return;
  UserGameMaster__getSelfUserGame(0LL);
  if ( usrSvtId < 1 )
  {
    Entity = 0LL;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
LABEL_44:
      sub_B0D97C(Instance);
    }
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
               usrSvtId,
               (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_44;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v43,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v44.fields.current = (Il2CppObject *)v43.fields.fakeValue;
  *(_OWORD *)&v44.fields.list = *(_OWORD *)&v43.fields.currentCryptoKey;
  v19 = !isIconSizeChange && isInit;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v44,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v20 & 1) == 0 )
      break;
    current = v44.fields.current;
    if ( v44.fields.current )
    {
      v21 = SvtEqCombineListViewItem_TypeInfo;
      v23 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v44.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v23
        || (SvtEqCombineListViewItem_c *)v44.fields.current->klass->_2.typeHierarchy[v23 - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        sub_B0DC70(v44.fields.current);
LABEL_38:
        sub_B0D97C(v20);
      }
    }
    if ( Entity )
    {
      if ( !v44.fields.current )
        sub_B0D97C(v20);
      p_monitor = &v44.fields.current[7].monitor;
      monitor = v44.fields.current[7].monitor;
      if ( !monitor )
        goto LABEL_38;
      v26 = monitor[2];
      *(_OWORD *)&v43.fields.currentCryptoKey = monitor[1];
      *(_OWORD *)&v43.fields.fakeValue = v26;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v42 = v43;
      v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v42, 0LL);
      v28 = *(_OWORD *)&Entity->fields.id.fields.fakeValue;
      v29 = v27;
      *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v41.fields.fakeValue = v28;
      v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v41, 0LL);
      if ( v29 == v20 )
      {
        *p_monitor = Entity;
        sub_B0D840(
          (BattleServantConfConponent_o *)&current[7].monitor,
          (System_Int32_array **)Entity,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
      }
    }
    if ( v19 )
    {
      if ( !current )
        sub_B0D97C(v20);
      SvtEqCombineListViewItem__ModifyLockItem((SvtEqCombineListViewItem_o *)current, (const MethodInfo *)v21);
      SvtEqCombineListViewItem__ModifyChoiceItem((SvtEqCombineListViewItem_o *)current, v36);
    }
    else if ( !current )
    {
      sub_B0D97C(v20);
    }
    v37 = (UnityEngine_Object_o *)current[6].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v37, 0LL, 0LL) )
    {
      v38 = current[6].monitor;
      if ( !v38 )
        sub_B0D97C(0LL);
      (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v38 + 392LL))(
        v38,
        current,
        *(_QWORD *)(*(_QWORD *)v38 + 400LL));
      if ( isIconSizeChange )
      {
        v39 = (ListViewObject_o *)current[6].monitor;
        if ( !v39 )
          sub_B0D97C(0LL);
        ListViewObject__SetItemSeed(v39, (ListViewItem_o *)current, this->fields.seed, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v44,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall SvtEqCombineListViewManager__ModifyLockItem_34090276(
        SvtEqCombineListViewManager_o *this,
        SvtEqCombineListViewItem_o *servantItem,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  SvtEqCombineListViewManager_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v16; // q1
  SvtEqCombineListViewManager_o *v17; // x23
  int64_t v18; // x0
  __int128 v19; // q0
  SvtEqCombineListViewManager_o *v20; // x25
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x1
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+40h] [xbp-60h]

  v10 = this;
  if ( (byte_421A090 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, servantItem);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    this = (SvtEqCombineListViewManager_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_421A090 = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (SvtEqCombineListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_28;
    this = (SvtEqCombineListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_28;
    this = (SvtEqCombineListViewManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                              (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                              usrSvtId,
                                              (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( this )
    {
      if ( !servantItem )
        goto LABEL_28;
      userSvtEntity = servantItem->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_28;
      v16 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      v17 = this;
      *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v31.fields.fakeValue = v16;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v30 = v31;
      v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v30, 0LL);
      v19 = *(_OWORD *)&v17->fields.indicator;
      v20 = (SvtEqCombineListViewManager_o *)v18;
      *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&v17->fields.m_CachedPtr;
      *(_OWORD *)&v29.fields.fakeValue = v19;
      this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
                                                &v29,
                                                0LL);
      if ( v20 == this )
      {
        servantItem->fields.userSvtEntity = (struct UserServantEntity_o *)v17;
        sub_B0D840(
          (BattleServantConfConponent_o *)&servantItem->fields.userSvtEntity,
          (System_Int32_array **)v17,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26);
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
    SvtEqCombineListViewItem__ModifyChoiceItem(servantItem, v27);
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
    sub_B0D97C(this);
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickBonusFilterKind(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  if ( (byte_421A0A8 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_421A0A8 = 1;
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
      sub_B0D97C(0LL);
    ListViewSort__IncBonusKind2(
      sort,
      this->fields.bonusEventIdList,
      0LL,
      0LL,
      0LL,
      this->fields.bonusFinishEventIdList,
      0LL);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickChoiceTab(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  SvtEqCombineListViewManager_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  if ( (byte_421A0B4 & 1) == 0 )
  {
    sub_B0D8A4(&SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SvtEqCombineListViewManager_EndClickTabChoice__, v4);
    byte_421A0B4 = 1;
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
      v7 = (SvtEqCombineListViewManager_RequestCallbackFunc_o *)sub_B0D974(
                                                                  SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo,
                                                                  v5,
                                                                  v6);
      SvtEqCombineListViewManager_RequestCallbackFunc___ctor(
        v7,
        (Il2CppObject *)this,
        Method_SvtEqCombineListViewManager_EndClickTabChoice__,
        0LL);
      SvtEqCombineListViewManager__StatusRequest(this, v7, v8);
    }
    else
    {
      SvtEqCombineListViewManager__SetStatusKind(this, 2, v6);
      SvtEqCombineListViewManager__ReleaseAll(this, v9);
      SvtEqCombineListViewManager__ModifyList(this, 0, v10);
      SvtEqCombineListViewManager__SetMode_34092964(this, 2, v11);
    }
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickCollectLock(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  SvtEqCombineListViewManager_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  if ( (byte_421A0B3 & 1) == 0 )
  {
    sub_B0D8A4(&SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SvtEqCombineListViewManager_EndClickTabLock__, v4);
    byte_421A0B3 = 1;
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
      v7 = (SvtEqCombineListViewManager_RequestCallbackFunc_o *)sub_B0D974(
                                                                  SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo,
                                                                  v5,
                                                                  v6);
      SvtEqCombineListViewManager_RequestCallbackFunc___ctor(
        v7,
        (Il2CppObject *)this,
        Method_SvtEqCombineListViewManager_EndClickTabLock__,
        0LL);
      SvtEqCombineListViewManager__StatusRequest(this, v7, v8);
    }
    else
    {
      SvtEqCombineListViewManager__SetStatusKind(this, 1, v6);
      SvtEqCombineListViewManager__ReleaseAll(this, v9);
      SvtEqCombineListViewManager__ModifyList(this, 0, v10);
      SvtEqCombineListViewManager__SetMode_34092964(this, 2, v11);
    }
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickDecide(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  struct CombineRootComponent_o *v6; // x0
  CombineRootComponent_o *combineRootComponent; // x8
  const MethodInfo *v8; // x1
  ServantCheckEquipDialog_o *servantEquipCheckDialog; // x20
  System_Collections_Generic_List_SvtEqCombineListViewItem__o *SelectedMaterialList; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  ServantCheckEquipDialog_ClickDelegate_o *v13; // x22

  if ( (byte_421A097 & 1) == 0 )
  {
    sub_B0D8A4(&ServantCheckEquipDialog_ClickDelegate_TypeInfo, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SvtEqCombineListViewManager_CloseServantCheckEquipDialog__, v4);
    byte_421A097 = 1;
  }
  if ( this->fields.isDecideFlg )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v6 = (struct CombineRootComponent_o *)SvtEqCombineListViewManager__CheckMaterialEquipped(this, v5);
    combineRootComponent = this->fields.combineRootComponent;
    this->fields._isOpenCheckEquipDialog_k__BackingField = (unsigned __int8)v6 & 1;
    if ( !combineRootComponent )
      goto LABEL_19;
    CombineRootComponent__SetBackSelect(combineRootComponent, 1, 0LL);
    if ( this->fields._isOpenCheckEquipDialog_k__BackingField )
    {
      servantEquipCheckDialog = this->fields.servantEquipCheckDialog;
      SelectedMaterialList = SvtEqCombineListViewManager__GetSelectedMaterialList(this, v8);
      v13 = (ServantCheckEquipDialog_ClickDelegate_o *)sub_B0D974(
                                                         ServantCheckEquipDialog_ClickDelegate_TypeInfo,
                                                         v11,
                                                         v12);
      ServantCheckEquipDialog_ClickDelegate___ctor(
        v13,
        (Il2CppObject *)this,
        Method_SvtEqCombineListViewManager_CloseServantCheckEquipDialog__,
        0LL);
      if ( servantEquipCheckDialog )
      {
        ServantCheckEquipDialog__Open(servantEquipCheckDialog, SelectedMaterialList, 0, v13, 0LL);
        return;
      }
LABEL_19:
      sub_B0D97C(v6);
    }
    SvtEqCombineListViewManager__SetSelectedMaterialInfo(this, v8);
    v6 = this->fields.combineRootComponent;
    if ( !v6 )
      goto LABEL_19;
    if ( v6->fields.state == 4 )
      CombineRootComponent__SetSelectSvtEqMaterialList(v6, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x0
  struct ListViewSort_o *sort; // x8
  int32_t filter2Kind; // w20
  int32_t v7; // w9

  if ( (byte_421A0A9 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    sub_B0D8A4(&SvtEqCombineListViewManager_TypeInfo, v3);
    byte_421A0A9 = 1;
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
      sub_B0D97C(v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v8; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  ServantFilterSelectMenu_CallbackFunc_o *v11; // x22
  __int64 v12; // x0

  if ( (byte_421A0A5 & 1) == 0 )
  {
    sub_B0D8A4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    sub_B0D8A4(&Method_SvtEqCombineListViewManager_EndSelectFilterKind__, v5);
    byte_421A0A5 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v11 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B0D974(ServantFilterSelectMenu_CallbackFunc_TypeInfo, v9, v10);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_SvtEqCombineListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v8 )
      sub_B0D97C(v12);
    CommonUI__OpenServantFilterSelectMenu_17023928(v8, 5, sort, (ListViewManager_o *)this, v11, -1, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x9
  SvtEqCombineListViewItem_o *Item; // x20
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v10; // q1
  int64_t v11; // x0
  const MethodInfo *v12; // x4
  const MethodInfo *v13; // x2
  SvtEqCombineListViewManager_o *v14; // x0
  SvtEqCombineListViewItem_o *v15; // x1
  const MethodInfo *v16; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_421A0A2 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, obj);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    this = (SvtEqCombineListViewManager_o *)sub_B0D8A4(&SvtEqCombineListViewObject_TypeInfo, v6);
    byte_421A0A2 = 1;
  }
  if ( !obj )
    goto LABEL_15;
  v7 = *(&SvtEqCombineListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v7
    || (SvtEqCombineListViewObject_c *)obj->klass->_2.typeHierarchy[v7 - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    sub_B0DC70(obj);
    SvtEqCombineListViewManager__IsDragEnable(v14, v15, v16);
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
    sub_B0D97C(this);
  v10 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v18.fields.fakeValue = v10;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v17 = v18;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v17, 0LL);
  SvtEqCombineListViewManager__ModifyLockItem(v4, v11, 0, 0, v12);
  SvtEqCombineListViewManager__SetMode_34092964(v4, 3, v13);
}


void __fastcall SvtEqCombineListViewManager__OnClickNormalStatus(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  SvtEqCombineListViewManager_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_421A0B2 & 1) == 0 )
  {
    sub_B0D8A4(&SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SvtEqCombineListViewManager_EndClickTabStatus__, v4);
    byte_421A0B2 = 1;
  }
  if ( this->fields.modeKind )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v7 = (SvtEqCombineListViewManager_RequestCallbackFunc_o *)sub_B0D974(
                                                                SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo,
                                                                v5,
                                                                v6);
    SvtEqCombineListViewManager_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_SvtEqCombineListViewManager_EndClickTabStatus__,
      0LL);
    SvtEqCombineListViewManager__StatusRequest(this, v7, v8);
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickReleaseAll(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_421A09D & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_421A09D = 1;
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
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int32_t v12; // w8
  struct ListViewSort_o *sort; // x8
  UISprite_o *scaleChangeButtonSprite; // x20
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2

  if ( (byte_421A0AF & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_421A0AF = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v12 = 2;
    goto LABEL_12;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v12 = 3;
    goto LABEL_12;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v12 = 1;
LABEL_12:
    this->fields.scaleType = v12;
    this->fields.seed = smallSizeSeed;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)smallSizeSeed,
      v4,
      v5,
      v6,
      v7,
      v8,
      v9);
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
    sub_B0D97C(ScaleKindSpriteName);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)ScaleKindSpriteName, 0LL);
  SvtEqCombineListViewManager__ModifyList(this, 1, v15);
  SvtEqCombineListViewManager__SetMode_34092964(this, 2, v16);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall SvtEqCombineListViewManager__OnClickSelectBase(
        SvtEqCombineListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  SvtEqCombineListViewManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x9
  struct UserServantEntity_o *baseUsrSvtData; // x8
  SvtEqCombineListViewItem_o *v10; // x21
  __int128 v11; // q1
  const MethodInfo *v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  SoundManager_c *v19; // x0
  int32_t v20; // w0
  System_Int32_array **userSvtEntity; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  SvtEqCombineListViewManager_o *v28; // x0
  ListViewObject_o *v29; // x1
  const MethodInfo *v30; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_421A0A0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__, obj);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    sub_B0D8A4(&SoundManager_TypeInfo, v6);
    this = (SvtEqCombineListViewManager_o *)sub_B0D8A4(&SvtEqCombineListViewObject_TypeInfo, v7);
    byte_421A0A0 = 1;
  }
  if ( !obj )
    goto LABEL_39;
  v8 = *(&SvtEqCombineListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v8
    || (SvtEqCombineListViewObject_c *)obj->klass->_2.typeHierarchy[v8 - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    sub_B0DC70(obj);
    SvtEqCombineListViewManager__OnClickListView(v28, v29, v30);
    return;
  }
  this = (SvtEqCombineListViewManager_o *)SvtEqCombineListViewObject__GetItem(
                                            (SvtEqCombineListViewObject_o *)obj,
                                            (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo);
  baseUsrSvtData = v4->fields.baseUsrSvtData;
  v10 = (SvtEqCombineListViewItem_o *)this;
  if ( !baseUsrSvtData )
  {
    if ( !this )
      goto LABEL_39;
LABEL_18:
    if ( v10->fields.type )
    {
      v19 = SoundManager_TypeInfo;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
        goto LABEL_20;
      goto LABEL_32;
    }
    if ( v10->fields.isLvMax && v10->fields.isLimitCntMax )
    {
      v19 = SoundManager_TypeInfo;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
        goto LABEL_30;
    }
    else
    {
      v19 = SoundManager_TypeInfo;
      if ( !v10->fields.isSvtEqMaterial )
      {
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
        {
LABEL_20:
          if ( !v19->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v19);
        }
LABEL_32:
        v20 = 0;
        goto LABEL_33;
      }
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
      {
LABEL_30:
        v20 = 2;
LABEL_33:
        SoundManager__playSystemSe(v20, 0LL);
        userSvtEntity = (System_Int32_array **)v10->fields.userSvtEntity;
        v4->fields.baseUsrSvtData = (struct UserServantEntity_o *)userSvtEntity;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v4->fields.baseUsrSvtData,
          userSvtEntity,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27);
        goto LABEL_34;
      }
    }
    if ( !v19->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v19);
    goto LABEL_30;
  }
  v11 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
  *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v32.fields.fakeValue = v11;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v31 = v32;
  this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
                                            &v31,
                                            0LL);
  if ( !v10 )
LABEL_39:
    sub_B0D97C(this);
  if ( this != (SvtEqCombineListViewManager_o *)SvtEqCombineListViewItem__get_UserSvtId(v10, v12) )
    goto LABEL_18;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  v4->fields.baseUsrSvtData = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&v4->fields.baseUsrSvtData, 0LL, v13, v14, v15, v16, v17, v18);
  this = (SvtEqCombineListViewManager_o *)v4->fields.tempMtSvtList;
  if ( !this )
    goto LABEL_39;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x9
  ListViewItem_o *v10; // x20
  const MethodInfo *v11; // x1
  int32_t selectNum; // w21
  int32_t klass; // w9
  _BOOL8 v14; // x0
  int32_t selectSum; // w8
  void *v16; // x0
  int v17; // w1
  __int64 v18; // x20
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_421A0A1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, obj);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    this = (SvtEqCombineListViewManager_o *)sub_B0D8A4(&SvtEqCombineListViewObject_TypeInfo, v8);
    byte_421A0A1 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( !obj )
    goto LABEL_21;
  v9 = *(&SvtEqCombineListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v9
    || (SvtEqCombineListViewObject_c *)obj->klass->_2.typeHierarchy[v9 - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    sub_B0DC70(obj);
    if ( v17 != 1 )
      _Unwind_Resume(v16);
    v18 = *(_QWORD *)__cxa_begin_catch(v16);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v19,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( v18 )
      sub_B0D948(v18, 0LL);
    goto LABEL_18;
  }
  this = (SvtEqCombineListViewManager_o *)SvtEqCombineListViewObject__GetItem(
                                            (SvtEqCombineListViewObject_o *)obj,
                                            (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo);
  if ( !this )
    goto LABEL_21;
  v10 = (ListViewItem_o *)this;
  if ( ListViewItem__get_IsSelect((ListViewItem_o *)this, 0LL) )
  {
    selectNum = v10->fields.selectNum;
    ListViewItem__set_IsSelect(v10, 0, 0LL);
    this = (SvtEqCombineListViewManager_o *)v4->fields.itemList;
    --v4->fields.selectSum;
    if ( this )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v19,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( 1 )
      {
        v14 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v19,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v14 )
          break;
        if ( !v19.fields.current )
          sub_B0D97C(v14);
        klass = (int32_t)v19.fields.current[1].klass;
        if ( klass > selectNum )
          LODWORD(v19.fields.current[1].klass) = klass - 1;
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v19,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      goto LABEL_18;
    }
LABEL_21:
    sub_B0D97C(this);
  }
  selectSum = v4->fields.selectSum;
  if ( v4->fields.modeKind || selectSum < v4->fields.selectMax )
  {
    v10->fields.selectNum = selectSum;
    ++v4->fields.selectSum;
LABEL_18:
    SvtEqCombineListViewManager__RefrashListDisp(v4, v11);
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickSortAscendingOrder(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  struct ListViewSort_o *sort; // x8

  if ( (byte_421A0AC & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_421A0AC = 1;
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
      sub_B0D97C(v3);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickSortKind(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t itemType; // w23
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v9; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  ServantSortSelectMenu_CallbackFunc_o *v12; // x22
  __int64 v13; // x0

  if ( (byte_421A0AA & 1) == 0 )
  {
    sub_B0D8A4(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    sub_B0D8A4(&Method_SvtEqCombineListViewManager_EndSelectSortKind__, v5);
    byte_421A0AA = 1;
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v9 = (CommonUI_o *)Instance;
    v12 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B0D974(ServantSortSelectMenu_CallbackFunc_TypeInfo, v10, v11);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v12,
      (Il2CppObject *)this,
      Method_SvtEqCombineListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v9 )
      sub_B0D97C(v13);
    CommonUI__OpenServantSortSelectMenu(v9, 2, sort, itemType == 1, v12, 0LL);
  }
}


void __fastcall SvtEqCombineListViewManager__OnLongPushListView(
        SvtEqCombineListViewManager_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x9
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *selectedMtSvtList_k__BackingField; // x0
  int64_t UserSvtId; // x0
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  UnityEngine_Behaviour_o *scrollView; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct UserServantEntity_o *monitor; // x1
  void *v24; // x0
  int v25; // w1
  __int64 v26; // x21
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_421A0A3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__, item);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v8);
    sub_B0D8A4(&SoundManager_TypeInfo, v9);
    sub_B0D8A4(&SvtEqCombineListViewItem_TypeInfo, v10);
    byte_421A0A3 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  if ( (unsigned int)(this->fields.modeKind - 1) >= 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( item
      && ((v11 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1),
           *(&item->klass->_2.bitflags2 + 1) < (unsigned int)v11)
       || (SvtEqCombineListViewItem_c *)item->klass->_2.typeHierarchy[v11 - 1] != SvtEqCombineListViewItem_TypeInfo) )
    {
      sub_B0DC70(item);
      if ( v25 != 1 )
        _Unwind_Resume(v24);
      v26 = *(_QWORD *)__cxa_begin_catch(v24);
      __cxa_end_catch();
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v28,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
      if ( v26 )
        sub_B0D948(v26, 0LL);
    }
    else
    {
      selectedMtSvtList_k__BackingField = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields._selectedMtSvtList_k__BackingField;
      this->fields.isSelectMaterial = 0;
      if ( selectedMtSvtList_k__BackingField && selectedMtSvtList_k__BackingField->fields._size >= 1 )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v27,
          selectedMtSvtList_k__BackingField,
          (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__);
        v28 = v27;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v28,
                  (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__) )
        {
          if ( !v28.fields.current )
            sub_B0D97C(0LL);
          UserSvtId = SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)v28.fields.current, v15);
          if ( !item )
            sub_B0D97C(UserSvtId);
          if ( UserSvtId == SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)item, v14) )
            this->fields.isSelectMaterial = 1;
        }
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v28,
          (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
      }
    }
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !scrollView
      || (UnityEngine_Behaviour__set_enabled(scrollView, 0, 0LL), !item)
      || (monitor = (struct UserServantEntity_o *)item[1].monitor,
          this->fields.selectUsrSvtEntity = monitor,
          sub_B0D840(
            (BattleServantConfConponent_o *)&this->fields.selectUsrSvtEntity,
            (System_Int32_array **)monitor,
            v17,
            v18,
            v19,
            v20,
            v21,
            v22),
          (scrollView = (UnityEngine_Behaviour_o *)this->fields.combineRootComponent) == 0LL) )
    {
      sub_B0D97C(scrollView);
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
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  UIScrollView_o *v13; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_421A096 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421A096 = 1;
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
        v13 = this->fields.scrollView;
        if ( !v13
          || (((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v13->klass->vtable._8_UpdateScrollbars.method)(
                v13,
                1LL,
                v13->klass->vtable._9_SetDragAmount.methodPtr),
              (v13 = this->fields.scrollView) == 0LL) )
        {
          sub_B0D97C(v13);
        }
        UIScrollView__UpdatePosition(v13, 0LL);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v7, v8, v9, v10, v11, v12);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
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
  System_Collections_Generic_List_SvtEqCombineListViewObject__o *ObjectList; // x20
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t CombineQpSvtEq; // w0
  const MethodInfo *v26; // x2
  int32_t v27; // w21
  __int64 itemList; // x0
  SvtEqCombineListViewItem_o *current; // x22
  __int64 v30; // x9
  UserServantEntity_o *v31; // x0
  const MethodInfo *v32; // x1
  UserServantEntity_o *v33; // x0
  int32_t addTotalExp; // w23
  _BOOL8 v35; // x0
  UILabel_o *selectInfoLabel; // x21
  System_String_o *v37; // x22
  Il2CppObject *v38; // x23
  Il2CppObject *v39; // x0
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *combineEventList; // x0
  Il2CppObject *v42; // x22
  int klass_high; // w8
  _BOOL8 v44; // x0
  int v45; // w27
  int v46; // w8
  UILabel_o *spendQpLabel; // x21
  Il2CppObject *v48; // x0
  UIWidget_o *v49; // x21
  int v50; // s0
  UILabel_o *getBasicExpLabel; // x21
  Il2CppObject *v55; // x0
  UILabel_o *getAccExpLabel; // x21
  Il2CppObject *v57; // x0
  const MethodInfo *v58; // x2
  struct UserServantEntity_o *v59; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v60; // x21
  __int64 v61; // x22
  __int64 v62; // x23
  int32_t v63; // w8
  const MethodInfo *v64; // x4
  int32_t LevelMax; // w21
  struct UserServantEntity_o *v66; // x8
  int32_t increLv; // w22
  int32_t lv; // w23
  bool v69; // w22
  Il2CppObject *v70; // x21
  __int64 v71; // x9
  _BOOL8 v72; // x0
  int v73; // w27
  bool v74; // w1
  SvtEqCombineListViewManager_o *v75; // x0
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *tempMtSvtList; // x8
  int32_t size; // w8
  int v78; // w8
  __int64 v79; // x21
  int32_t selectMax; // [xsp+4h] [xbp-BCh] BYREF
  System_Collections_Generic_List_Enumerator_T__o v81; // [xsp+8h] [xbp-B8h] BYREF
  int v82[3]; // [xsp+20h] [xbp-A0h]
  int v83; // [xsp+2Ch] [xbp-94h]
  System_Collections_Generic_List_Enumerator_T__o v84; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v85; // [xsp+50h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16

  if ( (byte_421A088 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v9);
    sub_B0D8A4(&int_TypeInfo, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Count__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Item__, v16);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v17);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B0D8A4(&SvtEqCombineListViewItem_TypeInfo, v20);
    sub_B0D8A4(&StringLiteral_23605/*"{0:N0}"*/, v21);
    sub_B0D8A4(&StringLiteral_12507/*"SUM_INFO"*/, v22);
    byte_421A088 = 1;
  }
  memset(&v85, 0, sizeof(v85));
  memset(&v84, 0, sizeof(v84));
  v83 = 0;
  ObjectList = SvtEqCombineListViewManager__get_ObjectList(this, method);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  *(_QWORD *)&this->fields.selectQp = 0LL;
  this->fields.addTotalExp = 0;
  this->fields.isAllUpMax = 0;
  if ( baseUsrSvtData && this->fields.itemType == 1 )
  {
    CombineQpSvtEq = UserServantEntity__getCombineQpSvtEq(baseUsrSvtData, 0LL);
    v27 = SvtEqCombineListViewManager__CheckCompareQp(this, CombineQpSvtEq, v26);
  }
  else
  {
    v27 = 0;
  }
  itemList = (__int64)this->fields.itemList;
  if ( !itemList )
    goto LABEL_94;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v81,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v85 = v81;
  while ( 1 )
  {
    v35 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v85,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v35 )
      break;
    current = (SvtEqCombineListViewItem_o *)v85.fields.current;
    if ( !v85.fields.current )
      goto LABEL_93;
    v30 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v85.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v30
      || (SvtEqCombineListViewItem_c *)v85.fields.current->klass->_2.typeHierarchy[v30 - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      sub_B0DC70(v85.fields.current);
LABEL_93:
      sub_B0D97C(v35);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v85.fields.current, 0LL) )
    {
      v31 = this->fields.baseUsrSvtData;
      this->fields.selectQp += v27;
      if ( !v31 )
        goto LABEL_96;
      if ( !UserServantEntity__isLevelMax(v31, 0LL) )
        goto LABEL_18;
      v33 = this->fields.baseUsrSvtData;
      if ( !v33 )
        sub_B0D97C(0LL);
      if ( UserServantEntity__isLevelMax(v33, 0LL) && current->fields.isLimitCntTarget )
      {
LABEL_18:
        addTotalExp = this->fields.addTotalExp;
        this->fields.selectExp += current->fields.materialExp;
        this->fields.addTotalExp = SvtEqCombineListViewItem__get_GetAddTotalExp(current, v32) + addTotalExp;
      }
    }
    else
    {
      current->fields.isMaxSelect = this->fields.selectSum >= this->fields.selectMax;
    }
  }
  v82[0] = 255;
  v83 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v85,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  v83 = 0;
  selectInfoLabel = this->fields.selectInfoLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_12507/*"SUM_INFO"*/, 0LL);
  LODWORD(v81.fields.list) = this->fields.selectSum;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v81);
  selectMax = this->fields.selectMax;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &selectMax);
  itemList = (__int64)System_String__Format_43845440(v37, v38, v39, 0LL);
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
      &v81,
      combineEventList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v84 = v81;
    while ( 1 )
    {
      v44 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v84,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v44 )
        break;
      v42 = v84.fields.current;
      if ( !v84.fields.current )
        sub_B0D97C(v44);
      klass_high = HIDWORD(v84.fields.current[1].klass);
      if ( klass_high == 17 )
      {
        this->fields.selectExp = UnityEngine_Mathf__CeilToInt(
                                   *(float *)&v84.fields.current[3].monitor * (float)this->fields.selectExp,
                                   0LL);
        klass_high = HIDWORD(v42[1].klass);
      }
      if ( klass_high == 16 )
        this->fields.selectQp = UnityEngine_Mathf__CeilToInt(
                                  *(float *)&v42[3].monitor * (float)this->fields.selectQp,
                                  0LL);
    }
    v82[0] = 445;
    v45 = ++v83;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v84,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    if ( v45 )
    {
      v46 = v45 - 1;
      if ( v82[v45 - 1] == 445 )
      {
        --v45;
        v83 = v46;
      }
    }
  }
  else
  {
    v45 = 0;
  }
  spendQpLabel = this->fields.spendQpLabel;
  LODWORD(v81.fields.list) = this->fields.selectQp;
  v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v81);
  itemList = (__int64)System_String__Format((System_String_o *)StringLiteral_23605/*"{0:N0}"*/, v48, 0LL);
  if ( !spendQpLabel )
    goto LABEL_94;
  UILabel__set_text(spendQpLabel, (System_String_o *)itemList, 0LL);
  if ( this->fields.itemType == 1 )
  {
    v49 = (UIWidget_o *)this->fields.spendQpLabel;
    if ( this->fields.selectQp <= this->fields.userQP )
    {
      *(UnityEngine_Color_o *)&v50 = UnityEngine_Color__get_white(0LL);
      if ( !v49 )
        goto LABEL_94;
    }
    else
    {
      *(UnityEngine_Color_o *)&v50 = UnityEngine_Color__get_red(0LL);
      if ( !v49 )
        goto LABEL_94;
    }
    UIWidget__set_color(v49, *(UnityEngine_Color_o *)&v50, 0LL);
  }
  getBasicExpLabel = this->fields.getBasicExpLabel;
  LODWORD(v81.fields.list) = this->fields.selectExp;
  v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v81);
  itemList = (__int64)System_String__Format((System_String_o *)StringLiteral_23605/*"{0:N0}"*/, v55, 0LL);
  if ( !getBasicExpLabel
    || (UILabel__set_text(getBasicExpLabel, (System_String_o *)itemList, 0LL),
        getAccExpLabel = this->fields.getAccExpLabel,
        selectMax = this->fields.addTotalExp,
        v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &selectMax),
        itemList = (__int64)System_String__Format((System_String_o *)StringLiteral_23605/*"{0:N0}"*/, v57, 0LL),
        !getAccExpLabel) )
  {
LABEL_94:
    sub_B0D97C(itemList);
  }
  UILabel__set_text(getAccExpLabel, (System_String_o *)itemList, 0LL);
  if ( this->fields.baseUsrSvtData && this->fields.itemType == 1 )
  {
    itemList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !itemList )
      goto LABEL_94;
    itemList = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)itemList,
                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
    v59 = this->fields.baseUsrSvtData;
    if ( !v59 )
      goto LABEL_94;
    v60 = (DataMasterBase_WarMaster__WarEntity__int__o *)itemList;
    v62 = *(_QWORD *)&v59->fields.svtId.fields.currentCryptoKey;
    v61 = *(_QWORD *)&v59->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v86.fields.currentCryptoKey = v62;
    *(_QWORD *)&v86.fields.fakeValue = v61;
    itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v86, 0LL);
    if ( !v60 )
      goto LABEL_94;
    itemList = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                          v60,
                          itemList,
                          (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !itemList )
      goto LABEL_94;
    v63 = *(_DWORD *)(itemList + 132);
    itemList = (__int64)this->fields.baseUsrSvtData;
    this->fields.expType = v63;
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
                     v64);
      while ( (itemList & 1) == 0 );
      v66 = this->fields.baseUsrSvtData;
      if ( !v66 )
        goto LABEL_94;
      itemList = (__int64)this->fields.levelUpInfoImg;
      if ( !itemList )
        goto LABEL_94;
      increLv = this->fields.increLv;
      lv = v66->fields.lv;
      itemList = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemList, 0LL);
      if ( !itemList )
        goto LABEL_94;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, increLv - lv >= 1, 0LL);
    }
    itemList = (__int64)this->fields.itemList;
    if ( !itemList )
      goto LABEL_94;
    v69 = this->fields.increLv >= LevelMax;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v81,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v85 = v81;
    while ( 1 )
    {
      v72 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v85,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v72 )
        break;
      v70 = v85.fields.current;
      if ( !v85.fields.current )
        sub_B0D97C(v72);
      v71 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v85.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v71
        || (SvtEqCombineListViewItem_c *)v85.fields.current->klass->_2.typeHierarchy[v71 - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        sub_B0DC70(v85.fields.current);
LABEL_96:
        sub_B0D97C(v31);
      }
      if ( !ListViewItem__get_IsSelect((ListViewItem_o *)v85.fields.current, 0LL) )
        BYTE2(v70[15].klass) = v69;
    }
    v82[v45] = 903;
    v73 = ++v83;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v85,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( v73 && v82[v73 - 1] == 903 )
      v83 = v73 - 1;
  }
  if ( this->fields.selectSum >= 1 )
  {
    v74 = 1;
    v75 = this;
    goto LABEL_77;
  }
  tempMtSvtList = this->fields.tempMtSvtList;
  if ( !tempMtSvtList )
    goto LABEL_94;
  if ( tempMtSvtList->fields._size <= 0 )
  {
    v75 = this;
    v74 = 0;
LABEL_77:
    SvtEqCombineListViewManager__SetBtnEnable(v75, v74, v58);
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
    v78 = ObjectList->fields._size;
    if ( v78 >= 1 )
    {
      v79 = 0LL;
      while ( 1 )
      {
        if ( v78 <= (unsigned int)v79 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        itemList = (__int64)ObjectList->fields._items->m_Items[v79];
        if ( !itemList )
          break;
        (*(void (__fastcall **)(__int64, bool, _QWORD))(*(_QWORD *)itemList + 456LL))(
          itemList,
          this->fields.isInput,
          *(_QWORD *)(*(_QWORD *)itemList + 464LL));
        v78 = ObjectList->fields._size;
        if ( (int)++v79 >= v78 )
          return;
      }
      goto LABEL_94;
    }
  }
}


void __fastcall SvtEqCombineListViewManager__ReleaseAll(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *itemList; // x0
  Il2CppObject *current; // x20
  __int64 v9; // x9
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x1
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_421A09E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v5);
    sub_B0D8A4(&SvtEqCombineListViewItem_TypeInfo, v6);
    byte_421A09E = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( this->fields.selectSum >= 1 )
  {
    itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_17;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v12,
      itemList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v13 = v12;
    while ( 1 )
    {
      v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v13,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v10 )
        break;
      current = v13.fields.current;
      if ( !v13.fields.current )
        goto LABEL_16;
      ListViewItem__set_IsSelect((ListViewItem_o *)v13.fields.current, 0, 0LL);
      v9 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&current->klass->_2.bitflags2 + 1) < (unsigned int)v9
        || (SvtEqCombineListViewItem_c *)current->klass->_2.typeHierarchy[v9 - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        sub_B0DC70(current);
LABEL_16:
        sub_B0D97C(v10);
      }
      BYTE2(current[10].monitor) = 0;
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v13,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.levelUpInfoImg;
    this->fields.selectSum = 0;
    if ( !itemList
      || (itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemList, 0LL)) == 0LL )
    {
LABEL_17:
      sub_B0D97C(itemList);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, 0, 0LL);
    *(_QWORD *)&this->fields.totalExp = 0LL;
    this->fields.checkLv = 0;
    SvtEqCombineListViewManager__RefrashListDisp(this, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__RequestListObject(
        SvtEqCombineListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  int32_t size; // w8
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  __int64 v20; // x0
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_421A094 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__get_Current__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__GetEnumerator__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Count__, v11);
    sub_B0D8A4(&Method_SvtEqCombineListViewManager_OnMoveEnd__, v12);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v13);
    byte_421A094 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SvtEqCombineListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B0D97C(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      ObjectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__MoveNext__) )
    {
      current = v22.fields.current;
      v19 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_SvtEqCombineListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B0D97C(v20);
      zero = UnityEngine_Vector3__get_zero(0LL);
      SvtEqCombineListViewObject__Init(
        (SvtEqCombineListViewObject_o *)current,
        mode,
        v19,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v21);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__RequestListObject_34094076(
        SvtEqCombineListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  int32_t size; // w8
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *current; // x21
  System_Action_o *v17; // x22
  __int64 v18; // x0
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_421A095 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Count__, v9);
    sub_B0D8A4(&Method_SvtEqCombineListViewManager_OnMoveEnd__, v10);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v11);
    byte_421A095 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SvtEqCombineListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B0D97C(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      ObjectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__MoveNext__) )
    {
      current = v20.fields.current;
      v17 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_SvtEqCombineListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B0D97C(v18);
      zero = UnityEngine_Vector3__get_zero(0LL);
      SvtEqCombineListViewObject__Init(
        (SvtEqCombineListViewObject_o *)current,
        mode,
        v17,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v19);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__Dispose__);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *selectedMtSvtList_k__BackingField; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *tempMtSvtList; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_421A09F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v12);
    byte_421A09F = 1;
  }
  memset(&v16, 0, sizeof(v16));
  this->fields.baseUsrSvtData = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.baseUsrSvtData, 0LL, v2, v3, v4, v5, v6, v7);
  selectedMtSvtList_k__BackingField = this->fields._selectedMtSvtList_k__BackingField;
  if ( selectedMtSvtList_k__BackingField )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)selectedMtSvtList_k__BackingField,
      (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__);
  tempMtSvtList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.tempMtSvtList;
  if ( !tempMtSvtList )
    goto LABEL_16;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    tempMtSvtList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__);
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v16,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v16,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( !v16.fields.current )
        sub_B0D97C(0LL);
      ListViewItem__set_IsSelect((ListViewItem_o *)v16.fields.current, 0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v16,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  tempMtSvtList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.levelUpInfoImg;
  this->fields.selectSum = 0;
  if ( !tempMtSvtList
    || (tempMtSvtList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                                     (UnityEngine_Component_o *)tempMtSvtList,
                                                                                     0LL)) == 0LL )
  {
LABEL_16:
    sub_B0D97C(tempMtSvtList);
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

  if ( (byte_421A084 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIWidget___, isEnable);
    byte_421A084 = 1;
  }
  decideBtnBg = (UnityEngine_Component_o *)this->fields.decideBtnBg;
  this->fields.isDecideFlg = isEnable;
  if ( !decideBtnBg )
LABEL_13:
    sub_B0D97C(decideBtnBg);
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              decideBtnBg,
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
  __int64 v5; // x1
  UnityEngine_Component_o *allReleaseButton; // x0
  int v7; // s3
  float v8; // s4
  float v9; // s5
  float v10; // s6
  SvtEqCombineListViewManager_c *v11; // x0
  float COLOR_VAL; // s0
  float v13; // s1
  float v14; // s2
  UIWidget_o *v15; // x21
  int v16; // s0
  int v17; // s1
  int v18; // s2
  int v19; // s3
  UIWidget_o *v20; // x21
  int v21; // s0
  int v22; // s1
  int v23; // s2
  int v24; // s3
  UIWidget_o *v25; // x21
  int v26; // s0
  int v27; // s1
  int v28; // s2
  int v29; // s3
  UIWidget_o *v30; // x21
  int v31; // s0
  int v32; // s1
  int v33; // s2
  int v34; // s3
  UIWidget_o *v35; // x21
  int v36; // s0
  int v37; // s1
  int v38; // s2
  int v39; // s3
  UIWidget_o *v40; // x21
  int v41; // s0
  int v42; // s1
  int v43; // s2
  int v44; // s3
  UIWidget_o *v45; // x21
  int v46; // s0
  int v47; // s1
  int v48; // s2
  int v49; // s3
  UIWidget_o *v50; // x21
  int v51; // s0
  int v52; // s1
  int v53; // s2
  int v54; // s3
  UIWidget_o *v55; // x21
  int v56; // s0
  int v57; // s1
  int v58; // s2
  int v59; // s3
  UIWidget_o *v60; // x21
  int v61; // s0
  int v62; // s1
  int v63; // s2
  int v64; // s3
  UIWidget_o *v65; // x21
  int v66; // s0
  int v67; // s1
  int v68; // s2
  int v69; // s3
  UIWidget_o *v70; // x21
  int v71; // s0
  int v72; // s1
  int v73; // s2
  int v74; // s3
  UIWidget_o *v75; // x21
  int v76; // s0
  int v77; // s1
  int v78; // s2
  int v79; // s3
  UIWidget_o *v80; // x20
  int v81; // s0
  int v82; // s1
  int v83; // s2
  int v84; // s3
  __int64 v85; // [xsp+0h] [xbp-30h] BYREF
  __int64 v86; // [xsp+8h] [xbp-28h]

  if ( (byte_421A083 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIWidget___, isShow);
    sub_B0D8A4(&SvtEqCombineListViewManager_TypeInfo, v5);
    byte_421A083 = 1;
  }
  v85 = 0LL;
  v86 = 0LL;
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
  v11 = SvtEqCombineListViewManager_TypeInfo;
  if ( (BYTE3(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
    v11 = SvtEqCombineListViewManager_TypeInfo;
  }
  COLOR_VAL = v11->static_fields->COLOR_VAL;
  v13 = COLOR_VAL;
  v14 = COLOR_VAL;
  UnityEngine_Color___ctor_40757524(*(UnityEngine_Color_o *)(&v7 - 3), v8, v9, v10, (const MethodInfo *)&v85);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.spendQpBg;
  if ( !allReleaseButton )
LABEL_81:
    sub_B0D97C(allReleaseButton);
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v15 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v16 = UnityEngine_Color__get_white(0LL);
    if ( !v15 )
      goto LABEL_81;
  }
  else
  {
    v17 = HIDWORD(v85);
    v16 = v85;
    v19 = HIDWORD(v86);
    v18 = v86;
    if ( !allReleaseButton )
      goto LABEL_81;
  }
  UIWidget__set_color(v15, *(UnityEngine_Color_o *)&v16, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.spendQpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_81;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v20 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v21 = UnityEngine_Color__get_white(0LL);
    if ( !v20 )
      goto LABEL_81;
  }
  else
  {
    v22 = HIDWORD(v85);
    v21 = v85;
    v24 = HIDWORD(v86);
    v23 = v86;
    if ( !allReleaseButton )
      goto LABEL_81;
  }
  UIWidget__set_color(v20, *(UnityEngine_Color_o *)&v21, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.spendQpLabel;
  if ( !allReleaseButton )
    goto LABEL_81;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v25 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v26 = UnityEngine_Color__get_white(0LL);
    if ( !v25 )
      goto LABEL_81;
  }
  else
  {
    v27 = HIDWORD(v85);
    v26 = v85;
    v29 = HIDWORD(v86);
    v28 = v86;
    if ( !allReleaseButton )
      goto LABEL_81;
  }
  UIWidget__set_color(v25, *(UnityEngine_Color_o *)&v26, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.getExpBg;
  if ( !allReleaseButton )
    goto LABEL_81;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v30 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v31 = UnityEngine_Color__get_white(0LL);
    if ( !v30 )
      goto LABEL_81;
  }
  else
  {
    v32 = HIDWORD(v85);
    v31 = v85;
    v34 = HIDWORD(v86);
    v33 = v86;
    if ( !allReleaseButton )
      goto LABEL_81;
  }
  UIWidget__set_color(v30, *(UnityEngine_Color_o *)&v31, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.getExpBgImg;
  if ( !allReleaseButton )
    goto LABEL_81;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v35 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v36 = UnityEngine_Color__get_white(0LL);
    if ( !v35 )
      goto LABEL_81;
  }
  else
  {
    v37 = HIDWORD(v85);
    v36 = v85;
    v39 = HIDWORD(v86);
    v38 = v86;
    if ( !allReleaseButton )
      goto LABEL_81;
  }
  UIWidget__set_color(v35, *(UnityEngine_Color_o *)&v36, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.getExpLabel;
  if ( !allReleaseButton )
    goto LABEL_81;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v40 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v41 = UnityEngine_Color__get_white(0LL);
    if ( !v40 )
      goto LABEL_81;
  }
  else
  {
    v42 = HIDWORD(v85);
    v41 = v85;
    v44 = HIDWORD(v86);
    v43 = v86;
    if ( !allReleaseButton )
      goto LABEL_81;
  }
  UIWidget__set_color(v40, *(UnityEngine_Color_o *)&v41, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.getBasicExpLabel;
  if ( !allReleaseButton )
    goto LABEL_81;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v45 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v46 = UnityEngine_Color__get_white(0LL);
    if ( !v45 )
      goto LABEL_81;
  }
  else
  {
    v47 = HIDWORD(v85);
    v46 = v85;
    v49 = HIDWORD(v86);
    v48 = v86;
    if ( !allReleaseButton )
      goto LABEL_81;
  }
  UIWidget__set_color(v45, *(UnityEngine_Color_o *)&v46, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.getAccExpLabel;
  if ( !allReleaseButton )
    goto LABEL_81;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v50 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v51 = UnityEngine_Color__get_white(0LL);
    if ( !v50 )
      goto LABEL_81;
  }
  else
  {
    v52 = HIDWORD(v85);
    v51 = v85;
    v54 = HIDWORD(v86);
    v53 = v86;
    if ( !allReleaseButton )
      goto LABEL_81;
  }
  UIWidget__set_color(v50, *(UnityEngine_Color_o *)&v51, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.haveQpBg;
  if ( !allReleaseButton )
    goto LABEL_81;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v55 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v56 = UnityEngine_Color__get_white(0LL);
    if ( !v55 )
      goto LABEL_81;
  }
  else
  {
    v57 = HIDWORD(v85);
    v56 = v85;
    v59 = HIDWORD(v86);
    v58 = v86;
    if ( !allReleaseButton )
      goto LABEL_81;
  }
  UIWidget__set_color(v55, *(UnityEngine_Color_o *)&v56, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.haveQpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_81;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v60 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v61 = UnityEngine_Color__get_white(0LL);
    if ( !v60 )
      goto LABEL_81;
  }
  else
  {
    v62 = HIDWORD(v85);
    v61 = v85;
    v64 = HIDWORD(v86);
    v63 = v86;
    if ( !allReleaseButton )
      goto LABEL_81;
  }
  UIWidget__set_color(v60, *(UnityEngine_Color_o *)&v61, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.haveQpLabel;
  if ( !allReleaseButton )
    goto LABEL_81;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v65 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v66 = UnityEngine_Color__get_white(0LL);
    if ( !v65 )
      goto LABEL_81;
  }
  else
  {
    v67 = HIDWORD(v85);
    v66 = v85;
    v69 = HIDWORD(v86);
    v68 = v86;
    if ( !allReleaseButton )
      goto LABEL_81;
  }
  UIWidget__set_color(v65, *(UnityEngine_Color_o *)&v66, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.nextExpBg;
  if ( !allReleaseButton )
    goto LABEL_81;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v70 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v71 = UnityEngine_Color__get_white(0LL);
    if ( !v70 )
      goto LABEL_81;
  }
  else
  {
    v72 = HIDWORD(v85);
    v71 = v85;
    v74 = HIDWORD(v86);
    v73 = v86;
    if ( !allReleaseButton )
      goto LABEL_81;
  }
  UIWidget__set_color(v70, *(UnityEngine_Color_o *)&v71, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.nextExpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_81;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v75 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v76 = UnityEngine_Color__get_white(0LL);
    if ( !v75 )
      goto LABEL_81;
  }
  else
  {
    v77 = HIDWORD(v85);
    v76 = v85;
    v79 = HIDWORD(v86);
    v78 = v86;
    if ( !allReleaseButton )
      goto LABEL_81;
  }
  UIWidget__set_color(v75, *(UnityEngine_Color_o *)&v76, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.nextExpLabel;
  if ( !allReleaseButton )
    goto LABEL_81;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v80 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v81 = UnityEngine_Color__get_white(0LL);
    if ( !v80 )
      goto LABEL_81;
  }
  else
  {
    v82 = HIDWORD(v85);
    v81 = v85;
    v84 = HIDWORD(v86);
    v83 = v86;
    if ( !allReleaseButton )
      goto LABEL_81;
  }
  UIWidget__set_color(v80, *(UnityEngine_Color_o *)&v81, 0LL);
}


void __fastcall SvtEqCombineListViewManager__SetDragEnd(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x2
  int32_t dragStartIndex; // w20
  int32_t dragEndIndex; // w21

  if ( (byte_421A0B9 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_421A0B9 = 1;
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x22
  ListViewItem_o *v11; // x19
  SvtEqCombineListViewItem_c *v12; // x1
  __int64 v13; // x9
  int32_t sortIndex; // w8
  bool v15; // w21
  _BOOL4 v16; // w21
  bool IsSelect; // w0
  const MethodInfo *v18; // x4
  int v19; // w8
  UnityEngine_Object_o *viewObject; // x20
  __int64 v21; // x9
  bool result; // w0
  SvtEqCombineListViewObject_o *v23; // x0
  const MethodInfo *v24; // x1

  v6 = this;
  if ( (byte_421A0B7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&SvtEqCombineListViewItem_TypeInfo, v8);
    this = (SvtEqCombineListViewManager_o *)sub_B0D8A4(&SvtEqCombineListViewObject_TypeInfo, v9);
    byte_421A0B7 = 1;
  }
  itemSortList = v6->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_34;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v11 = itemSortList->fields._items->m_Items[index];
  if ( !v11 )
    goto LABEL_34;
  v12 = SvtEqCombineListViewItem_TypeInfo;
  v13 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v11->klass->_2.bitflags2 + 1) < (unsigned int)v13
    || (SvtEqCombineListViewItem_c *)v11->klass->_2.typeHierarchy[v13 - 1] != SvtEqCombineListViewItem_TypeInfo )
  {
    this = (SvtEqCombineListViewManager_o *)v11;
    goto LABEL_36;
  }
  sortIndex = v11[2].fields.sortIndex;
  if ( !isDragSelect )
  {
    if ( (sortIndex & 0x80000000) != 0 )
      goto LABEL_24;
    if ( !ListViewItem__get_IsSelect(v11, 0LL) && v11[2].fields.sortIndex >= 1 )
      --v6->fields.dragSelectSum;
    v15 = 0;
    v19 = -1;
    goto LABEL_21;
  }
  if ( (sortIndex & 0x80000000) == 0 )
  {
LABEL_24:
    v15 = 0;
    goto LABEL_25;
  }
  v11[2].fields.sortIndex = 0;
  v15 = 0;
  if ( SvtEqCombineListViewItem__get_IsCanNotSelect((SvtEqCombineListViewItem_o *)v11, (const MethodInfo *)v12) )
    goto LABEL_25;
  v16 = v6->fields.isDragSelect;
  IsSelect = ListViewItem__get_IsSelect(v11, 0LL);
  if ( !v16 )
  {
    if ( !IsSelect )
      goto LABEL_24;
    v15 = 0;
    v19 = 1;
LABEL_21:
    v11[2].fields.sortIndex = v19;
    goto LABEL_25;
  }
  if ( IsSelect )
    goto LABEL_24;
  v15 = 1;
  if ( SvtEqCombineListViewManager__IsSelectEnable(
         v6,
         (SvtEqCombineListViewItem_o *)v11,
         v6->fields.dragSelectSum,
         1,
         v18) )
  {
    ++v6->fields.dragSelectSum;
    v11[2].fields.sortIndex = 1;
    goto LABEL_24;
  }
LABEL_25:
  viewObject = (UnityEngine_Object_o *)v11->fields.viewObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
    return v15;
  this = (SvtEqCombineListViewManager_o *)v11->fields.viewObject;
  if ( !this )
LABEL_34:
    sub_B0D97C(this);
  v21 = *(&SvtEqCombineListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v21
    && (SvtEqCombineListViewObject_c *)this->klass->_2.typeHierarchy[v21 - 1] == SvtEqCombineListViewObject_TypeInfo )
  {
    SvtEqCombineListViewObject__SetupDisp(
      (SvtEqCombineListViewObject_o *)this,
      (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo);
    return v15;
  }
LABEL_36:
  sub_B0DC70(this);
  SvtEqCombineListViewObject__SetupDisp(v23, v24);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t dragStartIndex; // w8
  int32_t dragEndIndex; // w9
  int v12; // w25
  int v13; // w26
  int32_t v14; // w23
  int32_t v15; // w24
  int32_t v16; // w22
  int v17; // w27
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x20
  SvtEqCombineListViewManager_o *v19; // x20
  __int64 v20; // x9
  UnityEngine_Object_o *clipRange; // x21
  __int64 v22; // x9
  SvtEqCombineListViewManager_o *v23; // x0
  int32_t v24; // w1
  bool v25; // w2
  const MethodInfo *v26; // x3

  v5 = startIndex;
  v6 = this;
  if ( (byte_421A0B6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&startIndex);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&SvtEqCombineListViewItem_TypeInfo, v8);
    this = (SvtEqCombineListViewManager_o *)sub_B0D8A4(&SvtEqCombineListViewObject_TypeInfo, v9);
    byte_421A0B6 = 1;
  }
  dragStartIndex = v6->fields.dragStartIndex;
  if ( (dragStartIndex & 0x80000000) != 0 )
  {
    v12 = -1;
    v13 = -1;
  }
  else
  {
    dragEndIndex = v6->fields.dragEndIndex;
    if ( dragStartIndex <= dragEndIndex )
      v12 = v6->fields.dragEndIndex;
    else
      v12 = v6->fields.dragStartIndex;
    if ( dragStartIndex <= dragEndIndex )
      v13 = v6->fields.dragStartIndex;
    else
      v13 = v6->fields.dragEndIndex;
  }
  v6->fields.dragStartIndex = v5;
  v6->fields.dragEndIndex = endIndex;
  if ( (v5 & 0x80000000) != 0 )
  {
    v14 = -1;
    v15 = -1;
    if ( (v13 & 0x80000000) != 0 )
      goto LABEL_28;
  }
  else
  {
    if ( v5 <= endIndex )
      v14 = endIndex;
    else
      v14 = v5;
    if ( v5 <= endIndex )
      v15 = v5;
    else
      v15 = endIndex;
    if ( (v13 & 0x80000000) != 0 )
      goto LABEL_28;
  }
  if ( v13 <= v12 )
  {
    v16 = v13;
    do
    {
      if ( v16 > v14 || (v15 & 0x80000000) != 0 || v16 < v15 )
        this = (SvtEqCombineListViewManager_o *)SvtEqCombineListViewManager__SetDragSelect(v6, v16, 0, method);
      ++v16;
    }
    while ( v16 <= v12 );
  }
LABEL_28:
  if ( (v5 & 0x80000000) == 0 )
  {
    if ( v5 <= endIndex )
    {
      do
      {
        if ( v5 > v12 || (v13 & 0x80000000) != 0 || v5 < v13 )
          this = (SvtEqCombineListViewManager_o *)SvtEqCombineListViewManager__SetDragSelect(v6, v5, 1, method);
        ++v5;
      }
      while ( v5 <= endIndex );
    }
    else
    {
      do
      {
        if ( v5 > v12 || (v13 & 0x80000000) != 0 || v5 < v13 )
          this = (SvtEqCombineListViewManager_o *)SvtEqCombineListViewManager__SetDragSelect(v6, v5, 1, method);
        --v5;
      }
      while ( v5 >= endIndex );
    }
    if ( v6->fields.isDragSelect && (v15 & 0x80000000) == 0 && v15 <= v14 )
    {
      v17 = v6->fields.selectSum + 1;
      while ( 1 )
      {
        itemSortList = v6->fields.itemSortList;
        if ( !itemSortList )
          goto LABEL_62;
        if ( itemSortList->fields._size <= (unsigned int)v15 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v19 = (SvtEqCombineListViewManager_o *)itemSortList->fields._items->m_Items[v15];
        if ( !v19 )
LABEL_62:
          sub_B0D97C(this);
        v20 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v20
          || (SvtEqCombineListViewItem_c *)v19->klass->_2.typeHierarchy[v20 - 1] != SvtEqCombineListViewItem_TypeInfo )
        {
          break;
        }
        if ( SLODWORD(v19->fields.rightItem) >= 1 )
        {
          LODWORD(v19->fields.rightItem) = v17;
          clipRange = (UnityEngine_Object_o *)v19->fields.clipRange;
          ++v17;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          this = (SvtEqCombineListViewManager_o *)UnityEngine_Object__op_Inequality(clipRange, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (SvtEqCombineListViewManager_o *)v19->fields.clipRange;
            if ( !this )
              goto LABEL_62;
            v22 = *(&SvtEqCombineListViewObject_TypeInfo->_2.bitflags2 + 1);
            if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v22
              || (SvtEqCombineListViewObject_c *)this->klass->_2.typeHierarchy[v22 - 1] != SvtEqCombineListViewObject_TypeInfo )
            {
              goto LABEL_64;
            }
            SvtEqCombineListViewObject__SetupDisp(
              (SvtEqCombineListViewObject_o *)this,
              (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo);
          }
        }
        if ( ++v15 > v14 )
          return;
      }
      this = v19;
LABEL_64:
      sub_B0DC70(this);
      SvtEqCombineListViewManager__SetDragSelect(v23, v24, v25, v26);
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
  SvtEqCombineListViewManager_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x25
  int size; // w21
  int v12; // w22
  __int64 v13; // x9
  UnityEngine_Object_o *scrollView; // x20

  v6 = this;
  if ( (byte_421A0B8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&startIndex);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    this = (SvtEqCombineListViewManager_o *)sub_B0D8A4(&SvtEqCombineListViewItem_TypeInfo, v9);
    byte_421A0B8 = 1;
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
    v12 = 0;
    while ( 1 )
    {
      if ( itemSortList->fields._size <= (unsigned int)v12 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      this = (SvtEqCombineListViewManager_o *)itemSortList->fields._items->m_Items[v12];
      if ( !this )
        goto LABEL_22;
      v13 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v13
        || (SvtEqCombineListViewItem_c *)this->klass->_2.typeHierarchy[v13 - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        break;
      }
      ++v12;
      LODWORD(this->fields.rightItem) = -1;
      if ( v12 >= size )
        goto LABEL_14;
      itemSortList = v6->fields.itemSortList;
      if ( !itemSortList )
        goto LABEL_22;
    }
    sub_B0DC70(this);
LABEL_22:
    sub_B0D97C(this);
  }
LABEL_14:
  SvtEqCombineListViewManager__SetDragSelectItem(v6, startIndex, startIndex, method);
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
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v6; // x8

  if ( (byte_421A0A7 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17044/*"btn_filter_on"*/, method);
    sub_B0D8A4(&StringLiteral_17043/*"btn_filter"*/, v3);
    byte_421A0A7 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B0D97C(sort);
  }
  v6 = (System_String_o **)&StringLiteral_17043/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17044/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v6, 0LL);
}


void __fastcall SvtEqCombineListViewManager__SetMaterialSvtInfo(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  SvtEqCombineListViewManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *selectedMtSvtList_k__BackingField; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v12; // x21
  Il2CppObject *current; // x20
  __int64 v14; // x26
  int size; // w8
  SvtEqCombineListViewItem_o *v16; // x21
  __int64 v17; // x9
  int64_t UserSvtId; // x0
  const MethodInfo *v19; // x1
  int64_t v20; // x22
  int64_t v21; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-60h] BYREF

  v2 = this;
  if ( (byte_421A086 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    this = (SvtEqCombineListViewManager_o *)sub_B0D8A4(&SvtEqCombineListViewItem_TypeInfo, v9);
    byte_421A086 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  itemList = v2->fields.itemList;
  if ( !itemList )
    sub_B0D97C(this);
  if ( itemList->fields._size >= 1 )
  {
    selectedMtSvtList_k__BackingField = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v2->fields._selectedMtSvtList_k__BackingField;
    if ( selectedMtSvtList_k__BackingField )
    {
      if ( selectedMtSvtList_k__BackingField->fields._size >= 1 )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v22,
          selectedMtSvtList_k__BackingField,
          (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__);
        v23 = v22;
LABEL_21:
        while ( 1 )
        {
          v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v23,
                  (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__);
          if ( (v21 & 1) == 0 )
            break;
          v12 = v2->fields.itemList;
          if ( !v12 )
            goto LABEL_25;
          current = v23.fields.current;
          v14 = 0LL;
          while ( 1 )
          {
            size = v12->fields._size;
            if ( (int)v14 >= size )
              goto LABEL_21;
            if ( size <= (unsigned int)v14 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
            v16 = (SvtEqCombineListViewItem_o *)v12->fields._items->m_Items[v14];
            if ( !v16 )
              sub_B0D97C(v21);
            v17 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v17
              || (SvtEqCombineListViewItem_c *)v16->klass->_2.typeHierarchy[v17 - 1] != SvtEqCombineListViewItem_TypeInfo )
            {
              sub_B0DC70(v16);
LABEL_25:
              sub_B0D97C(v21);
            }
            UserSvtId = SvtEqCombineListViewItem__get_UserSvtId(
                          v16,
                          (const MethodInfo *)SvtEqCombineListViewItem_TypeInfo);
            if ( !current )
              sub_B0D97C(UserSvtId);
            v20 = UserSvtId;
            v21 = SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)current, v19);
            if ( v20 == v21 )
              break;
            v12 = v2->fields.itemList;
            ++v14;
            if ( !v12 )
              goto LABEL_25;
          }
          v16->fields.isCanNotLock = 1;
        }
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v23,
          (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  SvtEqCombineListViewManager__SetMode_34092964(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__SetMode_34092964(
        SvtEqCombineListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Behaviour_o *ObjectSum; // x0
  UnityEngine_Object_o *scrollView; // x21
  const MethodInfo *v12; // x2
  int32_t v13; // w1
  int v14; // w23
  char v15; // w24
  _BOOL8 v16; // x0
  ListViewItem_o *current; // x21
  __int64 v18; // x9
  const MethodInfo *v19; // x1
  int32_t selectNum; // w28
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  int32_t klass; // w9
  _BOOL8 v23; // x0
  int v24; // w28
  int v25; // w22
  const MethodInfo *v26; // x1
  _BYTE v27[32]; // [xsp+8h] [xbp-B8h] BYREF
  int v28; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_421A093 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&SvtEqCombineListViewItem_TypeInfo, v9);
    byte_421A093 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  memset(&v29, 0, sizeof(v29));
  v28 = 0;
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
        (System_Collections_Generic_List_Enumerator_T__o *)v27,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectSum,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v14 = 0;
      v15 = 0;
      v30 = *(System_Collections_Generic_List_Enumerator_T__o *)v27;
      while ( 1 )
      {
        v16 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v30,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v16 )
          break;
        current = (ListViewItem_o *)v30.fields.current;
        if ( !v30.fields.current )
          goto LABEL_45;
        v18 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v30.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v18
          || (SvtEqCombineListViewItem_c *)v30.fields.current->klass->_2.typeHierarchy[v18 - 1] != SvtEqCombineListViewItem_TypeInfo )
        {
          sub_B0DC70(v30.fields.current);
LABEL_45:
          sub_B0D97C(v16);
        }
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v30.fields.current, 0LL)
          && SvtEqCombineListViewItem__get_IsCanNotSelect((SvtEqCombineListViewItem_o *)current, v19) )
        {
          selectNum = current->fields.selectNum;
          ListViewItem__set_IsSelect(current, 0, 0LL);
          itemList = this->fields.itemList;
          --this->fields.selectSum;
          if ( !itemList )
            sub_B0D97C(0LL);
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v27,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
            (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v29 = *(System_Collections_Generic_List_Enumerator_T__o *)v27;
          while ( 1 )
          {
            v23 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v29,
                    (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v23 )
              break;
            if ( !v29.fields.current )
              sub_B0D97C(v23);
            klass = (int32_t)v29.fields.current[1].klass;
            if ( klass > selectNum )
              LODWORD(v29.fields.current[1].klass) = klass - 1;
          }
          *(_DWORD *)&v27[4 * v14 + 24] = 252;
          v24 = ++v28;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v29,
            (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          v14 = 0;
          v15 = 1;
          if ( v24 )
          {
            v15 = 1;
            v14 = v24;
            if ( *(_DWORD *)&v27[4 * v24 + 20] == 252 )
            {
              v15 = 1;
              v14 = v24 - 1;
              v28 = v24 - 1;
            }
          }
        }
      }
      *(_DWORD *)&v27[4 * v14 + 24] = 280;
      v25 = ++v28;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v30,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( v25 && *(_DWORD *)&v27[4 * v25 + 20] == 280 )
        v28 = v25 - 1;
      if ( (v15 & 1) != 0 )
        SvtEqCombineListViewManager__RefrashListDisp(this, v26);
      if ( mode == 2 )
        v13 = 4;
      else
        v13 = 2;
      goto LABEL_42;
    }
LABEL_46:
    sub_B0D97C(ObjectSum);
  }
  if ( mode != 3 )
    return;
  v13 = 5;
LABEL_42:
  SvtEqCombineListViewManager__RequestListObject_34094076(this, v13, v12);
}


void __fastcall SvtEqCombineListViewManager__SetMode_34094020(
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  SvtEqCombineListViewManager__SetMode_34092964(this, mode, v10);
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
  if ( (byte_421A092 & 1) == 0 )
  {
    this = (SvtEqCombineListViewManager_o *)sub_B0D8A4(&SvtEqCombineListViewObject_TypeInfo, obj);
    byte_421A092 = 1;
  }
  if ( !obj )
LABEL_11:
    sub_B0D97C(this);
  v6 = *(&SvtEqCombineListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (SvtEqCombineListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    sub_B0DC70(obj);
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
    sub_B0D97C(0LL);
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
  sub_B0D840(
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  SetCombineData_o *v15; // x22
  struct SetCombineData_o **p_combineData; // x19
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  char *combineData; // x0
  System_Int32_array **baseUsrSvtData; // x1
  __int64 v31; // x1
  __int64 v32; // x2
  struct SetCombineData_o *v33; // x8
  struct SetCombineData_o *v34; // x8
  struct SetCombineData_o *v35; // x8
  struct SetCombineData_o *v36; // x8
  struct SetCombineData_o *v37; // x8
  struct SetCombineData_o *v38; // x8
  System_Collections_Generic_Dictionary_long__bool__o *v39; // x20
  _BOOL8 v40; // x0
  const MethodInfo *v41; // x1
  SvtEqCombineListViewItem_o *current; // x21
  const MethodInfo *v43; // x1
  int64_t UserSvtId; // x0
  int isUseSupportEquip; // w8
  struct SetCombineData_o *v46; // x21
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Collections_Generic_List_Enumerator_T__o v60; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_421A09B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_long__bool__Add__, selectedItems);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_long__bool___ctor__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_long__bool__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_long__bool__get_Keys__, v7);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_long__bool__TypeInfo, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_long___, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__get_Current__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__, v13);
    sub_B0D8A4(&SetCombineData_TypeInfo, v14);
    byte_421A09B = 1;
  }
  memset(&v61, 0, sizeof(v61));
  v15 = (SetCombineData_o *)sub_B0D974(SetCombineData_TypeInfo, selectedItems, method);
  SetCombineData___ctor(v15, 0LL);
  p_combineData = &this->fields.combineData;
  this->fields.combineData = v15;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.combineData,
    (System_Int32_array **)v15,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  combineData = (char *)this->fields.combineData;
  if ( !combineData )
    goto LABEL_29;
  baseUsrSvtData = (System_Int32_array **)this->fields.baseUsrSvtData;
  *((_QWORD *)combineData + 2) = baseUsrSvtData;
  sub_B0D840((BattleServantConfConponent_o *)(combineData + 16), baseUsrSvtData, v23, v24, v25, v26, v27, v28);
  if ( !*p_combineData )
    goto LABEL_29;
  (*p_combineData)->fields.selectSum = this->fields.selectSum;
  v33 = this->fields.combineData;
  if ( !v33 )
    goto LABEL_29;
  v33->fields.spendQp = this->fields.selectQp;
  v34 = this->fields.combineData;
  if ( !v34 )
    goto LABEL_29;
  v34->fields.getExp = this->fields.selectExp;
  v35 = this->fields.combineData;
  if ( !v35 )
    goto LABEL_29;
  v35->fields.getAddExp = this->fields.addTotalExp;
  v36 = this->fields.combineData;
  if ( !v36 )
    goto LABEL_29;
  v36->fields.getHpAdjustVal = this->fields.getHpUpVal;
  v37 = this->fields.combineData;
  if ( !v37 )
    goto LABEL_29;
  v37->fields.getAtkAdjustVal = this->fields.getAtkUpVal;
  v38 = this->fields.combineData;
  if ( !v38 )
    goto LABEL_29;
  v38->fields.isAdjustMax = this->fields.isAllUpMax;
  v39 = (System_Collections_Generic_Dictionary_long__bool__o *)sub_B0D974(
                                                                 System_Collections_Generic_Dictionary_long__bool__TypeInfo,
                                                                 v31,
                                                                 v32);
  System_Collections_Generic_Dictionary_long__bool____ctor(
    v39,
    (const MethodInfo_2EAD9F0 *)Method_System_Collections_Generic_Dictionary_long__bool___ctor__);
  if ( !selectedItems )
    goto LABEL_29;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v60,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)selectedItems,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__);
  v61 = v60;
  while ( 1 )
  {
    v40 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v61,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__);
    if ( !v40 )
      break;
    current = (SvtEqCombineListViewItem_o *)v61.fields.current;
    if ( !v61.fields.current )
      sub_B0D97C(v40);
    if ( SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)v61.fields.current, v41) >= 1 )
    {
      UserSvtId = SvtEqCombineListViewItem__get_UserSvtId(current, v43);
      if ( current->fields.isEquiped )
      {
        isUseSupportEquip = 1;
        if ( !v39 )
          goto LABEL_28;
      }
      else
      {
        isUseSupportEquip = current->fields.isUseSupportEquip;
        if ( !v39 )
LABEL_28:
          sub_B0D97C(UserSvtId);
      }
      System_Collections_Generic_Dictionary_long__bool___Add(
        v39,
        UserSvtId,
        isUseSupportEquip != 0,
        (const MethodInfo_2EAE5A8 *)Method_System_Collections_Generic_Dictionary_long__bool__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v61,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
  if ( !v39 )
    goto LABEL_29;
  if ( System_Collections_Generic_Dictionary_long__bool___get_Count(
         v39,
         (const MethodInfo_2EAE1A0 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__) < 1 )
    return;
  v46 = *p_combineData;
  Keys = System_Collections_Generic_Dictionary_long__bool___get_Keys(
           v39,
           (const MethodInfo_2EAE1B0 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Keys__);
  combineData = (char *)System_Linq_Enumerable__ToArray_long_(
                          (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                          (const MethodInfo_1B56208 *)Method_System_Linq_Enumerable_ToArray_long___);
  if ( !v46
    || (v46->fields.materialUsrSvtIdList = (struct System_Int64_array *)combineData,
        sub_B0D840(
          (BattleServantConfConponent_o *)&v46->fields.materialUsrSvtIdList,
          (System_Int32_array **)combineData,
          v48,
          v49,
          v50,
          v51,
          v52,
          v53),
        (combineData = (char *)*p_combineData) == 0LL) )
  {
LABEL_29:
    sub_B0D97C(combineData);
  }
  *((_QWORD *)combineData + 8) = v39;
  sub_B0D840(
    (BattleServantConfConponent_o *)(combineData + 64),
    (System_Int32_array **)v39,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
}


void __fastcall SvtEqCombineListViewManager__SetSelectedMaterialInfo(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x20
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o **p_selectedMtSvtList_k__BackingField; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  int64_t tempMtSvtList; // x0
  const MethodInfo *v23; // x1
  System_Collections_Generic_List_SvtEqCombineListViewItem__o *SelectedMaterialList; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_long__o *v27; // x22
  int size; // w23
  __int64 v29; // x24
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x27
  __int64 v31; // x9
  struct System_Int64_array *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  const MethodInfo *v39; // x2
  SvtEqCombineListViewManager_o *v40; // x0
  System_Collections_Generic_List_SvtEqCombineListViewItem__o *v41; // x1

  if ( (byte_421A09A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__AddRange__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo, v11);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_B0D8A4(&SvtEqCombineListViewItem_TypeInfo, v13);
    byte_421A09A = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
  p_selectedMtSvtList_k__BackingField = &this->fields._selectedMtSvtList_k__BackingField;
  this->fields._selectedMtSvtList_k__BackingField = (struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v14;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._selectedMtSvtList_k__BackingField,
    (System_Int32_array **)v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  tempMtSvtList = (int64_t)this->fields.tempMtSvtList;
  if ( !tempMtSvtList )
    goto LABEL_22;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)tempMtSvtList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__);
  SelectedMaterialList = SvtEqCombineListViewManager__GetSelectedMaterialList(this, v23);
  v27 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, v25, v26);
  System_Collections_Generic_List_long____ctor(
    v27,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
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
        (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__AddRange__);
      tempMtSvtList = (int64_t)*p_selectedMtSvtList_k__BackingField;
      if ( *p_selectedMtSvtList_k__BackingField )
      {
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)tempMtSvtList,
          (System_Collections_Generic_IEnumerable_T__o *)SelectedMaterialList,
          (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__AddRange__);
        if ( v27 )
        {
          v32 = System_Collections_Generic_List_long___ToArray(
                  v27,
                  (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
          this->fields.highRarityList = v32;
          sub_B0D840(
            (BattleServantConfConponent_o *)&this->fields.highRarityList,
            (System_Int32_array **)v32,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38);
          v40 = this;
          v41 = SelectedMaterialList;
          goto LABEL_21;
        }
      }
    }
LABEL_22:
    sub_B0D97C(tempMtSvtList);
  }
  v29 = 0LL;
  while ( 1 )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_22;
    if ( itemList->fields._size <= (unsigned int)v29 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    tempMtSvtList = (int64_t)itemList->fields._items->m_Items[v29];
    if ( !tempMtSvtList )
      goto LABEL_22;
    v31 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)tempMtSvtList + 300LL) < (unsigned int)v31
      || *(SvtEqCombineListViewItem_c **)(*(_QWORD *)(*(_QWORD *)tempMtSvtList + 200LL) + 8 * v31 - 8) != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    if ( *(int *)(tempMtSvtList + 156) >= 3 )
    {
      tempMtSvtList = SvtEqCombineListViewItem__get_UserSvtId(
                        (SvtEqCombineListViewItem_o *)tempMtSvtList,
                        (const MethodInfo *)SvtEqCombineListViewItem_TypeInfo);
      if ( !v27 )
        goto LABEL_22;
      System_Collections_Generic_List_long___Add(
        v27,
        tempMtSvtList,
        (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__);
    }
    if ( (int)++v29 >= size )
      goto LABEL_17;
  }
  sub_B0DC70(tempMtSvtList);
LABEL_21:
  SvtEqCombineListViewManager__SetSelectMaterialList(v40, v41, v39);
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
    sub_B0D840(
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
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
  int64_t emptyListNoticeLabel; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct ListViewSort_o *sort; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeButtonSprite; // x23
  struct UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantMaster_o **p_userServantMaster; // x21
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  UserGameEntity_o *SelfUserGame; // x22
  int32_t qp; // w8
  UILabel_o *haveQpLabel; // x24
  Il2CppObject *v48; // x0
  UILabel_o *nextExpLabel; // x24
  Il2CppObject *v50; // x0
  const MethodInfo *v51; // x1
  int v52; // w9
  UserServantEntity_array *ServantEquipList; // x24
  const MethodInfo *v54; // x2
  int v55; // w20
  int32_t FriendShipSvtEquipNum; // w0
  __int64 v57; // x1
  __int64 v58; // x2
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v59; // x26
  __int64 v60; // x1
  __int64 v61; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v62; // x27
  int max_length; // w8
  __int64 v64; // x21
  UserServantEntity_o *v65; // x28
  __int128 v66; // q0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v68; // q0
  int64_t v69; // x25
  UILabel_o *v70; // x26
  Il2CppObject *v71; // x0
  __int64 v72; // x1
  __int64 v73; // x2
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v74; // x25
  __int64 v75; // x1
  __int64 v76; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v77; // x0
  const MethodInfo *v78; // x2
  int size; // w8
  int32_t v80; // w24
  WarBoardAIRoute_RouteData_o *v81; // x8
  __int128 v82; // q0
  struct UserServantEntity_o *v83; // x8
  __int128 v84; // q0
  int64_t v85; // x26
  il2cpp_array_size_t v86; // w20
  int32_t v87; // w0
  int v88; // w20
  UILabel_o *v89; // x25
  Il2CppObject *v90; // x0
  int v91; // w21
  int v92; // w8
  unsigned int v93; // w25
  Il2CppClass **v94; // x20
  Il2CppClass *v95; // x8
  UserServantEntity_o **v96; // x20
  Il2CppClass *v97; // t1
  Il2CppType byval_arg; // q0
  const MethodInfo *v99; // x1
  __int64 v100; // x2
  int64_t v101; // x26
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *selectedMtSvtList_k__BackingField; // x27
  int v103; // w8
  int v104; // w28
  int v105; // w21
  int32_t v106; // w23
  _BOOL4 v107; // w28
  UserServantEntity_array *v108; // x22
  UserServantEntity_o *v109; // x20
  UserServantEntity_o *v110; // x21
  int64_t favoriteUserSvtId; // x24
  SvtEqCombineListViewItem_o *v112; // x27
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *v113; // x8
  UILabel_o *servantInfoLabel; // x20
  System_String_o *v115; // x21
  Il2CppObject *v116; // x22
  Il2CppObject *v117; // x0
  const MethodInfo *v118; // x1
  const MethodInfo *v119; // x1
  __int64 v120; // x0
  const MethodInfo *v121; // [xsp+8h] [xbp-168h]
  int v122; // [xsp+14h] [xbp-15Ch]
  int v123; // [xsp+18h] [xbp-158h]
  UserGameEntity_o *v126; // [xsp+30h] [xbp-140h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v128; // [xsp+40h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v129; // [xsp+60h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v130; // [xsp+80h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v131; // [xsp+A0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v132; // [xsp+C0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v133; // [xsp+E0h] [xbp-90h] BYREF
  int32_t svtEquipKeep; // [xsp+108h] [xbp-68h] BYREF
  float barExp; // [xsp+10Ch] [xbp-64h] BYREF
  int32_t lateExp[2]; // [xsp+110h] [xbp-60h] BYREF

  if ( (byte_421A085 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&type);
    sub_B0D8A4(&int_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__Remove__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity___ctor___67898584, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__, v18);
    sub_B0D8A4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v19);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v20);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B0D8A4(&SvtEqCombineListViewItem_TypeInfo, v23);
    sub_B0D8A4(&StringLiteral_23605/*"{0:N0}"*/, v24);
    sub_B0D8A4(&StringLiteral_12507/*"SUM_INFO"*/, v25);
    byte_421A085 = 1;
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
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)normalSizeSeed,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
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
  emptyListNoticeLabel = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !emptyListNoticeLabel )
    goto LABEL_111;
  MasterData_WarQuestSelectionMaster = (struct UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)emptyListNoticeLabel,
                                                                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = &this->fields.userServantMaster;
  this->fields.userServantMaster = MasterData_WarQuestSelectionMaster;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.userServantMaster,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !SelfUserGame )
    goto LABEL_111;
  qp = SelfUserGame->fields.qp;
  haveQpLabel = this->fields.haveQpLabel;
  this->fields.userQP = qp;
  LODWORD(v133.fields.currentCryptoKey) = qp;
  v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v133);
  emptyListNoticeLabel = (int64_t)System_String__Format((System_String_o *)StringLiteral_23605/*"{0:N0}"*/, v48, 0LL);
  if ( !haveQpLabel )
    goto LABEL_111;
  UILabel__set_text(haveQpLabel, (System_String_o *)emptyListNoticeLabel, 0LL);
  *(_OWORD *)&this->fields.selectSum = 0u;
  this->fields.isAllUpMax = 0;
  *(_QWORD *)&this->fields.getHpUpVal = 0LL;
  lateExp[0] = 0;
  nextExpLabel = this->fields.nextExpLabel;
  svtEquipKeep = 0;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtEquipKeep);
  emptyListNoticeLabel = (int64_t)System_String__Format((System_String_o *)StringLiteral_23605/*"{0:N0}"*/, v50, 0LL);
  if ( !nextExpLabel )
    goto LABEL_111;
  UILabel__set_text(nextExpLabel, (System_String_o *)emptyListNoticeLabel, 0LL);
  v126 = SelfUserGame;
  if ( type )
  {
    v52 = 0;
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
    v55 = *(_DWORD *)(emptyListNoticeLabel + 24);
    ServantEquipList = (UserServantEntity_array *)emptyListNoticeLabel;
    FriendShipSvtEquipNum = SvtEqCombineListViewManager__GetFriendShipSvtEquipNum(
                              (SvtEqCombineListViewManager_o *)emptyListNoticeLabel,
                              (UserServantEntity_array *)emptyListNoticeLabel,
                              v54);
    v122 = v55 - FriendShipSvtEquipNum;
    if ( FriendShipSvtEquipNum <= 0 && v122 <= 0 )
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
    v59 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                            System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                            v57,
                                                                            v58);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v59,
      (System_Collections_Generic_IEnumerable_T__o *)ServantEquipList,
      (const MethodInfo_2FC4C1C *)Method_System_Collections_Generic_List_UserServantEntity___ctor___67898584);
    v62 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                                                    v60,
                                                                                                    v61);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v62,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( !this->fields.baseUsrSvtData )
      goto LABEL_75;
    max_length = ServantEquipList->max_length;
    if ( max_length >= 1 )
    {
      v64 = 0LL;
      while ( (unsigned int)v64 < max_length )
      {
        v65 = ServantEquipList->m_Items[v64];
        if ( !v65 )
          goto LABEL_111;
        v66 = *(_OWORD *)&v65->fields.id.fields.fakeValue;
        *(_OWORD *)&v133.fields.currentCryptoKey = *(_OWORD *)&v65->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v133.fields.fakeValue = v66;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v132 = v133;
        emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v132, 0LL);
        baseUsrSvtData = this->fields.baseUsrSvtData;
        if ( !baseUsrSvtData )
          goto LABEL_111;
        v68 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
        v69 = emptyListNoticeLabel;
        *(_OWORD *)&v131.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v131.fields.fakeValue = v68;
        emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v131, 0LL);
        if ( v69 == emptyListNoticeLabel )
        {
          if ( !v62 )
            goto LABEL_111;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v62,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v65,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
          if ( !v59 )
            goto LABEL_111;
          emptyListNoticeLabel = System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                                   (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v59,
                                   (WarBoardManager_TaskList_o *)v65,
                                   (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
        }
        max_length = ServantEquipList->max_length;
        if ( (int)++v64 >= max_length )
          goto LABEL_44;
      }
LABEL_112:
      v120 = sub_B0D9A8(emptyListNoticeLabel);
      sub_B0D948(v120, 0LL);
    }
LABEL_44:
    if ( !v62 )
      goto LABEL_111;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v62,
      (System_Collections_Generic_IEnumerable_T__o *)v59,
      (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    emptyListNoticeLabel = (int64_t)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v62,
                                      (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    p_userServantMaster = &this->fields.userServantMaster;
    if ( !this->fields.baseUsrSvtData )
      goto LABEL_111;
    ServantEquipList = (UserServantEntity_array *)emptyListNoticeLabel;
    UserServantEntity__getExpInfo(this->fields.baseUsrSvtData, &lateExp[1], lateExp, &barExp, 0LL);
    v70 = this->fields.nextExpLabel;
    LODWORD(v133.fields.currentCryptoKey) = lateExp[0];
    v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v133);
    emptyListNoticeLabel = (int64_t)System_String__Format((System_String_o *)StringLiteral_23605/*"{0:N0}"*/, v71, 0LL);
    if ( !v70 )
      goto LABEL_111;
    UILabel__set_text(v70, (System_String_o *)emptyListNoticeLabel, 0LL);
    v52 = v122;
  }
  if ( type != 1 )
  {
    v122 = v52;
    if ( !ServantEquipList )
      goto LABEL_111;
LABEL_75:
    v91 = 0;
    goto LABEL_76;
  }
  emptyListNoticeLabel = (int64_t)*p_userServantMaster;
  if ( !*p_userServantMaster )
    goto LABEL_111;
  ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)emptyListNoticeLabel, 0LL);
  v74 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                          System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                          v72,
                                                                          v73);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v74,
    (System_Collections_Generic_IEnumerable_T__o *)ServantEquipList,
    (const MethodInfo_2FC4C1C *)Method_System_Collections_Generic_List_UserServantEntity___ctor___67898584);
  v77 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                                                  v75,
                                                                                                  v76);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v77,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( this->fields.baseUsrSvtData )
  {
    if ( !v74 )
      goto LABEL_111;
    size = v74->fields._size;
    if ( size >= 1 )
    {
      v80 = 0;
      while ( 1 )
      {
        if ( size <= (unsigned int)v80 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v81 = v74->fields._items->m_Items[v80];
        if ( !v81 )
          break;
        v82 = *(_OWORD *)&v81->fields.baseSquare;
        *(_OWORD *)&v133.fields.currentCryptoKey = *(_OWORD *)&v81->fields.flagNow;
        *(_OWORD *)&v133.fields.fakeValue = v82;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v130 = v133;
        emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v130, 0LL);
        v83 = this->fields.baseUsrSvtData;
        if ( !v83 )
          break;
        v84 = *(_OWORD *)&v83->fields.id.fields.fakeValue;
        v85 = emptyListNoticeLabel;
        *(_OWORD *)&v129.fields.currentCryptoKey = *(_OWORD *)&v83->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v129.fields.fakeValue = v84;
        emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v129, 0LL);
        if ( v85 == emptyListNoticeLabel )
          System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)v74,
            v80,
            (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
        size = v74->fields._size;
        if ( ++v80 >= size )
          goto LABEL_64;
      }
LABEL_111:
      sub_B0D97C(emptyListNoticeLabel);
    }
LABEL_64:
    emptyListNoticeLabel = (int64_t)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v74,
                                      (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    ServantEquipList = (UserServantEntity_array *)emptyListNoticeLabel;
  }
  if ( !ServantEquipList )
    goto LABEL_111;
  v86 = ServantEquipList->max_length;
  v87 = SvtEqCombineListViewManager__GetFriendShipSvtEquipNum(
          (SvtEqCombineListViewManager_o *)emptyListNoticeLabel,
          ServantEquipList,
          v78);
  v88 = v86 - v87;
  if ( v87 <= 0 && v88 <= 0 )
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
  v122 = v88;
  if ( !emptyListNoticeLabel )
    goto LABEL_111;
  UserServantEntity__getExpInfo((UserServantEntity_o *)emptyListNoticeLabel, &lateExp[1], lateExp, &barExp, 0LL);
  v89 = this->fields.nextExpLabel;
  LODWORD(v133.fields.currentCryptoKey) = lateExp[0];
  v90 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v133);
  emptyListNoticeLabel = (int64_t)System_String__Format((System_String_o *)StringLiteral_23605/*"{0:N0}"*/, v90, 0LL);
  if ( !v89 )
    goto LABEL_111;
  UILabel__set_text(v89, (System_String_o *)emptyListNoticeLabel, 0LL);
  v91 = 1;
LABEL_76:
  v92 = ServantEquipList->max_length;
  if ( v92 >= 1 )
  {
    v93 = 0;
    v123 = v91;
    while ( v93 < v92 )
    {
      v94 = &ServantEquipList->obj.klass + (int)v93;
      v97 = v94[4];
      v96 = (UserServantEntity_o **)(v94 + 4);
      v95 = v97;
      if ( !v97 )
        goto LABEL_111;
      byval_arg = v95->_1.byval_arg;
      *(_OWORD *)&v133.fields.currentCryptoKey = *(_OWORD *)&v95->_1.name;
      *(Il2CppType *)&v133.fields.fakeValue = byval_arg;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v128 = v133;
      emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v128, 0LL);
      v101 = emptyListNoticeLabel;
      if ( v91
        && (selectedMtSvtList_k__BackingField = this->fields._selectedMtSvtList_k__BackingField) != 0LL
        && (v103 = selectedMtSvtList_k__BackingField->fields._size, v103 >= 1) )
      {
        v104 = 0;
        v105 = 0;
        v106 = 0;
        do
        {
          if ( v103 <= (unsigned int)v104 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          emptyListNoticeLabel = (int64_t)selectedMtSvtList_k__BackingField->fields._items->m_Items[v104];
          if ( !emptyListNoticeLabel )
            goto LABEL_111;
          emptyListNoticeLabel = SvtEqCombineListViewItem__get_UserSvtId(
                                   (SvtEqCombineListViewItem_o *)emptyListNoticeLabel,
                                   v99);
          selectedMtSvtList_k__BackingField = this->fields._selectedMtSvtList_k__BackingField;
          if ( !selectedMtSvtList_k__BackingField )
            goto LABEL_111;
          v103 = selectedMtSvtList_k__BackingField->fields._size;
          if ( emptyListNoticeLabel == v101 )
            v106 = v104;
          ++v104;
          if ( emptyListNoticeLabel == v101 )
            v105 = 1;
        }
        while ( v104 < v103 );
        v107 = v105;
      }
      else
      {
        v107 = 0;
        v106 = 0;
      }
      if ( v93 >= ServantEquipList->max_length )
        break;
      v108 = ServantEquipList;
      v109 = *v96;
      v110 = this->fields.baseUsrSvtData;
      favoriteUserSvtId = v126->fields.favoriteUserSvtId;
      v112 = (SvtEqCombineListViewItem_o *)sub_B0D974(SvtEqCombineListViewItem_TypeInfo, v99, v100);
      SvtEqCombineListViewItem___ctor(
        v112,
        type,
        v93,
        v109,
        v101 == favoriteUserSvtId,
        v110,
        v107,
        setupInfo,
        finishSetupInfo,
        v121);
      v91 = v123;
      if ( (v123 & v107) == 1 )
      {
        if ( !v112 )
          goto LABEL_111;
        v112->fields.selectNum = v106;
        v113 = this->fields._selectedMtSvtList_k__BackingField;
        ++this->fields.selectSum;
        if ( !v113 )
          goto LABEL_111;
        if ( v106 == v113->fields._size - 1 )
          v112->fields.isLastSelectMaterial = 1;
      }
      emptyListNoticeLabel = (int64_t)this->fields.itemList;
      if ( !emptyListNoticeLabel )
        goto LABEL_111;
      ServantEquipList = v108;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)emptyListNoticeLabel,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v112,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      v92 = v108->max_length;
      if ( (int)++v93 >= v92 )
        goto LABEL_106;
    }
    goto LABEL_112;
  }
LABEL_106:
  SvtEqCombineListViewManager__RefrashListDisp(this, v51);
  servantInfoLabel = this->fields.servantInfoLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v115 = LocalizationManager__Get((System_String_o *)StringLiteral_12507/*"SUM_INFO"*/, 0LL);
  LODWORD(v133.fields.currentCryptoKey) = v122;
  v116 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v133);
  svtEquipKeep = v126->fields.svtEquipKeep;
  v117 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtEquipKeep);
  emptyListNoticeLabel = (int64_t)System_String__Format_43845440(v115, v116, v117, 0LL);
  if ( !servantInfoLabel )
    goto LABEL_111;
  UILabel__set_text(servantInfoLabel, (System_String_o *)emptyListNoticeLabel, 0LL);
  SvtEqCombineListViewManager__SetMaterialSvtInfo(this, v118);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  SvtEqCombineListViewManager__SetFilterButtonImage(this, v119);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
}


void __fastcall SvtEqCombineListViewManager__SetSortButtonImage(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *sortKindLabel; // x20
  ListViewSort_o *sort; // x0
  UILabel_o *v11; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v13; // x8
  int32_t sortKind; // w9
  System_String_o **v15; // x8
  struct ListViewSort_o *v16; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v18; // x9
  System_String_o **v19; // x10
  System_String_o **v20; // x8
  struct ListViewSort_o *v21; // x8
  System_String_o **v22; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v24; // x20

  if ( (byte_421A0AD & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_17072/*"btn_sort_up"*/, v3);
    sub_B0D8A4(&StringLiteral_17156/*"btn_txt_up"*/, v4);
    sub_B0D8A4(&StringLiteral_17112/*"btn_txt_new"*/, v5);
    sub_B0D8A4(&StringLiteral_17102/*"btn_txt_down"*/, v6);
    sub_B0D8A4(&StringLiteral_17119/*"btn_txt_old"*/, v7);
    sub_B0D8A4(&StringLiteral_17069/*"btn_sort_down"*/, v8);
    byte_421A0AD = 1;
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
    v11 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v11 )
      goto LABEL_46;
    UILabel__set_text(v11, (System_String_o *)sort, 0LL);
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
    v13 = this->fields.sort;
    if ( !v13 )
      goto LABEL_46;
    sortKind = v13->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_46;
      v15 = (System_String_o **)(v13->fields.isAscendingOrder ? &StringLiteral_17119/*"btn_txt_old"*/ : &StringLiteral_17112/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
      v16 = this->fields.sort;
      if ( !v16 )
        goto LABEL_46;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_46;
      isAscendingOrder = v16->fields.isAscendingOrder;
      v18 = (System_String_o **)&StringLiteral_17069/*"btn_sort_down"*/;
      v19 = (System_String_o **)&StringLiteral_17072/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_46;
      v20 = (System_String_o **)(v13->fields.isAscendingOrder ? &StringLiteral_17156/*"btn_txt_up"*/ : &StringLiteral_17102/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
      v21 = this->fields.sort;
      if ( !v21 )
        goto LABEL_46;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_46;
      isAscendingOrder = v21->fields.isAscendingOrder;
      v18 = (System_String_o **)&StringLiteral_17072/*"btn_sort_up"*/;
      v19 = (System_String_o **)&StringLiteral_17069/*"btn_sort_down"*/;
    }
    if ( isAscendingOrder )
      v22 = v18;
    else
      v22 = v19;
    UISprite__set_spriteName((UISprite_o *)sort, *v22, 0LL);
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
      v24 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusKind2Text_32861208(
                                 sort,
                                 this->fields.bonusEventIdList,
                                 0LL,
                                 0LL,
                                 0LL,
                                 this->fields.bonusFinishEventIdList,
                                 0LL);
      if ( v24 )
      {
        UILabel__set_text(v24, (System_String_o *)sort, 0LL);
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
    sub_B0D97C(sort);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__SetStatusKind(
        SvtEqCombineListViewManager_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_Behaviour_o *statusTabButton; // x0
  __int64 *v16; // x8
  UICommonButton_o *v17; // x21
  bool enabled; // w0
  __int64 *v19; // x8
  UICommonButton_o *lockTabButton; // x21
  bool v21; // w0
  __int64 *v22; // x8
  UICommonButton_o *choiceTabButton; // x20
  bool v24; // w0
  int32_t currentType; // w8
  UILabel_o *combineInfoMsgLb; // x20
  __int64 *v27; // x8
  int32_t v28; // w8
  UILabel_o *v29; // x20
  __int64 *v30; // x8
  int32_t v31; // w1

  if ( (byte_421A082 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
    sub_B0D8A4(&StringLiteral_17175/*"button_allchoice_reg"*/, v5);
    sub_B0D8A4(&StringLiteral_17178/*"button_alllock_unreg"*/, v6);
    sub_B0D8A4(&StringLiteral_11766/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v7);
    sub_B0D8A4(&StringLiteral_11767/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v8);
    sub_B0D8A4(&StringLiteral_17191/*"button_select_reg"*/, v9);
    sub_B0D8A4(&StringLiteral_7064/*"HEADER_MSG_SVTEQ_MATERIAL"*/, v10);
    sub_B0D8A4(&StringLiteral_7063/*"HEADER_MSG_SVTEQ_BASE"*/, v11);
    sub_B0D8A4(&StringLiteral_17192/*"button_select_unreg"*/, v12);
    sub_B0D8A4(&StringLiteral_17177/*"button_alllock_reg"*/, v13);
    sub_B0D8A4(&StringLiteral_17176/*"button_allchoice_unreg"*/, v14);
    byte_421A082 = 1;
  }
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  this->fields.modeKind = modeKind;
  if ( !statusTabButton )
    goto LABEL_56;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
    statusTabButton,
    1LL,
    statusTabButton->klass[1]._1.byval_arg.data);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_56;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 0, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabSprite;
  if ( !statusTabButton )
    goto LABEL_56;
  v16 = &StringLiteral_17191/*"button_select_reg"*/;
  if ( modeKind )
    v16 = &StringLiteral_17192/*"button_select_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v16, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_56;
  statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                 statusTabButton,
                                                 0LL,
                                                 0LL,
                                                 statusTabButton->klass[1]._1.interfaceOffsets);
  v17 = this->fields.statusTabButton;
  if ( !v17 )
    goto LABEL_56;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0LL);
  UICommonButton__SetColliderEnable(v17, enabled, 0, 0LL);
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
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 1, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
  if ( !statusTabButton )
    goto LABEL_56;
  v19 = &StringLiteral_17177/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v19 = &StringLiteral_17178/*"button_alllock_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v19, 0LL);
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
  v21 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
  UICommonButton__SetColliderEnable(lockTabButton, v21, 0, 0LL);
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
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 2, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
  if ( !statusTabButton )
    goto LABEL_56;
  v22 = &StringLiteral_17175/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v22 = &StringLiteral_17176/*"button_allchoice_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v22, 0LL);
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
  v24 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
  UICommonButton__SetColliderEnable(choiceTabButton, v24, 0, 0LL);
  currentType = this->fields.currentType;
  if ( currentType == 1 )
  {
    combineInfoMsgLb = this->fields.combineInfoMsgLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v27 = &StringLiteral_7064/*"HEADER_MSG_SVTEQ_MATERIAL"*/;
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
    v27 = &StringLiteral_7063/*"HEADER_MSG_SVTEQ_BASE"*/;
  }
  statusTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v27, 0LL);
  if ( !combineInfoMsgLb )
    goto LABEL_56;
  UILabel__set_text(combineInfoMsgLb, (System_String_o *)statusTabButton, 0LL);
LABEL_36:
  v28 = this->fields.modeKind;
  if ( v28 == 1 )
  {
    v29 = this->fields.combineInfoMsgLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v30 = &StringLiteral_11767/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
  }
  else
  {
    if ( v28 != 2 )
      goto LABEL_48;
    v29 = this->fields.combineInfoMsgLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v30 = &StringLiteral_11766/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
  }
  statusTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v30, 0LL);
  if ( !v29 )
    goto LABEL_56;
  UILabel__set_text(v29, (System_String_o *)statusTabButton, 0LL);
LABEL_48:
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.combineInfoMsgLb;
  if ( (unsigned int)(this->fields.modeKind - 1) >= 2 )
  {
    if ( this->fields.currentType )
      v31 = 12;
    else
      v31 = 20;
    if ( statusTabButton )
      goto LABEL_55;
LABEL_56:
    sub_B0D97C(statusTabButton);
  }
  v31 = 14;
  if ( !statusTabButton )
    goto LABEL_56;
LABEL_55:
  UILabel__set_fontSize((UILabel_o *)statusTabButton, v31, 0LL);
}


void __fastcall SvtEqCombineListViewManager__StatusRequest(
        SvtEqCombineListViewManager_o *this,
        SvtEqCombineListViewManager_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t modeKind; // w8
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  NetworkManager_ResultCallbackFunc_o *v18; // x20
  CardStatusSyncRequest_o *Request_WarBoardWallAttackRequest; // x0
  System_Int64_array *v20; // x2
  System_Int64_array *v21; // x1
  bool v22; // w4
  bool v23; // w5
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x2
  NetworkManager_ResultCallbackFunc_o *v32; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_421A0B5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_B0D8A4(&Method_SvtEqCombineListViewManager_EndStatusSync__, v8);
    byte_421A0B5 = 1;
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
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.requestCallback,
        (System_Int32_array **)callback,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
      v32 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v30, v31);
      NetworkManager_ResultCallbackFunc___ctor(
        v32,
        (Il2CppObject *)this,
        Method_SvtEqCombineListViewManager_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                       v32,
                                                                       (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        v20 = unchoiceList;
        v21 = choiceList;
        v23 = 1;
        v22 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_B0D97C(Request_WarBoardWallAttackRequest);
    }
  }
  else if ( modeKind == 1 && SvtEqCombineListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.requestCallback,
      (System_Int32_array **)callback,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    v18 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v16, v17);
    NetworkManager_ResultCallbackFunc___ctor(
      v18,
      (Il2CppObject *)this,
      Method_SvtEqCombineListViewManager_EndStatusSync__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                     v18,
                                                                     (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( Request_WarBoardWallAttackRequest )
    {
      v20 = unlockList;
      v21 = lockList;
      v22 = 1;
      v23 = 0;
LABEL_17:
      CardStatusSyncRequest__beginRequest(Request_WarBoardWallAttackRequest, v21, v20, 0, v22, v23, 0LL);
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

  if ( (byte_421A078 & 1) == 0 )
  {
    sub_B0D8A4(&SvtEqCombineListViewManager_CallbackFunc_TypeInfo, value);
    byte_421A078 = 1;
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
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B0DC70(v7);
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

  if ( (byte_421A07A & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_421A07A = 1;
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
    v8 = sub_B022BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B0DC70(v7);
  SvtEqCombineListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_SvtEqCombineListViewObject__o *__fastcall SvtEqCombineListViewManager__get_ClippingObjectList(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  SvtEqCombineListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v17; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x21
  ListViewItem_o *Item; // x0
  _BOOL8 v20; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_421A080 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_SvtEqCombineListViewObject__TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_421A080 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_SvtEqCombineListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B0D97C(v15);
      Component_srcLineSprite = (SvtEqCombineListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  (UnityEngine_GameObject_o *)current,
                                                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___);
      v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B0D97C(0LL);
      Item = (ListViewItem_o *)SvtEqCombineListViewObject__GetItem(Component_srcLineSprite, v17);
      if ( !Item )
        sub_B0D97C(0LL);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_23719204((ListViewManager_o *)this, Item, 0LL);
        if ( v20 )
        {
          if ( !v12 )
            sub_B0D97C(v20);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v12 )
          sub_B0D97C(Item);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          v18,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SvtEqCombineListViewObject__o *)v12;
}


System_Collections_Generic_List_SvtEqCombineListViewObject__o *__fastcall SvtEqCombineListViewManager__get_ObjectList(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_421A07F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_SvtEqCombineListViewObject__TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_421A07F = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_SvtEqCombineListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B0D97C(v15);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___);
      if ( !v12 )
        sub_B0D97C(Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v12,
        Component_srcLineSprite,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SvtEqCombineListViewObject__o *)v12;
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

  if ( (byte_421A079 & 1) == 0 )
  {
    sub_B0D8A4(&SvtEqCombineListViewManager_CallbackFunc_TypeInfo, value);
    byte_421A079 = 1;
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
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B0DC70(v7);
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

  if ( (byte_421A07B & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_421A07B = 1;
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
    v8 = sub_B022BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B0DC70(v7);
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
  sub_B0D840(
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
  sub_B0D840(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4211775 & 1) == 0 )
  {
    sub_B0D8A4(&SvtEqCombineListViewManager_ResultKind_TypeInfo, *(_QWORD *)&kind);
    byte_4211775 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(SvtEqCombineListViewManager_ResultKind_TypeInfo, &v12);
  v11[1] = (__int64)list;
  return (System_IAsyncResult_o *)sub_B0D848(this, v11, callback, object);
}


void __fastcall SvtEqCombineListViewManager_CallbackFunc__EndInvoke(
        SvtEqCombineListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
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
        sub_B0D960(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&kind, list, method);
      if ( (sub_B0D8D4(v22) & 1) == 0 )
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
      v24 = sub_B0D8CC(v22);
      v25 = sub_B0DCD0(v22);
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
            v18 = sub_AA67A0(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, System_Int32_array *, _QWORD))sub_B0D954(v17, v22);
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
            v16 = sub_AA67A0(v21, class_0, v10);
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
  sub_B0D840(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4211776 & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, isRequest);
    byte_4211776 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B0D848(this, v9, callback, object);
}


void __fastcall SvtEqCombineListViewManager_RequestCallbackFunc__EndInvoke(
        SvtEqCombineListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager_RequestCallbackFunc__Invoke(
        SvtEqCombineListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  SvtEqCombineListViewManager_RequestCallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  SvtEqCombineListViewManager_RequestCallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  SvtEqCombineListViewManager_RequestCallbackFunc_o *v30; // [xsp+8h] [xbp-48h] BYREF

  v30 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v30;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (SvtEqCombineListViewManager_RequestCallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v19 = v8[v9];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v19->fields.extra_arg, isRequest, method, v3);
      if ( (sub_B0D8D4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isRequest, v21);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B0D8CC(v21);
      v24 = sub_B0DCD0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v25 = *v20;
          v26 = *(_QWORD *)(v21 + 24);
          v27 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AA67A0(v20, v26, v27);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B0D954(v16, v21);
        (*v18)(v20, isRequest, v18);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v10) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AA67A0(v20, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, isRequest, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            isRequest,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, isRequest, v21);
    goto LABEL_37;
  }
}


void __fastcall SvtEqCombineListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct SvtEqCombineListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_4211774 & 1) == 0 )
  {
    sub_B0D8A4(&SvtEqCombineListViewManager___c_TypeInfo, v1);
    byte_4211774 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(SvtEqCombineListViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = SvtEqCombineListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SvtEqCombineListViewManager___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return a->fields.selectNum - b->fields.selectNum;
}