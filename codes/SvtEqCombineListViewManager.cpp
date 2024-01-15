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

  if ( (byte_40FD65E & 1) == 0 )
  {
    sub_B16FFC(&SvtEqCombineListViewManager_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_13121/*"SvtEqCombine"*/, v8);
    byte_40FD65E = 1;
  }
  SvtEqCombineListViewManager_TypeInfo->static_fields->COLOR_VAL = 0.375;
  SvtEqCombineListViewManager_TypeInfo->static_fields->FILTER2_MAX_KIND_NUM = 1;
  static_fields = SvtEqCombineListViewManager_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_13121/*"SvtEqCombine"*/;
  static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_13121/*"SvtEqCombine"*/;
  sub_B16F98((BattleServantConfConponent_o *)&static_fields->SORT_SAVE_KEY, v10, v2, v3, v4, v5, v6, v7);
  SvtEqCombineListViewManager_TypeInfo->static_fields->isInitSystem = 0;
}


void __fastcall SvtEqCombineListViewManager___ctor(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FD65D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo, v6);
    byte_40FD65D = 1;
  }
  this->fields.selectMax = 20;
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
  this->fields.tempMtSvtList = (struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.tempMtSvtList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
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
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x20
  ListViewItem_o *v7; // x0
  __int64 v8; // x9
  SvtEqCombineListViewManager_o *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_40FD65C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B16FFC(&SvtEqCombineListViewItem_TypeInfo, v5);
    byte_40FD65C = 1;
  }
  itemSortList = this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_10;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v7 = itemSortList->fields._items->m_Items[index];
  if ( !v7 )
LABEL_10:
    sub_B170D4();
  v8 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) >= (unsigned int)v8
    && (SvtEqCombineListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == SvtEqCombineListViewItem_TypeInfo )
  {
    v7[2].fields.sortIndex = -1;
  }
  else
  {
    sub_B173C8(v7);
    SvtEqCombineListViewManager___ctor(v9, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SvtEqCombineListViewManager__CheckCompareQp(
        SvtEqCombineListViewManager_o *this,
        int32_t nowCombineQp,
        const MethodInfo *method)
{
  int32_t CombineQpSvtEq; // w19
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  int size; // w22
  unsigned int v9; // w23
  ListViewItem_o *v10; // x21
  __int64 v11; // x9
  UserServantEntity_o *monitor; // x0
  UserServantEntity_o *v13; // x0
  SvtEqCombineListViewManager_o *v15; // x0
  int32_t *v16; // x1
  int32_t *v17; // x2
  int32_t v18; // w3
  const MethodInfo *v19; // x4

  CombineQpSvtEq = nowCombineQp;
  if ( (byte_40FD628 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&nowCombineQp);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_B16FFC(&SvtEqCombineListViewItem_TypeInfo, v6);
    byte_40FD628 = 1;
  }
  if ( !this->fields.selectSum )
    return CombineQpSvtEq;
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_20:
    sub_B170D4();
  size = itemList->fields._size;
  if ( size < 1 )
    return CombineQpSvtEq;
  v9 = 0;
  while ( 1 )
  {
    if ( itemList->fields._size <= v9 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v10 = itemList->fields._items->m_Items[v9];
    if ( !v10 )
      goto LABEL_20;
    v11 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v10->klass->_2.bitflags2 + 1) < (unsigned int)v11
      || (SvtEqCombineListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    if ( ListViewItem__get_IsSelect(v10, 0LL) && BYTE1(v10[1].fields.sortValue1) )
    {
      monitor = (UserServantEntity_o *)v10[1].monitor;
      if ( !monitor )
        goto LABEL_20;
      if ( CombineQpSvtEq < UserServantEntity__getCombineQpSvtEq(monitor, 0LL) )
      {
        v13 = (UserServantEntity_o *)v10[1].monitor;
        if ( !v13 )
          goto LABEL_20;
        CombineQpSvtEq = UserServantEntity__getCombineQpSvtEq(v13, 0LL);
      }
    }
    if ( (int)++v9 >= size )
      return CombineQpSvtEq;
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_20;
  }
  sub_B173C8(v10);
  return SvtEqCombineListViewManager__CheckIncrementLv(v15, v16, v17, v18, v19);
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  int v19; // w24
  int32_t v20; // w21
  SvtEqCombineListViewItem_o *current; // x22
  __int64 v22; // x9
  UserServantEntity_o *baseUsrSvtData; // x0
  const MethodInfo *v24; // x1
  UserServantEntity_o *v25; // x0
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *combineEventList; // x0
  int32_t v28; // w25
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *v31; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v32; // x21
  __int64 v33; // x22
  __int64 v34; // x23
  int32_t v35; // w0
  WarEntity_o *Entity; // x0
  int32_t klass_high; // w8
  struct UserServantEntity_o *v38; // x0
  int32_t v39; // w23
  int32_t exp; // w22
  const MethodInfo *v41; // x4
  int32_t LevelMax; // w21
  int32_t v43; // w8
  int v44; // w21
  int32_t v45; // w22
  System_Collections_Generic_List_Enumerator_T__o v46; // [xsp+8h] [xbp-A8h] BYREF
  int v47[2]; // [xsp+20h] [xbp-90h]
  int v48; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_T__o v49; // [xsp+30h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+50h] [xbp-60h] BYREF
  int32_t increLv[2]; // [xsp+78h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_40FD62A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, isMaxLvSelected);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v14);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B16FFC(&SvtEqCombineListViewItem_TypeInfo, v17);
    byte_40FD62A = 1;
  }
  memset(&v50, 0, sizeof(v50));
  memset(&v49, 0, sizeof(v49));
  v48 = 0;
  *isMaxLvSelected = 0;
  *(_QWORD *)increLv = 0LL;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_52;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v46,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v50 = v46;
  v19 = 0;
  v20 = 0;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v50,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = (SvtEqCombineListViewItem_o *)v50.fields.current;
    if ( !v50.fields.current )
      goto LABEL_48;
    v22 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v50.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v22
      || (SvtEqCombineListViewItem_c *)v50.fields.current->klass->_2.typeHierarchy[v22 - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      sub_B173C8(v50.fields.current);
LABEL_48:
      sub_B170D4();
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v50.fields.current, 0LL) || current->fields.dragSelectNum >= 1 )
    {
      baseUsrSvtData = this->fields.baseUsrSvtData;
      if ( !baseUsrSvtData )
        sub_B170D4();
      if ( !UserServantEntity__isLevelMax(baseUsrSvtData, 0LL) )
        goto LABEL_15;
      v25 = this->fields.baseUsrSvtData;
      if ( !v25 )
        sub_B170D4();
      if ( UserServantEntity__isLevelMax(v25, 0LL) && current->fields.isLimitCntTarget )
      {
LABEL_15:
        v20 += current->fields.materialExp;
        v19 += SvtEqCombineListViewItem__get_GetAddTotalExp(current, v24);
      }
    }
  }
  v47[0] = 144;
  v48 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v50,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  v48 = 0;
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_52;
  combineEventList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)menuListCtr->fields.combineEventList;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v46,
      combineEventList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v49 = v46;
LABEL_21:
    v28 = v20;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v49,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__) )
    {
      if ( !v49.fields.current )
        sub_B170D4();
      if ( HIDWORD(v49.fields.current[1].klass) == 17 )
      {
        v20 = UnityEngine_Mathf__CeilToInt(*(float *)&v49.fields.current[3].monitor * (float)v20, 0LL);
        goto LABEL_21;
      }
    }
    v47[0] = 243;
    v44 = ++v48;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v49,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    if ( v44 && v47[v44 - 1] == 243 )
      v48 = v44 - 1;
  }
  else
  {
    v28 = v20;
  }
  if ( this->fields.baseUsrSvtData && this->fields.itemType == 1 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
      v31 = this->fields.baseUsrSvtData;
      if ( v31 )
      {
        v32 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
        v34 = *(_QWORD *)&v31->fields.svtId.fields.currentCryptoKey;
        v33 = *(_QWORD *)&v31->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v52.fields.currentCryptoKey = v34;
        *(_QWORD *)&v52.fields.fakeValue = v33;
        v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v52, 0LL);
        if ( v32 )
        {
          Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v32,
                     v35,
                     (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Entity )
          {
            klass_high = HIDWORD(Entity[1].klass);
            v38 = this->fields.baseUsrSvtData;
            this->fields.expType = klass_high;
            if ( v38 )
            {
              exp = v38->fields.exp;
              increLv[0] = v38->fields.lv;
              v39 = increLv[0];
              LevelMax = UserServantEntity__getLevelMax(v38, 0LL);
              if ( v39 == LevelMax )
              {
                v43 = 0;
              }
              else
              {
                v45 = v28 + v19 + exp;
                while ( !SvtEqCombineListViewManager__CheckIncrementLv(this, increLv, &increLv[1], v45, v41) )
                  ;
                v43 = increLv[1];
              }
              *isMaxLvSelected = v43 >= LevelMax;
              return;
            }
          }
        }
      }
    }
LABEL_52:
    sub_B170D4();
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
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t LevelMax; // w0
  WebViewManager_o *Instance; // x0
  ServantExpMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ServantExpEntity_o *Entity; // x0
  int32_t exp; // w8
  int32_t lv; // w8
  bool result; // w0

  if ( (byte_40FD62B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantExpMaster___, checkLv);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FD62B = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_16;
  LevelMax = UserServantEntity__getLevelMax(baseUsrSvtData, 0LL);
  if ( *checkLv >= LevelMax )
  {
    *increLv = LevelMax;
    return 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ServantExpMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
    || (Entity = ServantExpMaster__GetEntity(MasterData_WarQuestSelectionMaster, this->fields.expType, *checkLv, 0LL)) == 0LL )
  {
LABEL_16:
    sub_B170D4();
  }
  exp = Entity->fields.exp;
  if ( exp <= totalExp )
  {
    if ( exp != totalExp )
    {
      result = 0;
      ++*checkLv;
      return result;
    }
    lv = Entity->fields.lv + 1;
  }
  else
  {
    lv = Entity->fields.lv;
  }
  *increLv = lv;
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

  if ( (byte_40FD645 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__, usrSvtId);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v8);
    byte_40FD645 = 1;
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
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v14,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__) )
      {
        if ( !v14.fields.current )
          sub_B170D4();
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
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
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
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  int size; // w21
  unsigned int v7; // w22
  ListViewItem_o *v8; // x20
  __int64 v9; // x9
  SvtEqCombineListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_40FD639 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v3);
    sub_B16FFC(&SvtEqCombineListViewItem_TypeInfo, v4);
    byte_40FD639 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_B170D4();
  size = itemList->fields._size;
  if ( size < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( itemList->fields._size <= v7 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v8 = itemList->fields._items->m_Items[v7];
    if ( !v8 )
      goto LABEL_16;
    v9 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v8->klass->_2.bitflags2 + 1) < (unsigned int)v9
      || (SvtEqCombineListViewItem_c *)v8->klass->_2.typeHierarchy[v9 - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    if ( ListViewItem__get_IsSelect(v8, 0LL)
      && (LOBYTE(v8[1].fields.basePosition.fields.x) || LOBYTE(v8[2].fields.index)) )
    {
      return 1;
    }
    if ( (int)++v7 >= size )
      return 0;
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_16;
  }
  sub_B173C8(v8);
  return (unsigned __int8)SvtEqCombineListViewManager__GetSelectedMaterialList(v11, v12);
}


void __fastcall SvtEqCombineListViewManager__ClearSelectedSvtList(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *selectedMtSvtList_k__BackingField; // x0

  if ( (byte_40FD63D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__, method);
    byte_40FD63D = 1;
  }
  selectedMtSvtList_k__BackingField = this->fields._selectedMtSvtList_k__BackingField;
  if ( selectedMtSvtList_k__BackingField )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)selectedMtSvtList_k__BackingField,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__);
}


void __fastcall SvtEqCombineListViewManager__CloseServantCheckEquipDialog(
        SvtEqCombineListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantCheckEquipDialog_o *servantEquipCheckDialog; // x0
  const MethodInfo *v6; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  servantEquipCheckDialog = this->fields.servantEquipCheckDialog;
  if ( !servantEquipCheckDialog )
    goto LABEL_6;
  ServantCheckEquipDialog__Close(servantEquipCheckDialog, 0LL);
  if ( isDecide )
  {
    SvtEqCombineListViewManager__SetSelectedMaterialInfo(this, v6);
    combineRootComponent = this->fields.combineRootComponent;
    if ( combineRootComponent )
    {
      CombineRootComponent__SetSelectSvtEqMaterialList(combineRootComponent, 0LL);
      return;
    }
LABEL_6:
    sub_B170D4();
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
  __int64 v15; // x0
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct ListViewSort_array *sortStatusList; // x8
  struct ListViewSort_o *v24; // x1
  ListViewSort_o **p_sort; // x22
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x25
  bool IsActiveBgTxt; // w0
  System_Int32_array **p_bonusEventIdList; // x25
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **p_bonusFinishEventIdList; // x26
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
  struct ListViewSort_o *sort; // x8
  System_Int32_array **servantEquipFilterEventIdList; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **v57; // x1
  ListViewSort_o *v58; // x8
  struct System_Int32_array *v59; // x9
  __int64 v60; // x10
  bool v61; // w9
  struct System_Int32_array *v62; // x9
  ListViewSort_o *v63; // x0
  UnityEngine_Component_o *scaleChangeButton; // x0
  UnityEngine_GameObject_o *v65; // x0
  const MethodInfo *v66; // x2
  const MethodInfo *v67; // x2
  const MethodInfo *v68; // x4
  UnityEngine_Component_o *v69; // x0
  UnityEngine_GameObject_o *v70; // x0
  UnityEngine_GameObject_o *getExpInfo; // x0
  UILabel_o *spendQpInfoLabel; // x23
  System_String_o *v73; // x0
  UILabel_o *getExpInfoLabel; // x23
  System_String_o *v75; // x0
  const MethodInfo *v76; // x2
  const MethodInfo *v77; // x4
  UnityEngine_Component_o *selectInfoLabel; // x0
  UnityEngine_GameObject_o *v79; // x0
  UnityEngine_Component_o *bonusFilterKindButton; // x0
  UnityEngine_GameObject_o *v81; // x0
  const MethodInfo *v82; // x2

  if ( (byte_40FD622 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&type);
    sub_B16FFC(&SvtEqCombineListViewManager_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_6831/*"GET_EXP_INFO"*/, v12);
    sub_B16FFC(&StringLiteral_9242/*"NEED_QP_INFO"*/, v13);
    byte_40FD622 = 1;
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
    sub_B17100(v15, v16, v17);
    sub_B170A0();
  }
  v24 = sortStatusList->m_Items[type];
  this->fields.sort = v24;
  p_sort = &this->fields.sort;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v24,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  if ( !this->fields.sort )
    goto LABEL_53;
  this->fields.sort->fields.listViewKind = 1;
  if ( !*p_sort )
    goto LABEL_53;
  ListViewSort__Load(*p_sort, 0LL);
  this->fields.dragEndIndex = -1;
  *(_QWORD *)&this->fields.dragSelectSum = 0xFFFFFFFF00000000LL;
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  this->fields.isDragSelect = 1;
  if ( !bgTxtSprite )
    goto LABEL_53;
  gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL);
  IsActiveBgTxt = BgTxtManager__IsActiveBgTxt(0LL);
  if ( !gameObject )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive(gameObject, IsActiveBgTxt, 0LL);
  p_bonusEventIdList = &this->fields.bonusEventIdList;
  this->fields.bonusEventIdList = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.bonusEventIdList, 0LL, v30, v31, v32, v33, v34, v35);
  p_bonusFinishEventIdList = &this->fields.bonusFinishEventIdList;
  this->fields.bonusFinishEventIdList = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.bonusFinishEventIdList, 0LL, v37, v38, v39, v40, v41, v42);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_53;
  sort->fields.isBonusKind = 0;
  if ( setupInfo )
    servantEquipFilterEventIdList = (System_Int32_array **)setupInfo->fields.servantEquipFilterEventIdList;
  else
    servantEquipFilterEventIdList = 0LL;
  *p_bonusEventIdList = (System_Int32_array *)servantEquipFilterEventIdList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.bonusEventIdList,
    servantEquipFilterEventIdList,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  if ( finishSetupInfo )
    v57 = (System_Int32_array **)finishSetupInfo->fields.servantEquipFilterEventIdList;
  else
    v57 = 0LL;
  *p_bonusFinishEventIdList = (System_Int32_array *)v57;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.bonusFinishEventIdList, v57, v51, v52, v53, v54, v55, v56);
  v58 = *p_sort;
  if ( setupInfo )
  {
    v59 = setupInfo->fields.servantEquipFilterEventIdList;
    if ( !v59 )
      goto LABEL_53;
    v60 = *(_QWORD *)&v59->max_length;
    v61 = v60 != 0;
    if ( v60 || !finishSetupInfo )
      goto LABEL_27;
    goto LABEL_25;
  }
  if ( finishSetupInfo )
  {
LABEL_25:
    v62 = finishSetupInfo->fields.servantEquipFilterEventIdList;
    if ( !v62 )
      goto LABEL_53;
    v61 = v62->max_length != 0;
LABEL_27:
    if ( !v58 )
      goto LABEL_53;
    goto LABEL_28;
  }
  v61 = 0;
  if ( !v58 )
    goto LABEL_53;
LABEL_28:
  v58->fields.isBonusKind = v61;
  v63 = *p_sort;
  if ( !*p_sort )
    goto LABEL_53;
  if ( v63->fields.isBonusKind )
    ListViewSort__AlignBonusKind2(v63, *p_bonusEventIdList, 0LL, 0LL, 0LL, *p_bonusFinishEventIdList, 0LL);
  scaleChangeButton = (UnityEngine_Component_o *)this->fields.scaleChangeButton;
  if ( !scaleChangeButton )
    goto LABEL_53;
  v65 = UnityEngine_Component__get_gameObject(scaleChangeButton, 0LL);
  if ( !v65 )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive(v65, 1, 0LL);
  if ( !type )
  {
    SvtEqCombineListViewManager__SetDispActive(this, 0, v66);
    SvtEqCombineListViewManager__SetBtnEnable(this, 0, v76);
    SvtEqCombineListViewManager__SetServantList(this, 0, setupInfo, finishSetupInfo, v77);
    selectInfoLabel = (UnityEngine_Component_o *)this->fields.selectInfoLabel;
    if ( selectInfoLabel )
    {
      v79 = UnityEngine_Component__get_gameObject(selectInfoLabel, 0LL);
      if ( v79 )
      {
        UnityEngine_GameObject__SetActive(v79, 0, 0LL);
        goto LABEL_47;
      }
    }
    goto LABEL_53;
  }
  if ( type == 1 )
  {
    SvtEqCombineListViewManager__SetDispActive(this, 1, v66);
    SvtEqCombineListViewManager__SetBtnEnable(this, 0, v67);
    this->fields.selectMax = 20;
    SvtEqCombineListViewManager__SetServantList(this, 1, setupInfo, finishSetupInfo, v68);
    v69 = (UnityEngine_Component_o *)this->fields.selectInfoLabel;
    if ( v69 )
    {
      v70 = UnityEngine_Component__get_gameObject(v69, 0LL);
      if ( v70 )
      {
        UnityEngine_GameObject__SetActive(v70, 1, 0LL);
        getExpInfo = this->fields.getExpInfo;
        if ( getExpInfo )
        {
          UnityEngine_GameObject__SetActive(getExpInfo, 1, 0LL);
          spendQpInfoLabel = this->fields.spendQpInfoLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v73 = LocalizationManager__Get((System_String_o *)StringLiteral_9242/*"NEED_QP_INFO"*/, 0LL);
          if ( spendQpInfoLabel )
          {
            UILabel__set_text(spendQpInfoLabel, v73, 0LL);
            getExpInfoLabel = this->fields.getExpInfoLabel;
            v75 = LocalizationManager__Get((System_String_o *)StringLiteral_6831/*"GET_EXP_INFO"*/, 0LL);
            if ( getExpInfoLabel )
            {
              UILabel__set_text(getExpInfoLabel, v75, 0LL);
              goto LABEL_47;
            }
          }
        }
      }
    }
LABEL_53:
    sub_B170D4();
  }
LABEL_47:
  bonusFilterKindButton = (UnityEngine_Component_o *)this->fields.bonusFilterKindButton;
  if ( !bonusFilterKindButton )
    goto LABEL_53;
  v81 = UnityEngine_Component__get_gameObject(bonusFilterKindButton, 0LL);
  if ( !*p_sort || !v81 )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive(v81, (*p_sort)->fields.isBonusKind, 0LL);
  SvtEqCombineListViewManager__SetStatusKind(this, modeKind, v82);
  if ( !type )
    EventTutorialMaster__CheckTutorial(-1, 57, 0LL, 0, 0, 0, 0, 0LL);
}


void __fastcall SvtEqCombineListViewManager__CreateSorteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  SvtEqCombineListViewManager_c *v5; // x0
  __int64 v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  SvtEqCombineListViewManager_c *v13; // x8
  System_Int32_array **v14; // x19
  struct SvtEqCombineListViewManager_StaticFields *static_fields; // x0
  SvtEqCombineListViewManager_c *v16; // x0
  __int64 v17; // x9
  int v18; // w8
  unsigned __int64 v19; // x23
  struct SvtEqCombineListViewManager_StaticFields *v20; // x8
  unsigned int *sortStatusList; // x24
  System_String_o *SORT_SAVE_KEY; // x19
  System_String_o *v23; // x0
  System_String_o *v24; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  ListViewSort_o *v29; // x19
  __int64 v30; // x0
  __int64 v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  unsigned int *v38; // x0
  unsigned int v39; // w10
  int v40; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FD61D & 1) == 0 )
  {
    sub_B16FFC(&ListViewSort___TypeInfo, v1);
    sub_B16FFC(&ListViewSort_TypeInfo, v3);
    sub_B16FFC(&SvtEqCombineListViewManager_TypeInfo, v4);
    byte_40FD61D = 1;
  }
  v40 = 0;
  v5 = SvtEqCombineListViewManager_TypeInfo;
  if ( (BYTE3(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
    v5 = SvtEqCombineListViewManager_TypeInfo;
  }
  if ( !v5->static_fields->isInitSystem )
  {
    v6 = sub_B17014(ListViewSort___TypeInfo, 2LL, v2);
    v13 = SvtEqCombineListViewManager_TypeInfo;
    v14 = (System_Int32_array **)v6;
    if ( (BYTE3(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
      v13 = SvtEqCombineListViewManager_TypeInfo;
    }
    static_fields = v13->static_fields;
    static_fields->sortStatusList = (struct ListViewSort_array *)v14;
    sub_B16F98((BattleServantConfConponent_o *)&static_fields->sortStatusList, v14, v7, v8, v9, v10, v11, v12);
    v16 = SvtEqCombineListViewManager_TypeInfo;
    v17 = 0LL;
    v18 = (BYTE3(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr) >> 2) & 1;
    do
    {
      v19 = v17;
      if ( (v18 & 1) != 0 && !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = SvtEqCombineListViewManager_TypeInfo;
      }
      v20 = v16->static_fields;
      sortStatusList = (unsigned int *)v20->sortStatusList;
      SORT_SAVE_KEY = v20->SORT_SAVE_KEY;
      v40 = v19 + 1;
      v23 = System_Int32__ToString((int32_t)&v40, 0LL);
      v24 = System_String__Concat_43743732(SORT_SAVE_KEY, v23, 0LL);
      v29 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v25, v26, v27, v28);
      ListViewSort___ctor_30208480(v29, v24, 3, 0, 0LL);
      if ( !sortStatusList )
        sub_B170D4();
      if ( v29 )
      {
        v30 = sub_B170BC(v29, *(_QWORD *)(*(_QWORD *)sortStatusList + 64LL));
        if ( !v30 )
        {
          sub_B170F4(0LL);
          sub_B170A0();
        }
      }
      if ( v19 >= sortStatusList[6] )
      {
        sub_B17100(v30, v31, v32);
        sub_B170A0();
      }
      v38 = &sortStatusList[2 * v19];
      *((_QWORD *)v38 + 4) = v29;
      sub_B16F98((BattleServantConfConponent_o *)(v38 + 8), (System_Int32_array **)v29, v32, v33, v34, v35, v36, v37);
      v16 = SvtEqCombineListViewManager_TypeInfo;
      v17 = 1LL;
      v39 = WORD1(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
      v18 = (v39 >> 10) & 1;
    }
    while ( !v19 );
    if ( (v39 & 0x400) != 0 && !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
      v16 = SvtEqCombineListViewManager_TypeInfo;
    }
    v16->static_fields->isInitSystem = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__DecideDragSelect(
        SvtEqCombineListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  int32_t klass; // w9
  void *v19; // x0
  int v20; // w1
  __int64 v21; // x20
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FD65B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&index);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    sub_B16FFC(&SvtEqCombineListViewItem_TypeInfo, v9);
    byte_40FD65B = 1;
  }
  memset(&v22, 0, sizeof(v22));
  itemSortList = this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_24;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v11 = itemSortList->fields._items->m_Items[index];
  if ( !v11 )
    goto LABEL_24;
  v12 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v11->klass->_2.bitflags2 + 1) >= (unsigned int)v12
    && (SvtEqCombineListViewItem_c *)v11->klass->_2.typeHierarchy[v12 - 1] == SvtEqCombineListViewItem_TypeInfo )
  {
    if ( v11[2].fields.sortIndex < 1 )
      goto LABEL_22;
    isDragSelect = this->fields.isDragSelect;
    IsSelect = ListViewItem__get_IsSelect(v11, 0LL);
    if ( isDragSelect )
    {
      if ( !IsSelect )
      {
        selectSum = this->fields.selectSum;
        if ( selectSum < this->fields.selectMax )
        {
          v11->fields.selectNum = selectSum;
          ++this->fields.selectSum;
        }
      }
      goto LABEL_22;
    }
    if ( !IsSelect )
      goto LABEL_22;
    selectNum = v11->fields.selectNum;
    ListViewItem__set_IsSelect(v11, 0, 0LL);
    BYTE2(v11[1].fields.sortStr1) = 0;
    itemList = this->fields.itemList;
    --this->fields.selectSum;
    if ( itemList )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v22,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v22,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
      {
        if ( !v22.fields.current )
          sub_B170D4();
        klass = (int32_t)v22.fields.current[1].klass;
        if ( klass > selectNum )
          LODWORD(v22.fields.current[1].klass) = klass - 1;
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v22,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      goto LABEL_22;
    }
LABEL_24:
    sub_B170D4();
  }
  sub_B173C8(v11);
  if ( v20 != 1 )
    _Unwind_Resume(v19);
  v21 = *(_QWORD *)__cxa_begin_catch(v19);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v22,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( v21 )
    sub_B170A0();
LABEL_22:
  v11[2].fields.sortIndex = -1;
}


void __fastcall SvtEqCombineListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  SvtEqCombineListViewManager_c *v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  int v5; // w8
  SvtEqCombineListViewManager_c *v6; // x0
  unsigned int v7; // w20
  struct ListViewSort_array *sortStatusList; // x8
  ListViewSort_o *v9; // x0

  if ( (byte_40FD61E & 1) == 0 )
  {
    sub_B16FFC(&SvtEqCombineListViewManager_TypeInfo, v1);
    byte_40FD61E = 1;
  }
  v2 = SvtEqCombineListViewManager_TypeInfo;
  if ( (BYTE3(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
  }
  SvtEqCombineListViewManager__CreateSorteData((const MethodInfo *)v2);
  v5 = 0;
  do
  {
    v6 = SvtEqCombineListViewManager_TypeInfo;
    v7 = v5;
    if ( (BYTE3(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
      v6 = SvtEqCombineListViewManager_TypeInfo;
    }
    sortStatusList = v6->static_fields->sortStatusList;
    if ( !sortStatusList )
      goto LABEL_15;
    if ( v7 >= sortStatusList->max_length )
    {
      sub_B17100(v6, v3, v4);
      sub_B170A0();
    }
    v9 = sortStatusList->m_Items[v7];
    if ( !v9 )
LABEL_15:
      sub_B170D4();
    ListViewSort__DeleteContinueData(v9, 0LL);
    v5 = 1;
  }
  while ( !v7 );
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
    sub_B170D4();
  ListViewSort__Save(sort, 0LL);
  this->fields.bonusEventIdList = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.bonusEventIdList, 0LL, v4, v5, v6, v7, v8, v9);
  this->fields.bonusFinishEventIdList = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.bonusFinishEventIdList, 0LL, v10, v11, v12, v13, v14, v15);
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
  SvtEqCombineListViewManager__SetMode_31516708(this, 2, v6);
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
  SvtEqCombineListViewManager__SetMode_31516708(this, 2, v6);
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
  SvtEqCombineListViewManager__SetMode_31516708(this, 2, v5);
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
  __int64 v11; // x3
  __int64 v12; // x4
  System_Action_o *v13; // x21

  if ( (byte_40FD647 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&Method_SvtEqCombineListViewManager_EndCloseSelectFilterKind__, v6);
    byte_40FD647 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    SvtEqCombineListViewManager__SetFilterButtonImage(this, v7);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_SvtEqCombineListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseServantFilterSelectMenu(Instance, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__EndSelectSortKind(
        SvtEqCombineListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40FD64C & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_40FD64C = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
    sub_B16F98(p_requestCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    SvtEqCombineListViewManager_RequestCallbackFunc__Invoke(requestCallback, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall SvtEqCombineListViewManager__GetAmountSortValue(
        SvtEqCombineListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  int size; // w22
  int v9; // w23
  int64_t v10; // x21
  ListViewItem_o *v11; // x0
  __int64 v12; // x9
  SvtEqCombineListViewItem_o *v14; // x0
  ListViewSort_o *v15; // x1
  const MethodInfo *v16; // x2

  if ( (byte_40FD64F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_B16FFC(&SvtEqCombineListViewItem_TypeInfo, v6);
    byte_40FD64F = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_B170D4();
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v11 = itemList->fields._items->m_Items[v9];
      if ( !v11 )
        goto LABEL_15;
      v12 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v11->klass->_2.bitflags2 + 1) < (unsigned int)v12
        || (SvtEqCombineListViewItem_c *)v11->klass->_2.typeHierarchy[v12 - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        break;
      }
      ++v9;
      if ( LODWORD(v11[1].fields.sortValue0B) == svtId )
        ++v10;
      if ( v9 >= size )
        return v10;
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_15;
    }
    sub_B173C8(v11);
    return SvtEqCombineListViewItem__IsMatchFilter(v14, v15, v16);
  }
}


int32_t __fastcall SvtEqCombineListViewManager__GetBaseCollectionLv(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v9; // q1
  UserServantCollectionMaster_o *v10; // x20
  int64_t v11; // x0
  struct UserServantEntity_o *v12; // x8
  int64_t v13; // x19
  __int64 v14; // x21
  __int64 v15; // x22
  int32_t v16; // w0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_40FD62D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FD62D = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_16;
  v9 = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.fakeValue;
  v10 = (UserServantCollectionMaster_o *)MasterData_WarQuestSelectionMaster;
  *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v20.fields.fakeValue = v9;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v19 = v20;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v19, 0LL);
  v12 = this->fields.baseUsrSvtData;
  if ( !v12 )
    goto LABEL_16;
  v13 = v11;
  v15 = *(_QWORD *)&v12->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&v12->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v15;
  *(_QWORD *)&v21.fields.fakeValue = v14;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v21, 0LL);
  if ( !v10 )
LABEL_16:
    sub_B170D4();
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v10, v13, v16, 0LL);
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
  UserServantEntity_o *v7; // x0

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
        sub_B17100(this, list, method);
        sub_B170A0();
      }
      v7 = list->m_Items[v5];
      if ( !v7 )
        break;
      this = (SvtEqCombineListViewManager_o *)UserServantEntity__IsFriendShipSvtEquip(v7, 0LL);
      max_length = list->max_length;
      ++v5;
      v6 += (unsigned __int8)this & 1;
      if ( v5 >= max_length )
        return v6;
    }
LABEL_11:
    sub_B170D4();
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

  if ( (byte_40FD62E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B16FFC(&SvtEqCombineListViewItem_TypeInfo, v5);
    byte_40FD62E = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  result = (SvtEqCombineListViewItem_o *)itemList->fields._items->m_Items[index];
  if ( result )
  {
    v8 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v8
      || (SvtEqCombineListViewItem_c *)result->klass->_2.typeHierarchy[v8 - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      sub_B173C8(result);
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
  WebViewManager_o *Instance; // x0
  BattleServantConfConponent_o *p_baseUsrSvtData; // x19
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  BattleServantConfConponent_c *klass; // x8
  Il2CppType byval_arg; // q1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v11; // x20
  int64_t v12; // x0
  System_Int32_array **Entity; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-30h]

  if ( (byte_40FD62C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FD62C = 1;
  }
  if ( !this->fields.baseUsrSvtData )
    return 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  p_baseUsrSvtData = (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  klass = p_baseUsrSvtData->klass;
  if ( !p_baseUsrSvtData->klass )
    goto LABEL_13;
  byval_arg = klass->_1.byval_arg;
  v11 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)MasterData_WarQuestSelectionMaster;
  *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
  *(Il2CppType *)&v22.fields.fakeValue = byval_arg;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v21 = v22;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v21, 0LL);
  if ( !v11 )
LABEL_13:
    sub_B170D4();
  Entity = (System_Int32_array **)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                    v11,
                                    v12,
                                    (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_baseUsrSvtData->klass = (BattleServantConfConponent_c *)Entity;
  sub_B16F98(p_baseUsrSvtData, Entity, v14, v15, v16, v17, v18, v19);
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
  __int64 v3; // x3
  __int64 v4; // x4
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  int size; // w22
  unsigned int v25; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v26; // x21
  __int64 v27; // x9
  SvtEqCombineListViewManager___c_c *v28; // x0
  struct SvtEqCombineListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__139_0; // x21
  Il2CppObject *v31; // x22
  struct SvtEqCombineListViewManager___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  int v39; // w8
  int v40; // w22
  __int64 v41; // x21
  unsigned int v42; // w23
  __int64 v43; // x8
  System_Collections_Generic_List_SvtEqCombineListViewItem__o *result; // x0
  SvtEqCombineListViewManager_o *v45; // x0
  const MethodInfo *v46; // x1

  if ( (byte_40FD63A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_SvtEqCombineListViewItem___ctor__, method);
    sub_B16FFC(&System_Comparison_SvtEqCombineListViewItem__TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Sort__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v13);
    sub_B16FFC(&System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo, v14);
    sub_B16FFC(&SvtEqCombineListViewItem_TypeInfo, v15);
    sub_B16FFC(&Method_SvtEqCombineListViewManager___c__GetSelectedMaterialList_b__139_0__, v16);
    sub_B16FFC(&SvtEqCombineListViewManager___c_TypeInfo, v17);
    byte_40FD63A = 1;
  }
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_39;
  size = itemList->fields._size;
  if ( size < 1 )
  {
LABEL_17:
    v28 = SvtEqCombineListViewManager___c_TypeInfo;
    if ( (BYTE3(SvtEqCombineListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SvtEqCombineListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager___c_TypeInfo);
      v28 = SvtEqCombineListViewManager___c_TypeInfo;
    }
    static_fields = v28->static_fields;
    _9__139_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__139_0;
    if ( !_9__139_0 )
    {
      if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        static_fields = SvtEqCombineListViewManager___c_TypeInfo->static_fields;
      }
      v31 = (Il2CppObject *)static_fields->__9;
      _9__139_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                              System_Comparison_SvtEqCombineListViewItem__TypeInfo,
                                                                              v19,
                                                                              v20,
                                                                              v21,
                                                                              v22);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__139_0,
        v31,
        Method_SvtEqCombineListViewManager___c__GetSelectedMaterialList_b__139_0__,
        (const MethodInfo_25BFD48 *)Method_System_Comparison_SvtEqCombineListViewItem___ctor__);
      v32 = SvtEqCombineListViewManager___c_TypeInfo->static_fields;
      v32->__9__139_0 = (struct System_Comparison_SvtEqCombineListViewItem__o *)_9__139_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v32->__9__139_0,
        (System_Int32_array **)_9__139_0,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
    }
    if ( v18 )
    {
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v18,
        (System_Comparison_T__o *)_9__139_0,
        (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Sort__);
      v39 = v18->fields._size;
      if ( v39 < 1 )
        return (System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v18;
      v40 = 0;
      v41 = 4LL;
      while ( 1 )
      {
        v42 = v41 - 4;
        if ( v39 <= (unsigned int)(v41 - 4) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v43 = *((_QWORD *)&v18->fields._items->obj.klass + v41);
        if ( !v43 )
          break;
        if ( *(_DWORD *)(v43 + 156) > v40 )
        {
          if ( v18->fields._size <= v42 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v40 = *(_DWORD *)(v43 + 156);
          if ( v18->fields._size <= v42 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          this->fields.lastSelectIndex = *(_DWORD *)(v43 + 24);
        }
        v39 = v18->fields._size;
        if ( (int)++v41 - 4 >= v39 )
          return (System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v18;
      }
    }
LABEL_39:
    sub_B170D4();
  }
  v25 = 0;
  while ( 1 )
  {
    if ( itemList->fields._size <= v25 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v26 = (EventMissionProgressRequest_Argument_ProgressData_o *)itemList->fields._items->m_Items[v25];
    if ( !v26 )
      goto LABEL_39;
    v27 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v26->klass->_2.bitflags2 + 1) < (unsigned int)v27
      || (SvtEqCombineListViewItem_c *)v26->klass->_2.typeHierarchy[v27 - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v26, 0LL) )
    {
      if ( !v18 )
        goto LABEL_39;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v18,
        v26,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Add__);
    }
    if ( (int)++v25 >= size )
      goto LABEL_17;
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_39;
  }
  sub_B173C8(v26);
  SvtEqCombineListViewManager__SetSelectedMaterialInfo(v45, v46);
  return result;
}


bool __fastcall SvtEqCombineListViewManager__GetSwapChoiceList(
        SvtEqCombineListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_long__o *v15; // x23
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_List_long__o *v20; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  int size; // w24
  unsigned int v29; // w25
  ListViewItem_o *v30; // x0
  __int64 v31; // x9
  _OWORD *monitor; // x8
  __int128 v33; // q0
  int64_t v34; // x0
  const MethodInfo_2F164A0 *v35; // x2
  int64_t v36; // x1
  System_Collections_Generic_List_long__o *v37; // x0
  __int128 v38; // q0
  int64_t v39; // x0
  System_Int64_array *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int64_array *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  bool result; // w0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  SvtEqCombineListViewManager_o *v61; // x0
  const MethodInfo *v62; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+50h] [xbp-70h]

  if ( (byte_40FD652 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, choiceList);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_B16FFC(&SvtEqCombineListViewItem_TypeInfo, v14);
    byte_40FD652 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     choiceList,
                                                     unchoiceList,
                                                     method,
                                                     v4);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  v20 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v16,
                                                     v17,
                                                     v18,
                                                     v19);
  System_Collections_Generic_List_long____ctor(
    v20,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( size < 1 )
  {
LABEL_28:
    if ( v15 && v20 )
    {
      if ( v20->fields._size + v15->fields._size < 1 )
      {
        *choiceList = 0LL;
        sub_B16F98((BattleServantConfConponent_o *)choiceList, 0LL, v21, v22, v23, v24, v25, v26);
        *unchoiceList = 0LL;
        sub_B16F98((BattleServantConfConponent_o *)unchoiceList, 0LL, v55, v56, v57, v58, v59, v60);
        return 0;
      }
      else
      {
        v40 = System_Collections_Generic_List_long___ToArray(
                v15,
                (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
        *choiceList = v40;
        sub_B16F98((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v40, v41, v42, v43, v44, v45, v46);
        v47 = System_Collections_Generic_List_long___ToArray(
                v20,
                (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
        *unchoiceList = v47;
        sub_B16F98(
          (BattleServantConfConponent_o *)unchoiceList,
          (System_Int32_array **)v47,
          v48,
          v49,
          v50,
          v51,
          v52,
          v53);
        return 1;
      }
    }
LABEL_33:
    sub_B170D4();
  }
  v29 = 0;
  while ( 1 )
  {
    if ( itemList->fields._size <= v29 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v30 = itemList->fields._items->m_Items[v29];
    if ( !v30 )
      goto LABEL_33;
    v31 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v31
      || (SvtEqCombineListViewItem_c *)v30->klass->_2.typeHierarchy[v31 - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    monitor = v30[1].monitor;
    if ( monitor && BYTE2(v30[2].fields.index) )
    {
      if ( BYTE5(v30[1].fields.sortValue1) )
      {
        v33 = monitor[2];
        *(_OWORD *)&v66.fields.currentCryptoKey = monitor[1];
        *(_OWORD *)&v66.fields.fakeValue = v33;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v65 = v66;
        v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v65, 0LL);
        if ( !v20 )
          goto LABEL_33;
        v35 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
        v36 = v34;
        v37 = v20;
      }
      else
      {
        v38 = monitor[2];
        *(_OWORD *)&v66.fields.currentCryptoKey = monitor[1];
        *(_OWORD *)&v66.fields.fakeValue = v38;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v64 = v66;
        v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v64, 0LL);
        if ( !v15 )
          goto LABEL_33;
        v35 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
        v36 = v39;
        v37 = v15;
      }
      System_Collections_Generic_List_long___Add(v37, v36, v35);
    }
    if ( (int)++v29 >= size )
      goto LABEL_28;
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_33;
  }
  sub_B173C8(v30);
  SvtEqCombineListViewManager__OnClickNormalStatus(v61, v62);
  return result;
}


bool __fastcall SvtEqCombineListViewManager__GetSwapLockList(
        SvtEqCombineListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_long__o *v15; // x23
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_List_long__o *v20; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  int size; // w24
  unsigned int v29; // w25
  ListViewItem_o *v30; // x0
  __int64 v31; // x9
  _OWORD *monitor; // x8
  __int128 v33; // q0
  int64_t v34; // x0
  const MethodInfo_2F164A0 *v35; // x2
  int64_t v36; // x1
  System_Collections_Generic_List_long__o *v37; // x0
  __int128 v38; // q0
  int64_t v39; // x0
  System_Int64_array *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int64_array *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  SvtEqCombineListViewManager_o *v61; // x0
  System_Int64_array **v62; // x1
  System_Int64_array **v63; // x2
  const MethodInfo *v64; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+50h] [xbp-70h]

  if ( (byte_40FD651 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, lockList);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_B16FFC(&SvtEqCombineListViewItem_TypeInfo, v14);
    byte_40FD651 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     lockList,
                                                     unlockList,
                                                     method,
                                                     v4);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  v20 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v16,
                                                     v17,
                                                     v18,
                                                     v19);
  System_Collections_Generic_List_long____ctor(
    v20,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( size < 1 )
  {
LABEL_28:
    if ( v15 && v20 )
    {
      if ( v20->fields._size + v15->fields._size < 1 )
      {
        *lockList = 0LL;
        sub_B16F98((BattleServantConfConponent_o *)lockList, 0LL, v21, v22, v23, v24, v25, v26);
        *unlockList = 0LL;
        sub_B16F98((BattleServantConfConponent_o *)unlockList, 0LL, v55, v56, v57, v58, v59, v60);
        return 0;
      }
      else
      {
        v40 = System_Collections_Generic_List_long___ToArray(
                v15,
                (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
        *lockList = v40;
        sub_B16F98((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v40, v41, v42, v43, v44, v45, v46);
        v47 = System_Collections_Generic_List_long___ToArray(
                v20,
                (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
        *unlockList = v47;
        sub_B16F98((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v47, v48, v49, v50, v51, v52, v53);
        return 1;
      }
    }
LABEL_33:
    sub_B170D4();
  }
  v29 = 0;
  while ( 1 )
  {
    if ( itemList->fields._size <= v29 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v30 = itemList->fields._items->m_Items[v29];
    if ( !v30 )
      goto LABEL_33;
    v31 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v31
      || (SvtEqCombineListViewItem_c *)v30->klass->_2.typeHierarchy[v31 - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    monitor = v30[1].monitor;
    if ( monitor && BYTE1(v30[2].fields.index) )
    {
      if ( LOBYTE(v30[1].fields.sortValue1) )
      {
        v33 = monitor[2];
        *(_OWORD *)&v68.fields.currentCryptoKey = monitor[1];
        *(_OWORD *)&v68.fields.fakeValue = v33;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v67 = v68;
        v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v67, 0LL);
        if ( !v20 )
          goto LABEL_33;
        v35 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
        v36 = v34;
        v37 = v20;
      }
      else
      {
        v38 = monitor[2];
        *(_OWORD *)&v68.fields.currentCryptoKey = monitor[1];
        *(_OWORD *)&v68.fields.fakeValue = v38;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v66 = v68;
        v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v66, 0LL);
        if ( !v15 )
          goto LABEL_33;
        v35 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
        v36 = v39;
        v37 = v15;
      }
      System_Collections_Generic_List_long___Add(v37, v36, v35);
    }
    if ( (int)++v29 >= size )
      goto LABEL_28;
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_33;
  }
  sub_B173C8(v30);
  return SvtEqCombineListViewManager__GetSwapChoiceList(v61, v62, v63, v64);
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
  __int64 v2; // x2
  SvtEqCombineListViewManager_c *v3; // x0
  unsigned int i; // w20
  struct ListViewSort_array *sortStatusList; // x8
  ListViewSort_o *v6; // x0

  if ( (byte_40FD61F & 1) == 0 )
  {
    sub_B16FFC(&SvtEqCombineListViewManager_TypeInfo, v1);
    byte_40FD61F = 1;
  }
  v3 = SvtEqCombineListViewManager_TypeInfo;
  if ( (BYTE3(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
    v3 = SvtEqCombineListViewManager_TypeInfo;
  }
  if ( v3->static_fields->isInitSystem )
  {
    for ( i = 0; ; i = 1 )
    {
      if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v3);
        v3 = SvtEqCombineListViewManager_TypeInfo;
      }
      sortStatusList = v3->static_fields->sortStatusList;
      if ( !sortStatusList )
        goto LABEL_17;
      if ( i >= sortStatusList->max_length )
      {
        sub_B17100(v3, v1, v2);
        sub_B170A0();
      }
      v6 = sortStatusList->m_Items[i];
      if ( !v6 )
LABEL_17:
        sub_B170D4();
      ListViewSort__InitLoad(v6, 0LL);
      if ( i )
        break;
      v3 = SvtEqCombineListViewManager_TypeInfo;
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  SvtEqCombineListViewItem_c *v19; // x1
  Il2CppObject *current; // x21
  __int64 v21; // x9
  _OWORD *monitor; // x8
  _QWORD *p_monitor; // x22
  __int128 v24; // q0
  int64_t v25; // x0
  __int128 v26; // q0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  int64_t UserSvtId; // x0
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x1
  UnityEngine_Object_o *v36; // x22
  void *v37; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_40FD62F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B16FFC(&SvtEqCombineListViewItem_TypeInfo, v13);
    byte_40FD62F = 1;
  }
  memset(&v41, 0, sizeof(v41));
  if ( !this->fields.itemList )
    return;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( usrSvtId < 1 )
  {
    Entity = 0LL;
  }
  else
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
LABEL_39:
      sub_B170D4();
    }
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               MasterData_WarQuestSelectionMaster,
               usrSvtId,
               (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_39;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v41.fields.current = (Il2CppObject *)v40.fields.fakeValue;
  *(_OWORD *)&v41.fields.list = *(_OWORD *)&v40.fields.currentCryptoKey;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v41,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v41.fields.current;
    if ( v41.fields.current )
    {
      v19 = SvtEqCombineListViewItem_TypeInfo;
      v21 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v41.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v21
        || (SvtEqCombineListViewItem_c *)v41.fields.current->klass->_2.typeHierarchy[v21 - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        sub_B173C8(v41.fields.current);
LABEL_34:
        sub_B170D4();
      }
    }
    if ( Entity )
    {
      if ( !v41.fields.current )
        sub_B170D4();
      p_monitor = &v41.fields.current[7].monitor;
      monitor = v41.fields.current[7].monitor;
      if ( !monitor )
        sub_B170D4();
      v24 = monitor[2];
      *(_OWORD *)&v40.fields.currentCryptoKey = monitor[1];
      *(_OWORD *)&v40.fields.fakeValue = v24;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v39 = v40;
      v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v39, 0LL);
      v26 = *(_OWORD *)&Entity->fields.id.fields.fakeValue;
      *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v38.fields.fakeValue = v26;
      if ( v25 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v38, 0LL) )
      {
        *p_monitor = Entity;
        sub_B16F98(
          (BattleServantConfConponent_o *)&current[7].monitor,
          (System_Int32_array **)Entity,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32);
      }
    }
    else if ( !v41.fields.current )
    {
      sub_B170D4();
    }
    UserSvtId = SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)current, (const MethodInfo *)v19);
    if ( !SelfUserGame )
      goto LABEL_34;
    BYTE4(current[10].klass) = UserSvtId == SelfUserGame->fields.favoriteUserSvtId;
    SvtEqCombineListViewItem__ModifyLockItem((SvtEqCombineListViewItem_o *)current, v34);
    SvtEqCombineListViewItem__ModifyChoiceItem((SvtEqCombineListViewItem_o *)current, v35);
    v36 = (UnityEngine_Object_o *)current[6].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v36, 0LL, 0LL) )
    {
      v37 = current[6].monitor;
      if ( !v37 )
        sub_B170D4();
      (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v37 + 392LL))(
        v37,
        current,
        *(_QWORD *)(*(_QWORD *)v37 + 400LL));
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v41,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__ModifyList(
        SvtEqCombineListViewManager_o *this,
        bool isIconSizeChange,
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
  __int64 v18; // x1
  __int64 v19; // x1
  int32_t currentType; // w8
  UnityEngine_Component_o *levelUpInfoImg; // x0
  UnityEngine_GameObject_o *v22; // x0
  UserServantMaster_o *v23; // x0
  UserServantEntity_array *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  int64_t ServantEquipList; // x21
  UnityEngine_Component_o *v30; // x0
  UnityEngine_GameObject_o *v31; // x0
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v32; // x22
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v37; // x23
  int64_t v38; // x0
  SvtEqCombineListViewItem_c *v39; // x1
  __int64 v40; // x2
  int v41; // w8
  __int64 v42; // x26
  __int64 v43; // x24
  __int128 v44; // q0
  int64_t v45; // x0
  struct UserServantEntity_o *v46; // x8
  __int128 v47; // q0
  int64_t v48; // x25
  UserServantMaster_o *userServantMaster; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v54; // x22
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v59; // x23
  int size; // w8
  int32_t i; // w21
  WarBoardAIRoute_RouteData_o *v62; // x8
  __int128 v63; // q0
  int64_t v64; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v66; // q0
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *selectedMtSvtList_k__BackingField; // x20
  signed __int64 v68; // x8
  unsigned __int64 v69; // x25
  unsigned int v70; // w27
  SvtEqCombineListViewItem_o *v71; // x20
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v73; // q1
  __int64 v74; // x28
  int64_t v75; // x0
  __int128 v76; // q0
  int64_t v77; // x24
  UnityEngine_Component_o *emptyListNoticeLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 v81; // x24
  int v82; // w26
  unsigned int v83; // w25
  __int64 v84; // x8
  __int128 v85; // q0
  int64_t v86; // x23
  __int64 v87; // x20
  struct System_Collections_Generic_List_ListViewItem__o *v88; // x22
  SvtEqCombineListViewItem_o *v89; // x22
  __int64 v90; // x9
  struct UserServantEntity_o *v91; // x8
  __int128 v92; // q0
  struct UserServantEntity_o *v93; // x8
  __int128 v94; // q0
  int64_t v95; // x0
  const MethodInfo *v96; // x5
  SvtEqCombineListViewManager_o *v97; // x0
  ListViewObject_o *v98; // x1
  ListViewItem_o *v99; // x2
  const MethodInfo *v100; // x3
  bool isIconSizeChangea; // [xsp+Ch] [xbp-1A4h]
  bool isIconSizeChangeb; // [xsp+Ch] [xbp-1A4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v103; // [xsp+10h] [xbp-1A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v104; // [xsp+30h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v105; // [xsp+50h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v106; // [xsp+70h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v107; // [xsp+90h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v108; // [xsp+B0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v109; // [xsp+D0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v110; // [xsp+F0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v111; // [xsp+110h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v112; // [xsp+130h] [xbp-80h]

  if ( (byte_40FD632 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, isIconSizeChange);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__Remove__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity___ctor___66750736, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v16);
    sub_B16FFC(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v17);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18);
    sub_B16FFC(&SvtEqCombineListViewItem_TypeInfo, v19);
    byte_40FD632 = 1;
  }
  currentType = this->fields.currentType;
  isIconSizeChangea = isIconSizeChange;
  if ( currentType == 1 )
  {
    userServantMaster = this->fields.userServantMaster;
    if ( !userServantMaster )
      goto LABEL_106;
    ServantEquipList = (int64_t)UserServantMaster__getServantEquipList(userServantMaster, 0LL);
    v54 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                            System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                            v50,
                                                                            v51,
                                                                            v52,
                                                                            v53);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v54,
      (System_Collections_Generic_IEnumerable_T__o *)ServantEquipList,
      (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_UserServantEntity___ctor___66750736);
    v59 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                                                    v55,
                                                                                                    v56,
                                                                                                    v57,
                                                                                                    v58);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v59,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( this->fields.baseUsrSvtData )
    {
      if ( !v54 )
        goto LABEL_106;
      size = v54->fields._size;
      if ( size >= 1 )
      {
        for ( i = 0; i < size; ++i )
        {
          if ( size <= (unsigned int)i )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v62 = v54->fields._items->m_Items[i];
          if ( !v62 )
            goto LABEL_106;
          v63 = *(_OWORD *)&v62->fields.baseSquare;
          *(_OWORD *)&v112.fields.currentCryptoKey = *(_OWORD *)&v62->fields.flagNow;
          *(_OWORD *)&v112.fields.fakeValue = v63;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v109 = v112;
          v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v109, 0LL);
          baseUsrSvtData = this->fields.baseUsrSvtData;
          if ( !baseUsrSvtData )
            goto LABEL_106;
          v66 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
          *(_OWORD *)&v108.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v108.fields.fakeValue = v66;
          if ( v64 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v108, 0LL) )
            System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
              (System_Collections_Generic_List_XWeaponTrail_Element__o *)v54,
              i,
              (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
          size = v54->fields._size;
        }
      }
      v38 = (int64_t)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v54,
                       (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      ServantEquipList = v38;
    }
    selectedMtSvtList_k__BackingField = this->fields._selectedMtSvtList_k__BackingField;
    if ( selectedMtSvtList_k__BackingField )
    {
      LODWORD(v68) = selectedMtSvtList_k__BackingField->fields._size;
      if ( (int)v68 >= 1 )
      {
        v69 = 0LL;
        while ( 1 )
        {
          if ( v69 >= (unsigned int)v68 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          if ( !v54 )
            goto LABEL_106;
          if ( v54->fields._size >= 1 )
            break;
LABEL_66:
          selectedMtSvtList_k__BackingField = this->fields._selectedMtSvtList_k__BackingField;
          if ( !selectedMtSvtList_k__BackingField )
            goto LABEL_106;
          v68 = selectedMtSvtList_k__BackingField->fields._size;
          if ( (__int64)++v69 >= v68 )
          {
            if ( !v59 )
              goto LABEL_106;
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v59,
              (System_Collections_Generic_IEnumerable_T__o *)v54,
              (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
            ServantEquipList = (int64_t)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v59,
                                          (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
            goto LABEL_70;
          }
        }
        v70 = 0;
        v71 = selectedMtSvtList_k__BackingField->fields._items->m_Items[v69];
        while ( 1 )
        {
          if ( !ServantEquipList )
            goto LABEL_106;
          if ( v70 >= *(_DWORD *)(ServantEquipList + 24) )
            break;
          if ( !v71 )
            goto LABEL_106;
          userSvtEntity = v71->fields.userSvtEntity;
          if ( !userSvtEntity )
            goto LABEL_106;
          v73 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
          v74 = *(_QWORD *)(ServantEquipList + 8LL * (int)v70 + 32);
          *(_OWORD *)&v112.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v112.fields.fakeValue = v73;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v107 = v112;
          v75 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v107, 0LL);
          if ( !v74 )
            goto LABEL_106;
          v76 = *(_OWORD *)(v74 + 32);
          v77 = v75;
          *(_OWORD *)&v106.fields.currentCryptoKey = *(_OWORD *)(v74 + 16);
          *(_OWORD *)&v106.fields.fakeValue = v76;
          v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v106, 0LL);
          if ( v77 == v38 )
          {
            if ( !v59 )
              goto LABEL_106;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v59,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v71->fields.userSvtEntity,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
            v38 = System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                    (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v54,
                    (WarBoardManager_TaskList_o *)v71->fields.userSvtEntity,
                    (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
          }
          if ( (signed int)++v70 >= v54->fields._size )
            goto LABEL_66;
        }
LABEL_104:
        sub_B17100(v38, v39, v40);
        sub_B170A0();
      }
    }
LABEL_70:
    if ( !ServantEquipList )
      goto LABEL_106;
    if ( !*(_QWORD *)(ServantEquipList + 24) )
    {
      emptyListNoticeLabel = (UnityEngine_Component_o *)this->fields.emptyListNoticeLabel;
      if ( !emptyListNoticeLabel )
        goto LABEL_106;
      gameObject = UnityEngine_Component__get_gameObject(emptyListNoticeLabel, 0LL);
      if ( !gameObject )
        goto LABEL_106;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    }
  }
  else
  {
    if ( currentType )
      goto LABEL_106;
    levelUpInfoImg = (UnityEngine_Component_o *)this->fields.levelUpInfoImg;
    if ( !levelUpInfoImg )
      goto LABEL_106;
    v22 = UnityEngine_Component__get_gameObject(levelUpInfoImg, 0LL);
    if ( !v22 )
      goto LABEL_106;
    UnityEngine_GameObject__SetActive(v22, 0, 0LL);
    v23 = this->fields.userServantMaster;
    if ( !v23 )
      goto LABEL_106;
    v24 = UserServantMaster__getServantEquipList(v23, 0LL);
    if ( !v24 )
      goto LABEL_106;
    ServantEquipList = (int64_t)v24;
    if ( !*(_QWORD *)&v24->max_length )
    {
      v30 = (UnityEngine_Component_o *)this->fields.emptyListNoticeLabel;
      if ( !v30 )
        goto LABEL_106;
      v31 = UnityEngine_Component__get_gameObject(v30, 0LL);
      if ( !v31 )
        goto LABEL_106;
      UnityEngine_GameObject__SetActive(v31, 1, 0LL);
    }
    v32 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                            System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                            v25,
                                                                            v26,
                                                                            v27,
                                                                            v28);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v32,
      (System_Collections_Generic_IEnumerable_T__o *)ServantEquipList,
      (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_UserServantEntity___ctor___66750736);
    v37 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                                                    v33,
                                                                                                    v34,
                                                                                                    v35,
                                                                                                    v36);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v37,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( this->fields.baseUsrSvtData )
    {
      v41 = *(_DWORD *)(ServantEquipList + 24);
      if ( v41 >= 1 )
      {
        v42 = 0LL;
        while ( (unsigned int)v42 < v41 )
        {
          v43 = *(_QWORD *)(ServantEquipList + 32 + 8 * v42);
          if ( !v43 )
            goto LABEL_106;
          v44 = *(_OWORD *)(v43 + 32);
          *(_OWORD *)&v112.fields.currentCryptoKey = *(_OWORD *)(v43 + 16);
          *(_OWORD *)&v112.fields.fakeValue = v44;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v111 = v112;
          v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v111, 0LL);
          v46 = this->fields.baseUsrSvtData;
          if ( !v46 )
            goto LABEL_106;
          v47 = *(_OWORD *)&v46->fields.id.fields.fakeValue;
          v48 = v45;
          *(_OWORD *)&v110.fields.currentCryptoKey = *(_OWORD *)&v46->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v110.fields.fakeValue = v47;
          v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v110, 0LL);
          if ( v48 == v38 )
          {
            if ( !v37 )
              goto LABEL_106;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v37,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v43,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
            if ( !v32 )
              goto LABEL_106;
            v38 = System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                    (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v32,
                    (WarBoardManager_TaskList_o *)v43,
                    (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
          }
          v41 = *(_DWORD *)(ServantEquipList + 24);
          if ( (int)++v42 >= v41 )
            goto LABEL_27;
        }
        goto LABEL_104;
      }
LABEL_27:
      if ( !v37 )
        goto LABEL_106;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v37,
        (System_Collections_Generic_IEnumerable_T__o *)v32,
        (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      ServantEquipList = (int64_t)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v37,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      if ( !ServantEquipList )
        goto LABEL_106;
    }
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_106;
  v81 = *(_QWORD *)(ServantEquipList + 24);
  if ( (int)v81 >= 1 )
  {
    v82 = itemList->fields._size;
    v83 = 0;
    isIconSizeChangeb = isIconSizeChangea;
    while ( 1 )
    {
      v84 = *(_QWORD *)(ServantEquipList + 8LL * (int)v83 + 32);
      if ( !v84 )
        goto LABEL_106;
      v85 = *(_OWORD *)(v84 + 32);
      *(_OWORD *)&v112.fields.currentCryptoKey = *(_OWORD *)(v84 + 16);
      *(_OWORD *)&v112.fields.fakeValue = v85;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v105 = v112;
      v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v105, 0LL);
      if ( v82 >= 1 )
        break;
LABEL_102:
      if ( (int)++v83 >= (int)v81 )
        return;
      if ( v83 >= *(_DWORD *)(ServantEquipList + 24) )
        goto LABEL_104;
    }
    v86 = v38;
    v87 = 0LL;
    while ( 1 )
    {
      v88 = this->fields.itemList;
      if ( !v88 )
        goto LABEL_106;
      if ( v88->fields._size <= (unsigned int)v87 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v89 = (SvtEqCombineListViewItem_o *)v88->fields._items->m_Items[v87];
      if ( !v89 )
        goto LABEL_106;
      v39 = SvtEqCombineListViewItem_TypeInfo;
      v90 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v89->klass->_2.bitflags2 + 1) < (unsigned int)v90
        || (SvtEqCombineListViewItem_c *)v89->klass->_2.typeHierarchy[v90 - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        break;
      }
      v91 = v89->fields.userSvtEntity;
      if ( v91 )
      {
        v92 = *(_OWORD *)&v91->fields.id.fields.fakeValue;
        *(_OWORD *)&v112.fields.currentCryptoKey = *(_OWORD *)&v91->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v112.fields.fakeValue = v92;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v104 = v112;
        v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v104, 0LL);
        if ( v38 == v86 )
        {
          v93 = v89->fields.userSvtEntity;
          if ( v93 )
          {
            v94 = *(_OWORD *)&v93->fields.id.fields.fakeValue;
            *(_OWORD *)&v112.fields.currentCryptoKey = *(_OWORD *)&v93->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v112.fields.fakeValue = v94;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v103 = v112;
            v95 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v103, 0LL);
            SvtEqCombineListViewManager__ModifyLockItem_31514020(this, v89, v95, 1, isIconSizeChangeb, v96);
            goto LABEL_102;
          }
LABEL_106:
          sub_B170D4();
        }
      }
      if ( (int)++v87 >= v82 )
        goto LABEL_102;
    }
    sub_B173C8(v89);
    SvtEqCombineListViewManager__SetObjectItem(v97, v98, v99, v100);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x21
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  bool v21; // w20
  SvtEqCombineListViewItem_c *v22; // x1
  Il2CppObject *current; // x22
  __int64 v24; // x9
  _OWORD *monitor; // x8
  _QWORD *p_monitor; // x23
  __int128 v27; // q0
  int64_t v28; // x0
  __int128 v29; // q0
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

  if ( (byte_40FD630 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B16FFC(&SvtEqCombineListViewItem_TypeInfo, v16);
    byte_40FD630 = 1;
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
LABEL_44:
      sub_B170D4();
    }
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               MasterData_WarQuestSelectionMaster,
               usrSvtId,
               (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_44;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v43,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v44.fields.current = (Il2CppObject *)v43.fields.fakeValue;
  *(_OWORD *)&v44.fields.list = *(_OWORD *)&v43.fields.currentCryptoKey;
  v21 = !isIconSizeChange && isInit;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v44,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v44.fields.current;
    if ( v44.fields.current )
    {
      v22 = SvtEqCombineListViewItem_TypeInfo;
      v24 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v44.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v24
        || (SvtEqCombineListViewItem_c *)v44.fields.current->klass->_2.typeHierarchy[v24 - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        sub_B173C8(v44.fields.current);
LABEL_38:
        sub_B170D4();
      }
    }
    if ( Entity )
    {
      if ( !v44.fields.current )
        sub_B170D4();
      p_monitor = &v44.fields.current[7].monitor;
      monitor = v44.fields.current[7].monitor;
      if ( !monitor )
        goto LABEL_38;
      v27 = monitor[2];
      *(_OWORD *)&v43.fields.currentCryptoKey = monitor[1];
      *(_OWORD *)&v43.fields.fakeValue = v27;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v42 = v43;
      v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v42, 0LL);
      v29 = *(_OWORD *)&Entity->fields.id.fields.fakeValue;
      *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v41.fields.fakeValue = v29;
      if ( v28 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v41, 0LL) )
      {
        *p_monitor = Entity;
        sub_B16F98(
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
    if ( v21 )
    {
      if ( !current )
        sub_B170D4();
      SvtEqCombineListViewItem__ModifyLockItem((SvtEqCombineListViewItem_o *)current, (const MethodInfo *)v22);
      SvtEqCombineListViewItem__ModifyChoiceItem((SvtEqCombineListViewItem_o *)current, v36);
    }
    else if ( !current )
    {
      sub_B170D4();
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
        sub_B170D4();
      (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v38 + 392LL))(
        v38,
        current,
        *(_QWORD *)(*(_QWORD *)v38 + 400LL));
      if ( isIconSizeChange )
      {
        v39 = (ListViewObject_o *)current[6].monitor;
        if ( !v39 )
          sub_B170D4();
        ListViewObject__SetItemSeed(v39, (ListViewItem_o *)current, this->fields.seed, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v44,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall SvtEqCombineListViewManager__ModifyLockItem_31514020(
        SvtEqCombineListViewManager_o *this,
        SvtEqCombineListViewItem_o *servantItem,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x0
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v19; // q1
  UserServantEntity_o *v20; // x23
  int64_t v21; // x0
  __int128 v22; // q0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x1
  UnityEngine_Object_o *viewObject; // x22
  struct ListViewObject_o *v31; // x0
  ListViewObject_o *v32; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+40h] [xbp-60h]

  if ( (byte_40FD631 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, servantItem);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_40FD631 = 1;
  }
  if ( usrSvtId >= 1 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_28;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_28;
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               MasterData_WarQuestSelectionMaster,
               usrSvtId,
               (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( Entity )
    {
      if ( !servantItem )
        goto LABEL_28;
      userSvtEntity = servantItem->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_28;
      v19 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      v20 = Entity;
      *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v35.fields.fakeValue = v19;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v34 = v35;
      v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v34, 0LL);
      v22 = *(_OWORD *)&v20->fields.id.fields.fakeValue;
      *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)&v20->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v33.fields.fakeValue = v22;
      if ( v21 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v33, 0LL) )
      {
        servantItem->fields.userSvtEntity = v20;
        sub_B16F98(
          (BattleServantConfConponent_o *)&servantItem->fields.userSvtEntity,
          (System_Int32_array **)v20,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
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
    SvtEqCombineListViewItem__ModifyChoiceItem(servantItem, v29);
  }
  viewObject = (UnityEngine_Object_o *)servantItem->fields.viewObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
  {
    v31 = servantItem->fields.viewObject;
    if ( v31 )
    {
      ((void (__fastcall *)(struct ListViewObject_o *, SvtEqCombineListViewItem_o *, Il2CppMethodPointer))v31->klass->vtable._5_SetItem.method)(
        v31,
        servantItem,
        v31->klass->vtable._6_SetItem.methodPtr);
      if ( !isIconSizeChange )
        return;
      v32 = servantItem->fields.viewObject;
      if ( v32 )
      {
        ListViewObject__SetItemSeed(v32, (ListViewItem_o *)servantItem, this->fields.seed, 0LL);
        return;
      }
    }
LABEL_28:
    sub_B170D4();
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickBonusFilterKind(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  if ( (byte_40FD649 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD649 = 1;
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
      sub_B170D4();
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
  __int64 v7; // x3
  __int64 v8; // x4
  SvtEqCombineListViewManager_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2

  if ( (byte_40FD655 & 1) == 0 )
  {
    sub_B16FFC(&SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    sub_B16FFC(&Method_SvtEqCombineListViewManager_EndClickTabChoice__, v4);
    byte_40FD655 = 1;
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
      v9 = (SvtEqCombineListViewManager_RequestCallbackFunc_o *)sub_B170CC(
                                                                  SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo,
                                                                  v5,
                                                                  v6,
                                                                  v7,
                                                                  v8);
      SvtEqCombineListViewManager_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_SvtEqCombineListViewManager_EndClickTabChoice__,
        0LL);
      SvtEqCombineListViewManager__StatusRequest(this, v9, v10);
    }
    else
    {
      SvtEqCombineListViewManager__SetStatusKind(this, 2, v6);
      SvtEqCombineListViewManager__ReleaseAll(this, v11);
      SvtEqCombineListViewManager__ModifyList(this, 0, v12);
      SvtEqCombineListViewManager__SetMode_31516708(this, 2, v13);
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
  __int64 v7; // x3
  __int64 v8; // x4
  SvtEqCombineListViewManager_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2

  if ( (byte_40FD654 & 1) == 0 )
  {
    sub_B16FFC(&SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    sub_B16FFC(&Method_SvtEqCombineListViewManager_EndClickTabLock__, v4);
    byte_40FD654 = 1;
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
      v9 = (SvtEqCombineListViewManager_RequestCallbackFunc_o *)sub_B170CC(
                                                                  SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo,
                                                                  v5,
                                                                  v6,
                                                                  v7,
                                                                  v8);
      SvtEqCombineListViewManager_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_SvtEqCombineListViewManager_EndClickTabLock__,
        0LL);
      SvtEqCombineListViewManager__StatusRequest(this, v9, v10);
    }
    else
    {
      SvtEqCombineListViewManager__SetStatusKind(this, 1, v6);
      SvtEqCombineListViewManager__ReleaseAll(this, v11);
      SvtEqCombineListViewManager__ModifyList(this, 0, v12);
      SvtEqCombineListViewManager__SetMode_31516708(this, 2, v13);
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
  bool v6; // w0
  CombineRootComponent_o *combineRootComponent; // x8
  const MethodInfo *v8; // x1
  ServantCheckEquipDialog_o *servantEquipCheckDialog; // x20
  System_Collections_Generic_List_SvtEqCombineListViewItem__o *SelectedMaterialList; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  ServantCheckEquipDialog_ClickDelegate_o *v15; // x22
  struct CombineRootComponent_o *v16; // x0

  if ( (byte_40FD638 & 1) == 0 )
  {
    sub_B16FFC(&ServantCheckEquipDialog_ClickDelegate_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    sub_B16FFC(&Method_SvtEqCombineListViewManager_CloseServantCheckEquipDialog__, v4);
    byte_40FD638 = 1;
  }
  if ( this->fields.isDecideFlg )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v6 = SvtEqCombineListViewManager__CheckMaterialEquipped(this, v5);
    combineRootComponent = this->fields.combineRootComponent;
    this->fields._isOpenCheckEquipDialog_k__BackingField = v6;
    if ( !combineRootComponent )
      goto LABEL_19;
    CombineRootComponent__SetBackSelect(combineRootComponent, 1, 0LL);
    if ( this->fields._isOpenCheckEquipDialog_k__BackingField )
    {
      servantEquipCheckDialog = this->fields.servantEquipCheckDialog;
      SelectedMaterialList = SvtEqCombineListViewManager__GetSelectedMaterialList(this, v8);
      v15 = (ServantCheckEquipDialog_ClickDelegate_o *)sub_B170CC(
                                                         ServantCheckEquipDialog_ClickDelegate_TypeInfo,
                                                         v11,
                                                         v12,
                                                         v13,
                                                         v14);
      ServantCheckEquipDialog_ClickDelegate___ctor(
        v15,
        (Il2CppObject *)this,
        Method_SvtEqCombineListViewManager_CloseServantCheckEquipDialog__,
        0LL);
      if ( servantEquipCheckDialog )
      {
        ServantCheckEquipDialog__Open(servantEquipCheckDialog, SelectedMaterialList, 0, v15, 0LL);
        return;
      }
LABEL_19:
      sub_B170D4();
    }
    SvtEqCombineListViewManager__SetSelectedMaterialInfo(this, v8);
    v16 = this->fields.combineRootComponent;
    if ( !v16 )
      goto LABEL_19;
    if ( v16->fields.state == 4 )
      CombineRootComponent__SetSelectSvtEqMaterialList(v16, 0LL);
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
  struct ListViewSort_o *sort; // x8
  int32_t filter2Kind; // w20
  int32_t v6; // w9

  if ( (byte_40FD64A & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    sub_B16FFC(&SvtEqCombineListViewManager_TypeInfo, v3);
    byte_40FD64A = 1;
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
      sub_B170D4();
    }
    if ( filter2Kind + 1 <= SvtEqCombineListViewManager_TypeInfo->static_fields->FILTER2_MAX_KIND_NUM )
      v6 = filter2Kind + 1;
    else
      v6 = 0;
    sort->fields.filter2Kind = v6;
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
  __int64 v11; // x3
  __int64 v12; // x4
  ServantFilterSelectMenu_CallbackFunc_o *v13; // x22

  if ( (byte_40FD646 & 1) == 0 )
  {
    sub_B16FFC(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    sub_B16FFC(&Method_SvtEqCombineListViewManager_EndSelectFilterKind__, v5);
    byte_40FD646 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v13 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B170CC(
                                                      ServantFilterSelectMenu_CallbackFunc_TypeInfo,
                                                      v9,
                                                      v10,
                                                      v11,
                                                      v12);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_SvtEqCombineListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v8 )
      sub_B170D4();
    CommonUI__OpenServantFilterSelectMenu_18244592(v8, 5, sort, (ListViewManager_o *)this, v13, -1, 0LL);
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

  if ( (byte_40FD643 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, obj);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    sub_B16FFC(&SvtEqCombineListViewObject_TypeInfo, v6);
    byte_40FD643 = 1;
  }
  if ( !obj )
    goto LABEL_15;
  v7 = *(&SvtEqCombineListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v7
    || (SvtEqCombineListViewObject_c *)obj->klass->_2.typeHierarchy[v7 - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    sub_B173C8(obj);
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
    sub_B170D4();
  v10 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v18.fields.fakeValue = v10;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v17 = v18;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v17, 0LL);
  SvtEqCombineListViewManager__ModifyLockItem(this, v11, 0, 0, v12);
  SvtEqCombineListViewManager__SetMode_31516708(this, 3, v13);
}


void __fastcall SvtEqCombineListViewManager__OnClickNormalStatus(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  SvtEqCombineListViewManager_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_40FD653 & 1) == 0 )
  {
    sub_B16FFC(&SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    sub_B16FFC(&Method_SvtEqCombineListViewManager_EndClickTabStatus__, v4);
    byte_40FD653 = 1;
  }
  if ( this->fields.modeKind )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v9 = (SvtEqCombineListViewManager_RequestCallbackFunc_o *)sub_B170CC(
                                                                SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo,
                                                                v5,
                                                                v6,
                                                                v7,
                                                                v8);
    SvtEqCombineListViewManager_RequestCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_SvtEqCombineListViewManager_EndClickTabStatus__,
      0LL);
    SvtEqCombineListViewManager__StatusRequest(this, v9, v10);
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickReleaseAll(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_40FD63E & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD63E = 1;
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
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int32_t v11; // w8
  struct ListViewSort_o *sort; // x8
  ListViewSort_o *v13; // x0
  UISprite_o *scaleChangeButtonSprite; // x20
  System_String_o *ScaleKindSpriteName; // x0
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2

  if ( (byte_40FD650 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD650 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v11 = 2;
    goto LABEL_12;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v11 = 3;
    goto LABEL_12;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v11 = 1;
LABEL_12:
    this->fields.scaleType = v11;
    this->fields.seed = smallSizeSeed;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)smallSizeSeed,
      v3,
      v4,
      v5,
      v6,
      v7,
      v8);
  }
  sort = this->fields.sort;
  if ( !sort
    || (sort->fields.iconScaleKind = this->fields.scaleType, (v13 = this->fields.sort) == 0LL)
    || (scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite,
        ScaleKindSpriteName = ListViewSort__GetScaleKindSpriteName(v13, this->fields.scaleType, 0LL),
        !scaleChangeButtonSprite) )
  {
    sub_B170D4();
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, ScaleKindSpriteName, 0LL);
  SvtEqCombineListViewManager__ModifyList(this, 1, v16);
  SvtEqCombineListViewManager__SetMode_31516708(this, 2, v17);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall SvtEqCombineListViewManager__OnClickSelectBase(
        SvtEqCombineListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x9
  SvtEqCombineListViewItem_o *Item; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  SvtEqCombineListViewItem_o *v11; // x21
  __int128 v12; // q1
  int64_t v13; // x0
  const MethodInfo *v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *tempMtSvtList; // x0
  SoundManager_c *v22; // x0
  int32_t v23; // w0
  struct UserServantEntity_o *userSvtEntity; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  CombineRootComponent_o *combineRootComponent; // x0
  struct CombineRootComponent_o *v32; // x0
  SvtEqCombineListViewManager_o *v33; // x0
  ListViewObject_o *v34; // x1
  const MethodInfo *v35; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+20h] [xbp-40h]

  if ( (byte_40FD641 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__, obj);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    sub_B16FFC(&SvtEqCombineListViewObject_TypeInfo, v7);
    byte_40FD641 = 1;
  }
  if ( !obj )
    goto LABEL_39;
  v8 = *(&SvtEqCombineListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v8
    || (SvtEqCombineListViewObject_c *)obj->klass->_2.typeHierarchy[v8 - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    sub_B173C8(obj);
    SvtEqCombineListViewManager__OnClickListView(v33, v34, v35);
    return;
  }
  Item = SvtEqCombineListViewObject__GetItem(
           (SvtEqCombineListViewObject_o *)obj,
           (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  v11 = Item;
  if ( !baseUsrSvtData )
  {
    if ( !Item )
      goto LABEL_39;
LABEL_18:
    if ( v11->fields.type )
    {
      v22 = SoundManager_TypeInfo;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
        goto LABEL_20;
      goto LABEL_32;
    }
    if ( v11->fields.isLvMax && v11->fields.isLimitCntMax )
    {
      v22 = SoundManager_TypeInfo;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
        goto LABEL_30;
    }
    else
    {
      v22 = SoundManager_TypeInfo;
      if ( !v11->fields.isSvtEqMaterial )
      {
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
        {
LABEL_20:
          if ( !v22->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v22);
        }
LABEL_32:
        v23 = 0;
        goto LABEL_33;
      }
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
      {
LABEL_30:
        v23 = 2;
LABEL_33:
        SoundManager__playSystemSe(v23, 0LL);
        userSvtEntity = v11->fields.userSvtEntity;
        this->fields.baseUsrSvtData = userSvtEntity;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
          (System_Int32_array **)userSvtEntity,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30);
        goto LABEL_34;
      }
    }
    if ( !v22->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v22);
    goto LABEL_30;
  }
  v12 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
  *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v37.fields.fakeValue = v12;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v36 = v37;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v36, 0LL);
  if ( !v11 )
LABEL_39:
    sub_B170D4();
  if ( v13 != SvtEqCombineListViewItem__get_UserSvtId(v11, v14) )
    goto LABEL_18;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  this->fields.baseUsrSvtData = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.baseUsrSvtData, 0LL, v15, v16, v17, v18, v19, v20);
  tempMtSvtList = this->fields.tempMtSvtList;
  if ( !tempMtSvtList )
    goto LABEL_39;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)tempMtSvtList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__);
LABEL_34:
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_39;
  CombineRootComponent__SetBackSelect(combineRootComponent, this->fields.baseUsrSvtData != 0LL, 0LL);
  v32 = this->fields.combineRootComponent;
  if ( !v32 )
    goto LABEL_39;
  if ( v32->fields.state == 4 )
    CombineRootComponent__ShowBaseSvtEq(v32, 0LL);
}


void __fastcall SvtEqCombineListViewManager__OnClickSelectMaterial(
        SvtEqCombineListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x9
  ListViewItem_o *Item; // x0
  ListViewItem_o *v11; // x20
  const MethodInfo *v12; // x1
  int32_t selectNum; // w21
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  int32_t klass; // w9
  int32_t selectSum; // w8
  void *v17; // x0
  int v18; // w1
  __int64 v19; // x20
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FD642 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, obj);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_B16FFC(&SvtEqCombineListViewObject_TypeInfo, v8);
    byte_40FD642 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( !obj )
    goto LABEL_21;
  v9 = *(&SvtEqCombineListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v9
    || (SvtEqCombineListViewObject_c *)obj->klass->_2.typeHierarchy[v9 - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    sub_B173C8(obj);
    if ( v18 != 1 )
      _Unwind_Resume(v17);
    v19 = *(_QWORD *)__cxa_begin_catch(v17);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( v19 )
      sub_B170A0();
    goto LABEL_18;
  }
  Item = (ListViewItem_o *)SvtEqCombineListViewObject__GetItem(
                             (SvtEqCombineListViewObject_o *)obj,
                             (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo);
  if ( !Item )
    goto LABEL_21;
  v11 = Item;
  if ( ListViewItem__get_IsSelect(Item, 0LL) )
  {
    selectNum = v11->fields.selectNum;
    ListViewItem__set_IsSelect(v11, 0, 0LL);
    itemList = this->fields.itemList;
    --this->fields.selectSum;
    if ( itemList )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v20,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v20,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
      {
        if ( !v20.fields.current )
          sub_B170D4();
        klass = (int32_t)v20.fields.current[1].klass;
        if ( klass > selectNum )
          LODWORD(v20.fields.current[1].klass) = klass - 1;
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v20,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      goto LABEL_18;
    }
LABEL_21:
    sub_B170D4();
  }
  selectSum = this->fields.selectSum;
  if ( this->fields.modeKind || selectSum < this->fields.selectMax )
  {
    v11->fields.selectNum = selectSum;
    ++this->fields.selectSum;
LABEL_18:
    SvtEqCombineListViewManager__RefrashListDisp(this, v12);
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickSortAscendingOrder(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  struct ListViewSort_o *sort; // x8

  if ( (byte_40FD64D & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD64D = 1;
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
      sub_B170D4();
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
  __int64 v12; // x3
  __int64 v13; // x4
  ServantSortSelectMenu_CallbackFunc_o *v14; // x22

  if ( (byte_40FD64B & 1) == 0 )
  {
    sub_B16FFC(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    sub_B16FFC(&Method_SvtEqCombineListViewManager_EndSelectSortKind__, v5);
    byte_40FD64B = 1;
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v9 = (CommonUI_o *)Instance;
    v14 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B170CC(
                                                    ServantSortSelectMenu_CallbackFunc_TypeInfo,
                                                    v10,
                                                    v11,
                                                    v12,
                                                    v13);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      Method_SvtEqCombineListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v9 )
      sub_B170D4();
    CommonUI__OpenServantSortSelectMenu(v9, 2, sort, itemType == 1, v14, 0LL);
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
  struct CombineRootComponent_o *combineRootComponent; // x0
  void *v25; // x0
  int v26; // w1
  __int64 v27; // x21
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40FD644 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__, item);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v8);
    sub_B16FFC(&SoundManager_TypeInfo, v9);
    sub_B16FFC(&SvtEqCombineListViewItem_TypeInfo, v10);
    byte_40FD644 = 1;
  }
  memset(&v29, 0, sizeof(v29));
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
      sub_B173C8(item);
      if ( v26 != 1 )
        _Unwind_Resume(v25);
      v27 = *(_QWORD *)__cxa_begin_catch(v25);
      __cxa_end_catch();
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v29,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
      if ( v27 )
        sub_B170A0();
    }
    else
    {
      selectedMtSvtList_k__BackingField = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields._selectedMtSvtList_k__BackingField;
      this->fields.isSelectMaterial = 0;
      if ( selectedMtSvtList_k__BackingField && selectedMtSvtList_k__BackingField->fields._size >= 1 )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v28,
          selectedMtSvtList_k__BackingField,
          (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__);
        v29 = v28;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v29,
                  (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__) )
        {
          if ( !v29.fields.current )
            sub_B170D4();
          UserSvtId = SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)v29.fields.current, v15);
          if ( !item )
            sub_B170D4();
          if ( UserSvtId == SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)item, v14) )
            this->fields.isSelectMaterial = 1;
        }
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v29,
          (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
      }
    }
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !scrollView
      || (UnityEngine_Behaviour__set_enabled(scrollView, 0, 0LL), !item)
      || (monitor = (struct UserServantEntity_o *)item[1].monitor,
          this->fields.selectUsrSvtEntity = monitor,
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.selectUsrSvtEntity,
            (System_Int32_array **)monitor,
            v17,
            v18,
            v19,
            v20,
            v21,
            v22),
          (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
    {
      sub_B170D4();
    }
    if ( combineRootComponent->fields.state == 4 )
      CombineRootComponent__SelectShowServant(combineRootComponent, 0LL);
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
  struct UIScrollView_o *v13; // x0
  UIScrollView_o *v14; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_40FD637 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FD637 = 1;
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
          || (((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v13->klass->vtable._8_UpdateScrollbars.method)(
                v13,
                1LL,
                v13->klass->vtable._9_SetDragAmount.methodPtr),
              (v14 = this->fields.scrollView) == 0LL) )
        {
          sub_B170D4();
        }
        UIScrollView__UpdatePosition(v14, 0LL);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v7, v8, v9, v10, v11, v12);
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  SvtEqCombineListViewItem_o *current; // x22
  __int64 v30; // x9
  UserServantEntity_o *v31; // x0
  const MethodInfo *v32; // x1
  UserServantEntity_o *v33; // x0
  int32_t addTotalExp; // w23
  UILabel_o *selectInfoLabel; // x21
  System_String_o *v36; // x22
  Il2CppObject *v37; // x23
  Il2CppObject *v38; // x0
  System_String_o *v39; // x0
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *combineEventList; // x0
  Il2CppObject *v42; // x22
  int klass_high; // w8
  int v44; // w27
  int v45; // w8
  UILabel_o *spendQpLabel; // x21
  Il2CppObject *v47; // x0
  System_String_o *v48; // x0
  UIWidget_o *v49; // x21
  int v50; // s0
  UILabel_o *getBasicExpLabel; // x21
  Il2CppObject *v55; // x0
  System_String_o *v56; // x0
  UILabel_o *getAccExpLabel; // x21
  Il2CppObject *v58; // x0
  System_String_o *v59; // x0
  const MethodInfo *v60; // x2
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *v63; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v64; // x21
  __int64 v65; // x22
  __int64 v66; // x23
  int32_t v67; // w0
  WarEntity_o *Entity; // x0
  int32_t v69; // w8
  struct UserServantEntity_o *v70; // x0
  const MethodInfo *v71; // x4
  int32_t LevelMax; // w21
  struct UserServantEntity_o *v73; // x8
  UnityEngine_Component_o *levelUpInfoImg; // x0
  int32_t increLv; // w22
  int32_t lv; // w23
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v78; // x0
  bool v79; // w22
  Il2CppObject *v80; // x21
  __int64 v81; // x9
  int v82; // w27
  bool v83; // w1
  SvtEqCombineListViewManager_o *v84; // x0
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *tempMtSvtList; // x8
  struct UICommonButton_o *allReleaseButton; // x0
  int32_t size; // w8
  int v88; // w8
  __int64 v89; // x21
  SvtEqCombineListViewObject_o *v90; // x0
  int32_t selectMax; // [xsp+4h] [xbp-BCh] BYREF
  System_Collections_Generic_List_Enumerator_T__o v92; // [xsp+8h] [xbp-B8h] BYREF
  int v93[3]; // [xsp+20h] [xbp-A0h]
  int v94; // [xsp+2Ch] [xbp-94h]
  System_Collections_Generic_List_Enumerator_T__o v95; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v96; // [xsp+50h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v97; // 0:x0.16

  if ( (byte_40FD629 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v9);
    sub_B16FFC(&int_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Count__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Item__, v16);
    sub_B16FFC(&LocalizationManager_TypeInfo, v17);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B16FFC(&SvtEqCombineListViewItem_TypeInfo, v20);
    sub_B16FFC(&StringLiteral_23433/*"{0:N0}"*/, v21);
    sub_B16FFC(&StringLiteral_12413/*"SUM_INFO"*/, v22);
    byte_40FD629 = 1;
  }
  memset(&v96, 0, sizeof(v96));
  memset(&v95, 0, sizeof(v95));
  v94 = 0;
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
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_94;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v92,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v96 = v92;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v96,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = (SvtEqCombineListViewItem_o *)v96.fields.current;
    if ( !v96.fields.current )
      goto LABEL_93;
    v30 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v96.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v30
      || (SvtEqCombineListViewItem_c *)v96.fields.current->klass->_2.typeHierarchy[v30 - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      sub_B173C8(v96.fields.current);
LABEL_93:
      sub_B170D4();
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v96.fields.current, 0LL) )
    {
      v31 = this->fields.baseUsrSvtData;
      this->fields.selectQp += v27;
      if ( !v31 )
        goto LABEL_96;
      if ( !UserServantEntity__isLevelMax(v31, 0LL) )
        goto LABEL_18;
      v33 = this->fields.baseUsrSvtData;
      if ( !v33 )
        sub_B170D4();
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
  v93[0] = 255;
  v94 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v96,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  v94 = 0;
  selectInfoLabel = this->fields.selectInfoLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_12413/*"SUM_INFO"*/, 0LL);
  LODWORD(v92.fields.list) = this->fields.selectSum;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v92);
  selectMax = this->fields.selectMax;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &selectMax);
  v39 = System_String__Format_43739268(v36, v37, v38, 0LL);
  if ( !selectInfoLabel )
    goto LABEL_94;
  UILabel__set_text(selectInfoLabel, v39, 0LL);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_94;
  combineEventList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)menuListCtr->fields.combineEventList;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v92,
      combineEventList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v95 = v92;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v95,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__) )
    {
      v42 = v95.fields.current;
      if ( !v95.fields.current )
        sub_B170D4();
      klass_high = HIDWORD(v95.fields.current[1].klass);
      if ( klass_high == 17 )
      {
        this->fields.selectExp = UnityEngine_Mathf__CeilToInt(
                                   *(float *)&v95.fields.current[3].monitor * (float)this->fields.selectExp,
                                   0LL);
        klass_high = HIDWORD(v42[1].klass);
      }
      if ( klass_high == 16 )
        this->fields.selectQp = UnityEngine_Mathf__CeilToInt(
                                  *(float *)&v42[3].monitor * (float)this->fields.selectQp,
                                  0LL);
    }
    v93[0] = 445;
    v44 = ++v94;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v95,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    if ( v44 )
    {
      v45 = v44 - 1;
      if ( v93[v44 - 1] == 445 )
      {
        --v44;
        v94 = v45;
      }
    }
  }
  else
  {
    v44 = 0;
  }
  spendQpLabel = this->fields.spendQpLabel;
  LODWORD(v92.fields.list) = this->fields.selectQp;
  v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v92);
  v48 = System_String__Format((System_String_o *)StringLiteral_23433/*"{0:N0}"*/, v47, 0LL);
  if ( !spendQpLabel )
    goto LABEL_94;
  UILabel__set_text(spendQpLabel, v48, 0LL);
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
  LODWORD(v92.fields.list) = this->fields.selectExp;
  v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v92);
  v56 = System_String__Format((System_String_o *)StringLiteral_23433/*"{0:N0}"*/, v55, 0LL);
  if ( !getBasicExpLabel
    || (UILabel__set_text(getBasicExpLabel, v56, 0LL),
        getAccExpLabel = this->fields.getAccExpLabel,
        selectMax = this->fields.addTotalExp,
        v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &selectMax),
        v59 = System_String__Format((System_String_o *)StringLiteral_23433/*"{0:N0}"*/, v58, 0LL),
        !getAccExpLabel) )
  {
LABEL_94:
    sub_B170D4();
  }
  UILabel__set_text(getAccExpLabel, v59, 0LL);
  if ( this->fields.baseUsrSvtData && this->fields.itemType == 1 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_94;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
    v63 = this->fields.baseUsrSvtData;
    if ( !v63 )
      goto LABEL_94;
    v64 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    v66 = *(_QWORD *)&v63->fields.svtId.fields.currentCryptoKey;
    v65 = *(_QWORD *)&v63->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v97.fields.currentCryptoKey = v66;
    *(_QWORD *)&v97.fields.fakeValue = v65;
    v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v97, 0LL);
    if ( !v64 )
      goto LABEL_94;
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v64,
               v67,
               (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Entity )
      goto LABEL_94;
    v69 = HIDWORD(Entity[1].klass);
    v70 = this->fields.baseUsrSvtData;
    this->fields.expType = v69;
    if ( !v70 )
      goto LABEL_94;
    this->fields.totalExp = v70->fields.exp + this->fields.selectExp + this->fields.addTotalExp;
    this->fields.checkLv = v70->fields.lv;
    LevelMax = UserServantEntity__getLevelMax(v70, 0LL);
    if ( this->fields.checkLv != LevelMax )
    {
      while ( !SvtEqCombineListViewManager__CheckIncrementLv(
                 this,
                 &this->fields.checkLv,
                 &this->fields.increLv,
                 this->fields.totalExp,
                 v71) )
        ;
      v73 = this->fields.baseUsrSvtData;
      if ( !v73 )
        goto LABEL_94;
      levelUpInfoImg = (UnityEngine_Component_o *)this->fields.levelUpInfoImg;
      if ( !levelUpInfoImg )
        goto LABEL_94;
      increLv = this->fields.increLv;
      lv = v73->fields.lv;
      gameObject = UnityEngine_Component__get_gameObject(levelUpInfoImg, 0LL);
      if ( !gameObject )
        goto LABEL_94;
      UnityEngine_GameObject__SetActive(gameObject, increLv - lv >= 1, 0LL);
    }
    v78 = this->fields.itemList;
    if ( !v78 )
      goto LABEL_94;
    v79 = this->fields.increLv >= LevelMax;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v92,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v78,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v96 = v92;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v96,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      v80 = v96.fields.current;
      if ( !v96.fields.current )
        sub_B170D4();
      v81 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v96.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v81
        || (SvtEqCombineListViewItem_c *)v96.fields.current->klass->_2.typeHierarchy[v81 - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        sub_B173C8(v96.fields.current);
LABEL_96:
        sub_B170D4();
      }
      if ( !ListViewItem__get_IsSelect((ListViewItem_o *)v96.fields.current, 0LL) )
        BYTE2(v80[15].klass) = v79;
    }
    v93[v44] = 903;
    v82 = ++v94;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v96,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( v82 && v93[v82 - 1] == 903 )
      v94 = v82 - 1;
  }
  if ( this->fields.selectSum >= 1 )
  {
    v83 = 1;
    v84 = this;
    goto LABEL_77;
  }
  tempMtSvtList = this->fields.tempMtSvtList;
  if ( !tempMtSvtList )
    goto LABEL_94;
  if ( tempMtSvtList->fields._size <= 0 )
  {
    v84 = this;
    v83 = 0;
LABEL_77:
    SvtEqCombineListViewManager__SetBtnEnable(v84, v83, v60);
    if ( !ObjectList )
      goto LABEL_94;
    goto LABEL_83;
  }
  allReleaseButton = this->fields.allReleaseButton;
  if ( !allReleaseButton )
    goto LABEL_94;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))allReleaseButton->klass->vtable._14_SetState.method)(
    allReleaseButton,
    3LL,
    1LL,
    allReleaseButton->klass->vtable._15_OnPress.methodPtr);
  if ( !ObjectList )
    goto LABEL_94;
LABEL_83:
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    v88 = ObjectList->fields._size;
    if ( v88 >= 1 )
    {
      v89 = 0LL;
      while ( 1 )
      {
        if ( v88 <= (unsigned int)v89 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v90 = ObjectList->fields._items->m_Items[v89];
        if ( !v90 )
          break;
        ((void (__fastcall *)(SvtEqCombineListViewObject_o *, bool, Il2CppMethodPointer))v90->klass->vtable._9_SetInput.method)(
          v90,
          this->fields.isInput,
          v90->klass->vtable._10_Invalidation.methodPtr);
        v88 = ObjectList->fields._size;
        if ( (int)++v89 >= v88 )
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  Il2CppObject *current; // x20
  __int64 v9; // x9
  UnityEngine_Component_o *levelUpInfoImg; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v12; // x1
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_40FD63F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v5);
    sub_B16FFC(&SvtEqCombineListViewItem_TypeInfo, v6);
    byte_40FD63F = 1;
  }
  memset(&v14, 0, sizeof(v14));
  if ( this->fields.selectSum >= 1 )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_17;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v13,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v14 = v13;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v14,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      current = v14.fields.current;
      if ( !v14.fields.current )
        goto LABEL_16;
      ListViewItem__set_IsSelect((ListViewItem_o *)v14.fields.current, 0, 0LL);
      v9 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&current->klass->_2.bitflags2 + 1) < (unsigned int)v9
        || (SvtEqCombineListViewItem_c *)current->klass->_2.typeHierarchy[v9 - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        sub_B173C8(current);
LABEL_16:
        sub_B170D4();
      }
      BYTE2(current[10].monitor) = 0;
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v14,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    levelUpInfoImg = (UnityEngine_Component_o *)this->fields.levelUpInfoImg;
    this->fields.selectSum = 0;
    if ( !levelUpInfoImg || (gameObject = UnityEngine_Component__get_gameObject(levelUpInfoImg, 0LL)) == 0LL )
LABEL_17:
      sub_B170D4();
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    *(_QWORD *)&this->fields.totalExp = 0LL;
    this->fields.checkLv = 0;
    SvtEqCombineListViewManager__RefrashListDisp(this, v12);
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
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *current; // x21
  System_Action_o *v21; // x22
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FD635 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Count__, v11);
    sub_B16FFC(&Method_SvtEqCombineListViewManager_OnMoveEnd__, v12);
    sub_B16FFC(&StringLiteral_10004/*"OnMoveEnd"*/, v13);
    byte_40FD635 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SvtEqCombineListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B170D4();
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v23,
      ObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v23,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__MoveNext__) )
    {
      current = v23.fields.current;
      v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
      System_Action___ctor(v21, (Il2CppObject *)this, Method_SvtEqCombineListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B170D4();
      zero = UnityEngine_Vector3__get_zero(0LL);
      SvtEqCombineListViewObject__Init(
        (SvtEqCombineListViewObject_o *)current,
        mode,
        v21,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v22);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v23,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__RequestListObject_31517820(
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
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FD636 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__GetEnumerator__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Count__, v9);
    sub_B16FFC(&Method_SvtEqCombineListViewManager_OnMoveEnd__, v10);
    sub_B16FFC(&StringLiteral_10004/*"OnMoveEnd"*/, v11);
    byte_40FD636 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SvtEqCombineListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B170D4();
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v21,
      ObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v21,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__MoveNext__) )
    {
      current = v21.fields.current;
      v19 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_SvtEqCombineListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B170D4();
      zero = UnityEngine_Vector3__get_zero(0LL);
      SvtEqCombineListViewObject__Init(
        (SvtEqCombineListViewObject_o *)current,
        mode,
        v19,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v20);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v21,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__Dispose__);
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
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *tempMtSvtList; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  UnityEngine_Component_o *levelUpInfoImg; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FD640 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v12);
    byte_40FD640 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  this->fields.baseUsrSvtData = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.baseUsrSvtData, 0LL, v2, v3, v4, v5, v6, v7);
  selectedMtSvtList_k__BackingField = this->fields._selectedMtSvtList_k__BackingField;
  if ( selectedMtSvtList_k__BackingField )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)selectedMtSvtList_k__BackingField,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__);
  tempMtSvtList = this->fields.tempMtSvtList;
  if ( !tempMtSvtList )
    goto LABEL_16;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)tempMtSvtList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__);
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v18,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v18,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( !v18.fields.current )
        sub_B170D4();
      ListViewItem__set_IsSelect((ListViewItem_o *)v18.fields.current, 0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v18,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  levelUpInfoImg = (UnityEngine_Component_o *)this->fields.levelUpInfoImg;
  this->fields.selectSum = 0;
  if ( !levelUpInfoImg || (gameObject = UnityEngine_Component__get_gameObject(levelUpInfoImg, 0LL)) == 0LL )
LABEL_16:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
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
  struct UICommonButton_o *allReleaseButton; // x0
  __int64 v12; // x1

  if ( (byte_40FD625 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, isEnable);
    byte_40FD625 = 1;
  }
  decideBtnBg = (UnityEngine_Component_o *)this->fields.decideBtnBg;
  this->fields.isDecideFlg = isEnable;
  if ( !decideBtnBg )
LABEL_13:
    sub_B170D4();
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              decideBtnBg,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
  allReleaseButton = this->fields.allReleaseButton;
  if ( !allReleaseButton )
    goto LABEL_13;
  if ( isEnable )
    v12 = 0LL;
  else
    v12 = 3LL;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))allReleaseButton->klass->vtable._14_SetState.method)(
    allReleaseButton,
    v12,
    1LL,
    allReleaseButton->klass->vtable._15_OnPress.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__SetDispActive(
        SvtEqCombineListViewManager_o *this,
        bool isShow,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Component_o *allReleaseButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *decideButton; // x0
  UnityEngine_GameObject_o *v9; // x0
  int v10; // s3
  float v11; // s4
  float v12; // s5
  float v13; // s6
  SvtEqCombineListViewManager_c *v14; // x0
  float COLOR_VAL; // s0
  float v16; // s1
  float v17; // s2
  UnityEngine_Component_o *spendQpBg; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v20; // x21
  int v21; // s0
  int v22; // s1
  int v23; // s2
  int v24; // s3
  UnityEngine_Component_o *spendQpInfoImg; // x0
  WebViewObject_o *v26; // x0
  UIWidget_o *v27; // x21
  int v28; // s0
  int v29; // s1
  int v30; // s2
  int v31; // s3
  UnityEngine_Component_o *spendQpLabel; // x0
  WebViewObject_o *v33; // x0
  UIWidget_o *v34; // x21
  int v35; // s0
  int v36; // s1
  int v37; // s2
  int v38; // s3
  UnityEngine_Component_o *getExpBg; // x0
  WebViewObject_o *v40; // x0
  UIWidget_o *v41; // x21
  int v42; // s0
  int v43; // s1
  int v44; // s2
  int v45; // s3
  UnityEngine_Component_o *getExpBgImg; // x0
  WebViewObject_o *v47; // x0
  UIWidget_o *v48; // x21
  int v49; // s0
  int v50; // s1
  int v51; // s2
  int v52; // s3
  UnityEngine_Component_o *getExpLabel; // x0
  WebViewObject_o *v54; // x0
  UIWidget_o *v55; // x21
  int v56; // s0
  int v57; // s1
  int v58; // s2
  int v59; // s3
  UnityEngine_Component_o *getBasicExpLabel; // x0
  WebViewObject_o *v61; // x0
  UIWidget_o *v62; // x21
  int v63; // s0
  int v64; // s1
  int v65; // s2
  int v66; // s3
  UnityEngine_Component_o *getAccExpLabel; // x0
  WebViewObject_o *v68; // x0
  UIWidget_o *v69; // x21
  int v70; // s0
  int v71; // s1
  int v72; // s2
  int v73; // s3
  UnityEngine_Component_o *haveQpBg; // x0
  WebViewObject_o *v75; // x0
  UIWidget_o *v76; // x21
  int v77; // s0
  int v78; // s1
  int v79; // s2
  int v80; // s3
  UnityEngine_Component_o *haveQpInfoImg; // x0
  WebViewObject_o *v82; // x0
  UIWidget_o *v83; // x21
  int v84; // s0
  int v85; // s1
  int v86; // s2
  int v87; // s3
  UnityEngine_Component_o *haveQpLabel; // x0
  WebViewObject_o *v89; // x0
  UIWidget_o *v90; // x21
  int v91; // s0
  int v92; // s1
  int v93; // s2
  int v94; // s3
  UnityEngine_Component_o *nextExpBg; // x0
  WebViewObject_o *v96; // x0
  UIWidget_o *v97; // x21
  int v98; // s0
  int v99; // s1
  int v100; // s2
  int v101; // s3
  UnityEngine_Component_o *nextExpInfoImg; // x0
  WebViewObject_o *v103; // x0
  UIWidget_o *v104; // x21
  int v105; // s0
  int v106; // s1
  int v107; // s2
  int v108; // s3
  UnityEngine_Component_o *nextExpLabel; // x0
  WebViewObject_o *v110; // x0
  UIWidget_o *v111; // x20
  int v112; // s0
  int v113; // s1
  int v114; // s2
  int v115; // s3
  __int64 v116; // [xsp+0h] [xbp-30h] BYREF
  __int64 v117; // [xsp+8h] [xbp-28h]

  if ( (byte_40FD624 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, isShow);
    sub_B16FFC(&SvtEqCombineListViewManager_TypeInfo, v5);
    byte_40FD624 = 1;
  }
  v116 = 0LL;
  v117 = 0LL;
  allReleaseButton = (UnityEngine_Component_o *)this->fields.allReleaseButton;
  if ( !allReleaseButton )
    goto LABEL_81;
  gameObject = UnityEngine_Component__get_gameObject(allReleaseButton, 0LL);
  if ( !gameObject )
    goto LABEL_81;
  UnityEngine_GameObject__SetActive(gameObject, isShow, 0LL);
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_81;
  v9 = UnityEngine_Component__get_gameObject(decideButton, 0LL);
  if ( !v9 )
    goto LABEL_81;
  UnityEngine_GameObject__SetActive(v9, isShow, 0LL);
  v14 = SvtEqCombineListViewManager_TypeInfo;
  if ( (BYTE3(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
    v14 = SvtEqCombineListViewManager_TypeInfo;
  }
  COLOR_VAL = v14->static_fields->COLOR_VAL;
  v16 = COLOR_VAL;
  v17 = COLOR_VAL;
  UnityEngine_Color___ctor_40666012(*(UnityEngine_Color_o *)(&v10 - 3), v11, v12, v13, (const MethodInfo *)&v116);
  spendQpBg = (UnityEngine_Component_o *)this->fields.spendQpBg;
  if ( !spendQpBg )
LABEL_81:
    sub_B170D4();
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              spendQpBg,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v20 = (UIWidget_o *)Component_WebViewObject;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v21 = UnityEngine_Color__get_white(0LL);
    if ( !v20 )
      goto LABEL_81;
  }
  else
  {
    v22 = HIDWORD(v116);
    v21 = v116;
    v24 = HIDWORD(v117);
    v23 = v117;
    if ( !Component_WebViewObject )
      goto LABEL_81;
  }
  UIWidget__set_color(v20, *(UnityEngine_Color_o *)&v21, 0LL);
  spendQpInfoImg = (UnityEngine_Component_o *)this->fields.spendQpInfoImg;
  if ( !spendQpInfoImg )
    goto LABEL_81;
  v26 = UnityEngine_Component__GetComponent_WebViewObject_(
          spendQpInfoImg,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v27 = (UIWidget_o *)v26;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v28 = UnityEngine_Color__get_white(0LL);
    if ( !v27 )
      goto LABEL_81;
  }
  else
  {
    v29 = HIDWORD(v116);
    v28 = v116;
    v31 = HIDWORD(v117);
    v30 = v117;
    if ( !v26 )
      goto LABEL_81;
  }
  UIWidget__set_color(v27, *(UnityEngine_Color_o *)&v28, 0LL);
  spendQpLabel = (UnityEngine_Component_o *)this->fields.spendQpLabel;
  if ( !spendQpLabel )
    goto LABEL_81;
  v33 = UnityEngine_Component__GetComponent_WebViewObject_(
          spendQpLabel,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v34 = (UIWidget_o *)v33;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v35 = UnityEngine_Color__get_white(0LL);
    if ( !v34 )
      goto LABEL_81;
  }
  else
  {
    v36 = HIDWORD(v116);
    v35 = v116;
    v38 = HIDWORD(v117);
    v37 = v117;
    if ( !v33 )
      goto LABEL_81;
  }
  UIWidget__set_color(v34, *(UnityEngine_Color_o *)&v35, 0LL);
  getExpBg = (UnityEngine_Component_o *)this->fields.getExpBg;
  if ( !getExpBg )
    goto LABEL_81;
  v40 = UnityEngine_Component__GetComponent_WebViewObject_(
          getExpBg,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v41 = (UIWidget_o *)v40;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v42 = UnityEngine_Color__get_white(0LL);
    if ( !v41 )
      goto LABEL_81;
  }
  else
  {
    v43 = HIDWORD(v116);
    v42 = v116;
    v45 = HIDWORD(v117);
    v44 = v117;
    if ( !v40 )
      goto LABEL_81;
  }
  UIWidget__set_color(v41, *(UnityEngine_Color_o *)&v42, 0LL);
  getExpBgImg = (UnityEngine_Component_o *)this->fields.getExpBgImg;
  if ( !getExpBgImg )
    goto LABEL_81;
  v47 = UnityEngine_Component__GetComponent_WebViewObject_(
          getExpBgImg,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v48 = (UIWidget_o *)v47;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v49 = UnityEngine_Color__get_white(0LL);
    if ( !v48 )
      goto LABEL_81;
  }
  else
  {
    v50 = HIDWORD(v116);
    v49 = v116;
    v52 = HIDWORD(v117);
    v51 = v117;
    if ( !v47 )
      goto LABEL_81;
  }
  UIWidget__set_color(v48, *(UnityEngine_Color_o *)&v49, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.getExpLabel;
  if ( !getExpLabel )
    goto LABEL_81;
  v54 = UnityEngine_Component__GetComponent_WebViewObject_(
          getExpLabel,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v55 = (UIWidget_o *)v54;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v56 = UnityEngine_Color__get_white(0LL);
    if ( !v55 )
      goto LABEL_81;
  }
  else
  {
    v57 = HIDWORD(v116);
    v56 = v116;
    v59 = HIDWORD(v117);
    v58 = v117;
    if ( !v54 )
      goto LABEL_81;
  }
  UIWidget__set_color(v55, *(UnityEngine_Color_o *)&v56, 0LL);
  getBasicExpLabel = (UnityEngine_Component_o *)this->fields.getBasicExpLabel;
  if ( !getBasicExpLabel )
    goto LABEL_81;
  v61 = UnityEngine_Component__GetComponent_WebViewObject_(
          getBasicExpLabel,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v62 = (UIWidget_o *)v61;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v63 = UnityEngine_Color__get_white(0LL);
    if ( !v62 )
      goto LABEL_81;
  }
  else
  {
    v64 = HIDWORD(v116);
    v63 = v116;
    v66 = HIDWORD(v117);
    v65 = v117;
    if ( !v61 )
      goto LABEL_81;
  }
  UIWidget__set_color(v62, *(UnityEngine_Color_o *)&v63, 0LL);
  getAccExpLabel = (UnityEngine_Component_o *)this->fields.getAccExpLabel;
  if ( !getAccExpLabel )
    goto LABEL_81;
  v68 = UnityEngine_Component__GetComponent_WebViewObject_(
          getAccExpLabel,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v69 = (UIWidget_o *)v68;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v70 = UnityEngine_Color__get_white(0LL);
    if ( !v69 )
      goto LABEL_81;
  }
  else
  {
    v71 = HIDWORD(v116);
    v70 = v116;
    v73 = HIDWORD(v117);
    v72 = v117;
    if ( !v68 )
      goto LABEL_81;
  }
  UIWidget__set_color(v69, *(UnityEngine_Color_o *)&v70, 0LL);
  haveQpBg = (UnityEngine_Component_o *)this->fields.haveQpBg;
  if ( !haveQpBg )
    goto LABEL_81;
  v75 = UnityEngine_Component__GetComponent_WebViewObject_(
          haveQpBg,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v76 = (UIWidget_o *)v75;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v77 = UnityEngine_Color__get_white(0LL);
    if ( !v76 )
      goto LABEL_81;
  }
  else
  {
    v78 = HIDWORD(v116);
    v77 = v116;
    v80 = HIDWORD(v117);
    v79 = v117;
    if ( !v75 )
      goto LABEL_81;
  }
  UIWidget__set_color(v76, *(UnityEngine_Color_o *)&v77, 0LL);
  haveQpInfoImg = (UnityEngine_Component_o *)this->fields.haveQpInfoImg;
  if ( !haveQpInfoImg )
    goto LABEL_81;
  v82 = UnityEngine_Component__GetComponent_WebViewObject_(
          haveQpInfoImg,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v83 = (UIWidget_o *)v82;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v84 = UnityEngine_Color__get_white(0LL);
    if ( !v83 )
      goto LABEL_81;
  }
  else
  {
    v85 = HIDWORD(v116);
    v84 = v116;
    v87 = HIDWORD(v117);
    v86 = v117;
    if ( !v82 )
      goto LABEL_81;
  }
  UIWidget__set_color(v83, *(UnityEngine_Color_o *)&v84, 0LL);
  haveQpLabel = (UnityEngine_Component_o *)this->fields.haveQpLabel;
  if ( !haveQpLabel )
    goto LABEL_81;
  v89 = UnityEngine_Component__GetComponent_WebViewObject_(
          haveQpLabel,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v90 = (UIWidget_o *)v89;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v91 = UnityEngine_Color__get_white(0LL);
    if ( !v90 )
      goto LABEL_81;
  }
  else
  {
    v92 = HIDWORD(v116);
    v91 = v116;
    v94 = HIDWORD(v117);
    v93 = v117;
    if ( !v89 )
      goto LABEL_81;
  }
  UIWidget__set_color(v90, *(UnityEngine_Color_o *)&v91, 0LL);
  nextExpBg = (UnityEngine_Component_o *)this->fields.nextExpBg;
  if ( !nextExpBg )
    goto LABEL_81;
  v96 = UnityEngine_Component__GetComponent_WebViewObject_(
          nextExpBg,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v97 = (UIWidget_o *)v96;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v98 = UnityEngine_Color__get_white(0LL);
    if ( !v97 )
      goto LABEL_81;
  }
  else
  {
    v99 = HIDWORD(v116);
    v98 = v116;
    v101 = HIDWORD(v117);
    v100 = v117;
    if ( !v96 )
      goto LABEL_81;
  }
  UIWidget__set_color(v97, *(UnityEngine_Color_o *)&v98, 0LL);
  nextExpInfoImg = (UnityEngine_Component_o *)this->fields.nextExpInfoImg;
  if ( !nextExpInfoImg )
    goto LABEL_81;
  v103 = UnityEngine_Component__GetComponent_WebViewObject_(
           nextExpInfoImg,
           (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v104 = (UIWidget_o *)v103;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v105 = UnityEngine_Color__get_white(0LL);
    if ( !v104 )
      goto LABEL_81;
  }
  else
  {
    v106 = HIDWORD(v116);
    v105 = v116;
    v108 = HIDWORD(v117);
    v107 = v117;
    if ( !v103 )
      goto LABEL_81;
  }
  UIWidget__set_color(v104, *(UnityEngine_Color_o *)&v105, 0LL);
  nextExpLabel = (UnityEngine_Component_o *)this->fields.nextExpLabel;
  if ( !nextExpLabel )
    goto LABEL_81;
  v110 = UnityEngine_Component__GetComponent_WebViewObject_(
           nextExpLabel,
           (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v111 = (UIWidget_o *)v110;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v112 = UnityEngine_Color__get_white(0LL);
    if ( !v111 )
      goto LABEL_81;
  }
  else
  {
    v113 = HIDWORD(v116);
    v112 = v116;
    v115 = HIDWORD(v117);
    v114 = v117;
    if ( !v110 )
      goto LABEL_81;
  }
  UIWidget__set_color(v111, *(UnityEngine_Color_o *)&v112, 0LL);
}


void __fastcall SvtEqCombineListViewManager__SetDragEnd(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x2
  int32_t dragStartIndex; // w20
  int32_t dragEndIndex; // w21

  if ( (byte_40FD65A & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD65A = 1;
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
  SvtEqCombineListViewObject_o *v21; // x0
  __int64 v22; // x9
  bool result; // w0
  SvtEqCombineListViewObject_o *v24; // x0
  const MethodInfo *v25; // x1

  if ( (byte_40FD658 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&SvtEqCombineListViewItem_TypeInfo, v8);
    sub_B16FFC(&SvtEqCombineListViewObject_TypeInfo, v9);
    byte_40FD658 = 1;
  }
  itemSortList = this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_34;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v11 = itemSortList->fields._items->m_Items[index];
  if ( !v11 )
    goto LABEL_34;
  v12 = SvtEqCombineListViewItem_TypeInfo;
  v13 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v11->klass->_2.bitflags2 + 1) < (unsigned int)v13
    || (SvtEqCombineListViewItem_c *)v11->klass->_2.typeHierarchy[v13 - 1] != SvtEqCombineListViewItem_TypeInfo )
  {
    v21 = (SvtEqCombineListViewObject_o *)v11;
    goto LABEL_36;
  }
  sortIndex = v11[2].fields.sortIndex;
  if ( !isDragSelect )
  {
    if ( (sortIndex & 0x80000000) != 0 )
      goto LABEL_24;
    if ( !ListViewItem__get_IsSelect(v11, 0LL) && v11[2].fields.sortIndex >= 1 )
      --this->fields.dragSelectSum;
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
  v16 = this->fields.isDragSelect;
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
         this,
         (SvtEqCombineListViewItem_o *)v11,
         this->fields.dragSelectSum,
         1,
         v18) )
  {
    ++this->fields.dragSelectSum;
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
  v21 = (SvtEqCombineListViewObject_o *)v11->fields.viewObject;
  if ( !v21 )
LABEL_34:
    sub_B170D4();
  v22 = *(&SvtEqCombineListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v21->klass->_2.bitflags2 + 1) >= (unsigned int)v22
    && (SvtEqCombineListViewObject_c *)v21->klass->_2.typeHierarchy[v22 - 1] == SvtEqCombineListViewObject_TypeInfo )
  {
    SvtEqCombineListViewObject__SetupDisp(v21, (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo);
    return v15;
  }
LABEL_36:
  sub_B173C8(v21);
  SvtEqCombineListViewObject__SetupDisp(v24, v25);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t dragStartIndex; // w8
  int32_t dragEndIndex; // w9
  int32_t v12; // w25
  int32_t v13; // w26
  int32_t v14; // w23
  int32_t v15; // w24
  int32_t v16; // w22
  int v17; // w27
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x20
  SvtEqCombineListViewObject_o *v19; // x20
  __int64 v20; // x9
  UnityEngine_Object_o *v21; // x21
  SvtEqCombineListViewObject_o *v22; // x0
  __int64 v23; // x9
  SvtEqCombineListViewManager_o *v24; // x0
  int32_t v25; // w1
  bool v26; // w2
  const MethodInfo *v27; // x3

  v5 = startIndex;
  if ( (byte_40FD657 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&startIndex);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&SvtEqCombineListViewItem_TypeInfo, v8);
    sub_B16FFC(&SvtEqCombineListViewObject_TypeInfo, v9);
    byte_40FD657 = 1;
  }
  dragStartIndex = this->fields.dragStartIndex;
  if ( (dragStartIndex & 0x80000000) != 0 )
  {
    v12 = -1;
    v13 = -1;
  }
  else
  {
    dragEndIndex = this->fields.dragEndIndex;
    if ( dragStartIndex <= dragEndIndex )
      v12 = this->fields.dragEndIndex;
    else
      v12 = this->fields.dragStartIndex;
    if ( dragStartIndex <= dragEndIndex )
      v13 = this->fields.dragStartIndex;
    else
      v13 = this->fields.dragEndIndex;
  }
  this->fields.dragStartIndex = v5;
  this->fields.dragEndIndex = endIndex;
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
        SvtEqCombineListViewManager__SetDragSelect(this, v16, 0, method);
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
          SvtEqCombineListViewManager__SetDragSelect(this, v5, 1, method);
        ++v5;
      }
      while ( v5 <= endIndex );
    }
    else
    {
      do
      {
        if ( v5 > v12 || (v13 & 0x80000000) != 0 || v5 < v13 )
          SvtEqCombineListViewManager__SetDragSelect(this, v5, 1, method);
        --v5;
      }
      while ( v5 >= endIndex );
    }
    if ( this->fields.isDragSelect && (v15 & 0x80000000) == 0 && v15 <= v14 )
    {
      v17 = this->fields.selectSum + 1;
      while ( 1 )
      {
        itemSortList = this->fields.itemSortList;
        if ( !itemSortList )
          goto LABEL_62;
        if ( itemSortList->fields._size <= (unsigned int)v15 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v19 = (SvtEqCombineListViewObject_o *)itemSortList->fields._items->m_Items[v15];
        if ( !v19 )
LABEL_62:
          sub_B170D4();
        v20 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v20
          || (SvtEqCombineListViewItem_c *)v19->klass->_2.typeHierarchy[v20 - 1] != SvtEqCombineListViewItem_TypeInfo )
        {
          break;
        }
        if ( SLODWORD(v19[1].fields.basePosition.fields.x) >= 1 )
        {
          LODWORD(v19[1].fields.basePosition.fields.x) = v17;
          v21 = *(UnityEngine_Object_o **)&v19->fields.isBusy;
          ++v17;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
          {
            v22 = *(SvtEqCombineListViewObject_o **)&v19->fields.isBusy;
            if ( !v22 )
              goto LABEL_62;
            v23 = *(&SvtEqCombineListViewObject_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v22->klass->_2.bitflags2 + 1) < (unsigned int)v23
              || (SvtEqCombineListViewObject_c *)v22->klass->_2.typeHierarchy[v23 - 1] != SvtEqCombineListViewObject_TypeInfo )
            {
              goto LABEL_64;
            }
            SvtEqCombineListViewObject__SetupDisp(v22, (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo);
          }
        }
        if ( ++v15 > v14 )
          return;
      }
      v22 = v19;
LABEL_64:
      sub_B173C8(v22);
      SvtEqCombineListViewManager__SetDragSelect(v24, v25, v26, v27);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x25
  int size; // w21
  int v12; // w22
  ListViewItem_o *v13; // x0
  __int64 v14; // x9
  UnityEngine_Object_o *scrollView; // x20
  UIScrollView_o *v16; // x0

  if ( (byte_40FD659 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&startIndex);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&SvtEqCombineListViewItem_TypeInfo, v9);
    byte_40FD659 = 1;
  }
  this->fields.dragEndIndex = -1;
  *(_QWORD *)&this->fields.dragSelectSum = 0xFFFFFFFF00000000LL;
  itemSortList = this->fields.itemSortList;
  this->fields.isDragSelect = isDragSelect;
  if ( !itemSortList )
    goto LABEL_22;
  size = itemSortList->fields._size;
  if ( size >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( itemSortList->fields._size <= (unsigned int)v12 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v13 = itemSortList->fields._items->m_Items[v12];
      if ( !v13 )
        goto LABEL_22;
      v14 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v13->klass->_2.bitflags2 + 1) < (unsigned int)v14
        || (SvtEqCombineListViewItem_c *)v13->klass->_2.typeHierarchy[v14 - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        break;
      }
      ++v12;
      v13[2].fields.sortIndex = -1;
      if ( v12 >= size )
        goto LABEL_14;
      itemSortList = this->fields.itemSortList;
      if ( !itemSortList )
        goto LABEL_22;
    }
    sub_B173C8(v13);
LABEL_22:
    sub_B170D4();
  }
LABEL_14:
  SvtEqCombineListViewManager__SetDragSelectItem(this, startIndex, startIndex, method);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    v16 = this->fields.scrollView;
    if ( !v16 )
      goto LABEL_22;
    UIScrollView__Press(v16, 0, 0LL);
  }
}


void __fastcall SvtEqCombineListViewManager__SetFilterButtonImage(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  bool v6; // w0
  System_String_o **v7; // x8

  if ( (byte_40FD648 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16927/*"btn_filter_on"*/, method);
    sub_B16FFC(&StringLiteral_16926/*"btn_filter"*/, v3);
    byte_40FD648 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite, v6 = ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL), !filterSprite) )
  {
    sub_B170D4();
  }
  v7 = (System_String_o **)&StringLiteral_16926/*"btn_filter"*/;
  if ( !v6 )
    v7 = (System_String_o **)&StringLiteral_16927/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v7, 0LL);
}


void __fastcall SvtEqCombineListViewManager__SetMaterialSvtInfo(
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
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40FD627 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    sub_B16FFC(&SvtEqCombineListViewItem_TypeInfo, v9);
    byte_40FD627 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B170D4();
  if ( itemList->fields._size >= 1 )
  {
    selectedMtSvtList_k__BackingField = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields._selectedMtSvtList_k__BackingField;
    if ( selectedMtSvtList_k__BackingField )
    {
      if ( selectedMtSvtList_k__BackingField->fields._size >= 1 )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v20,
          selectedMtSvtList_k__BackingField,
          (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__);
        v21 = v20;
LABEL_21:
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v21,
                  (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__) )
        {
          v12 = this->fields.itemList;
          if ( !v12 )
            goto LABEL_25;
          current = v21.fields.current;
          v14 = 0LL;
          while ( 1 )
          {
            size = v12->fields._size;
            if ( (int)v14 >= size )
              goto LABEL_21;
            if ( size <= (unsigned int)v14 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            v16 = (SvtEqCombineListViewItem_o *)v12->fields._items->m_Items[v14];
            if ( !v16 )
              sub_B170D4();
            v17 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v17
              || (SvtEqCombineListViewItem_c *)v16->klass->_2.typeHierarchy[v17 - 1] != SvtEqCombineListViewItem_TypeInfo )
            {
              sub_B173C8(v16);
LABEL_25:
              sub_B170D4();
            }
            UserSvtId = SvtEqCombineListViewItem__get_UserSvtId(
                          v16,
                          (const MethodInfo *)SvtEqCombineListViewItem_TypeInfo);
            if ( !current )
              sub_B170D4();
            if ( UserSvtId == SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)current, v19) )
              break;
            v12 = this->fields.itemList;
            ++v14;
            if ( !v12 )
              goto LABEL_25;
          }
          v16->fields.isCanNotLock = 1;
        }
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v21,
          (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  SvtEqCombineListViewManager__SetMode_31516708(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__SetMode_31516708(
        SvtEqCombineListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *scrollView; // x21
  const MethodInfo *v11; // x2
  UnityEngine_Behaviour_o *v12; // x0
  UnityEngine_Behaviour_o *v13; // x0
  UIScrollView_o *v14; // x0
  int32_t v15; // w1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  int v17; // w23
  char v18; // w24
  ListViewItem_o *current; // x21
  __int64 v20; // x9
  const MethodInfo *v21; // x1
  int32_t selectNum; // w28
  struct System_Collections_Generic_List_ListViewItem__o *v23; // x0
  int32_t klass; // w9
  int v25; // w28
  int v26; // w22
  const MethodInfo *v27; // x1
  _BYTE v28[32]; // [xsp+8h] [xbp-B8h] BYREF
  int v29; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_40FD634 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&SvtEqCombineListViewItem_TypeInfo, v9);
    byte_40FD634 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  memset(&v30, 0, sizeof(v30));
  v29 = 0;
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
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
    v12 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v12 )
      goto LABEL_46;
    if ( !UnityEngine_Behaviour__get_enabled(v12, 0LL) )
    {
      v13 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
      if ( !v13 )
        goto LABEL_46;
      UnityEngine_Behaviour__set_enabled(v13, 1, 0LL);
      v14 = this->fields.scrollView;
      if ( !v14 )
        goto LABEL_46;
      UIScrollView__UpdatePosition(v14, 0LL);
    }
  }
  if ( (unsigned int)(mode - 1) < 2 )
  {
    itemList = this->fields.itemList;
    if ( itemList )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v28,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v17 = 0;
      v18 = 0;
      v31 = *(System_Collections_Generic_List_Enumerator_T__o *)v28;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v31,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
      {
        current = (ListViewItem_o *)v31.fields.current;
        if ( !v31.fields.current )
          goto LABEL_45;
        v20 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v31.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v20
          || (SvtEqCombineListViewItem_c *)v31.fields.current->klass->_2.typeHierarchy[v20 - 1] != SvtEqCombineListViewItem_TypeInfo )
        {
          sub_B173C8(v31.fields.current);
LABEL_45:
          sub_B170D4();
        }
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v31.fields.current, 0LL)
          && SvtEqCombineListViewItem__get_IsCanNotSelect((SvtEqCombineListViewItem_o *)current, v21) )
        {
          selectNum = current->fields.selectNum;
          ListViewItem__set_IsSelect(current, 0, 0LL);
          v23 = this->fields.itemList;
          --this->fields.selectSum;
          if ( !v23 )
            sub_B170D4();
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v28,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v23,
            (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v30 = *(System_Collections_Generic_List_Enumerator_T__o *)v28;
          while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v30,
                    (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
          {
            if ( !v30.fields.current )
              sub_B170D4();
            klass = (int32_t)v30.fields.current[1].klass;
            if ( klass > selectNum )
              LODWORD(v30.fields.current[1].klass) = klass - 1;
          }
          *(_DWORD *)&v28[4 * v17 + 24] = 252;
          v25 = ++v29;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v30,
            (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          v17 = 0;
          v18 = 1;
          if ( v25 )
          {
            v18 = 1;
            v17 = v25;
            if ( *(_DWORD *)&v28[4 * v25 + 20] == 252 )
            {
              v18 = 1;
              v17 = v25 - 1;
              v29 = v25 - 1;
            }
          }
        }
      }
      *(_DWORD *)&v28[4 * v17 + 24] = 280;
      v26 = ++v29;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v31,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( v26 && *(_DWORD *)&v28[4 * v26 + 20] == 280 )
        v29 = v26 - 1;
      if ( (v18 & 1) != 0 )
        SvtEqCombineListViewManager__RefrashListDisp(this, v27);
      if ( mode == 2 )
        v15 = 4;
      else
        v15 = 2;
      goto LABEL_42;
    }
LABEL_46:
    sub_B170D4();
  }
  if ( mode != 3 )
    return;
  v15 = 5;
LABEL_42:
  SvtEqCombineListViewManager__RequestListObject_31517820(this, v15, v11);
}


void __fastcall SvtEqCombineListViewManager__SetMode_31517764(
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  SvtEqCombineListViewManager__SetMode_31516708(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__SetObjectItem(
        SvtEqCombineListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v6; // x9
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  float v9; // s0
  int v10; // s1
  int32_t v13; // w1

  if ( (byte_40FD633 & 1) == 0 )
  {
    sub_B16FFC(&SvtEqCombineListViewObject_TypeInfo, obj);
    byte_40FD633 = 1;
  }
  if ( !obj )
LABEL_11:
    sub_B170D4();
  v6 = *(&SvtEqCombineListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (SvtEqCombineListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    sub_B173C8(obj);
    goto LABEL_11;
  }
  initMode = this->fields.initMode;
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
    sub_B170D4();
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
  sub_B16F98(
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
  __int64 v3; // x3
  __int64 v4; // x4
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
  SetCombineData_o *v17; // x22
  struct SetCombineData_o **p_combineData; // x19
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct SetCombineData_o *combineData; // x0
  System_Int32_array **baseUsrSvtData; // x1
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  struct SetCombineData_o *v37; // x8
  struct SetCombineData_o *v38; // x8
  struct SetCombineData_o *v39; // x8
  struct SetCombineData_o *v40; // x8
  struct SetCombineData_o *v41; // x8
  struct SetCombineData_o *v42; // x8
  System_Collections_Generic_Dictionary_long__bool__o *v43; // x20
  const MethodInfo *v44; // x1
  SvtEqCombineListViewItem_o *current; // x21
  const MethodInfo *v46; // x1
  int64_t UserSvtId; // x1
  int isUseSupportEquip; // w8
  struct SetCombineData_o *v49; // x21
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Int32_array **v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  struct SetCombineData_o *v64; // x0
  System_Collections_Generic_List_Enumerator_T__o v65; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v66; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40FD63C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__bool__Add__, selectedItems);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__bool___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__bool__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__bool__get_Keys__, v9);
    sub_B16FFC(&System_Collections_Generic_Dictionary_long__bool__TypeInfo, v10);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_long___, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__get_Current__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__, v15);
    sub_B16FFC(&SetCombineData_TypeInfo, v16);
    byte_40FD63C = 1;
  }
  memset(&v66, 0, sizeof(v66));
  v17 = (SetCombineData_o *)sub_B170CC(SetCombineData_TypeInfo, selectedItems, method, v3, v4);
  SetCombineData___ctor(v17, 0LL);
  p_combineData = &this->fields.combineData;
  this->fields.combineData = v17;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.combineData,
    (System_Int32_array **)v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  combineData = this->fields.combineData;
  if ( !combineData )
    goto LABEL_29;
  baseUsrSvtData = (System_Int32_array **)this->fields.baseUsrSvtData;
  combineData->fields.baseSvtData = (struct UserServantEntity_o *)baseUsrSvtData;
  sub_B16F98((BattleServantConfConponent_o *)&combineData->fields, baseUsrSvtData, v25, v26, v27, v28, v29, v30);
  if ( !*p_combineData )
    goto LABEL_29;
  (*p_combineData)->fields.selectSum = this->fields.selectSum;
  v37 = this->fields.combineData;
  if ( !v37 )
    goto LABEL_29;
  v37->fields.spendQp = this->fields.selectQp;
  v38 = this->fields.combineData;
  if ( !v38 )
    goto LABEL_29;
  v38->fields.getExp = this->fields.selectExp;
  v39 = this->fields.combineData;
  if ( !v39 )
    goto LABEL_29;
  v39->fields.getAddExp = this->fields.addTotalExp;
  v40 = this->fields.combineData;
  if ( !v40 )
    goto LABEL_29;
  v40->fields.getHpAdjustVal = this->fields.getHpUpVal;
  v41 = this->fields.combineData;
  if ( !v41 )
    goto LABEL_29;
  v41->fields.getAtkAdjustVal = this->fields.getAtkUpVal;
  v42 = this->fields.combineData;
  if ( !v42 )
    goto LABEL_29;
  v42->fields.isAdjustMax = this->fields.isAllUpMax;
  v43 = (System_Collections_Generic_Dictionary_long__bool__o *)sub_B170CC(
                                                                 System_Collections_Generic_Dictionary_long__bool__TypeInfo,
                                                                 v33,
                                                                 v34,
                                                                 v35,
                                                                 v36);
  System_Collections_Generic_Dictionary_long__bool____ctor(
    v43,
    (const MethodInfo_2E06984 *)Method_System_Collections_Generic_Dictionary_long__bool___ctor__);
  if ( !selectedItems )
    goto LABEL_29;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v65,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)selectedItems,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__);
  v66 = v65;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v66,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__) )
  {
    current = (SvtEqCombineListViewItem_o *)v66.fields.current;
    if ( !v66.fields.current )
      sub_B170D4();
    if ( SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)v66.fields.current, v44) >= 1 )
    {
      UserSvtId = SvtEqCombineListViewItem__get_UserSvtId(current, v46);
      if ( current->fields.isEquiped )
      {
        isUseSupportEquip = 1;
        if ( !v43 )
          goto LABEL_28;
      }
      else
      {
        isUseSupportEquip = current->fields.isUseSupportEquip;
        if ( !v43 )
LABEL_28:
          sub_B170D4();
      }
      System_Collections_Generic_Dictionary_long__bool___Add(
        v43,
        UserSvtId,
        isUseSupportEquip != 0,
        (const MethodInfo_2E0753C *)Method_System_Collections_Generic_Dictionary_long__bool__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v66,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
  if ( !v43 )
    goto LABEL_29;
  if ( System_Collections_Generic_Dictionary_long__bool___get_Count(
         v43,
         (const MethodInfo_2E07134 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__) < 1 )
    return;
  v49 = *p_combineData;
  Keys = System_Collections_Generic_Dictionary_long__bool___get_Keys(
           v43,
           (const MethodInfo_2E07144 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Keys__);
  v51 = (System_Int32_array **)System_Linq_Enumerable__ToArray_long_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                 (const MethodInfo_19C4B40 *)Method_System_Linq_Enumerable_ToArray_long___);
  if ( !v49
    || (v49->fields.materialUsrSvtIdList = (struct System_Int64_array *)v51,
        sub_B16F98((BattleServantConfConponent_o *)&v49->fields.materialUsrSvtIdList, v51, v52, v53, v54, v55, v56, v57),
        (v64 = *p_combineData) == 0LL) )
  {
LABEL_29:
    sub_B170D4();
  }
  v64->fields.svtEqMaterialList = v43;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v64->fields.svtEqMaterialList,
    (System_Int32_array **)v43,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
}


void __fastcall SvtEqCombineListViewManager__SetSelectedMaterialInfo(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o **p_selectedMtSvtList_k__BackingField; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *tempMtSvtList; // x0
  const MethodInfo *v25; // x1
  System_Collections_Generic_List_SvtEqCombineListViewItem__o *SelectedMaterialList; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  System_Collections_Generic_List_long__o *v31; // x22
  int size; // w23
  __int64 v33; // x24
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x27
  SvtEqCombineListViewItem_o *v35; // x0
  __int64 v36; // x9
  int64_t UserSvtId; // x0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v38; // x0
  struct System_Int64_array *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  const MethodInfo *v46; // x2
  SvtEqCombineListViewManager_o *v47; // x0
  System_Collections_Generic_List_SvtEqCombineListViewItem__o *v48; // x1

  if ( (byte_40FD63B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__AddRange__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_B16FFC(&System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo, v13);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v14);
    sub_B16FFC(&SvtEqCombineListViewItem_TypeInfo, v15);
    byte_40FD63B = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
  p_selectedMtSvtList_k__BackingField = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o **)&this->fields._selectedMtSvtList_k__BackingField;
  this->fields._selectedMtSvtList_k__BackingField = (struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v16;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._selectedMtSvtList_k__BackingField,
    (System_Int32_array **)v16,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  tempMtSvtList = this->fields.tempMtSvtList;
  if ( !tempMtSvtList )
    goto LABEL_22;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)tempMtSvtList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__);
  SelectedMaterialList = SvtEqCombineListViewManager__GetSelectedMaterialList(this, v25);
  v31 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v27,
                                                     v28,
                                                     v29,
                                                     v30);
  System_Collections_Generic_List_long____ctor(
    v31,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( !SelectedMaterialList )
    goto LABEL_22;
  size = SelectedMaterialList->fields._size;
  if ( size < 1 )
  {
LABEL_17:
    v38 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields.tempMtSvtList;
    if ( v38 )
    {
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        v38,
        (System_Collections_Generic_IEnumerable_T__o *)SelectedMaterialList,
        (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__AddRange__);
      if ( *p_selectedMtSvtList_k__BackingField )
      {
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          *p_selectedMtSvtList_k__BackingField,
          (System_Collections_Generic_IEnumerable_T__o *)SelectedMaterialList,
          (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__AddRange__);
        if ( v31 )
        {
          v39 = System_Collections_Generic_List_long___ToArray(
                  v31,
                  (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
          this->fields.highRarityList = v39;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.highRarityList,
            (System_Int32_array **)v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45);
          v47 = this;
          v48 = SelectedMaterialList;
          goto LABEL_21;
        }
      }
    }
LABEL_22:
    sub_B170D4();
  }
  v33 = 0LL;
  while ( 1 )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_22;
    if ( itemList->fields._size <= (unsigned int)v33 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v35 = (SvtEqCombineListViewItem_o *)itemList->fields._items->m_Items[v33];
    if ( !v35 )
      goto LABEL_22;
    v36 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v35->klass->_2.bitflags2 + 1) < (unsigned int)v36
      || (SvtEqCombineListViewItem_c *)v35->klass->_2.typeHierarchy[v36 - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    if ( v35->fields.rarity >= 3 )
    {
      UserSvtId = SvtEqCombineListViewItem__get_UserSvtId(v35, (const MethodInfo *)SvtEqCombineListViewItem_TypeInfo);
      if ( !v31 )
        goto LABEL_22;
      System_Collections_Generic_List_long___Add(
        v31,
        UserSvtId,
        (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
    }
    if ( (int)++v33 >= size )
      goto LABEL_17;
  }
  sub_B173C8(v35);
LABEL_21:
  SvtEqCombineListViewManager__SetSelectMaterialList(v47, v48, v46);
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
    sub_B16F98(
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
  UnityEngine_Component_o *emptyListNoticeLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct ListViewSort_o *sort; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  ListViewSort_o *v37; // x0
  UISprite_o *scaleChangeButtonSprite; // x23
  System_String_o *ScaleKindSpriteName; // x0
  WebViewManager_o *Instance; // x0
  struct UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserServantMaster_o **p_userServantMaster; // x21
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  UserGameEntity_o *SelfUserGame; // x22
  int32_t qp; // w8
  UILabel_o *haveQpLabel; // x24
  Il2CppObject *v52; // x0
  System_String_o *v53; // x0
  UILabel_o *nextExpLabel; // x24
  Il2CppObject *v55; // x0
  System_String_o *v56; // x0
  int64_t UserSvtId; // x0
  const MethodInfo *v58; // x1
  __int64 v59; // x2
  int v60; // w9
  UserServantEntity_array *v61; // x24
  UnityEngine_Component_o *levelUpInfoImg; // x0
  UnityEngine_GameObject_o *v63; // x0
  UserServantEntity_array *ServantEquipList; // x0
  const MethodInfo *v65; // x2
  il2cpp_array_size_t max_length; // w20
  int32_t FriendShipSvtEquipNum; // w0
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  UnityEngine_Component_o *v72; // x0
  UnityEngine_GameObject_o *v73; // x0
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v74; // x26
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v79; // x27
  int v80; // w8
  __int64 v81; // x21
  UserServantEntity_o *v82; // x28
  __int128 v83; // q0
  int64_t v84; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v86; // q0
  int64_t v87; // x25
  WarBoardUiData_SaveData_array *v88; // x0
  UILabel_o *v89; // x26
  Il2CppObject *v90; // x0
  System_String_o *v91; // x0
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x3
  __int64 v95; // x4
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v96; // x25
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x3
  __int64 v100; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v101; // x0
  SvtEqCombineListViewManager_o *v102; // x0
  const MethodInfo *v103; // x2
  int size; // w8
  int32_t v105; // w24
  WarBoardAIRoute_RouteData_o *v106; // x8
  __int128 v107; // q0
  int64_t v108; // x0
  struct UserServantEntity_o *v109; // x8
  __int128 v110; // q0
  il2cpp_array_size_t v111; // w20
  int32_t v112; // w0
  int v113; // w20
  UnityEngine_Component_o *v114; // x0
  UnityEngine_GameObject_o *v115; // x0
  UserServantEntity_o *v116; // x0
  UILabel_o *v117; // x25
  Il2CppObject *v118; // x0
  System_String_o *v119; // x0
  int v120; // w21
  int v121; // w8
  unsigned int v122; // w25
  Il2CppClass **v123; // x20
  Il2CppClass *v124; // x8
  UserServantEntity_o **v125; // x20
  Il2CppClass *v126; // t1
  Il2CppType byval_arg; // q0
  __int64 v128; // x3
  __int64 v129; // x4
  int64_t v130; // x26
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *selectedMtSvtList_k__BackingField; // x27
  int v132; // w8
  int v133; // w28
  int v134; // w21
  int32_t v135; // w23
  SvtEqCombineListViewItem_o *v136; // x0
  _BOOL4 v137; // w28
  UserServantEntity_array *v138; // x22
  UserServantEntity_o *v139; // x20
  UserServantEntity_o *v140; // x21
  int64_t favoriteUserSvtId; // x24
  SvtEqCombineListViewItem_o *v142; // x27
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *v143; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  UILabel_o *servantInfoLabel; // x20
  System_String_o *v146; // x21
  Il2CppObject *v147; // x22
  Il2CppObject *v148; // x0
  System_String_o *v149; // x0
  const MethodInfo *v150; // x1
  const MethodInfo *v151; // x1
  const MethodInfo *v152; // [xsp+8h] [xbp-168h]
  int v153; // [xsp+14h] [xbp-15Ch]
  int v154; // [xsp+18h] [xbp-158h]
  UserGameEntity_o *v157; // [xsp+30h] [xbp-140h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v159; // [xsp+40h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v160; // [xsp+60h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v161; // [xsp+80h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v162; // [xsp+A0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v163; // [xsp+C0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v164; // [xsp+E0h] [xbp-90h] BYREF
  int32_t svtEquipKeep; // [xsp+108h] [xbp-68h] BYREF
  float barExp; // [xsp+10Ch] [xbp-64h] BYREF
  int32_t lateExp[2]; // [xsp+110h] [xbp-60h] BYREF

  if ( (byte_40FD626 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&type);
    sub_B16FFC(&int_TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__Remove__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity___ctor___66750736, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__, v18);
    sub_B16FFC(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v19);
    sub_B16FFC(&LocalizationManager_TypeInfo, v20);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B16FFC(&SvtEqCombineListViewItem_TypeInfo, v23);
    sub_B16FFC(&StringLiteral_23433/*"{0:N0}"*/, v24);
    sub_B16FFC(&StringLiteral_12413/*"SUM_INFO"*/, v25);
    byte_40FD626 = 1;
  }
  *(_QWORD *)lateExp = 0LL;
  barExp = 0.0;
  emptyListNoticeLabel = (UnityEngine_Component_o *)this->fields.emptyListNoticeLabel;
  if ( !emptyListNoticeLabel )
    goto LABEL_111;
  gameObject = UnityEngine_Component__get_gameObject(emptyListNoticeLabel, 0LL);
  if ( !gameObject )
    goto LABEL_111;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
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
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)normalSizeSeed,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  v37 = this->fields.sort;
  if ( !v37 )
    goto LABEL_111;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  ScaleKindSpriteName = ListViewSort__GetScaleKindSpriteName(v37, this->fields.scaleType, 0LL);
  if ( !scaleChangeButtonSprite )
    goto LABEL_111;
  UISprite__set_spriteName(scaleChangeButtonSprite, ScaleKindSpriteName, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_111;
  MasterData_WarQuestSelectionMaster = (struct UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = &this->fields.userServantMaster;
  this->fields.userServantMaster = MasterData_WarQuestSelectionMaster;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userServantMaster,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !SelfUserGame )
    goto LABEL_111;
  qp = SelfUserGame->fields.qp;
  haveQpLabel = this->fields.haveQpLabel;
  this->fields.userQP = qp;
  LODWORD(v164.fields.currentCryptoKey) = qp;
  v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v164);
  v53 = System_String__Format((System_String_o *)StringLiteral_23433/*"{0:N0}"*/, v52, 0LL);
  if ( !haveQpLabel )
    goto LABEL_111;
  UILabel__set_text(haveQpLabel, v53, 0LL);
  *(_OWORD *)&this->fields.selectSum = 0u;
  this->fields.isAllUpMax = 0;
  *(_QWORD *)&this->fields.getHpUpVal = 0LL;
  lateExp[0] = 0;
  nextExpLabel = this->fields.nextExpLabel;
  svtEquipKeep = 0;
  v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtEquipKeep);
  v56 = System_String__Format((System_String_o *)StringLiteral_23433/*"{0:N0}"*/, v55, 0LL);
  if ( !nextExpLabel )
    goto LABEL_111;
  UILabel__set_text(nextExpLabel, v56, 0LL);
  v157 = SelfUserGame;
  if ( type )
  {
    v60 = 0;
    v61 = 0LL;
  }
  else
  {
    levelUpInfoImg = (UnityEngine_Component_o *)this->fields.levelUpInfoImg;
    if ( !levelUpInfoImg )
      goto LABEL_111;
    v63 = UnityEngine_Component__get_gameObject(levelUpInfoImg, 0LL);
    if ( !v63 )
      goto LABEL_111;
    UnityEngine_GameObject__SetActive(v63, 0, 0LL);
    if ( !*p_userServantMaster )
      goto LABEL_111;
    ServantEquipList = UserServantMaster__getServantEquipList(*p_userServantMaster, 0LL);
    if ( !ServantEquipList )
      goto LABEL_111;
    max_length = ServantEquipList->max_length;
    v61 = ServantEquipList;
    FriendShipSvtEquipNum = SvtEqCombineListViewManager__GetFriendShipSvtEquipNum(
                              (SvtEqCombineListViewManager_o *)ServantEquipList,
                              ServantEquipList,
                              v65);
    v153 = max_length - FriendShipSvtEquipNum;
    if ( FriendShipSvtEquipNum <= 0 && v153 <= 0 )
    {
      v72 = (UnityEngine_Component_o *)this->fields.emptyListNoticeLabel;
      if ( !v72 )
        goto LABEL_111;
      v73 = UnityEngine_Component__get_gameObject(v72, 0LL);
      if ( !v73 )
        goto LABEL_111;
      UnityEngine_GameObject__SetActive(v73, 1, 0LL);
    }
    v74 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                            System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                            v68,
                                                                            v69,
                                                                            v70,
                                                                            v71);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v74,
      (System_Collections_Generic_IEnumerable_T__o *)v61,
      (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_UserServantEntity___ctor___66750736);
    v79 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                                                    v75,
                                                                                                    v76,
                                                                                                    v77,
                                                                                                    v78);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v79,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( !this->fields.baseUsrSvtData )
      goto LABEL_75;
    v80 = v61->max_length;
    if ( v80 >= 1 )
    {
      v81 = 0LL;
      while ( (unsigned int)v81 < v80 )
      {
        v82 = v61->m_Items[v81];
        if ( !v82 )
          goto LABEL_111;
        v83 = *(_OWORD *)&v82->fields.id.fields.fakeValue;
        *(_OWORD *)&v164.fields.currentCryptoKey = *(_OWORD *)&v82->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v164.fields.fakeValue = v83;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v163 = v164;
        v84 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v163, 0LL);
        baseUsrSvtData = this->fields.baseUsrSvtData;
        if ( !baseUsrSvtData )
          goto LABEL_111;
        v86 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
        v87 = v84;
        *(_OWORD *)&v162.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v162.fields.fakeValue = v86;
        UserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v162, 0LL);
        if ( v87 == UserSvtId )
        {
          if ( !v79 )
            goto LABEL_111;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v79,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v82,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
          if ( !v74 )
            goto LABEL_111;
          UserSvtId = System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                        (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v74,
                        (WarBoardManager_TaskList_o *)v82,
                        (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
        }
        v80 = v61->max_length;
        if ( (int)++v81 >= v80 )
          goto LABEL_44;
      }
LABEL_112:
      sub_B17100(UserSvtId, v58, v59);
      sub_B170A0();
    }
LABEL_44:
    if ( !v79 )
      goto LABEL_111;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v79,
      (System_Collections_Generic_IEnumerable_T__o *)v74,
      (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    v88 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v79,
            (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    p_userServantMaster = &this->fields.userServantMaster;
    if ( !this->fields.baseUsrSvtData )
      goto LABEL_111;
    v61 = (UserServantEntity_array *)v88;
    UserServantEntity__getExpInfo(this->fields.baseUsrSvtData, &lateExp[1], lateExp, &barExp, 0LL);
    v89 = this->fields.nextExpLabel;
    LODWORD(v164.fields.currentCryptoKey) = lateExp[0];
    v90 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v164);
    v91 = System_String__Format((System_String_o *)StringLiteral_23433/*"{0:N0}"*/, v90, 0LL);
    if ( !v89 )
      goto LABEL_111;
    UILabel__set_text(v89, v91, 0LL);
    v60 = v153;
  }
  if ( type != 1 )
  {
    v153 = v60;
    if ( !v61 )
      goto LABEL_111;
LABEL_75:
    v120 = 0;
    goto LABEL_76;
  }
  if ( !*p_userServantMaster )
    goto LABEL_111;
  v61 = UserServantMaster__getServantEquipList(*p_userServantMaster, 0LL);
  v96 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                          System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                          v92,
                                                                          v93,
                                                                          v94,
                                                                          v95);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v96,
    (System_Collections_Generic_IEnumerable_T__o *)v61,
    (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_UserServantEntity___ctor___66750736);
  v101 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                                                   v97,
                                                                                                   v98,
                                                                                                   v99,
                                                                                                   v100);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v101,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( this->fields.baseUsrSvtData )
  {
    if ( !v96 )
      goto LABEL_111;
    size = v96->fields._size;
    if ( size >= 1 )
    {
      v105 = 0;
      while ( 1 )
      {
        if ( size <= (unsigned int)v105 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v106 = v96->fields._items->m_Items[v105];
        if ( !v106 )
          break;
        v107 = *(_OWORD *)&v106->fields.baseSquare;
        *(_OWORD *)&v164.fields.currentCryptoKey = *(_OWORD *)&v106->fields.flagNow;
        *(_OWORD *)&v164.fields.fakeValue = v107;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v161 = v164;
        v108 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v161, 0LL);
        v109 = this->fields.baseUsrSvtData;
        if ( !v109 )
          break;
        v110 = *(_OWORD *)&v109->fields.id.fields.fakeValue;
        *(_OWORD *)&v160.fields.currentCryptoKey = *(_OWORD *)&v109->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v160.fields.fakeValue = v110;
        if ( v108 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v160, 0LL) )
          System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)v96,
            v105,
            (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
        size = v96->fields._size;
        if ( ++v105 >= size )
          goto LABEL_64;
      }
LABEL_111:
      sub_B170D4();
    }
LABEL_64:
    v102 = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v96,
                                              (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    v61 = (UserServantEntity_array *)v102;
  }
  if ( !v61 )
    goto LABEL_111;
  v111 = v61->max_length;
  v112 = SvtEqCombineListViewManager__GetFriendShipSvtEquipNum(v102, v61, v103);
  v113 = v111 - v112;
  if ( v112 <= 0 && v113 <= 0 )
  {
    v114 = (UnityEngine_Component_o *)this->fields.emptyListNoticeLabel;
    if ( !v114 )
      goto LABEL_111;
    v115 = UnityEngine_Component__get_gameObject(v114, 0LL);
    if ( !v115 )
      goto LABEL_111;
    UnityEngine_GameObject__SetActive(v115, 1, 0LL);
  }
  v116 = this->fields.baseUsrSvtData;
  v153 = v113;
  if ( !v116 )
    goto LABEL_111;
  UserServantEntity__getExpInfo(v116, &lateExp[1], lateExp, &barExp, 0LL);
  v117 = this->fields.nextExpLabel;
  LODWORD(v164.fields.currentCryptoKey) = lateExp[0];
  v118 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v164);
  v119 = System_String__Format((System_String_o *)StringLiteral_23433/*"{0:N0}"*/, v118, 0LL);
  if ( !v117 )
    goto LABEL_111;
  UILabel__set_text(v117, v119, 0LL);
  v120 = 1;
LABEL_76:
  v121 = v61->max_length;
  if ( v121 >= 1 )
  {
    v122 = 0;
    v154 = v120;
    while ( v122 < v121 )
    {
      v123 = &v61->obj.klass + (int)v122;
      v126 = v123[4];
      v125 = (UserServantEntity_o **)(v123 + 4);
      v124 = v126;
      if ( !v126 )
        goto LABEL_111;
      byval_arg = v124->_1.byval_arg;
      *(_OWORD *)&v164.fields.currentCryptoKey = *(_OWORD *)&v124->_1.name;
      *(Il2CppType *)&v164.fields.fakeValue = byval_arg;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v159 = v164;
      UserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v159, 0LL);
      v130 = UserSvtId;
      if ( v120
        && (selectedMtSvtList_k__BackingField = this->fields._selectedMtSvtList_k__BackingField) != 0LL
        && (v132 = selectedMtSvtList_k__BackingField->fields._size, v132 >= 1) )
      {
        v133 = 0;
        v134 = 0;
        v135 = 0;
        do
        {
          if ( v132 <= (unsigned int)v133 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v136 = selectedMtSvtList_k__BackingField->fields._items->m_Items[v133];
          if ( !v136 )
            goto LABEL_111;
          UserSvtId = SvtEqCombineListViewItem__get_UserSvtId(v136, v58);
          selectedMtSvtList_k__BackingField = this->fields._selectedMtSvtList_k__BackingField;
          if ( !selectedMtSvtList_k__BackingField )
            goto LABEL_111;
          v132 = selectedMtSvtList_k__BackingField->fields._size;
          if ( UserSvtId == v130 )
            v135 = v133;
          ++v133;
          if ( UserSvtId == v130 )
            v134 = 1;
        }
        while ( v133 < v132 );
        v137 = v134;
      }
      else
      {
        v137 = 0;
        v135 = 0;
      }
      if ( v122 >= v61->max_length )
        break;
      v138 = v61;
      v139 = *v125;
      v140 = this->fields.baseUsrSvtData;
      favoriteUserSvtId = v157->fields.favoriteUserSvtId;
      v142 = (SvtEqCombineListViewItem_o *)sub_B170CC(SvtEqCombineListViewItem_TypeInfo, v58, v59, v128, v129);
      SvtEqCombineListViewItem___ctor(
        v142,
        type,
        v122,
        v139,
        v130 == favoriteUserSvtId,
        v140,
        v137,
        setupInfo,
        finishSetupInfo,
        v152);
      v120 = v154;
      if ( (v154 & v137) == 1 )
      {
        if ( !v142 )
          goto LABEL_111;
        v142->fields.selectNum = v135;
        v143 = this->fields._selectedMtSvtList_k__BackingField;
        ++this->fields.selectSum;
        if ( !v143 )
          goto LABEL_111;
        if ( v135 == v143->fields._size - 1 )
          v142->fields.isLastSelectMaterial = 1;
      }
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_111;
      v61 = v138;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v142,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      v121 = v138->max_length;
      if ( (int)++v122 >= v121 )
        goto LABEL_106;
    }
    goto LABEL_112;
  }
LABEL_106:
  SvtEqCombineListViewManager__RefrashListDisp(this, v58);
  servantInfoLabel = this->fields.servantInfoLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v146 = LocalizationManager__Get((System_String_o *)StringLiteral_12413/*"SUM_INFO"*/, 0LL);
  LODWORD(v164.fields.currentCryptoKey) = v153;
  v147 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v164);
  svtEquipKeep = v157->fields.svtEquipKeep;
  v148 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtEquipKeep);
  v149 = System_String__Format_43739268(v146, v147, v148, 0LL);
  if ( !servantInfoLabel )
    goto LABEL_111;
  UILabel__set_text(servantInfoLabel, v149, 0LL);
  SvtEqCombineListViewManager__SetMaterialSvtInfo(this, v150);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  SvtEqCombineListViewManager__SetFilterButtonImage(this, v151);
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
  System_String_o *SortKindButtonText; // x0
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v14; // x8
  int32_t sortKind; // w9
  UISprite_o *sortExplanationSprite; // x0
  System_String_o **v17; // x8
  struct ListViewSort_o *v18; // x8
  UISprite_o *v19; // x0
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v21; // x9
  System_String_o **v22; // x10
  UISprite_o *v23; // x0
  System_String_o **v24; // x8
  struct ListViewSort_o *v25; // x8
  System_String_o **v26; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  ListViewSort_o *v28; // x0
  UILabel_o *v29; // x20
  System_String_o *BonusKind2Text_30244736; // x0
  UIWidget_o *v31; // x0
  struct UILabel_o *v32; // x0
  UILabel_o *v33; // x0

  if ( (byte_40FD64E & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_16955/*"btn_sort_up"*/, v3);
    sub_B16FFC(&StringLiteral_17038/*"btn_txt_up"*/, v4);
    sub_B16FFC(&StringLiteral_16995/*"btn_txt_new"*/, v5);
    sub_B16FFC(&StringLiteral_16985/*"btn_txt_down"*/, v6);
    sub_B16FFC(&StringLiteral_17002/*"btn_txt_old"*/, v7);
    sub_B16FFC(&StringLiteral_16952/*"btn_sort_down"*/, v8);
    byte_40FD64E = 1;
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
    SortKindButtonText = ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v11 )
      goto LABEL_46;
    UILabel__set_text(v11, SortKindButtonText, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL) )
  {
    v14 = this->fields.sort;
    if ( !v14 )
      goto LABEL_46;
    sortKind = v14->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sortExplanationSprite = this->fields.sortExplanationSprite;
      if ( !sortExplanationSprite )
        goto LABEL_46;
      v17 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17002/*"btn_txt_old"*/ : &StringLiteral_16995/*"btn_txt_new"*/);
      UISprite__set_spriteName(sortExplanationSprite, *v17, 0LL);
      v18 = this->fields.sort;
      if ( !v18 )
        goto LABEL_46;
      v19 = this->fields.sortOrderSprite;
      if ( !v19 )
        goto LABEL_46;
      isAscendingOrder = v18->fields.isAscendingOrder;
      v21 = (System_String_o **)&StringLiteral_16952/*"btn_sort_down"*/;
      v22 = (System_String_o **)&StringLiteral_16955/*"btn_sort_up"*/;
    }
    else
    {
      v23 = this->fields.sortExplanationSprite;
      if ( !v23 )
        goto LABEL_46;
      v24 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17038/*"btn_txt_up"*/ : &StringLiteral_16985/*"btn_txt_down"*/);
      UISprite__set_spriteName(v23, *v24, 0LL);
      v25 = this->fields.sort;
      if ( !v25 )
        goto LABEL_46;
      v19 = this->fields.sortOrderSprite;
      if ( !v19 )
        goto LABEL_46;
      isAscendingOrder = v25->fields.isAscendingOrder;
      v21 = (System_String_o **)&StringLiteral_16955/*"btn_sort_up"*/;
      v22 = (System_String_o **)&StringLiteral_16952/*"btn_sort_down"*/;
    }
    if ( isAscendingOrder )
      v26 = v21;
    else
      v26 = v22;
    UISprite__set_spriteName(v19, *v26, 0LL);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0LL, 0LL) )
  {
    v28 = this->fields.sort;
    if ( v28 )
    {
      v29 = this->fields.bonusFilterKindLabel;
      BonusKind2Text_30244736 = ListViewSort__GetBonusKind2Text_30244736(
                                  v28,
                                  this->fields.bonusEventIdList,
                                  0LL,
                                  0LL,
                                  0LL,
                                  this->fields.bonusFinishEventIdList,
                                  0LL);
      if ( v29 )
      {
        UILabel__set_text(v29, BonusKind2Text_30244736, 0LL);
        v31 = (UIWidget_o *)this->fields.bonusFilterKindLabel;
        if ( v31 )
        {
          UIWidget__set_width(v31, 144, 0LL);
          v32 = this->fields.bonusFilterKindLabel;
          if ( v32 )
          {
            ((void (__fastcall *)(struct UILabel_o *, Il2CppMethodPointer))v32->klass->vtable._33_MakePixelPerfect.method)(
              v32,
              v32->klass->vtable._34_get_minWidth.methodPtr);
            v33 = this->fields.bonusFilterKindLabel;
            if ( v33 )
            {
              UILabel__SetCondensedScale(v33, 144, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_46:
    sub_B170D4();
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
  struct UICommonButton_o *statusTabButton; // x0
  UnityEngine_Behaviour_o *v16; // x0
  UISprite_o *statusTabSprite; // x0
  System_String_o **v18; // x8
  struct UICommonButton_o *v19; // x0
  UICommonButton_o *v20; // x21
  bool enabled; // w0
  struct UICommonButton_o *lockTabButton; // x0
  UnityEngine_Behaviour_o *v23; // x0
  UISprite_o *lockTabSprite; // x0
  System_String_o **v25; // x8
  struct UICommonButton_o *v26; // x0
  UICommonButton_o *v27; // x21
  bool v28; // w0
  struct UICommonButton_o *choiceTabButton; // x0
  UnityEngine_Behaviour_o *v30; // x0
  UISprite_o *choiceTabSprite; // x0
  System_String_o **v32; // x8
  struct UICommonButton_o *v33; // x0
  UICommonButton_o *v34; // x20
  bool v35; // w0
  int32_t currentType; // w8
  UILabel_o *combineInfoMsgLb; // x20
  __int64 *v38; // x8
  System_String_o *v39; // x0
  int32_t v40; // w8
  UILabel_o *v41; // x20
  __int64 *v42; // x8
  System_String_o *v43; // x0
  UILabel_o *v44; // x0
  int32_t v45; // w1

  if ( (byte_40FD623 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
    sub_B16FFC(&StringLiteral_17057/*"button_allchoice_reg"*/, v5);
    sub_B16FFC(&StringLiteral_17060/*"button_alllock_unreg"*/, v6);
    sub_B16FFC(&StringLiteral_11699/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v7);
    sub_B16FFC(&StringLiteral_11700/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v8);
    sub_B16FFC(&StringLiteral_17073/*"button_select_reg"*/, v9);
    sub_B16FFC(&StringLiteral_7016/*"HEADER_MSG_SVTEQ_MATERIAL"*/, v10);
    sub_B16FFC(&StringLiteral_7015/*"HEADER_MSG_SVTEQ_BASE"*/, v11);
    sub_B16FFC(&StringLiteral_17074/*"button_select_unreg"*/, v12);
    sub_B16FFC(&StringLiteral_17059/*"button_alllock_reg"*/, v13);
    sub_B16FFC(&StringLiteral_17058/*"button_allchoice_unreg"*/, v14);
    byte_40FD623 = 1;
  }
  statusTabButton = this->fields.statusTabButton;
  this->fields.modeKind = modeKind;
  if ( !statusTabButton )
    goto LABEL_56;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))statusTabButton->klass->vtable._5_set_isEnabled.method)(
    statusTabButton,
    1LL,
    statusTabButton->klass->vtable._6_OnInit.methodPtr);
  v16 = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !v16 )
    goto LABEL_56;
  UnityEngine_Behaviour__set_enabled(v16, modeKind != 0, 0LL);
  statusTabSprite = this->fields.statusTabSprite;
  if ( !statusTabSprite )
    goto LABEL_56;
  v18 = (System_String_o **)&StringLiteral_17073/*"button_select_reg"*/;
  if ( modeKind )
    v18 = (System_String_o **)&StringLiteral_17074/*"button_select_unreg"*/;
  UISprite__set_spriteName(statusTabSprite, *v18, 0LL);
  v19 = this->fields.statusTabButton;
  if ( !v19 )
    goto LABEL_56;
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))v19->klass->vtable._14_SetState.method)(
    v19,
    0LL,
    0LL,
    v19->klass->vtable._15_OnPress.methodPtr);
  v20 = this->fields.statusTabButton;
  if ( !v20 )
    goto LABEL_56;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0LL);
  UICommonButton__SetColliderEnable(v20, enabled, 0, 0LL);
  lockTabButton = this->fields.lockTabButton;
  if ( !lockTabButton )
    goto LABEL_56;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))lockTabButton->klass->vtable._5_set_isEnabled.method)(
    lockTabButton,
    1LL,
    lockTabButton->klass->vtable._6_OnInit.methodPtr);
  v23 = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !v23 )
    goto LABEL_56;
  UnityEngine_Behaviour__set_enabled(v23, modeKind != 1, 0LL);
  lockTabSprite = this->fields.lockTabSprite;
  if ( !lockTabSprite )
    goto LABEL_56;
  v25 = (System_String_o **)&StringLiteral_17059/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v25 = (System_String_o **)&StringLiteral_17060/*"button_alllock_unreg"*/;
  UISprite__set_spriteName(lockTabSprite, *v25, 0LL);
  v26 = this->fields.lockTabButton;
  if ( !v26 )
    goto LABEL_56;
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))v26->klass->vtable._14_SetState.method)(
    v26,
    0LL,
    0LL,
    v26->klass->vtable._15_OnPress.methodPtr);
  v27 = this->fields.lockTabButton;
  if ( !v27 )
    goto LABEL_56;
  v28 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
  UICommonButton__SetColliderEnable(v27, v28, 0, 0LL);
  choiceTabButton = this->fields.choiceTabButton;
  if ( !choiceTabButton )
    goto LABEL_56;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))choiceTabButton->klass->vtable._5_set_isEnabled.method)(
    choiceTabButton,
    1LL,
    choiceTabButton->klass->vtable._6_OnInit.methodPtr);
  v30 = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !v30 )
    goto LABEL_56;
  UnityEngine_Behaviour__set_enabled(v30, modeKind != 2, 0LL);
  choiceTabSprite = this->fields.choiceTabSprite;
  if ( !choiceTabSprite )
    goto LABEL_56;
  v32 = (System_String_o **)&StringLiteral_17057/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v32 = (System_String_o **)&StringLiteral_17058/*"button_allchoice_unreg"*/;
  UISprite__set_spriteName(choiceTabSprite, *v32, 0LL);
  v33 = this->fields.choiceTabButton;
  if ( !v33 )
    goto LABEL_56;
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))v33->klass->vtable._14_SetState.method)(
    v33,
    0LL,
    0LL,
    v33->klass->vtable._15_OnPress.methodPtr);
  v34 = this->fields.choiceTabButton;
  if ( !v34 )
    goto LABEL_56;
  v35 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
  UICommonButton__SetColliderEnable(v34, v35, 0, 0LL);
  currentType = this->fields.currentType;
  if ( currentType == 1 )
  {
    combineInfoMsgLb = this->fields.combineInfoMsgLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v38 = &StringLiteral_7016/*"HEADER_MSG_SVTEQ_MATERIAL"*/;
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
    v38 = &StringLiteral_7015/*"HEADER_MSG_SVTEQ_BASE"*/;
  }
  v39 = LocalizationManager__Get((System_String_o *)*v38, 0LL);
  if ( !combineInfoMsgLb )
    goto LABEL_56;
  UILabel__set_text(combineInfoMsgLb, v39, 0LL);
LABEL_36:
  v40 = this->fields.modeKind;
  if ( v40 == 1 )
  {
    v41 = this->fields.combineInfoMsgLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v42 = &StringLiteral_11700/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
  }
  else
  {
    if ( v40 != 2 )
      goto LABEL_48;
    v41 = this->fields.combineInfoMsgLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v42 = &StringLiteral_11699/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
  }
  v43 = LocalizationManager__Get((System_String_o *)*v42, 0LL);
  if ( !v41 )
    goto LABEL_56;
  UILabel__set_text(v41, v43, 0LL);
LABEL_48:
  v44 = this->fields.combineInfoMsgLb;
  if ( (unsigned int)(this->fields.modeKind - 1) >= 2 )
  {
    if ( this->fields.currentType )
      v45 = 12;
    else
      v45 = 20;
    if ( v44 )
      goto LABEL_55;
LABEL_56:
    sub_B170D4();
  }
  v45 = 14;
  if ( !v44 )
    goto LABEL_56;
LABEL_55:
  UILabel__set_fontSize(v44, v45, 0LL);
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
  __int64 v18; // x3
  __int64 v19; // x4
  NetworkManager_ResultCallbackFunc_o *v20; // x20
  CardStatusSyncRequest_o *Request_WarBoardWallAttackRequest; // x0
  System_Int64_array *v22; // x2
  System_Int64_array *v23; // x1
  bool v24; // w4
  bool v25; // w5
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  NetworkManager_ResultCallbackFunc_o *v36; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_40FD656 & 1) == 0 )
  {
    sub_B16FFC(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_B16FFC(&Method_SvtEqCombineListViewManager_EndStatusSync__, v8);
    byte_40FD656 = 1;
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
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.requestCallback,
        (System_Int32_array **)callback,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
      v36 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v32,
                                                     v33,
                                                     v34,
                                                     v35);
      NetworkManager_ResultCallbackFunc___ctor(
        v36,
        (Il2CppObject *)this,
        Method_SvtEqCombineListViewManager_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                       v36,
                                                                       (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        v22 = unchoiceList;
        v23 = choiceList;
        v25 = 1;
        v24 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_B170D4();
    }
  }
  else if ( modeKind == 1 && SvtEqCombineListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.requestCallback,
      (System_Int32_array **)callback,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    v20 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   v16,
                                                   v17,
                                                   v18,
                                                   v19);
    NetworkManager_ResultCallbackFunc___ctor(
      v20,
      (Il2CppObject *)this,
      Method_SvtEqCombineListViewManager_EndStatusSync__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                     v20,
                                                                     (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( Request_WarBoardWallAttackRequest )
    {
      v22 = unlockList;
      v23 = lockList;
      v24 = 1;
      v25 = 0;
LABEL_17:
      CardStatusSyncRequest__beginRequest(Request_WarBoardWallAttackRequest, v23, v22, 0, v24, v25, 0LL);
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

  if ( (byte_40FD619 & 1) == 0 )
  {
    sub_B16FFC(&SvtEqCombineListViewManager_CallbackFunc_TypeInfo, value);
    byte_40FD619 = 1;
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
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
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

  if ( (byte_40FD61B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FD61B = 1;
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
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  SvtEqCombineListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_SvtEqCombineListViewObject__o *__fastcall SvtEqCombineListViewManager__get_ClippingObjectList(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  SvtEqCombineListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40FD621 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_SvtEqCombineListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40FD621 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_SvtEqCombineListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (SvtEqCombineListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  (UnityEngine_GameObject_o *)current,
                                                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B170D4();
      Item = (ListViewItem_o *)SvtEqCombineListViewObject__GetItem(Component_srcLineSprite, v18);
      if ( !Item )
        sub_B170D4();
      if ( Item->fields.isTermination )
      {
        if ( ListViewManager__ClippingItem_30192136((ListViewManager_o *)this, Item, 0LL) )
        {
          if ( !v14 )
            sub_B170D4();
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v14 )
          sub_B170D4();
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          v19,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SvtEqCombineListViewObject__o *)v14;
}


System_Collections_Generic_List_SvtEqCombineListViewObject__o *__fastcall SvtEqCombineListViewManager__get_ObjectList(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40FD620 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_SvtEqCombineListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40FD620 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_SvtEqCombineListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___);
      if ( !v14 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        Component_srcLineSprite,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SvtEqCombineListViewObject__o *)v14;
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

  if ( (byte_40FD61A & 1) == 0 )
  {
    sub_B16FFC(&SvtEqCombineListViewManager_CallbackFunc_TypeInfo, value);
    byte_40FD61A = 1;
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
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
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

  if ( (byte_40FD61C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FD61C = 1;
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
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
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
  sub_B16F98(
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F7795 & 1) == 0 )
  {
    sub_B16FFC(&SvtEqCombineListViewManager_ResultKind_TypeInfo, *(_QWORD *)&kind);
    byte_40F7795 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(SvtEqCombineListViewManager_ResultKind_TypeInfo, &v12);
  v11[1] = (__int64)list;
  return (System_IAsyncResult_o *)sub_B16FA0(this, v11, callback, object);
}


void __fastcall SvtEqCombineListViewManager_CallbackFunc__EndInvoke(
        SvtEqCombineListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&kind, list);
      if ( (sub_B1702C(v22) & 1) == 0 )
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
      v24 = sub_B17024(v22);
      v25 = sub_B17428(v22);
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
            v18 = sub_AAFEF8(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, System_Int32_array *, _QWORD))sub_B170AC(v17, v22);
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
            v16 = sub_AAFEF8(v21, class_0, v10);
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F7796 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, isRequest);
    byte_40F7796 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall SvtEqCombineListViewManager_RequestCallbackFunc__EndInvoke(
        SvtEqCombineListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, isRequest, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
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
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
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
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
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
            v14 = sub_AAFEF8(v19, class_0, v9);
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
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7794 & 1) == 0 )
  {
    sub_B16FFC(&SvtEqCombineListViewManager___c_TypeInfo, v1);
    byte_40F7794 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(SvtEqCombineListViewManager___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)SvtEqCombineListViewManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return a->fields.selectNum - b->fields.selectNum;
}