void __fastcall SvtEqCombineListViewManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct SvtEqCombineListViewManager_StaticFields *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42EE512 & 1) == 0 )
  {
    sub_B5D5C4(&SvtEqCombineListViewManager_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_13333/*"SvtEqCombine"*/, v8, v9, v10);
    byte_42EE512 = 1;
  }
  SvtEqCombineListViewManager_TypeInfo->static_fields->COLOR_VAL = 0.375;
  SvtEqCombineListViewManager_TypeInfo->static_fields->FILTER2_MAX_KIND_NUM = 1;
  static_fields = SvtEqCombineListViewManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_13333/*"SvtEqCombine"*/;
  static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_13333/*"SvtEqCombine"*/;
  sub_B5D560((BattleServantConfConponent_o *)&static_fields->SORT_SAVE_KEY, v12, v2, v3, v4, v5, v6, v7);
  SvtEqCombineListViewManager_TypeInfo->static_fields->isInitSystem = 0;
}


void __fastcall SvtEqCombineListViewManager___ctor(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42EE511 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo, v5, v6, v7);
    byte_42EE511 = 1;
  }
  this->fields.selectMax = 20;
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
  this->fields.tempMtSvtList = (struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.tempMtSvtList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
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
  __int64 v3; // x3
  SvtEqCombineListViewManager_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x20
  __int64 v10; // x9
  SvtEqCombineListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  v5 = this;
  if ( (byte_42EE510 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, index, (_DWORD)method, v3);
    this = (SvtEqCombineListViewManager_o *)sub_B5D5C4(&SvtEqCombineListViewItem_TypeInfo, v6, v7, v8);
    byte_42EE510 = 1;
  }
  itemSortList = v5->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_10;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  this = (SvtEqCombineListViewManager_o *)itemSortList->fields._items->m_Items[index];
  if ( !this )
LABEL_10:
    sub_B5D69C(this, *(_QWORD *)&index);
  v10 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v10
    && (SvtEqCombineListViewItem_c *)this->klass->_2.typeHierarchy[v10 - 1] == SvtEqCombineListViewItem_TypeInfo )
  {
    LODWORD(this->fields.rightItem) = -1;
  }
  else
  {
    sub_B5D990(this);
    SvtEqCombineListViewManager___ctor(v11, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SvtEqCombineListViewManager__CheckCompareQp(
        SvtEqCombineListViewManager_o *this,
        int32_t nowCombineQp,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v4; // w19
  SvtEqCombineListViewManager_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  int size; // w22
  unsigned int v14; // w23
  ListViewItem_o *v15; // x21
  __int64 v16; // x9
  SvtEqCombineListViewManager_o *v18; // x0
  int32_t *v19; // x1
  int32_t *v20; // x2
  int32_t v21; // w3
  const MethodInfo *v22; // x4

  v4 = nowCombineQp;
  v5 = this;
  if ( (byte_42EE4DC & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, nowCombineQp, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6, v7, v8);
    this = (SvtEqCombineListViewManager_o *)sub_B5D5C4(&SvtEqCombineListViewItem_TypeInfo, v9, v10, v11);
    byte_42EE4DC = 1;
  }
  if ( !v5->fields.selectSum )
    return v4;
  itemList = v5->fields.itemList;
  if ( !itemList )
LABEL_20:
    sub_B5D69C(this, *(_QWORD *)&nowCombineQp);
  size = itemList->fields._size;
  if ( size < 1 )
    return v4;
  v14 = 0;
  while ( 1 )
  {
    if ( itemList->fields._size <= v14 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v15 = itemList->fields._items->m_Items[v14];
    if ( !v15 )
      goto LABEL_20;
    v16 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v15->klass->_2.bitflags2 + 1) < (unsigned int)v16
      || (SvtEqCombineListViewItem_c *)v15->klass->_2.typeHierarchy[v16 - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    this = (SvtEqCombineListViewManager_o *)ListViewItem__get_IsSelect(v15, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 && BYTE1(v15[1].fields.sortValue1) )
    {
      this = (SvtEqCombineListViewManager_o *)v15[1].monitor;
      if ( !this )
        goto LABEL_20;
      this = (SvtEqCombineListViewManager_o *)UserServantEntity__getCombineQpSvtEq((UserServantEntity_o *)this, 0LL);
      if ( v4 < (int)this )
      {
        this = (SvtEqCombineListViewManager_o *)v15[1].monitor;
        if ( !this )
          goto LABEL_20;
        this = (SvtEqCombineListViewManager_o *)UserServantEntity__getCombineQpSvtEq((UserServantEntity_o *)this, 0LL);
        v4 = (int)this;
      }
    }
    if ( (int)++v14 >= size )
      return v4;
    itemList = v5->fields.itemList;
    if ( !itemList )
      goto LABEL_20;
  }
  sub_B5D990(v15);
  return SvtEqCombineListViewManager__CheckIncrementLv(v18, v19, v20, v21, v22);
}


void __fastcall SvtEqCombineListViewManager__CheckDragMax(
        SvtEqCombineListViewManager_o *this,
        bool *isMaxLvSelected,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  void *itemList; // x0
  int v46; // w24
  int32_t v47; // w21
  SvtEqCombineListViewItem_o *current; // x22
  __int64 v49; // x9
  __int64 v50; // x1
  UserServantEntity_o *baseUsrSvtData; // x0
  const MethodInfo *v52; // x1
  UserServantEntity_o *v53; // x0
  _BOOL8 v54; // x0
  __int64 v55; // x1
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *combineEventList; // x0
  int32_t v58; // w25
  _BOOL8 v59; // x0
  __int64 v60; // x1
  struct UserServantEntity_o *v61; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v62; // x21
  __int64 v63; // x22
  __int64 v64; // x23
  int32_t v65; // w8
  int32_t v66; // w23
  int v67; // w22
  const MethodInfo *v68; // x4
  int32_t LevelMax; // w21
  int32_t v70; // w8
  int v71; // w21
  int32_t v72; // w22
  System_Collections_Generic_List_Enumerator_T__o v73; // [xsp+8h] [xbp-A8h] BYREF
  int v74[2]; // [xsp+20h] [xbp-90h]
  int v75; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_T__o v76; // [xsp+30h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v77; // [xsp+50h] [xbp-60h] BYREF
  int32_t increLv[2]; // [xsp+78h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16

  if ( (byte_42EE4DE & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)isMaxLvSelected, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v33, v34, v35);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v39, v40, v41);
    sub_B5D5C4(&SvtEqCombineListViewItem_TypeInfo, v42, v43, v44);
    byte_42EE4DE = 1;
  }
  memset(&v77, 0, sizeof(v77));
  memset(&v76, 0, sizeof(v76));
  v75 = 0;
  *isMaxLvSelected = 0;
  *(_QWORD *)increLv = 0LL;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_52;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v73,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v77 = v73;
  v46 = 0;
  v47 = 0;
  while ( 1 )
  {
    v54 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v77,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v54 )
      break;
    current = (SvtEqCombineListViewItem_o *)v77.fields.current;
    if ( !v77.fields.current )
      goto LABEL_48;
    v49 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v77.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v49
      || (SvtEqCombineListViewItem_c *)v77.fields.current->klass->_2.typeHierarchy[v49 - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      sub_B5D990(v77.fields.current);
LABEL_48:
      sub_B5D69C(v54, v55);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v77.fields.current, 0LL) || current->fields.dragSelectNum >= 1 )
    {
      baseUsrSvtData = this->fields.baseUsrSvtData;
      if ( !baseUsrSvtData )
        sub_B5D69C(0LL, v50);
      if ( !UserServantEntity__isLevelMax(baseUsrSvtData, 0LL) )
        goto LABEL_15;
      v53 = this->fields.baseUsrSvtData;
      if ( !v53 )
        sub_B5D69C(0LL, v52);
      if ( UserServantEntity__isLevelMax(v53, 0LL) && current->fields.isLimitCntTarget )
      {
LABEL_15:
        v47 += current->fields.materialExp;
        v46 += SvtEqCombineListViewItem__get_GetAddTotalExp(current, v52);
      }
    }
  }
  v74[0] = 144;
  v75 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v77,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  v75 = 0;
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_52;
  combineEventList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)menuListCtr->fields.combineEventList;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v73,
      combineEventList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v76 = v73;
LABEL_21:
    v58 = v47;
    while ( 1 )
    {
      v59 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v76,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v59 )
        break;
      if ( !v76.fields.current )
        sub_B5D69C(v59, v60);
      if ( HIDWORD(v76.fields.current[1].klass) == 17 )
      {
        v47 = UnityEngine_Mathf__CeilToInt(*(float *)&v76.fields.current[3].monitor * (float)v47, 0LL);
        goto LABEL_21;
      }
    }
    v74[0] = 243;
    v71 = ++v75;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v76,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    if ( v71 && v74[v71 - 1] == 243 )
      v75 = v71 - 1;
  }
  else
  {
    v58 = v47;
  }
  if ( this->fields.baseUsrSvtData && this->fields.itemType == 1 )
  {
    itemList = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( itemList )
    {
      itemList = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   (DataManager_o *)itemList,
                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
      v61 = this->fields.baseUsrSvtData;
      if ( v61 )
      {
        v62 = (DataMasterBase_WarMaster__WarEntity__int__o *)itemList;
        v64 = *(_QWORD *)&v61->fields.svtId.fields.currentCryptoKey;
        v63 = *(_QWORD *)&v61->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v79.fields.currentCryptoKey = v64;
        *(_QWORD *)&v79.fields.fakeValue = v63;
        itemList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v79, 0LL);
        if ( v62 )
        {
          itemList = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       v62,
                       (int32_t)itemList,
                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( itemList )
          {
            v65 = *((_DWORD *)itemList + 33);
            itemList = this->fields.baseUsrSvtData;
            this->fields.expType = v65;
            if ( itemList )
            {
              v67 = *((_DWORD *)itemList + 65);
              increLv[0] = *((_DWORD *)itemList + 64);
              v66 = increLv[0];
              LevelMax = UserServantEntity__getLevelMax((UserServantEntity_o *)itemList, 0LL);
              if ( v66 == LevelMax )
              {
                v70 = 0;
              }
              else
              {
                v72 = v58 + v46 + v67;
                while ( !SvtEqCombineListViewManager__CheckIncrementLv(this, increLv, &increLv[1], v72, v68) )
                  ;
                v70 = increLv[1];
              }
              *isMaxLvSelected = v70 >= LevelMax;
              return;
            }
          }
        }
      }
    }
LABEL_52:
    sub_B5D69C(itemList, isMaxLvSelected);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SvtEqCombineListViewManager__CheckIncrementLv(
        SvtEqCombineListViewManager_o *this,
        int32_t *checkLv,
        int32_t *increLv,
        int32_t totalExp,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  void *baseUsrSvtData; // x0
  int32_t LevelMax; // w0
  int32_t v14; // w8
  int32_t v15; // w8
  bool result; // w0

  if ( (byte_42EE4DF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_ServantExpMaster___,
      (_DWORD)checkLv,
      (_DWORD)increLv,
      *(_QWORD *)&totalExp);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42EE4DF = 1;
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
  baseUsrSvtData = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUsrSvtData
    || (baseUsrSvtData = DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)baseUsrSvtData,
                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
    || (baseUsrSvtData = ServantExpMaster__GetEntity(
                           (ServantExpMaster_o *)baseUsrSvtData,
                           this->fields.expType,
                           *checkLv,
                           0LL)) == 0LL )
  {
LABEL_16:
    sub_B5D69C(baseUsrSvtData, checkLv);
  }
  v14 = *((_DWORD *)baseUsrSvtData + 6);
  if ( v14 <= totalExp )
  {
    if ( v14 != totalExp )
    {
      result = 0;
      ++*checkLv;
      return result;
    }
    v15 = *((_DWORD *)baseUsrSvtData + 5) + 1;
  }
  else
  {
    v15 = *((_DWORD *)baseUsrSvtData + 5);
  }
  *increLv = v15;
  return 1;
}


bool __fastcall SvtEqCombineListViewManager__CheckIsMaterialSelectSvt(
        SvtEqCombineListViewManager_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *selectedMtSvtList_k__BackingField; // x0
  const MethodInfo *v19; // x1
  char v20; // w19
  int v21; // w20
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EE4F9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__,
      usrSvtId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v15, v16, v17);
    byte_42EE4F9 = 1;
  }
  memset(&v23, 0, sizeof(v23));
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
        &v23,
        selectedMtSvtList_k__BackingField,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v23,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__) )
      {
        if ( !v23.fields.current )
          sub_B5D69C(0LL, v19);
        if ( SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)v23.fields.current, v19) == usrSvtId )
        {
          v20 = 1;
          v21 = 2;
          goto LABEL_11;
        }
      }
      v21 = 0;
      v20 = 0;
LABEL_11:
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v23,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
      LOBYTE(selectedMtSvtList_k__BackingField) = (v21 == 2) & v20;
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
  int v2; // w2
  __int64 v3; // x3
  SvtEqCombineListViewManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  int size; // w21
  unsigned int v13; // w22
  ListViewItem_o *v14; // x20
  __int64 v15; // x9
  SvtEqCombineListViewManager_o *v17; // x0
  const MethodInfo *v18; // x1

  v4 = this;
  if ( (byte_42EE4ED & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6, v7);
    this = (SvtEqCombineListViewManager_o *)sub_B5D5C4(&SvtEqCombineListViewItem_TypeInfo, v8, v9, v10);
    byte_42EE4ED = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_B5D69C(this, method);
  size = itemList->fields._size;
  if ( size < 1 )
    return 0;
  v13 = 0;
  while ( 1 )
  {
    if ( itemList->fields._size <= v13 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v14 = itemList->fields._items->m_Items[v13];
    if ( !v14 )
      goto LABEL_16;
    v15 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v14->klass->_2.bitflags2 + 1) < (unsigned int)v15
      || (SvtEqCombineListViewItem_c *)v14->klass->_2.typeHierarchy[v15 - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    this = (SvtEqCombineListViewManager_o *)ListViewItem__get_IsSelect(v14, 0LL);
    if ( ((unsigned __int8)this & 1) != 0
      && (LOBYTE(v14[1].fields.basePosition.fields.x) || LOBYTE(v14[2].fields.index)) )
    {
      return 1;
    }
    if ( (int)++v13 >= size )
      return 0;
    itemList = v4->fields.itemList;
    if ( !itemList )
      goto LABEL_16;
  }
  sub_B5D990(v14);
  return (unsigned __int8)SvtEqCombineListViewManager__GetSelectedMaterialList(v17, v18);
}


void __fastcall SvtEqCombineListViewManager__ClearSelectedSvtList(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *selectedMtSvtList_k__BackingField; // x0

  if ( (byte_42EE4F1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__, (_DWORD)method, v2, v3);
    byte_42EE4F1 = 1;
  }
  selectedMtSvtList_k__BackingField = this->fields._selectedMtSvtList_k__BackingField;
  if ( selectedMtSvtList_k__BackingField )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)selectedMtSvtList_k__BackingField,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__);
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
    sub_B5D69C(servantEquipCheckDialog, isDecide);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  SvtEqCombineListViewManager_c *v20; // x0
  ListViewSort_o *bgTxtSprite; // x0
  __int64 v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct ListViewSort_array *sortStatusList; // x8
  struct ListViewSort_o *v30; // x1
  struct ListViewSort_o **p_sort; // x22
  UnityEngine_GameObject_o *gameObject; // x25
  System_Int32_array **p_bonusEventIdList; // x25
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **p_bonusFinishEventIdList; // x26
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  struct ListViewSort_o *sort; // x8
  System_Int32_array **servantEquipFilterEventIdList; // x1
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x1
  struct ListViewSort_o *v62; // x8
  struct System_Int32_array *v63; // x9
  __int64 v64; // x10
  bool v65; // w9
  struct System_Int32_array *v66; // x9
  const MethodInfo *v67; // x2
  const MethodInfo *v68; // x2
  const MethodInfo *v69; // x4
  UILabel_o *spendQpInfoLabel; // x23
  UILabel_o *getExpInfoLabel; // x23
  const MethodInfo *v72; // x2
  const MethodInfo *v73; // x4
  const MethodInfo *v74; // x2
  __int64 v75; // x0

  if ( (byte_42EE4D6 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, type, modeKind, setupInfo);
    sub_B5D5C4(&SvtEqCombineListViewManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_6942/*"GET_EXP_INFO"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_9367/*"NEED_QP_INFO"*/, v17, v18, v19);
    byte_42EE4D6 = 1;
  }
  this->fields.currentType = type;
  v20 = SvtEqCombineListViewManager_TypeInfo;
  if ( (BYTE3(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
  }
  SvtEqCombineListViewManager__CreateSorteData((const MethodInfo *)v20);
  sortStatusList = SvtEqCombineListViewManager_TypeInfo->static_fields->sortStatusList;
  if ( !sortStatusList )
    goto LABEL_53;
  if ( sortStatusList->max_length <= type )
  {
    v75 = sub_B5D6C8(bgTxtSprite);
    sub_B5D668(v75, 0LL);
  }
  v30 = sortStatusList->m_Items[type];
  this->fields.sort = v30;
  p_sort = &this->fields.sort;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v30,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.bonusEventIdList, 0LL, v34, v35, v36, v37, v38, v39);
  p_bonusFinishEventIdList = &this->fields.bonusFinishEventIdList;
  this->fields.bonusFinishEventIdList = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.bonusFinishEventIdList, 0LL, v41, v42, v43, v44, v45, v46);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_53;
  sort->fields.isBonusKind = 0;
  if ( setupInfo )
    servantEquipFilterEventIdList = (System_Int32_array **)setupInfo->fields.servantEquipFilterEventIdList;
  else
    servantEquipFilterEventIdList = 0LL;
  *p_bonusEventIdList = (System_Int32_array *)servantEquipFilterEventIdList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.bonusEventIdList,
    servantEquipFilterEventIdList,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  if ( finishSetupInfo )
    v61 = (System_Int32_array **)finishSetupInfo->fields.servantEquipFilterEventIdList;
  else
    v61 = 0LL;
  *p_bonusFinishEventIdList = (System_Int32_array *)v61;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.bonusFinishEventIdList, v61, v55, v56, v57, v58, v59, v60);
  v62 = *p_sort;
  if ( setupInfo )
  {
    v63 = setupInfo->fields.servantEquipFilterEventIdList;
    if ( !v63 )
      goto LABEL_53;
    v64 = *(_QWORD *)&v63->max_length;
    v65 = v64 != 0;
    if ( v64 || !finishSetupInfo )
      goto LABEL_27;
    goto LABEL_25;
  }
  if ( finishSetupInfo )
  {
LABEL_25:
    v66 = finishSetupInfo->fields.servantEquipFilterEventIdList;
    if ( !v66 )
      goto LABEL_53;
    v65 = v66->max_length != 0;
LABEL_27:
    if ( !v62 )
      goto LABEL_53;
    goto LABEL_28;
  }
  v65 = 0;
  if ( !v62 )
    goto LABEL_53;
LABEL_28:
  v62->fields.isBonusKind = v65;
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
    SvtEqCombineListViewManager__SetDispActive(this, 0, v67);
    SvtEqCombineListViewManager__SetBtnEnable(this, 0, v72);
    SvtEqCombineListViewManager__SetServantList(this, 0, setupInfo, finishSetupInfo, v73);
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
    SvtEqCombineListViewManager__SetDispActive(this, 1, v67);
    SvtEqCombineListViewManager__SetBtnEnable(this, 0, v68);
    this->fields.selectMax = 20;
    SvtEqCombineListViewManager__SetServantList(this, 1, setupInfo, finishSetupInfo, v69);
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
          bgTxtSprite = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9367/*"NEED_QP_INFO"*/, 0LL);
          if ( spendQpInfoLabel )
          {
            UILabel__set_text(spendQpInfoLabel, (System_String_o *)bgTxtSprite, 0LL);
            getExpInfoLabel = this->fields.getExpInfoLabel;
            bgTxtSprite = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6942/*"GET_EXP_INFO"*/, 0LL);
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
    sub_B5D69C(bgTxtSprite, v22);
  }
LABEL_47:
  bgTxtSprite = (ListViewSort_o *)this->fields.bonusFilterKindButton;
  if ( !bgTxtSprite )
    goto LABEL_53;
  bgTxtSprite = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgTxtSprite, 0LL);
  if ( !*p_sort || !bgTxtSprite )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgTxtSprite, (*p_sort)->fields.isBonusKind, 0LL);
  SvtEqCombineListViewManager__SetStatusKind(this, modeKind, v74);
  if ( !type )
    EventTutorialMaster__CheckTutorial(-1, 57, 0LL, 0, 0, 0, 0, 0LL);
}


void __fastcall SvtEqCombineListViewManager__CreateSorteData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  SvtEqCombineListViewManager_c *v10; // x0
  __int64 v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  SvtEqCombineListViewManager_c *v18; // x8
  System_Int32_array **v19; // x19
  struct SvtEqCombineListViewManager_StaticFields *static_fields; // x0
  SvtEqCombineListViewManager_c *v21; // x0
  __int64 v22; // x9
  int v23; // w8
  unsigned __int64 v24; // x23
  struct SvtEqCombineListViewManager_StaticFields *v25; // x8
  unsigned int *sortStatusList; // x24
  System_String_o *SORT_SAVE_KEY; // x19
  System_String_o *v28; // x0
  System_String_o *v29; // x20
  ListViewSort_o *v30; // x19
  __int64 v31; // x0
  __int64 v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  unsigned int *v39; // x0
  unsigned int v40; // w10
  __int64 v41; // x0
  __int64 v42; // x0
  int v43; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42EE4D1 & 1) == 0 )
  {
    sub_B5D5C4(&ListViewSort___TypeInfo, v1, v2, v3);
    sub_B5D5C4(&ListViewSort_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&SvtEqCombineListViewManager_TypeInfo, v7, v8, v9);
    byte_42EE4D1 = 1;
  }
  v43 = 0;
  v10 = SvtEqCombineListViewManager_TypeInfo;
  if ( (BYTE3(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
    v10 = SvtEqCombineListViewManager_TypeInfo;
  }
  if ( !v10->static_fields->isInitSystem )
  {
    v11 = sub_B5D5DC(ListViewSort___TypeInfo, 2LL);
    v18 = SvtEqCombineListViewManager_TypeInfo;
    v19 = (System_Int32_array **)v11;
    if ( (BYTE3(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
      v18 = SvtEqCombineListViewManager_TypeInfo;
    }
    static_fields = v18->static_fields;
    static_fields->sortStatusList = (struct ListViewSort_array *)v19;
    sub_B5D560((BattleServantConfConponent_o *)&static_fields->sortStatusList, v19, v12, v13, v14, v15, v16, v17);
    v21 = SvtEqCombineListViewManager_TypeInfo;
    v22 = 0LL;
    v23 = (BYTE3(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr) >> 2) & 1;
    do
    {
      v24 = v22;
      if ( (v23 & 1) != 0 && !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        v21 = SvtEqCombineListViewManager_TypeInfo;
      }
      v25 = v21->static_fields;
      sortStatusList = (unsigned int *)v25->sortStatusList;
      SORT_SAVE_KEY = v25->SORT_SAVE_KEY;
      v43 = v24 + 1;
      v28 = System_Int32__ToString((int32_t)&v43, 0LL);
      v29 = System_String__Concat_44577788(SORT_SAVE_KEY, v28, 0LL);
      v30 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
      ListViewSort___ctor_34028932(v30, v29, 3, 0, 0LL);
      if ( !sortStatusList )
        sub_B5D69C(v31, v32);
      if ( v30 )
      {
        v31 = sub_B5D684(v30, *(_QWORD *)(*(_QWORD *)sortStatusList + 64LL));
        if ( !v31 )
        {
          v42 = sub_B5D6BC(0LL);
          sub_B5D668(v42, 0LL);
        }
      }
      if ( v24 >= sortStatusList[6] )
      {
        v41 = sub_B5D6C8(v31);
        sub_B5D668(v41, 0LL);
      }
      v39 = &sortStatusList[2 * v24];
      *((_QWORD *)v39 + 4) = v30;
      sub_B5D560((BattleServantConfConponent_o *)(v39 + 8), (System_Int32_array **)v30, v33, v34, v35, v36, v37, v38);
      v21 = SvtEqCombineListViewManager_TypeInfo;
      v22 = 1LL;
      v40 = WORD1(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
      v23 = (v40 >> 10) & 1;
    }
    while ( !v24 );
    if ( (v40 & 0x400) != 0 && !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
      v21 = SvtEqCombineListViewManager_TypeInfo;
    }
    v21->static_fields->isInitSystem = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__DecideDragSelect(
        SvtEqCombineListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  SvtEqCombineListViewManager_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x21
  ListViewItem_o *v22; // x19
  __int64 v23; // x9
  _BOOL4 isDragSelect; // w21
  bool IsSelect; // w0
  int32_t selectSum; // w8
  int32_t selectNum; // w21
  int32_t klass; // w9
  _BOOL8 v29; // x0
  __int64 v30; // x1
  void *v31; // x0
  int v32; // w1
  __int64 v33; // x20
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+8h] [xbp-38h] BYREF

  v5 = this;
  if ( (byte_42EE50F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, index, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v15, v16, v17);
    this = (SvtEqCombineListViewManager_o *)sub_B5D5C4(&SvtEqCombineListViewItem_TypeInfo, v18, v19, v20);
    byte_42EE50F = 1;
  }
  memset(&v34, 0, sizeof(v34));
  itemSortList = v5->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_24;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v22 = itemSortList->fields._items->m_Items[index];
  if ( !v22 )
    goto LABEL_24;
  v23 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v22->klass->_2.bitflags2 + 1) >= (unsigned int)v23
    && (SvtEqCombineListViewItem_c *)v22->klass->_2.typeHierarchy[v23 - 1] == SvtEqCombineListViewItem_TypeInfo )
  {
    if ( v22[2].fields.sortIndex < 1 )
      goto LABEL_22;
    isDragSelect = v5->fields.isDragSelect;
    IsSelect = ListViewItem__get_IsSelect(v22, 0LL);
    if ( isDragSelect )
    {
      if ( !IsSelect )
      {
        selectSum = v5->fields.selectSum;
        if ( selectSum < v5->fields.selectMax )
        {
          v22->fields.selectNum = selectSum;
          ++v5->fields.selectSum;
        }
      }
      goto LABEL_22;
    }
    if ( !IsSelect )
      goto LABEL_22;
    selectNum = v22->fields.selectNum;
    ListViewItem__set_IsSelect(v22, 0, 0LL);
    BYTE2(v22[1].fields.sortStr1) = 0;
    this = (SvtEqCombineListViewManager_o *)v5->fields.itemList;
    --v5->fields.selectSum;
    if ( this )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v34,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( 1 )
      {
        v29 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v34,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v29 )
          break;
        if ( !v34.fields.current )
          sub_B5D69C(v29, v30);
        klass = (int32_t)v34.fields.current[1].klass;
        if ( klass > selectNum )
          LODWORD(v34.fields.current[1].klass) = klass - 1;
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v34,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      goto LABEL_22;
    }
LABEL_24:
    sub_B5D69C(this, *(_QWORD *)&index);
  }
  sub_B5D990(v22);
  if ( v32 != 1 )
    _Unwind_Resume(v31);
  v33 = *(_QWORD *)__cxa_begin_catch(v31);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v34,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( v33 )
    sub_B5D668(v33, 0LL);
LABEL_22:
  v22[2].fields.sortIndex = -1;
}


void __fastcall SvtEqCombineListViewManager__DeleteContinueData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  SvtEqCombineListViewManager_c *v4; // x0
  __int64 v5; // x1
  int v6; // w8
  ListViewSort_o *v7; // x0
  unsigned int v8; // w20
  const char *namespaze; // x8
  __int64 v10; // x0

  if ( (byte_42EE4D2 & 1) == 0 )
  {
    sub_B5D5C4(&SvtEqCombineListViewManager_TypeInfo, v1, v2, v3);
    byte_42EE4D2 = 1;
  }
  v4 = SvtEqCombineListViewManager_TypeInfo;
  if ( (BYTE3(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
  }
  SvtEqCombineListViewManager__CreateSorteData((const MethodInfo *)v4);
  v6 = 0;
  do
  {
    v7 = (ListViewSort_o *)SvtEqCombineListViewManager_TypeInfo;
    v8 = v6;
    if ( (BYTE3(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
      v7 = (ListViewSort_o *)SvtEqCombineListViewManager_TypeInfo;
    }
    namespaze = v7[1].klass->_1.namespaze;
    if ( !namespaze )
      goto LABEL_15;
    if ( v8 >= *((_DWORD *)namespaze + 6) )
    {
      v10 = sub_B5D6C8(v7);
      sub_B5D668(v10, 0LL);
    }
    v7 = *(ListViewSort_o **)&namespaze[8 * v8 + 32];
    if ( !v7 )
LABEL_15:
      sub_B5D69C(v7, v5);
    ListViewSort__DeleteContinueData(v7, 0LL);
    v6 = 1;
  }
  while ( !v8 );
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
    sub_B5D69C(0LL, v3);
  ListViewSort__Save(sort, 0LL);
  this->fields.bonusEventIdList = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.bonusEventIdList, 0LL, v5, v6, v7, v8, v9, v10);
  this->fields.bonusFinishEventIdList = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.bonusFinishEventIdList, 0LL, v11, v12, v13, v14, v15, v16);
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
  SvtEqCombineListViewManager__SetMode_35014664(this, 2, v6);
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
  SvtEqCombineListViewManager__SetMode_35014664(this, 2, v6);
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
  SvtEqCombineListViewManager__SetMode_35014664(this, 2, v5);
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
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  const MethodInfo *v12; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_42EE4FB & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&Method_SvtEqCombineListViewManager_EndCloseSelectFilterKind__, v9, v10, v11);
    byte_42EE4FB = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    SvtEqCombineListViewManager__SetFilterButtonImage(this, v12);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_SvtEqCombineListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_B5D69C(v15, v16);
  CommonUI__CloseServantFilterSelectMenu(Instance, v14, 0LL);
}


void __fastcall SvtEqCombineListViewManager__EndSelectSortKind(
        SvtEqCombineListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_42EE500 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42EE500 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v7);
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
    sub_B5D560(p_requestCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    SvtEqCombineListViewManager_RequestCallbackFunc__Invoke(requestCallback, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall SvtEqCombineListViewManager__GetAmountSortValue(
        SvtEqCombineListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t v4; // w19
  SvtEqCombineListViewManager_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  int size; // w22
  int v14; // w23
  int64_t v15; // x21
  __int64 v16; // x9
  SvtEqCombineListViewItem_o *v18; // x0
  ListViewSort_o *v19; // x1
  const MethodInfo *v20; // x2

  v4 = svtId;
  v5 = this;
  if ( (byte_42EE503 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6, v7, v8);
    this = (SvtEqCombineListViewManager_o *)sub_B5D5C4(&SvtEqCombineListViewItem_TypeInfo, v9, v10, v11);
    byte_42EE503 = 1;
  }
  itemList = v5->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_B5D69C(this, *(_QWORD *)&svtId);
  size = itemList->fields._size;
  if ( size < 1 )
  {
    return 0LL;
  }
  else
  {
    v14 = 0;
    v15 = 0LL;
    while ( 1 )
    {
      if ( itemList->fields._size <= (unsigned int)v14 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      this = (SvtEqCombineListViewManager_o *)itemList->fields._items->m_Items[v14];
      if ( !this )
        goto LABEL_15;
      *(_QWORD *)&svtId = SvtEqCombineListViewItem_TypeInfo;
      v16 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v16
        || (SvtEqCombineListViewItem_c *)this->klass->_2.typeHierarchy[v16 - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        break;
      }
      ++v14;
      if ( LODWORD(this->fields.clipOffset.fields.x) == v4 )
        ++v15;
      if ( v14 >= size )
        return v15;
      itemList = v5->fields.itemList;
      if ( !itemList )
        goto LABEL_15;
    }
    sub_B5D990(this);
    return SvtEqCombineListViewItem__IsMatchFilter(v18, v19, v20);
  }
}


int32_t __fastcall SvtEqCombineListViewManager__GetBaseCollectionLv(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int64_t Instance; // x0
  __int64 v15; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v17; // q1
  UserServantCollectionMaster_o *v18; // x20
  struct UserServantEntity_o *v19; // x8
  int64_t v20; // x19
  __int64 v21; // x21
  __int64 v22; // x22
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_42EE4E1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EE4E1 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_16;
  v17 = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.fakeValue;
  v18 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v26.fields.fakeValue = v17;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v25 = v26;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v25, 0LL);
  v19 = this->fields.baseUsrSvtData;
  if ( !v19 )
    goto LABEL_16;
  v20 = Instance;
  v22 = *(_QWORD *)&v19->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&v19->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v27.fields.currentCryptoKey = v22;
  *(_QWORD *)&v27.fields.fakeValue = v21;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v27, 0LL);
  if ( !v18 )
LABEL_16:
    sub_B5D69C(Instance, v15);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v18, v20, Instance, 0LL);
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
        v8 = sub_B5D6C8(this);
        sub_B5D668(v8, 0LL);
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
    sub_B5D69C(this, list);
  }
  return 0;
}


SvtEqCombineListViewItem_o *__fastcall SvtEqCombineListViewManager__GetItem(
        SvtEqCombineListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  SvtEqCombineListViewItem_o *result; // x0
  __int64 v11; // x9

  if ( (byte_42EE4E2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, index, (_DWORD)method, v3);
    sub_B5D5C4(&SvtEqCombineListViewItem_TypeInfo, v6, v7, v8);
    byte_42EE4E2 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  result = (SvtEqCombineListViewItem_o *)itemList->fields._items->m_Items[index];
  if ( result )
  {
    v11 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v11
      || (SvtEqCombineListViewItem_c *)result->klass->_2.typeHierarchy[v11 - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      sub_B5D990(result);
      return 0LL;
    }
  }
  return result;
}


UserServantEntity_o *__fastcall SvtEqCombineListViewManager__GetSelectBaseSvtData(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  BattleServantConfConponent_o *p_baseUsrSvtData; // x19
  BattleServantConfConponent_c *klass; // x8
  Il2CppType byval_arg; // q1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v19; // x20
  System_Int32_array **Entity; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+20h] [xbp-30h]

  if ( (byte_42EE4E0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EE4E0 = 1;
  }
  if ( !this->fields.baseUsrSvtData )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  p_baseUsrSvtData = (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  klass = p_baseUsrSvtData->klass;
  if ( !p_baseUsrSvtData->klass )
    goto LABEL_13;
  byval_arg = klass->_1.byval_arg;
  v19 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
  *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
  *(Il2CppType *)&v29.fields.fakeValue = byval_arg;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v28 = v29;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v28, 0LL);
  if ( !v19 )
LABEL_13:
    sub_B5D69C(Instance, v15);
  Entity = (System_Int32_array **)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                    v19,
                                    (int64_t)Instance,
                                    (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_baseUsrSvtData->klass = (BattleServantConfConponent_c *)Entity;
  sub_B5D560(p_baseUsrSvtData, Entity, v21, v22, v23, v24, v25, v26);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v41; // x20
  SvtEqCombineListViewManager___c_c *IsSelect; // x0
  __int64 v43; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  int size; // w22
  unsigned int v46; // w23
  ListViewItem_o *v47; // x21
  __int64 v48; // x9
  struct SvtEqCombineListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__139_0; // x21
  Il2CppObject *v51; // x22
  struct SvtEqCombineListViewManager___c_StaticFields *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  int v59; // w8
  int v60; // w22
  __int64 v61; // x21
  unsigned int v62; // w23
  __int64 v63; // x8
  System_Collections_Generic_List_SvtEqCombineListViewItem__o *result; // x0
  SvtEqCombineListViewManager_o *v65; // x0
  const MethodInfo *v66; // x1

  if ( (byte_42EE4EE & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_SvtEqCombineListViewItem___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Comparison_SvtEqCombineListViewItem__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Sort__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v26, v27, v28);
    sub_B5D5C4(&System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&SvtEqCombineListViewItem_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_SvtEqCombineListViewManager___c__GetSelectedMaterialList_b__139_0__, v35, v36, v37);
    sub_B5D5C4(&SvtEqCombineListViewManager___c_TypeInfo, v38, v39, v40);
    byte_42EE4EE = 1;
  }
  v41 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v41,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
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
      v51 = (Il2CppObject *)static_fields->__9;
      _9__139_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_SvtEqCombineListViewItem__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__139_0,
        v51,
        Method_SvtEqCombineListViewManager___c__GetSelectedMaterialList_b__139_0__,
        (const MethodInfo_249B1FC *)Method_System_Comparison_SvtEqCombineListViewItem___ctor__);
      v52 = SvtEqCombineListViewManager___c_TypeInfo->static_fields;
      v52->__9__139_0 = (struct System_Comparison_SvtEqCombineListViewItem__o *)_9__139_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v52->__9__139_0,
        (System_Int32_array **)_9__139_0,
        v53,
        v54,
        v55,
        v56,
        v57,
        v58);
    }
    if ( v41 )
    {
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v41,
        (System_Comparison_T__o *)_9__139_0,
        (const MethodInfo_305909C *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Sort__);
      v59 = v41->fields._size;
      if ( v59 < 1 )
        return (System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v41;
      v60 = 0;
      v61 = 4LL;
      while ( 1 )
      {
        v62 = v61 - 4;
        if ( v59 <= (unsigned int)(v61 - 4) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v63 = *((_QWORD *)&v41->fields._items->obj.klass + v61);
        if ( !v63 )
          break;
        if ( *(_DWORD *)(v63 + 156) > v60 )
        {
          if ( v41->fields._size <= v62 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v60 = *(_DWORD *)(v63 + 156);
          if ( v41->fields._size <= v62 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          this->fields.lastSelectIndex = *(_DWORD *)(v63 + 24);
        }
        v59 = v41->fields._size;
        if ( (int)++v61 - 4 >= v59 )
          return (System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v41;
      }
    }
LABEL_39:
    sub_B5D69C(IsSelect, v43);
  }
  v46 = 0;
  while ( 1 )
  {
    if ( itemList->fields._size <= v46 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v47 = itemList->fields._items->m_Items[v46];
    if ( !v47 )
      goto LABEL_39;
    v48 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v47->klass->_2.bitflags2 + 1) < (unsigned int)v48
      || (SvtEqCombineListViewItem_c *)v47->klass->_2.typeHierarchy[v48 - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    IsSelect = (SvtEqCombineListViewManager___c_c *)ListViewItem__get_IsSelect(v47, 0LL);
    if ( ((unsigned __int8)IsSelect & 1) != 0 )
    {
      if ( !v41 )
        goto LABEL_39;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v41,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v47,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Add__);
    }
    if ( (int)++v46 >= size )
      goto LABEL_17;
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_39;
  }
  sub_B5D990(v47);
  SvtEqCombineListViewManager__SetSelectedMaterialInfo(v65, v66);
  return result;
}


bool __fastcall SvtEqCombineListViewManager__GetSwapChoiceList(
        SvtEqCombineListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_Collections_Generic_List_long__o *v30; // x23
  System_Collections_Generic_List_long__o *v31; // x22
  int64_t v32; // x0
  SvtEqCombineListViewItem_c *v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  int size; // w24
  unsigned int v42; // w25
  __int64 v43; // x9
  __int64 v44; // x8
  __int128 v45; // q0
  const MethodInfo_3047788 *v46; // x2
  int64_t v47; // x1
  System_Collections_Generic_List_long__o *v48; // x0
  __int128 v49; // q0
  System_Int64_array *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int64_array *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  bool result; // w0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  SvtEqCombineListViewManager_o *v71; // x0
  const MethodInfo *v72; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+50h] [xbp-70h]

  if ( (byte_42EE506 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, (_DWORD)choiceList, (_DWORD)unchoiceList, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&SvtEqCombineListViewItem_TypeInfo, v27, v28, v29);
    byte_42EE506 = 1;
  }
  v30 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v30,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  v31 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v31,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( size < 1 )
  {
LABEL_28:
    if ( v30 && v31 )
    {
      if ( v31->fields._size + v30->fields._size < 1 )
      {
        *choiceList = 0LL;
        sub_B5D560((BattleServantConfConponent_o *)choiceList, 0LL, v34, v35, v36, v37, v38, v39);
        *unchoiceList = 0LL;
        sub_B5D560((BattleServantConfConponent_o *)unchoiceList, 0LL, v65, v66, v67, v68, v69, v70);
        return 0;
      }
      else
      {
        v50 = System_Collections_Generic_List_long___ToArray(
                v30,
                (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
        *choiceList = v50;
        sub_B5D560((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v50, v51, v52, v53, v54, v55, v56);
        v57 = System_Collections_Generic_List_long___ToArray(
                v31,
                (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
        *unchoiceList = v57;
        sub_B5D560(
          (BattleServantConfConponent_o *)unchoiceList,
          (System_Int32_array **)v57,
          v58,
          v59,
          v60,
          v61,
          v62,
          v63);
        return 1;
      }
    }
LABEL_33:
    sub_B5D69C(v32, v33);
  }
  v42 = 0;
  while ( 1 )
  {
    if ( itemList->fields._size <= v42 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v32 = (int64_t)itemList->fields._items->m_Items[v42];
    if ( !v32 )
      goto LABEL_33;
    v33 = SvtEqCombineListViewItem_TypeInfo;
    v43 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v32 + 300LL) < (unsigned int)v43
      || *(SvtEqCombineListViewItem_c **)(*(_QWORD *)(*(_QWORD *)v32 + 200LL) + 8 * v43 - 8) != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    v44 = *(_QWORD *)(v32 + 120);
    if ( v44 && *(_BYTE *)(v32 + 246) )
    {
      if ( *(_BYTE *)(v32 + 165) )
      {
        v45 = *(_OWORD *)(v44 + 32);
        *(_OWORD *)&v76.fields.currentCryptoKey = *(_OWORD *)(v44 + 16);
        *(_OWORD *)&v76.fields.fakeValue = v45;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v75 = v76;
        v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v75, 0LL);
        if ( !v31 )
          goto LABEL_33;
        v46 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
        v47 = v32;
        v48 = v31;
      }
      else
      {
        v49 = *(_OWORD *)(v44 + 32);
        *(_OWORD *)&v76.fields.currentCryptoKey = *(_OWORD *)(v44 + 16);
        *(_OWORD *)&v76.fields.fakeValue = v49;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v74 = v76;
        v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v74, 0LL);
        if ( !v30 )
          goto LABEL_33;
        v46 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
        v47 = v32;
        v48 = v30;
      }
      System_Collections_Generic_List_long___Add(v48, v47, v46);
    }
    if ( (int)++v42 >= size )
      goto LABEL_28;
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_33;
  }
  sub_B5D990(v32);
  SvtEqCombineListViewManager__OnClickNormalStatus(v71, v72);
  return result;
}


bool __fastcall SvtEqCombineListViewManager__GetSwapLockList(
        SvtEqCombineListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_Collections_Generic_List_long__o *v30; // x23
  System_Collections_Generic_List_long__o *v31; // x22
  int64_t v32; // x0
  SvtEqCombineListViewItem_c *v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  int size; // w24
  unsigned int v42; // w25
  __int64 v43; // x9
  __int64 v44; // x8
  __int128 v45; // q0
  const MethodInfo_3047788 *v46; // x2
  int64_t v47; // x1
  System_Collections_Generic_List_long__o *v48; // x0
  __int128 v49; // q0
  System_Int64_array *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int64_array *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  SvtEqCombineListViewManager_o *v71; // x0
  System_Int64_array **v72; // x1
  System_Int64_array **v73; // x2
  const MethodInfo *v74; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+50h] [xbp-70h]

  if ( (byte_42EE505 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, (_DWORD)lockList, (_DWORD)unlockList, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&SvtEqCombineListViewItem_TypeInfo, v27, v28, v29);
    byte_42EE505 = 1;
  }
  v30 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v30,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  v31 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v31,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( size < 1 )
  {
LABEL_28:
    if ( v30 && v31 )
    {
      if ( v31->fields._size + v30->fields._size < 1 )
      {
        *lockList = 0LL;
        sub_B5D560((BattleServantConfConponent_o *)lockList, 0LL, v34, v35, v36, v37, v38, v39);
        *unlockList = 0LL;
        sub_B5D560((BattleServantConfConponent_o *)unlockList, 0LL, v65, v66, v67, v68, v69, v70);
        return 0;
      }
      else
      {
        v50 = System_Collections_Generic_List_long___ToArray(
                v30,
                (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
        *lockList = v50;
        sub_B5D560((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v50, v51, v52, v53, v54, v55, v56);
        v57 = System_Collections_Generic_List_long___ToArray(
                v31,
                (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
        *unlockList = v57;
        sub_B5D560((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v57, v58, v59, v60, v61, v62, v63);
        return 1;
      }
    }
LABEL_33:
    sub_B5D69C(v32, v33);
  }
  v42 = 0;
  while ( 1 )
  {
    if ( itemList->fields._size <= v42 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v32 = (int64_t)itemList->fields._items->m_Items[v42];
    if ( !v32 )
      goto LABEL_33;
    v33 = SvtEqCombineListViewItem_TypeInfo;
    v43 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v32 + 300LL) < (unsigned int)v43
      || *(SvtEqCombineListViewItem_c **)(*(_QWORD *)(*(_QWORD *)v32 + 200LL) + 8 * v43 - 8) != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    v44 = *(_QWORD *)(v32 + 120);
    if ( v44 && *(_BYTE *)(v32 + 245) )
    {
      if ( *(_BYTE *)(v32 + 160) )
      {
        v45 = *(_OWORD *)(v44 + 32);
        *(_OWORD *)&v78.fields.currentCryptoKey = *(_OWORD *)(v44 + 16);
        *(_OWORD *)&v78.fields.fakeValue = v45;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v77 = v78;
        v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v77, 0LL);
        if ( !v31 )
          goto LABEL_33;
        v46 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
        v47 = v32;
        v48 = v31;
      }
      else
      {
        v49 = *(_OWORD *)(v44 + 32);
        *(_OWORD *)&v78.fields.currentCryptoKey = *(_OWORD *)(v44 + 16);
        *(_OWORD *)&v78.fields.fakeValue = v49;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v76 = v78;
        v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v76, 0LL);
        if ( !v30 )
          goto LABEL_33;
        v46 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
        v47 = v32;
        v48 = v30;
      }
      System_Collections_Generic_List_long___Add(v48, v47, v46);
    }
    if ( (int)++v42 >= size )
      goto LABEL_28;
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_33;
  }
  sub_B5D990(v32);
  return SvtEqCombineListViewManager__GetSwapChoiceList(v71, v72, v73, v74);
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
  int v2; // w2
  __int64 v3; // x3
  SvtEqCombineListViewManager_c *v4; // x0
  unsigned int i; // w20
  struct ListViewSort_array *sortStatusList; // x8
  __int64 v7; // x0

  if ( (byte_42EE4D3 & 1) == 0 )
  {
    sub_B5D5C4(&SvtEqCombineListViewManager_TypeInfo, v1, v2, v3);
    byte_42EE4D3 = 1;
  }
  v4 = SvtEqCombineListViewManager_TypeInfo;
  if ( (BYTE3(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
    v4 = SvtEqCombineListViewManager_TypeInfo;
  }
  if ( v4->static_fields->isInitSystem )
  {
    for ( i = 0; ; i = 1 )
    {
      if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v4);
        v4 = SvtEqCombineListViewManager_TypeInfo;
      }
      sortStatusList = v4->static_fields->sortStatusList;
      if ( !sortStatusList )
        goto LABEL_17;
      if ( i >= sortStatusList->max_length )
      {
        v7 = sub_B5D6C8(v4);
        sub_B5D668(v7, 0LL);
      }
      v4 = (SvtEqCombineListViewManager_c *)sortStatusList->m_Items[i];
      if ( !v4 )
LABEL_17:
        sub_B5D69C(v4, v1);
      ListViewSort__InitLoad((ListViewSort_o *)v4, 0LL);
      if ( i )
        break;
      v4 = SvtEqCombineListViewManager_TypeInfo;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  __int64 v33; // x1
  UserGameEntity_o *SelfUserGame; // x19
  DataManager_o *Instance; // x0
  UserServantEntity_o *Entity; // x20
  _BOOL8 v37; // x0
  SvtEqCombineListViewItem_c *v38; // x1
  Il2CppObject *current; // x21
  __int64 v40; // x9
  _OWORD *monitor; // x8
  _QWORD *p_monitor; // x22
  __int128 v43; // q0
  int64_t v44; // x0
  __int128 v45; // q0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  int64_t UserSvtId; // x0
  const MethodInfo *v53; // x1
  const MethodInfo *v54; // x1
  UnityEngine_Object_o *v55; // x22
  __int64 v56; // x1
  void *v57; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_42EE4E3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v18, v19, v20);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28, v29);
    sub_B5D5C4(&SvtEqCombineListViewItem_TypeInfo, v30, v31, v32);
    byte_42EE4E3 = 1;
  }
  memset(&v61, 0, sizeof(v61));
  if ( !this->fields.itemList )
    return;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( usrSvtId < 1 )
  {
    Entity = 0LL;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
LABEL_39:
      sub_B5D69C(Instance, v33);
    }
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
               usrSvtId,
               (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_39;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v60,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v61.fields.current = (Il2CppObject *)v60.fields.fakeValue;
  *(_OWORD *)&v61.fields.list = *(_OWORD *)&v60.fields.currentCryptoKey;
  while ( 1 )
  {
    v37 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v61,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v37 )
      break;
    current = v61.fields.current;
    if ( v61.fields.current )
    {
      v38 = SvtEqCombineListViewItem_TypeInfo;
      v40 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v61.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v40
        || (SvtEqCombineListViewItem_c *)v61.fields.current->klass->_2.typeHierarchy[v40 - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        sub_B5D990(v61.fields.current);
LABEL_34:
        sub_B5D69C(UserSvtId, v53);
      }
    }
    if ( Entity )
    {
      if ( !v61.fields.current )
        sub_B5D69C(v37, v38);
      p_monitor = &v61.fields.current[7].monitor;
      monitor = v61.fields.current[7].monitor;
      if ( !monitor )
        sub_B5D69C(v37, v38);
      v43 = monitor[2];
      *(_OWORD *)&v60.fields.currentCryptoKey = monitor[1];
      *(_OWORD *)&v60.fields.fakeValue = v43;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v59 = v60;
      v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v59, 0LL);
      v45 = *(_OWORD *)&Entity->fields.id.fields.fakeValue;
      *(_OWORD *)&v58.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v58.fields.fakeValue = v45;
      if ( v44 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v58, 0LL) )
      {
        *p_monitor = Entity;
        sub_B5D560(
          (BattleServantConfConponent_o *)&current[7].monitor,
          (System_Int32_array **)Entity,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51);
      }
    }
    else if ( !v61.fields.current )
    {
      sub_B5D69C(v37, v38);
    }
    UserSvtId = SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)current, (const MethodInfo *)v38);
    if ( !SelfUserGame )
      goto LABEL_34;
    BYTE4(current[10].klass) = UserSvtId == SelfUserGame->fields.favoriteUserSvtId;
    SvtEqCombineListViewItem__ModifyLockItem((SvtEqCombineListViewItem_o *)current, v53);
    SvtEqCombineListViewItem__ModifyChoiceItem((SvtEqCombineListViewItem_o *)current, v54);
    v55 = (UnityEngine_Object_o *)current[6].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v55, 0LL, 0LL) )
    {
      v57 = current[6].monitor;
      if ( !v57 )
        sub_B5D69C(0LL, v56);
      (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v57 + 392LL))(
        v57,
        current,
        *(_QWORD *)(*(_QWORD *)v57 + 400LL));
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v61,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__ModifyList(
        SvtEqCombineListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v3; // x3
  bool v4; // w21
  SvtEqCombineListViewManager_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int32_t currentType; // w8
  void *ServantEquipList; // x21
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v53; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v54; // x23
  int v55; // w8
  __int64 v56; // x26
  __int64 v57; // x24
  __int128 v58; // q0
  struct UserServantEntity_o *v59; // x8
  __int128 v60; // q0
  SvtEqCombineListViewManager_o *v61; // x25
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v62; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v63; // x23
  int size; // w8
  int32_t i; // w21
  WarBoardAIRoute_RouteData_o *v66; // x8
  __int128 v67; // q0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v69; // q0
  SvtEqCombineListViewManager_o *v70; // x24
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *selectedMtSvtList_k__BackingField; // x20
  signed __int64 v72; // x8
  unsigned __int64 v73; // x25
  unsigned int v74; // w27
  SvtEqCombineListViewItem_o *v75; // x20
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v77; // q1
  __int64 v78; // x28
  __int128 v79; // q0
  SvtEqCombineListViewManager_o *v80; // x24
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 v82; // x24
  int v83; // w26
  unsigned int v84; // w25
  __int64 v85; // x8
  __int128 v86; // q0
  SvtEqCombineListViewManager_o *v87; // x23
  __int64 v88; // x20
  struct System_Collections_Generic_List_ListViewItem__o *v89; // x22
  SvtEqCombineListViewItem_o *v90; // x22
  __int64 v91; // x9
  struct UserServantEntity_o *v92; // x8
  __int128 v93; // q0
  struct UserServantEntity_o *v94; // x8
  __int128 v95; // q0
  int64_t v96; // x0
  const MethodInfo *v97; // x5
  __int64 v98; // x0
  SvtEqCombineListViewManager_o *v99; // x0
  ListViewObject_o *v100; // x1
  ListViewItem_o *v101; // x2
  const MethodInfo *v102; // x3
  bool isIconSizeChangea; // [xsp+Ch] [xbp-1A4h]
  bool isIconSizeChangeb; // [xsp+Ch] [xbp-1A4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v105; // [xsp+10h] [xbp-1A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v106; // [xsp+30h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v107; // [xsp+50h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v108; // [xsp+70h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v109; // [xsp+90h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v110; // [xsp+B0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v111; // [xsp+D0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v112; // [xsp+F0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v113; // [xsp+110h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v114; // [xsp+130h] [xbp-80h]

  v4 = isIconSizeChange;
  v5 = this;
  if ( (byte_42EE4E6 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_UserServantEntity__AddRange__,
      isIconSizeChange,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__Remove__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor___68753944, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v39, v40, v41);
    sub_B5D5C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v42, v43, v44);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v45, v46, v47);
    this = (SvtEqCombineListViewManager_o *)sub_B5D5C4(&SvtEqCombineListViewItem_TypeInfo, v48, v49, v50);
    byte_42EE4E6 = 1;
  }
  currentType = v5->fields.currentType;
  isIconSizeChangea = v4;
  if ( currentType == 1 )
  {
    this = (SvtEqCombineListViewManager_o *)v5->fields.userServantMaster;
    if ( !this )
      goto LABEL_106;
    ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)this, 0LL);
    v62 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v62,
      (System_Collections_Generic_IEnumerable_T__o *)ServantEquipList,
      (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___68753944);
    v63 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v63,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( v5->fields.baseUsrSvtData )
    {
      if ( !v62 )
        goto LABEL_106;
      size = v62->fields._size;
      if ( size >= 1 )
      {
        for ( i = 0; i < size; ++i )
        {
          if ( size <= (unsigned int)i )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v66 = v62->fields._items->m_Items[i];
          if ( !v66 )
            goto LABEL_106;
          v67 = *(_OWORD *)&v66->fields.baseSquare;
          *(_OWORD *)&v114.fields.currentCryptoKey = *(_OWORD *)&v66->fields.flagNow;
          *(_OWORD *)&v114.fields.fakeValue = v67;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v111 = v114;
          this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                    &v111,
                                                    0LL);
          baseUsrSvtData = v5->fields.baseUsrSvtData;
          if ( !baseUsrSvtData )
            goto LABEL_106;
          v69 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
          v70 = this;
          *(_OWORD *)&v110.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v110.fields.fakeValue = v69;
          this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                    &v110,
                                                    0LL);
          if ( v70 == this )
            System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
              (System_Collections_Generic_List_XWeaponTrail_Element__o *)v62,
              i,
              (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
          size = v62->fields._size;
        }
      }
      this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v62,
                                                (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      ServantEquipList = this;
    }
    selectedMtSvtList_k__BackingField = v5->fields._selectedMtSvtList_k__BackingField;
    if ( selectedMtSvtList_k__BackingField )
    {
      LODWORD(v72) = selectedMtSvtList_k__BackingField->fields._size;
      if ( (int)v72 >= 1 )
      {
        v73 = 0LL;
        while ( 1 )
        {
          if ( v73 >= (unsigned int)v72 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          if ( !v62 )
            goto LABEL_106;
          if ( v62->fields._size >= 1 )
            break;
LABEL_66:
          selectedMtSvtList_k__BackingField = v5->fields._selectedMtSvtList_k__BackingField;
          if ( !selectedMtSvtList_k__BackingField )
            goto LABEL_106;
          v72 = selectedMtSvtList_k__BackingField->fields._size;
          if ( (__int64)++v73 >= v72 )
          {
            if ( !v63 )
              goto LABEL_106;
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v63,
              (System_Collections_Generic_IEnumerable_T__o *)v62,
              (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
            this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v63,
                                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
            ServantEquipList = this;
            goto LABEL_70;
          }
        }
        v74 = 0;
        v75 = selectedMtSvtList_k__BackingField->fields._items->m_Items[v73];
        while ( 1 )
        {
          if ( !ServantEquipList )
            goto LABEL_106;
          if ( v74 >= *((_DWORD *)ServantEquipList + 6) )
            break;
          if ( !v75 )
            goto LABEL_106;
          userSvtEntity = v75->fields.userSvtEntity;
          if ( !userSvtEntity )
            goto LABEL_106;
          v77 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
          v78 = *((_QWORD *)ServantEquipList + (int)v74 + 4);
          *(_OWORD *)&v114.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v114.fields.fakeValue = v77;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v109 = v114;
          this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                    &v109,
                                                    0LL);
          if ( !v78 )
            goto LABEL_106;
          v79 = *(_OWORD *)(v78 + 32);
          v80 = this;
          *(_OWORD *)&v108.fields.currentCryptoKey = *(_OWORD *)(v78 + 16);
          *(_OWORD *)&v108.fields.fakeValue = v79;
          this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                    &v108,
                                                    0LL);
          if ( v80 == this )
          {
            if ( !v63 )
              goto LABEL_106;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v63,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v75->fields.userSvtEntity,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
            this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                                                      (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v62,
                                                      (WarBoardManager_TaskList_o *)v75->fields.userSvtEntity,
                                                      (const MethodInfo_305896C *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
          }
          if ( (signed int)++v74 >= v62->fields._size )
            goto LABEL_66;
        }
LABEL_104:
        v98 = sub_B5D6C8(this);
        sub_B5D668(v98, 0LL);
      }
    }
LABEL_70:
    if ( !ServantEquipList )
      goto LABEL_106;
    if ( !*((_QWORD *)ServantEquipList + 3) )
    {
      this = (SvtEqCombineListViewManager_o *)v5->fields.emptyListNoticeLabel;
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
    this = (SvtEqCombineListViewManager_o *)v5->fields.levelUpInfoImg;
    if ( !this )
      goto LABEL_106;
    this = (SvtEqCombineListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_106;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (SvtEqCombineListViewManager_o *)v5->fields.userServantMaster;
    if ( !this )
      goto LABEL_106;
    this = (SvtEqCombineListViewManager_o *)UserServantMaster__getServantEquipList((UserServantMaster_o *)this, 0LL);
    if ( !this )
      goto LABEL_106;
    ServantEquipList = this;
    if ( !this->fields.dropObjectList )
    {
      this = (SvtEqCombineListViewManager_o *)v5->fields.emptyListNoticeLabel;
      if ( !this )
        goto LABEL_106;
      this = (SvtEqCombineListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
      if ( !this )
        goto LABEL_106;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    }
    v53 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v53,
      (System_Collections_Generic_IEnumerable_T__o *)ServantEquipList,
      (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___68753944);
    v54 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v54,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( v5->fields.baseUsrSvtData )
    {
      v55 = *((_DWORD *)ServantEquipList + 6);
      if ( v55 >= 1 )
      {
        v56 = 0LL;
        while ( (unsigned int)v56 < v55 )
        {
          v57 = *((_QWORD *)ServantEquipList + v56 + 4);
          if ( !v57 )
            goto LABEL_106;
          v58 = *(_OWORD *)(v57 + 32);
          *(_OWORD *)&v114.fields.currentCryptoKey = *(_OWORD *)(v57 + 16);
          *(_OWORD *)&v114.fields.fakeValue = v58;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v113 = v114;
          this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                    &v113,
                                                    0LL);
          v59 = v5->fields.baseUsrSvtData;
          if ( !v59 )
            goto LABEL_106;
          v60 = *(_OWORD *)&v59->fields.id.fields.fakeValue;
          v61 = this;
          *(_OWORD *)&v112.fields.currentCryptoKey = *(_OWORD *)&v59->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v112.fields.fakeValue = v60;
          this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                    &v112,
                                                    0LL);
          if ( v61 == this )
          {
            if ( !v54 )
              goto LABEL_106;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v54,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v57,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
            if ( !v53 )
              goto LABEL_106;
            this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                                                      (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v53,
                                                      (WarBoardManager_TaskList_o *)v57,
                                                      (const MethodInfo_305896C *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
          }
          v55 = *((_DWORD *)ServantEquipList + 6);
          if ( (int)++v56 >= v55 )
            goto LABEL_27;
        }
        goto LABEL_104;
      }
LABEL_27:
      if ( !v54 )
        goto LABEL_106;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v54,
        (System_Collections_Generic_IEnumerable_T__o *)v53,
        (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v54,
                                                (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      ServantEquipList = this;
      if ( !this )
        goto LABEL_106;
    }
  }
  itemList = v5->fields.itemList;
  if ( !itemList )
    goto LABEL_106;
  v82 = *((_QWORD *)ServantEquipList + 3);
  if ( (int)v82 >= 1 )
  {
    v83 = itemList->fields._size;
    v84 = 0;
    isIconSizeChangeb = isIconSizeChangea;
    while ( 1 )
    {
      v85 = *((_QWORD *)ServantEquipList + (int)v84 + 4);
      if ( !v85 )
        goto LABEL_106;
      v86 = *(_OWORD *)(v85 + 32);
      *(_OWORD *)&v114.fields.currentCryptoKey = *(_OWORD *)(v85 + 16);
      *(_OWORD *)&v114.fields.fakeValue = v86;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v107 = v114;
      this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                &v107,
                                                0LL);
      if ( v83 >= 1 )
        break;
LABEL_102:
      if ( (int)++v84 >= (int)v82 )
        return;
      if ( v84 >= *((_DWORD *)ServantEquipList + 6) )
        goto LABEL_104;
    }
    v87 = this;
    v88 = 0LL;
    while ( 1 )
    {
      v89 = v5->fields.itemList;
      if ( !v89 )
        goto LABEL_106;
      if ( v89->fields._size <= (unsigned int)v88 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v90 = (SvtEqCombineListViewItem_o *)v89->fields._items->m_Items[v88];
      if ( !v90 )
        goto LABEL_106;
      *(_QWORD *)&isIconSizeChange = SvtEqCombineListViewItem_TypeInfo;
      v91 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v90->klass->_2.bitflags2 + 1) < (unsigned int)v91
        || (SvtEqCombineListViewItem_c *)v90->klass->_2.typeHierarchy[v91 - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        break;
      }
      v92 = v90->fields.userSvtEntity;
      if ( v92 )
      {
        v93 = *(_OWORD *)&v92->fields.id.fields.fakeValue;
        *(_OWORD *)&v114.fields.currentCryptoKey = *(_OWORD *)&v92->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v114.fields.fakeValue = v93;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v106 = v114;
        this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                  &v106,
                                                  0LL);
        if ( this == v87 )
        {
          v94 = v90->fields.userSvtEntity;
          if ( v94 )
          {
            v95 = *(_OWORD *)&v94->fields.id.fields.fakeValue;
            *(_OWORD *)&v114.fields.currentCryptoKey = *(_OWORD *)&v94->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v114.fields.fakeValue = v95;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v105 = v114;
            v96 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v105, 0LL);
            SvtEqCombineListViewManager__ModifyLockItem_35011976(v5, v90, v96, 1, isIconSizeChangeb, v97);
            goto LABEL_102;
          }
LABEL_106:
          sub_B5D69C(this, isIconSizeChange);
        }
      }
      if ( (int)++v88 >= v83 )
        goto LABEL_102;
    }
    sub_B5D990(v90);
    SvtEqCombineListViewManager__SetObjectItem(v99, v100, v101, v102);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__ModifyLockItem(
        SvtEqCombineListViewManager_o *this,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  int v8; // w1
  char v9; // w2
  __int64 v10; // x3
  int v11; // w1
  char v12; // w2
  __int64 v13; // x3
  int v14; // w1
  char v15; // w2
  __int64 v16; // x3
  int v17; // w1
  char v18; // w2
  __int64 v19; // x3
  int v20; // w1
  char v21; // w2
  __int64 v22; // x3
  int v23; // w1
  char v24; // w2
  __int64 v25; // x3
  int v26; // w1
  char v27; // w2
  __int64 v28; // x3
  int v29; // w1
  char v30; // w2
  __int64 v31; // x3
  int v32; // w1
  char v33; // w2
  __int64 v34; // x3
  __int64 v35; // x1
  DataManager_o *Instance; // x0
  UserServantEntity_o *Entity; // x21
  bool v38; // w20
  int64_t v39; // x0
  SvtEqCombineListViewItem_c *v40; // x1
  Il2CppObject *current; // x22
  __int64 v42; // x9
  _OWORD *monitor; // x8
  _QWORD *p_monitor; // x23
  __int128 v45; // q0
  int64_t v46; // x0
  __int128 v47; // q0
  int64_t v48; // x24
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  const MethodInfo *v55; // x1
  UnityEngine_Object_o *v56; // x23
  __int64 v57; // x1
  void *v58; // x0
  __int64 v59; // x1
  ListViewObject_o *v60; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+50h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v65; // [xsp+70h] [xbp-70h] BYREF

  if ( (byte_42EE4E4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId, isInit, isIconSizeChange);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v20, v21, v22);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30, v31);
    sub_B5D5C4(&SvtEqCombineListViewItem_TypeInfo, v32, v33, v34);
    byte_42EE4E4 = 1;
  }
  memset(&v65, 0, sizeof(v65));
  if ( !this->fields.itemList )
    return;
  UserGameMaster__getSelfUserGame(0LL);
  if ( usrSvtId < 1 )
  {
    Entity = 0LL;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
LABEL_44:
      sub_B5D69C(Instance, v35);
    }
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
               usrSvtId,
               (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_44;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v64,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v65.fields.current = (Il2CppObject *)v64.fields.fakeValue;
  *(_OWORD *)&v65.fields.list = *(_OWORD *)&v64.fields.currentCryptoKey;
  v38 = !isIconSizeChange && isInit;
  while ( 1 )
  {
    v39 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v65,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v39 & 1) == 0 )
      break;
    current = v65.fields.current;
    if ( v65.fields.current )
    {
      v40 = SvtEqCombineListViewItem_TypeInfo;
      v42 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v65.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v42
        || (SvtEqCombineListViewItem_c *)v65.fields.current->klass->_2.typeHierarchy[v42 - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        sub_B5D990(v65.fields.current);
LABEL_38:
        sub_B5D69C(v39, v40);
      }
    }
    if ( Entity )
    {
      if ( !v65.fields.current )
        sub_B5D69C(v39, v40);
      p_monitor = &v65.fields.current[7].monitor;
      monitor = v65.fields.current[7].monitor;
      if ( !monitor )
        goto LABEL_38;
      v45 = monitor[2];
      *(_OWORD *)&v64.fields.currentCryptoKey = monitor[1];
      *(_OWORD *)&v64.fields.fakeValue = v45;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v63 = v64;
      v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v63, 0LL);
      v47 = *(_OWORD *)&Entity->fields.id.fields.fakeValue;
      v48 = v46;
      *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v62.fields.fakeValue = v47;
      v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v62, 0LL);
      if ( v48 == v39 )
      {
        *p_monitor = Entity;
        sub_B5D560(
          (BattleServantConfConponent_o *)&current[7].monitor,
          (System_Int32_array **)Entity,
          v49,
          v50,
          v51,
          v52,
          v53,
          v54);
      }
    }
    if ( v38 )
    {
      if ( !current )
        sub_B5D69C(v39, v40);
      SvtEqCombineListViewItem__ModifyLockItem((SvtEqCombineListViewItem_o *)current, (const MethodInfo *)v40);
      SvtEqCombineListViewItem__ModifyChoiceItem((SvtEqCombineListViewItem_o *)current, v55);
    }
    else if ( !current )
    {
      sub_B5D69C(v39, v40);
    }
    v56 = (UnityEngine_Object_o *)current[6].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v56, 0LL, 0LL) )
    {
      v58 = current[6].monitor;
      if ( !v58 )
        sub_B5D69C(0LL, v57);
      (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v58 + 392LL))(
        v58,
        current,
        *(_QWORD *)(*(_QWORD *)v58 + 400LL));
      if ( isIconSizeChange )
      {
        v60 = (ListViewObject_o *)current[6].monitor;
        if ( !v60 )
          sub_B5D69C(0LL, v59);
        ListViewObject__SetItemSeed(v60, (ListViewItem_o *)current, this->fields.seed, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v65,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__ModifyLockItem_35011976(
        SvtEqCombineListViewManager_o *this,
        SvtEqCombineListViewItem_o *servantItem,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  SvtEqCombineListViewManager_o *v10; // x20
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v24; // q1
  SvtEqCombineListViewManager_o *v25; // x23
  int64_t v26; // x0
  __int128 v27; // q0
  SvtEqCombineListViewManager_o *v28; // x25
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  const MethodInfo *v35; // x1
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+40h] [xbp-60h]

  v10 = this;
  if ( (byte_42EE4E5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, (_DWORD)servantItem, usrSvtId, isInit);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17, v18, v19);
    this = (SvtEqCombineListViewManager_o *)sub_B5D5C4(
                                              &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                              v20,
                                              v21,
                                              v22);
    byte_42EE4E5 = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (SvtEqCombineListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_28;
    this = (SvtEqCombineListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_28;
    this = (SvtEqCombineListViewManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                              (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                              usrSvtId,
                                              (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( this )
    {
      if ( !servantItem )
        goto LABEL_28;
      userSvtEntity = servantItem->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_28;
      v24 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      v25 = this;
      *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v39.fields.fakeValue = v24;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v38 = v39;
      v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v38, 0LL);
      v27 = *(_OWORD *)&v25->fields.indicator;
      v28 = (SvtEqCombineListViewManager_o *)v26;
      *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&v25->fields.m_CachedPtr;
      *(_OWORD *)&v37.fields.fakeValue = v27;
      this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                &v37,
                                                0LL);
      if ( v28 == this )
      {
        servantItem->fields.userSvtEntity = (struct UserServantEntity_o *)v25;
        sub_B5D560(
          (BattleServantConfConponent_o *)&servantItem->fields.userSvtEntity,
          (System_Int32_array **)v25,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
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
    SvtEqCombineListViewItem__ModifyChoiceItem(servantItem, v35);
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
    sub_B5D69C(this, servantItem);
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickBonusFilterKind(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_42EE4FD & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE4FD = 1;
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
      sub_B5D69C(0LL, v5);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  const MethodInfo *v11; // x2
  SvtEqCombineListViewManager_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2

  if ( (byte_42EE509 & 1) == 0 )
  {
    sub_B5D5C4(&SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SvtEqCombineListViewManager_EndClickTabChoice__, v8, v9, v10);
    byte_42EE509 = 1;
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
      v12 = (SvtEqCombineListViewManager_RequestCallbackFunc_o *)sub_B5D694(SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo);
      SvtEqCombineListViewManager_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_SvtEqCombineListViewManager_EndClickTabChoice__,
        0LL);
      SvtEqCombineListViewManager__StatusRequest(this, v12, v13);
    }
    else
    {
      SvtEqCombineListViewManager__SetStatusKind(this, 2, v11);
      SvtEqCombineListViewManager__ReleaseAll(this, v14);
      SvtEqCombineListViewManager__ModifyList(this, 0, v15);
      SvtEqCombineListViewManager__SetMode_35014664(this, 2, v16);
    }
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickCollectLock(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  const MethodInfo *v11; // x2
  SvtEqCombineListViewManager_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2

  if ( (byte_42EE508 & 1) == 0 )
  {
    sub_B5D5C4(&SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SvtEqCombineListViewManager_EndClickTabLock__, v8, v9, v10);
    byte_42EE508 = 1;
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
      v12 = (SvtEqCombineListViewManager_RequestCallbackFunc_o *)sub_B5D694(SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo);
      SvtEqCombineListViewManager_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_SvtEqCombineListViewManager_EndClickTabLock__,
        0LL);
      SvtEqCombineListViewManager__StatusRequest(this, v12, v13);
    }
    else
    {
      SvtEqCombineListViewManager__SetStatusKind(this, 1, v11);
      SvtEqCombineListViewManager__ReleaseAll(this, v14);
      SvtEqCombineListViewManager__ModifyList(this, 0, v15);
      SvtEqCombineListViewManager__SetMode_35014664(this, 2, v16);
    }
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickDecide(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  const MethodInfo *v11; // x1
  struct CombineRootComponent_o *v12; // x0
  __int64 v13; // x1
  CombineRootComponent_o *combineRootComponent; // x8
  const MethodInfo *v15; // x1
  ServantCheckEquipDialog_o *servantEquipCheckDialog; // x20
  System_Collections_Generic_List_SvtEqCombineListViewItem__o *SelectedMaterialList; // x21
  ServantCheckEquipDialog_ClickDelegate_o *v18; // x22

  if ( (byte_42EE4EC & 1) == 0 )
  {
    sub_B5D5C4(&ServantCheckEquipDialog_ClickDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SvtEqCombineListViewManager_CloseServantCheckEquipDialog__, v8, v9, v10);
    byte_42EE4EC = 1;
  }
  if ( this->fields.isDecideFlg )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v12 = (struct CombineRootComponent_o *)SvtEqCombineListViewManager__CheckMaterialEquipped(this, v11);
    combineRootComponent = this->fields.combineRootComponent;
    this->fields._isOpenCheckEquipDialog_k__BackingField = (unsigned __int8)v12 & 1;
    if ( !combineRootComponent )
      goto LABEL_19;
    CombineRootComponent__SetBackSelect(combineRootComponent, 1, 0LL);
    if ( this->fields._isOpenCheckEquipDialog_k__BackingField )
    {
      servantEquipCheckDialog = this->fields.servantEquipCheckDialog;
      SelectedMaterialList = SvtEqCombineListViewManager__GetSelectedMaterialList(this, v15);
      v18 = (ServantCheckEquipDialog_ClickDelegate_o *)sub_B5D694(ServantCheckEquipDialog_ClickDelegate_TypeInfo);
      ServantCheckEquipDialog_ClickDelegate___ctor(
        v18,
        (Il2CppObject *)this,
        Method_SvtEqCombineListViewManager_CloseServantCheckEquipDialog__,
        0LL);
      if ( servantEquipCheckDialog )
      {
        ServantCheckEquipDialog__Open(servantEquipCheckDialog, SelectedMaterialList, 0, v18, 0LL);
        return;
      }
LABEL_19:
      sub_B5D69C(v12, v13);
    }
    SvtEqCombineListViewManager__SetSelectedMaterialInfo(this, v15);
    v12 = this->fields.combineRootComponent;
    if ( !v12 )
      goto LABEL_19;
    if ( v12->fields.state == 4 )
      CombineRootComponent__SetSelectSvtEqMaterialList(v12, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x0
  __int64 v9; // x1
  struct ListViewSort_o *sort; // x8
  int32_t filter2Kind; // w20
  int32_t v12; // w9

  if ( (byte_42EE4FE & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SvtEqCombineListViewManager_TypeInfo, v5, v6, v7);
    byte_42EE4FE = 1;
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
      sub_B5D69C(v8, v9);
    }
    if ( filter2Kind + 1 <= SvtEqCombineListViewManager_TypeInfo->static_fields->FILTER2_MAX_KIND_NUM )
      v12 = filter2Kind + 1;
    else
      v12 = 0;
    sort->fields.filter2Kind = v12;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickFilterKind(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v16; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_42EE4FA & 1) == 0 )
  {
    sub_B5D5C4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SvtEqCombineListViewManager_EndSelectFilterKind__, v11, v12, v13);
    byte_42EE4FA = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v16 = (CommonUI_o *)Instance;
    v17 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B5D694(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v17,
      (Il2CppObject *)this,
      Method_SvtEqCombineListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v16 )
      sub_B5D69C(v18, v19);
    CommonUI__OpenServantFilterSelectMenu_18209116(v16, 5, sort, (ListViewManager_o *)this, v17, -1, 0LL);
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
  __int64 v3; // x3
  SvtEqCombineListViewManager_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x9
  SvtEqCombineListViewItem_o *Item; // x20
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v15; // q1
  int64_t v16; // x0
  const MethodInfo *v17; // x4
  const MethodInfo *v18; // x2
  SvtEqCombineListViewManager_o *v19; // x0
  SvtEqCombineListViewItem_o *v20; // x1
  const MethodInfo *v21; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+20h] [xbp-40h]

  v5 = this;
  if ( (byte_42EE4F7 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v6, v7, v8);
    this = (SvtEqCombineListViewManager_o *)sub_B5D5C4(&SvtEqCombineListViewObject_TypeInfo, v9, v10, v11);
    byte_42EE4F7 = 1;
  }
  if ( !obj )
    goto LABEL_15;
  v12 = *(&SvtEqCombineListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v12
    || (SvtEqCombineListViewObject_c *)obj->klass->_2.typeHierarchy[v12 - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    sub_B5D990(obj);
    SvtEqCombineListViewManager__IsDragEnable(v19, v20, v21);
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
    sub_B5D69C(this, obj);
  v15 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v23.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v23.fields.fakeValue = v15;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v22 = v23;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v22, 0LL);
  SvtEqCombineListViewManager__ModifyLockItem(v5, v16, 0, 0, v17);
  SvtEqCombineListViewManager__SetMode_35014664(v5, 3, v18);
}


void __fastcall SvtEqCombineListViewManager__OnClickNormalStatus(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  SvtEqCombineListViewManager_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_42EE507 & 1) == 0 )
  {
    sub_B5D5C4(&SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SvtEqCombineListViewManager_EndClickTabStatus__, v8, v9, v10);
    byte_42EE507 = 1;
  }
  if ( this->fields.modeKind )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v11 = (SvtEqCombineListViewManager_RequestCallbackFunc_o *)sub_B5D694(SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo);
    SvtEqCombineListViewManager_RequestCallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_SvtEqCombineListViewManager_EndClickTabStatus__,
      0LL);
    SvtEqCombineListViewManager__StatusRequest(this, v11, v12);
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickReleaseAll(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1

  if ( (byte_42EE4F2 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE4F2 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  SvtEqCombineListViewManager__ReleaseAll(this, v5);
}


void __fastcall SvtEqCombineListViewManager__OnClickScaleChange(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ListViewSort_o *ScaleKindSpriteName; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int32_t v15; // w8
  struct ListViewSort_o *sort; // x8
  UISprite_o *scaleChangeButtonSprite; // x20
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2

  if ( (byte_42EE504 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE504 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v15 = 2;
    goto LABEL_12;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v15 = 3;
    goto LABEL_12;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v15 = 1;
LABEL_12:
    this->fields.scaleType = v15;
    this->fields.seed = smallSizeSeed;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)smallSizeSeed,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
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
    sub_B5D69C(ScaleKindSpriteName, v6);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)ScaleKindSpriteName, 0LL);
  SvtEqCombineListViewManager__ModifyList(this, 1, v18);
  SvtEqCombineListViewManager__SetMode_35014664(this, 2, v19);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall SvtEqCombineListViewManager__OnClickSelectBase(
        SvtEqCombineListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  SvtEqCombineListViewManager_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x9
  struct UserServantEntity_o *baseUsrSvtData; // x8
  SvtEqCombineListViewItem_o *v17; // x21
  __int128 v18; // q1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  SoundManager_c *v25; // x0
  int32_t v26; // w0
  System_Int32_array **userSvtEntity; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  SvtEqCombineListViewManager_o *v34; // x0
  ListViewObject_o *v35; // x1
  const MethodInfo *v36; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-40h]

  v5 = this;
  if ( (byte_42EE4F5 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__,
      (_DWORD)obj,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&SoundManager_TypeInfo, v9, v10, v11);
    this = (SvtEqCombineListViewManager_o *)sub_B5D5C4(&SvtEqCombineListViewObject_TypeInfo, v12, v13, v14);
    byte_42EE4F5 = 1;
  }
  if ( !obj )
    goto LABEL_39;
  v15 = *(&SvtEqCombineListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v15
    || (SvtEqCombineListViewObject_c *)obj->klass->_2.typeHierarchy[v15 - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    sub_B5D990(obj);
    SvtEqCombineListViewManager__OnClickListView(v34, v35, v36);
    return;
  }
  this = (SvtEqCombineListViewManager_o *)SvtEqCombineListViewObject__GetItem(
                                            (SvtEqCombineListViewObject_o *)obj,
                                            (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo);
  baseUsrSvtData = v5->fields.baseUsrSvtData;
  v17 = (SvtEqCombineListViewItem_o *)this;
  if ( !baseUsrSvtData )
  {
    if ( !this )
      goto LABEL_39;
LABEL_18:
    if ( v17->fields.type )
    {
      v25 = SoundManager_TypeInfo;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
        goto LABEL_20;
      goto LABEL_32;
    }
    if ( v17->fields.isLvMax && v17->fields.isLimitCntMax )
    {
      v25 = SoundManager_TypeInfo;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
        goto LABEL_30;
    }
    else
    {
      v25 = SoundManager_TypeInfo;
      if ( !v17->fields.isSvtEqMaterial )
      {
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
        {
LABEL_20:
          if ( !v25->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v25);
        }
LABEL_32:
        v26 = 0;
        goto LABEL_33;
      }
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
      {
LABEL_30:
        v26 = 2;
LABEL_33:
        SoundManager__playSystemSe(v26, 0LL);
        userSvtEntity = (System_Int32_array **)v17->fields.userSvtEntity;
        v5->fields.baseUsrSvtData = (struct UserServantEntity_o *)userSvtEntity;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v5->fields.baseUsrSvtData,
          userSvtEntity,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
        goto LABEL_34;
      }
    }
    if ( !v25->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v25);
    goto LABEL_30;
  }
  v18 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
  *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v38.fields.fakeValue = v18;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v37 = v38;
  this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                            &v37,
                                            0LL);
  if ( !v17 )
LABEL_39:
    sub_B5D69C(this, obj);
  if ( this != (SvtEqCombineListViewManager_o *)SvtEqCombineListViewItem__get_UserSvtId(v17, (const MethodInfo *)obj) )
    goto LABEL_18;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  v5->fields.baseUsrSvtData = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&v5->fields.baseUsrSvtData, 0LL, v19, v20, v21, v22, v23, v24);
  this = (SvtEqCombineListViewManager_o *)v5->fields.tempMtSvtList;
  if ( !this )
    goto LABEL_39;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__);
LABEL_34:
  this = (SvtEqCombineListViewManager_o *)v5->fields.combineRootComponent;
  if ( !this )
    goto LABEL_39;
  CombineRootComponent__SetBackSelect((CombineRootComponent_o *)this, v5->fields.baseUsrSvtData != 0LL, 0LL);
  this = (SvtEqCombineListViewManager_o *)v5->fields.combineRootComponent;
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
  __int64 v3; // x3
  SvtEqCombineListViewManager_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x9
  ListViewItem_o *v19; // x20
  const MethodInfo *v20; // x1
  int32_t selectNum; // w21
  int32_t klass; // w9
  _BOOL8 v23; // x0
  __int64 v24; // x1
  int32_t selectSum; // w8
  void *v26; // x0
  int v27; // w1
  __int64 v28; // x20
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+8h] [xbp-38h] BYREF

  v5 = this;
  if ( (byte_42EE4F6 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__,
      (_DWORD)obj,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v12, v13, v14);
    this = (SvtEqCombineListViewManager_o *)sub_B5D5C4(&SvtEqCombineListViewObject_TypeInfo, v15, v16, v17);
    byte_42EE4F6 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  if ( !obj )
    goto LABEL_21;
  v18 = *(&SvtEqCombineListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v18
    || (SvtEqCombineListViewObject_c *)obj->klass->_2.typeHierarchy[v18 - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    sub_B5D990(obj);
    if ( v27 != 1 )
      _Unwind_Resume(v26);
    v28 = *(_QWORD *)__cxa_begin_catch(v26);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v29,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( v28 )
      sub_B5D668(v28, 0LL);
    goto LABEL_18;
  }
  this = (SvtEqCombineListViewManager_o *)SvtEqCombineListViewObject__GetItem(
                                            (SvtEqCombineListViewObject_o *)obj,
                                            (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo);
  if ( !this )
    goto LABEL_21;
  v19 = (ListViewItem_o *)this;
  if ( ListViewItem__get_IsSelect((ListViewItem_o *)this, 0LL) )
  {
    selectNum = v19->fields.selectNum;
    ListViewItem__set_IsSelect(v19, 0, 0LL);
    this = (SvtEqCombineListViewManager_o *)v5->fields.itemList;
    --v5->fields.selectSum;
    if ( this )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v29,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( 1 )
      {
        v23 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v29,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v23 )
          break;
        if ( !v29.fields.current )
          sub_B5D69C(v23, v24);
        klass = (int32_t)v29.fields.current[1].klass;
        if ( klass > selectNum )
          LODWORD(v29.fields.current[1].klass) = klass - 1;
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v29,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      goto LABEL_18;
    }
LABEL_21:
    sub_B5D69C(this, obj);
  }
  selectSum = v5->fields.selectSum;
  if ( v5->fields.modeKind || selectSum < v5->fields.selectMax )
  {
    v19->fields.selectNum = selectSum;
    ++v5->fields.selectSum;
LABEL_18:
    SvtEqCombineListViewManager__RefrashListDisp(v5, v20);
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickSortAscendingOrder(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_42EE501 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE501 = 1;
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
      sub_B5D69C(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickSortKind(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int32_t itemType; // w23
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v17; // x21
  ServantSortSelectMenu_CallbackFunc_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1

  if ( (byte_42EE4FF & 1) == 0 )
  {
    sub_B5D5C4(&ServantSortSelectMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SvtEqCombineListViewManager_EndSelectSortKind__, v11, v12, v13);
    byte_42EE4FF = 1;
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v17 = (CommonUI_o *)Instance;
    v18 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B5D694(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v18,
      (Il2CppObject *)this,
      Method_SvtEqCombineListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v17 )
      sub_B5D69C(v19, v20);
    CommonUI__OpenServantSortSelectMenu(v17, 2, sort, itemType == 1, v18, 0LL);
  }
}


void __fastcall SvtEqCombineListViewManager__OnLongPushListView(
        SvtEqCombineListViewManager_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  SvtEqCombineListViewItem_c *v24; // x1
  __int64 v25; // x9
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *selectedMtSvtList_k__BackingField; // x0
  int64_t UserSvtId; // x0
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x1
  UnityEngine_Behaviour_o *scrollView; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct UserServantEntity_o *monitor; // x1
  void *v38; // x0
  int v39; // w1
  __int64 v40; // x21
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42EE4F8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__,
      (_DWORD)item,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v15, v16, v17);
    sub_B5D5C4(&SoundManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&SvtEqCombineListViewItem_TypeInfo, v21, v22, v23);
    byte_42EE4F8 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  if ( (unsigned int)(this->fields.modeKind - 1) >= 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( item
      && ((v24 = SvtEqCombineListViewItem_TypeInfo,
           v25 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1),
           *(&item->klass->_2.bitflags2 + 1) < (unsigned int)v25)
       || (SvtEqCombineListViewItem_c *)item->klass->_2.typeHierarchy[v25 - 1] != SvtEqCombineListViewItem_TypeInfo) )
    {
      sub_B5D990(item);
      if ( v39 != 1 )
        _Unwind_Resume(v38);
      v40 = *(_QWORD *)__cxa_begin_catch(v38);
      __cxa_end_catch();
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v42,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
      if ( v40 )
        sub_B5D668(v40, 0LL);
    }
    else
    {
      selectedMtSvtList_k__BackingField = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields._selectedMtSvtList_k__BackingField;
      this->fields.isSelectMaterial = 0;
      if ( selectedMtSvtList_k__BackingField && selectedMtSvtList_k__BackingField->fields._size >= 1 )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v41,
          selectedMtSvtList_k__BackingField,
          (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__);
        v42 = v41;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v42,
                  (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__) )
        {
          if ( !v42.fields.current )
            sub_B5D69C(0LL, v29);
          UserSvtId = SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)v42.fields.current, v29);
          if ( !item )
            sub_B5D69C(UserSvtId, v28);
          if ( UserSvtId == SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)item, v28) )
            this->fields.isSelectMaterial = 1;
        }
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v42,
          (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
      }
    }
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !scrollView
      || (UnityEngine_Behaviour__set_enabled(scrollView, 0, 0LL), !item)
      || (monitor = (struct UserServantEntity_o *)item[1].monitor,
          this->fields.selectUsrSvtEntity = monitor,
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.selectUsrSvtEntity,
            (System_Int32_array **)monitor,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36),
          (scrollView = (UnityEngine_Behaviour_o *)this->fields.combineRootComponent) == 0LL) )
    {
      sub_B5D69C(scrollView, v24);
    }
    if ( *((_DWORD *)&scrollView[17].fields + 1) == 4 )
      CombineRootComponent__SelectShowServant((CombineRootComponent_o *)scrollView, 0LL);
  }
}


void __fastcall SvtEqCombineListViewManager__OnMoveEnd(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t callbackCount; // w8
  bool v6; // vf
  int32_t v7; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UIScrollView_o *v16; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_42EE4EB & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE4EB = 1;
  }
  callbackCount = this->fields.callbackCount;
  v6 = __OFSUB__(callbackCount, 1);
  v7 = callbackCount - 1;
  if ( v7 < 0 == v6 )
  {
    this->fields.callbackCount = v7;
    if ( !v7 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v16 = this->fields.scrollView;
        if ( !v16
          || (((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v16->klass->vtable._8_UpdateScrollbars.method)(
                v16,
                1LL,
                v16->klass->vtable._9_SetDragAmount.methodPtr),
              (v16 = this->fields.scrollView) == 0LL) )
        {
          sub_B5D69C(v16, v9);
        }
        UIScrollView__UpdatePosition(v16, 0LL);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v10, v11, v12, v13, v14, v15);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  __int64 v65; // x1
  System_Collections_Generic_List_SvtEqCombineListViewObject__o *ObjectList; // x20
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t CombineQpSvtEq; // w0
  const MethodInfo *v69; // x2
  int32_t v70; // w21
  __int64 itemList; // x0
  SvtEqCombineListViewItem_o *current; // x22
  __int64 v73; // x9
  __int64 v74; // x1
  UserServantEntity_o *v75; // x0
  const MethodInfo *v76; // x1
  UserServantEntity_o *v77; // x0
  int32_t addTotalExp; // w23
  _BOOL8 v79; // x0
  __int64 v80; // x1
  UILabel_o *selectInfoLabel; // x21
  System_String_o *v82; // x22
  Il2CppObject *v83; // x23
  Il2CppObject *v84; // x0
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *combineEventList; // x0
  Il2CppObject *v87; // x22
  int klass_high; // w8
  _BOOL8 v89; // x0
  __int64 v90; // x1
  int v91; // w27
  int v92; // w8
  UILabel_o *spendQpLabel; // x21
  Il2CppObject *v94; // x0
  UIWidget_o *v95; // x21
  int v96; // s0
  UILabel_o *getBasicExpLabel; // x21
  Il2CppObject *v101; // x0
  UILabel_o *getAccExpLabel; // x21
  Il2CppObject *v103; // x0
  const MethodInfo *v104; // x2
  struct UserServantEntity_o *v105; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v106; // x21
  __int64 v107; // x22
  __int64 v108; // x23
  int32_t v109; // w8
  const MethodInfo *v110; // x4
  int32_t LevelMax; // w21
  struct UserServantEntity_o *v112; // x8
  int32_t increLv; // w22
  int32_t lv; // w23
  bool v115; // w22
  Il2CppObject *v116; // x21
  __int64 v117; // x9
  _BOOL8 v118; // x0
  __int64 v119; // x1
  int v120; // w27
  bool v121; // w1
  SvtEqCombineListViewManager_o *v122; // x0
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *tempMtSvtList; // x8
  int32_t size; // w8
  int v125; // w8
  __int64 v126; // x21
  int32_t selectMax; // [xsp+4h] [xbp-BCh] BYREF
  System_Collections_Generic_List_Enumerator_T__o v128; // [xsp+8h] [xbp-B8h] BYREF
  int v129[3]; // [xsp+20h] [xbp-A0h]
  int v130; // [xsp+2Ch] [xbp-94h]
  System_Collections_Generic_List_Enumerator_T__o v131; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v132; // [xsp+50h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v133; // 0:x0.16

  if ( (byte_42EE4DD & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v23, v24, v25);
    sub_B5D5C4(&int_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Count__, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Item__, v44, v45, v46);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v50, v51, v52);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v53, v54, v55);
    sub_B5D5C4(&SvtEqCombineListViewItem_TypeInfo, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_23838/*"{0:N0}"*/, v59, v60, v61);
    sub_B5D5C4(&StringLiteral_12617/*"SUM_INFO"*/, v62, v63, v64);
    byte_42EE4DD = 1;
  }
  memset(&v132, 0, sizeof(v132));
  memset(&v131, 0, sizeof(v131));
  v130 = 0;
  ObjectList = SvtEqCombineListViewManager__get_ObjectList(this, method);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  *(_QWORD *)&this->fields.selectQp = 0LL;
  this->fields.addTotalExp = 0;
  this->fields.isAllUpMax = 0;
  if ( baseUsrSvtData && this->fields.itemType == 1 )
  {
    CombineQpSvtEq = UserServantEntity__getCombineQpSvtEq(baseUsrSvtData, 0LL);
    v70 = SvtEqCombineListViewManager__CheckCompareQp(this, CombineQpSvtEq, v69);
  }
  else
  {
    v70 = 0;
  }
  itemList = (__int64)this->fields.itemList;
  if ( !itemList )
    goto LABEL_94;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v128,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v132 = v128;
  while ( 1 )
  {
    v79 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v132,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v79 )
      break;
    current = (SvtEqCombineListViewItem_o *)v132.fields.current;
    if ( !v132.fields.current )
      goto LABEL_93;
    v73 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v132.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v73
      || (SvtEqCombineListViewItem_c *)v132.fields.current->klass->_2.typeHierarchy[v73 - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      sub_B5D990(v132.fields.current);
LABEL_93:
      sub_B5D69C(v79, v80);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v132.fields.current, 0LL) )
    {
      v75 = this->fields.baseUsrSvtData;
      this->fields.selectQp += v70;
      if ( !v75 )
        goto LABEL_96;
      if ( !UserServantEntity__isLevelMax(v75, 0LL) )
        goto LABEL_18;
      v77 = this->fields.baseUsrSvtData;
      if ( !v77 )
        sub_B5D69C(0LL, v76);
      if ( UserServantEntity__isLevelMax(v77, 0LL) && current->fields.isLimitCntTarget )
      {
LABEL_18:
        addTotalExp = this->fields.addTotalExp;
        this->fields.selectExp += current->fields.materialExp;
        this->fields.addTotalExp = SvtEqCombineListViewItem__get_GetAddTotalExp(current, v76) + addTotalExp;
      }
    }
    else
    {
      current->fields.isMaxSelect = this->fields.selectSum >= this->fields.selectMax;
    }
  }
  v129[0] = 255;
  v130 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v132,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  v130 = 0;
  selectInfoLabel = this->fields.selectInfoLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v82 = LocalizationManager__Get((System_String_o *)StringLiteral_12617/*"SUM_INFO"*/, 0LL);
  LODWORD(v128.fields.list) = this->fields.selectSum;
  v83 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v128);
  selectMax = this->fields.selectMax;
  v84 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &selectMax);
  itemList = (__int64)System_String__Format_44573324(v82, v83, v84, 0LL);
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
      &v128,
      combineEventList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v131 = v128;
    while ( 1 )
    {
      v89 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v131,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v89 )
        break;
      v87 = v131.fields.current;
      if ( !v131.fields.current )
        sub_B5D69C(v89, v90);
      klass_high = HIDWORD(v131.fields.current[1].klass);
      if ( klass_high == 17 )
      {
        this->fields.selectExp = UnityEngine_Mathf__CeilToInt(
                                   *(float *)&v131.fields.current[3].monitor * (float)this->fields.selectExp,
                                   0LL);
        klass_high = HIDWORD(v87[1].klass);
      }
      if ( klass_high == 16 )
        this->fields.selectQp = UnityEngine_Mathf__CeilToInt(
                                  *(float *)&v87[3].monitor * (float)this->fields.selectQp,
                                  0LL);
    }
    v129[0] = 445;
    v91 = ++v130;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v131,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    if ( v91 )
    {
      v92 = v91 - 1;
      if ( v129[v91 - 1] == 445 )
      {
        --v91;
        v130 = v92;
      }
    }
  }
  else
  {
    v91 = 0;
  }
  spendQpLabel = this->fields.spendQpLabel;
  LODWORD(v128.fields.list) = this->fields.selectQp;
  v94 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v128);
  itemList = (__int64)System_String__Format((System_String_o *)StringLiteral_23838/*"{0:N0}"*/, v94, 0LL);
  if ( !spendQpLabel )
    goto LABEL_94;
  UILabel__set_text(spendQpLabel, (System_String_o *)itemList, 0LL);
  if ( this->fields.itemType == 1 )
  {
    v95 = (UIWidget_o *)this->fields.spendQpLabel;
    if ( this->fields.selectQp <= this->fields.userQP )
    {
      *(UnityEngine_Color_o *)&v96 = UnityEngine_Color__get_white(0LL);
      if ( !v95 )
        goto LABEL_94;
    }
    else
    {
      *(UnityEngine_Color_o *)&v96 = UnityEngine_Color__get_red(0LL);
      if ( !v95 )
        goto LABEL_94;
    }
    UIWidget__set_color(v95, *(UnityEngine_Color_o *)&v96, 0LL);
  }
  getBasicExpLabel = this->fields.getBasicExpLabel;
  LODWORD(v128.fields.list) = this->fields.selectExp;
  v101 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v128);
  itemList = (__int64)System_String__Format((System_String_o *)StringLiteral_23838/*"{0:N0}"*/, v101, 0LL);
  if ( !getBasicExpLabel
    || (UILabel__set_text(getBasicExpLabel, (System_String_o *)itemList, 0LL),
        getAccExpLabel = this->fields.getAccExpLabel,
        selectMax = this->fields.addTotalExp,
        v103 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &selectMax),
        itemList = (__int64)System_String__Format((System_String_o *)StringLiteral_23838/*"{0:N0}"*/, v103, 0LL),
        !getAccExpLabel) )
  {
LABEL_94:
    sub_B5D69C(itemList, v65);
  }
  UILabel__set_text(getAccExpLabel, (System_String_o *)itemList, 0LL);
  if ( this->fields.baseUsrSvtData && this->fields.itemType == 1 )
  {
    itemList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !itemList )
      goto LABEL_94;
    itemList = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)itemList,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
    v105 = this->fields.baseUsrSvtData;
    if ( !v105 )
      goto LABEL_94;
    v106 = (DataMasterBase_WarMaster__WarEntity__int__o *)itemList;
    v108 = *(_QWORD *)&v105->fields.svtId.fields.currentCryptoKey;
    v107 = *(_QWORD *)&v105->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v133.fields.currentCryptoKey = v108;
    *(_QWORD *)&v133.fields.fakeValue = v107;
    itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v133, 0LL);
    if ( !v106 )
      goto LABEL_94;
    itemList = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                          v106,
                          itemList,
                          (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !itemList )
      goto LABEL_94;
    v109 = *(_DWORD *)(itemList + 132);
    itemList = (__int64)this->fields.baseUsrSvtData;
    this->fields.expType = v109;
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
                     v110);
      while ( (itemList & 1) == 0 );
      v112 = this->fields.baseUsrSvtData;
      if ( !v112 )
        goto LABEL_94;
      itemList = (__int64)this->fields.levelUpInfoImg;
      if ( !itemList )
        goto LABEL_94;
      increLv = this->fields.increLv;
      lv = v112->fields.lv;
      itemList = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemList, 0LL);
      if ( !itemList )
        goto LABEL_94;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, increLv - lv >= 1, 0LL);
    }
    itemList = (__int64)this->fields.itemList;
    if ( !itemList )
      goto LABEL_94;
    v115 = this->fields.increLv >= LevelMax;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v128,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v132 = v128;
    while ( 1 )
    {
      v118 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
               &v132,
               (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v118 )
        break;
      v116 = v132.fields.current;
      if ( !v132.fields.current )
        sub_B5D69C(v118, v119);
      v117 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v132.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v117
        || (SvtEqCombineListViewItem_c *)v132.fields.current->klass->_2.typeHierarchy[v117 - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        sub_B5D990(v132.fields.current);
LABEL_96:
        sub_B5D69C(v75, v74);
      }
      if ( !ListViewItem__get_IsSelect((ListViewItem_o *)v132.fields.current, 0LL) )
        BYTE2(v116[15].klass) = v115;
    }
    v129[v91] = 903;
    v120 = ++v130;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v132,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( v120 && v129[v120 - 1] == 903 )
      v130 = v120 - 1;
  }
  if ( this->fields.selectSum >= 1 )
  {
    v121 = 1;
    v122 = this;
    goto LABEL_77;
  }
  tempMtSvtList = this->fields.tempMtSvtList;
  if ( !tempMtSvtList )
    goto LABEL_94;
  if ( tempMtSvtList->fields._size <= 0 )
  {
    v122 = this;
    v121 = 0;
LABEL_77:
    SvtEqCombineListViewManager__SetBtnEnable(v122, v121, v104);
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
    v125 = ObjectList->fields._size;
    if ( v125 >= 1 )
    {
      v126 = 0LL;
      while ( 1 )
      {
        if ( v125 <= (unsigned int)v126 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        itemList = (__int64)ObjectList->fields._items->m_Items[v126];
        if ( !itemList )
          break;
        (*(void (__fastcall **)(__int64, bool, _QWORD))(*(_QWORD *)itemList + 456LL))(
          itemList,
          this->fields.isInput,
          *(_QWORD *)(*(_QWORD *)itemList + 464LL));
        v125 = ObjectList->fields._size;
        if ( (int)++v126 >= v125 )
          return;
      }
      goto LABEL_94;
    }
  }
}


void __fastcall SvtEqCombineListViewManager__ReleaseAll(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *itemList; // x0
  Il2CppObject *current; // x20
  __int64 v19; // x9
  _BOOL8 v20; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x1
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42EE4F3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v11, v12, v13);
    sub_B5D5C4(&SvtEqCombineListViewItem_TypeInfo, v14, v15, v16);
    byte_42EE4F3 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  if ( this->fields.selectSum >= 1 )
  {
    itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_17;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v23,
      itemList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v24 = v23;
    while ( 1 )
    {
      v20 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v24,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v20 )
        break;
      current = v24.fields.current;
      if ( !v24.fields.current )
        goto LABEL_16;
      ListViewItem__set_IsSelect((ListViewItem_o *)v24.fields.current, 0, 0LL);
      v19 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&current->klass->_2.bitflags2 + 1) < (unsigned int)v19
        || (SvtEqCombineListViewItem_c *)current->klass->_2.typeHierarchy[v19 - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        sub_B5D990(current);
LABEL_16:
        sub_B5D69C(v20, v21);
      }
      BYTE2(current[10].monitor) = 0;
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v24,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.levelUpInfoImg;
    this->fields.selectSum = 0;
    if ( !itemList
      || (itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemList, 0LL)) == 0LL )
    {
LABEL_17:
      sub_B5D69C(itemList, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, 0, 0LL);
    *(_QWORD *)&this->fields.totalExp = 0LL;
    this->fields.checkLv = 0;
    SvtEqCombineListViewManager__RefrashListDisp(this, v22);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__RequestListObject(
        SvtEqCombineListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v4; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v30; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v33; // x22
  __int64 v34; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x3
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EE4E9 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v4);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__Dispose__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__MoveNext__, v11, v12, v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__get_Current__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Count__, v20, v21, v22);
    sub_B5D5C4(&Method_SvtEqCombineListViewManager_OnMoveEnd__, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v26, v27, v28);
    byte_42EE4E9 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SvtEqCombineListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B5D69C(0LL, v30);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v37,
      ObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v37,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__MoveNext__) )
    {
      current = v37.fields.current;
      v33 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v33, (Il2CppObject *)this, Method_SvtEqCombineListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v34, v35);
      zero = UnityEngine_Vector3__get_zero(0LL);
      SvtEqCombineListViewObject__Init(
        (SvtEqCombineListViewObject_o *)current,
        mode,
        v33,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v36);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v37,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__RequestListObject_35015776(
        SvtEqCombineListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v28; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v31; // x22
  __int64 v32; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x3
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EE4EA & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__Dispose__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__MoveNext__, v9, v10, v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__get_Current__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__GetEnumerator__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Count__, v18, v19, v20);
    sub_B5D5C4(&Method_SvtEqCombineListViewManager_OnMoveEnd__, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v24, v25, v26);
    byte_42EE4EA = 1;
  }
  memset(&v35, 0, sizeof(v35));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SvtEqCombineListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B5D69C(0LL, v28);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v35,
      ObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v35,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__MoveNext__) )
    {
      current = v35.fields.current;
      v31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v31, (Il2CppObject *)this, Method_SvtEqCombineListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v32, v33);
      zero = UnityEngine_Vector3__get_zero(0LL);
      SvtEqCombineListViewObject__Init(
        (SvtEqCombineListViewObject_o *)current,
        mode,
        v31,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v34);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v35,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__Dispose__);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  __int64 v21; // x1
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *selectedMtSvtList_k__BackingField; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *tempMtSvtList; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v25; // x1
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EE4F4 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__,
      (_DWORD)method,
      (_DWORD)v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v18, v19, v20);
    byte_42EE4F4 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  this->fields.baseUsrSvtData = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.baseUsrSvtData, 0LL, v2, v3, v4, v5, v6, v7);
  selectedMtSvtList_k__BackingField = this->fields._selectedMtSvtList_k__BackingField;
  if ( selectedMtSvtList_k__BackingField )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)selectedMtSvtList_k__BackingField,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__);
  tempMtSvtList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.tempMtSvtList;
  if ( !tempMtSvtList )
    goto LABEL_16;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    tempMtSvtList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__);
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v26,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v26,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( !v26.fields.current )
        sub_B5D69C(0LL, v25);
      ListViewItem__set_IsSelect((ListViewItem_o *)v26.fields.current, 0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v26,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  tempMtSvtList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.levelUpInfoImg;
  this->fields.selectSum = 0;
  if ( !tempMtSvtList
    || (tempMtSvtList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                                     (UnityEngine_Component_o *)tempMtSvtList,
                                                                                     0LL)) == 0LL )
  {
LABEL_16:
    sub_B5D69C(tempMtSvtList, v21);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tempMtSvtList, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__SetBtnEnable(
        SvtEqCombineListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Component_o *decideBtnBg; // x0
  WebViewObject_o *Component_WebViewObject; // x21
  int v8; // s0
  __int64 v12; // x1

  if ( (byte_42EE4D9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, isEnable, (_DWORD)method, v3);
    byte_42EE4D9 = 1;
  }
  decideBtnBg = (UnityEngine_Component_o *)this->fields.decideBtnBg;
  this->fields.isDecideFlg = isEnable;
  if ( !decideBtnBg )
LABEL_13:
    sub_B5D69C(decideBtnBg, isEnable);
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              decideBtnBg,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( this->fields.isDecideFlg )
  {
    *(UnityEngine_Color_o *)&v8 = UnityEngine_Color__get_white(0LL);
    if ( !Component_WebViewObject )
      goto LABEL_13;
  }
  else
  {
    *(UnityEngine_Color_o *)&v8 = UnityEngine_Color__get_gray(0LL);
    if ( !Component_WebViewObject )
      goto LABEL_13;
  }
  UIWidget__set_color((UIWidget_o *)Component_WebViewObject, *(UnityEngine_Color_o *)&v8, 0LL);
  decideBtnBg = (UnityEngine_Component_o *)this->fields.allReleaseButton;
  if ( !decideBtnBg )
    goto LABEL_13;
  if ( isEnable )
    v12 = 0LL;
  else
    v12 = 3LL;
  ((void (__fastcall *)(UnityEngine_Component_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))decideBtnBg->klass[1]._1.implementedInterfaces)(
    decideBtnBg,
    v12,
    1LL,
    decideBtnBg->klass[1]._1.interfaceOffsets);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__SetDispActive(
        SvtEqCombineListViewManager_o *this,
        bool isShow,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Component_o *allReleaseButton; // x0
  int v10; // s3
  float v11; // s4
  float v12; // s5
  float v13; // s6
  SvtEqCombineListViewManager_c *v14; // x0
  float COLOR_VAL; // s0
  float v16; // s1
  float v17; // s2
  UIWidget_o *v18; // x21
  int v19; // s0
  int v20; // s1
  int v21; // s2
  int v22; // s3
  UIWidget_o *v23; // x21
  int v24; // s0
  int v25; // s1
  int v26; // s2
  int v27; // s3
  UIWidget_o *v28; // x21
  int v29; // s0
  int v30; // s1
  int v31; // s2
  int v32; // s3
  UIWidget_o *v33; // x21
  int v34; // s0
  int v35; // s1
  int v36; // s2
  int v37; // s3
  UIWidget_o *v38; // x21
  int v39; // s0
  int v40; // s1
  int v41; // s2
  int v42; // s3
  UIWidget_o *v43; // x21
  int v44; // s0
  int v45; // s1
  int v46; // s2
  int v47; // s3
  UIWidget_o *v48; // x21
  int v49; // s0
  int v50; // s1
  int v51; // s2
  int v52; // s3
  UIWidget_o *v53; // x21
  int v54; // s0
  int v55; // s1
  int v56; // s2
  int v57; // s3
  UIWidget_o *v58; // x21
  int v59; // s0
  int v60; // s1
  int v61; // s2
  int v62; // s3
  UIWidget_o *v63; // x21
  int v64; // s0
  int v65; // s1
  int v66; // s2
  int v67; // s3
  UIWidget_o *v68; // x21
  int v69; // s0
  int v70; // s1
  int v71; // s2
  int v72; // s3
  UIWidget_o *v73; // x21
  int v74; // s0
  int v75; // s1
  int v76; // s2
  int v77; // s3
  UIWidget_o *v78; // x21
  int v79; // s0
  int v80; // s1
  int v81; // s2
  int v82; // s3
  UIWidget_o *v83; // x20
  int v84; // s0
  int v85; // s1
  int v86; // s2
  int v87; // s3
  __int64 v88; // [xsp+0h] [xbp-30h] BYREF
  __int64 v89; // [xsp+8h] [xbp-28h]

  if ( (byte_42EE4D8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, isShow, (_DWORD)method, v3);
    sub_B5D5C4(&SvtEqCombineListViewManager_TypeInfo, v6, v7, v8);
    byte_42EE4D8 = 1;
  }
  v88 = 0LL;
  v89 = 0LL;
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
  UnityEngine_Color___ctor_41567816(*(UnityEngine_Color_o *)(&v10 - 3), v11, v12, v13, (const MethodInfo *)&v88);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.spendQpBg;
  if ( !allReleaseButton )
LABEL_81:
    sub_B5D69C(allReleaseButton, isShow);
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v18 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v19 = UnityEngine_Color__get_white(0LL);
    if ( !v18 )
      goto LABEL_81;
  }
  else
  {
    v20 = HIDWORD(v88);
    v19 = v88;
    v22 = HIDWORD(v89);
    v21 = v89;
    if ( !allReleaseButton )
      goto LABEL_81;
  }
  UIWidget__set_color(v18, *(UnityEngine_Color_o *)&v19, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.spendQpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_81;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v23 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v24 = UnityEngine_Color__get_white(0LL);
    if ( !v23 )
      goto LABEL_81;
  }
  else
  {
    v25 = HIDWORD(v88);
    v24 = v88;
    v27 = HIDWORD(v89);
    v26 = v89;
    if ( !allReleaseButton )
      goto LABEL_81;
  }
  UIWidget__set_color(v23, *(UnityEngine_Color_o *)&v24, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.spendQpLabel;
  if ( !allReleaseButton )
    goto LABEL_81;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v28 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v29 = UnityEngine_Color__get_white(0LL);
    if ( !v28 )
      goto LABEL_81;
  }
  else
  {
    v30 = HIDWORD(v88);
    v29 = v88;
    v32 = HIDWORD(v89);
    v31 = v89;
    if ( !allReleaseButton )
      goto LABEL_81;
  }
  UIWidget__set_color(v28, *(UnityEngine_Color_o *)&v29, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.getExpBg;
  if ( !allReleaseButton )
    goto LABEL_81;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v33 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v34 = UnityEngine_Color__get_white(0LL);
    if ( !v33 )
      goto LABEL_81;
  }
  else
  {
    v35 = HIDWORD(v88);
    v34 = v88;
    v37 = HIDWORD(v89);
    v36 = v89;
    if ( !allReleaseButton )
      goto LABEL_81;
  }
  UIWidget__set_color(v33, *(UnityEngine_Color_o *)&v34, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.getExpBgImg;
  if ( !allReleaseButton )
    goto LABEL_81;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v38 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v39 = UnityEngine_Color__get_white(0LL);
    if ( !v38 )
      goto LABEL_81;
  }
  else
  {
    v40 = HIDWORD(v88);
    v39 = v88;
    v42 = HIDWORD(v89);
    v41 = v89;
    if ( !allReleaseButton )
      goto LABEL_81;
  }
  UIWidget__set_color(v38, *(UnityEngine_Color_o *)&v39, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.getExpLabel;
  if ( !allReleaseButton )
    goto LABEL_81;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v43 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v44 = UnityEngine_Color__get_white(0LL);
    if ( !v43 )
      goto LABEL_81;
  }
  else
  {
    v45 = HIDWORD(v88);
    v44 = v88;
    v47 = HIDWORD(v89);
    v46 = v89;
    if ( !allReleaseButton )
      goto LABEL_81;
  }
  UIWidget__set_color(v43, *(UnityEngine_Color_o *)&v44, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.getBasicExpLabel;
  if ( !allReleaseButton )
    goto LABEL_81;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v48 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v49 = UnityEngine_Color__get_white(0LL);
    if ( !v48 )
      goto LABEL_81;
  }
  else
  {
    v50 = HIDWORD(v88);
    v49 = v88;
    v52 = HIDWORD(v89);
    v51 = v89;
    if ( !allReleaseButton )
      goto LABEL_81;
  }
  UIWidget__set_color(v48, *(UnityEngine_Color_o *)&v49, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.getAccExpLabel;
  if ( !allReleaseButton )
    goto LABEL_81;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v53 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v54 = UnityEngine_Color__get_white(0LL);
    if ( !v53 )
      goto LABEL_81;
  }
  else
  {
    v55 = HIDWORD(v88);
    v54 = v88;
    v57 = HIDWORD(v89);
    v56 = v89;
    if ( !allReleaseButton )
      goto LABEL_81;
  }
  UIWidget__set_color(v53, *(UnityEngine_Color_o *)&v54, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.haveQpBg;
  if ( !allReleaseButton )
    goto LABEL_81;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v58 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v59 = UnityEngine_Color__get_white(0LL);
    if ( !v58 )
      goto LABEL_81;
  }
  else
  {
    v60 = HIDWORD(v88);
    v59 = v88;
    v62 = HIDWORD(v89);
    v61 = v89;
    if ( !allReleaseButton )
      goto LABEL_81;
  }
  UIWidget__set_color(v58, *(UnityEngine_Color_o *)&v59, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.haveQpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_81;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v63 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v64 = UnityEngine_Color__get_white(0LL);
    if ( !v63 )
      goto LABEL_81;
  }
  else
  {
    v65 = HIDWORD(v88);
    v64 = v88;
    v67 = HIDWORD(v89);
    v66 = v89;
    if ( !allReleaseButton )
      goto LABEL_81;
  }
  UIWidget__set_color(v63, *(UnityEngine_Color_o *)&v64, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.haveQpLabel;
  if ( !allReleaseButton )
    goto LABEL_81;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v68 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v69 = UnityEngine_Color__get_white(0LL);
    if ( !v68 )
      goto LABEL_81;
  }
  else
  {
    v70 = HIDWORD(v88);
    v69 = v88;
    v72 = HIDWORD(v89);
    v71 = v89;
    if ( !allReleaseButton )
      goto LABEL_81;
  }
  UIWidget__set_color(v68, *(UnityEngine_Color_o *)&v69, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.nextExpBg;
  if ( !allReleaseButton )
    goto LABEL_81;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v73 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v74 = UnityEngine_Color__get_white(0LL);
    if ( !v73 )
      goto LABEL_81;
  }
  else
  {
    v75 = HIDWORD(v88);
    v74 = v88;
    v77 = HIDWORD(v89);
    v76 = v89;
    if ( !allReleaseButton )
      goto LABEL_81;
  }
  UIWidget__set_color(v73, *(UnityEngine_Color_o *)&v74, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.nextExpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_81;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v78 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v79 = UnityEngine_Color__get_white(0LL);
    if ( !v78 )
      goto LABEL_81;
  }
  else
  {
    v80 = HIDWORD(v88);
    v79 = v88;
    v82 = HIDWORD(v89);
    v81 = v89;
    if ( !allReleaseButton )
      goto LABEL_81;
  }
  UIWidget__set_color(v78, *(UnityEngine_Color_o *)&v79, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.nextExpLabel;
  if ( !allReleaseButton )
    goto LABEL_81;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v83 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v84 = UnityEngine_Color__get_white(0LL);
    if ( !v83 )
      goto LABEL_81;
  }
  else
  {
    v85 = HIDWORD(v88);
    v84 = v88;
    v87 = HIDWORD(v89);
    v86 = v89;
    if ( !allReleaseButton )
      goto LABEL_81;
  }
  UIWidget__set_color(v83, *(UnityEngine_Color_o *)&v84, 0LL);
}


void __fastcall SvtEqCombineListViewManager__SetDragEnd(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  int32_t dragStartIndex; // w20
  int32_t dragEndIndex; // w21

  if ( (byte_42EE50E & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE50E = 1;
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
        SvtEqCombineListViewManager__DecideDragSelect(this, dragStartIndex++, v6);
      while ( dragStartIndex <= this->fields.dragEndIndex );
    }
    else
    {
      do
        SvtEqCombineListViewManager__DecideDragSelect(this, dragEndIndex++, v6);
      while ( dragEndIndex <= this->fields.dragStartIndex );
    }
  }
  SvtEqCombineListViewManager__RefrashListDisp(this, v5);
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x22
  ListViewItem_o *v17; // x19
  SvtEqCombineListViewItem_c *v18; // x1
  __int64 v19; // x9
  int32_t sortIndex; // w8
  bool v21; // w21
  _BOOL4 v22; // w21
  bool IsSelect; // w0
  const MethodInfo *v24; // x4
  int v25; // w8
  UnityEngine_Object_o *viewObject; // x20
  __int64 v27; // x9
  bool result; // w0
  SvtEqCombineListViewObject_o *v29; // x0
  const MethodInfo *v30; // x1

  v6 = this;
  if ( (byte_42EE50C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, index, isDragSelect, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&SvtEqCombineListViewItem_TypeInfo, v10, v11, v12);
    this = (SvtEqCombineListViewManager_o *)sub_B5D5C4(&SvtEqCombineListViewObject_TypeInfo, v13, v14, v15);
    byte_42EE50C = 1;
  }
  itemSortList = v6->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_34;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v17 = itemSortList->fields._items->m_Items[index];
  if ( !v17 )
    goto LABEL_34;
  v18 = SvtEqCombineListViewItem_TypeInfo;
  v19 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v17->klass->_2.bitflags2 + 1) < (unsigned int)v19
    || (SvtEqCombineListViewItem_c *)v17->klass->_2.typeHierarchy[v19 - 1] != SvtEqCombineListViewItem_TypeInfo )
  {
    this = (SvtEqCombineListViewManager_o *)v17;
    goto LABEL_36;
  }
  sortIndex = v17[2].fields.sortIndex;
  if ( !isDragSelect )
  {
    if ( (sortIndex & 0x80000000) != 0 )
      goto LABEL_24;
    if ( !ListViewItem__get_IsSelect(v17, 0LL) && v17[2].fields.sortIndex >= 1 )
      --v6->fields.dragSelectSum;
    v21 = 0;
    v25 = -1;
    goto LABEL_21;
  }
  if ( (sortIndex & 0x80000000) == 0 )
  {
LABEL_24:
    v21 = 0;
    goto LABEL_25;
  }
  v17[2].fields.sortIndex = 0;
  v21 = 0;
  if ( SvtEqCombineListViewItem__get_IsCanNotSelect((SvtEqCombineListViewItem_o *)v17, (const MethodInfo *)v18) )
    goto LABEL_25;
  v22 = v6->fields.isDragSelect;
  IsSelect = ListViewItem__get_IsSelect(v17, 0LL);
  if ( !v22 )
  {
    if ( !IsSelect )
      goto LABEL_24;
    v21 = 0;
    v25 = 1;
LABEL_21:
    v17[2].fields.sortIndex = v25;
    goto LABEL_25;
  }
  if ( IsSelect )
    goto LABEL_24;
  v21 = 1;
  if ( SvtEqCombineListViewManager__IsSelectEnable(
         v6,
         (SvtEqCombineListViewItem_o *)v17,
         v6->fields.dragSelectSum,
         1,
         v24) )
  {
    ++v6->fields.dragSelectSum;
    v17[2].fields.sortIndex = 1;
    goto LABEL_24;
  }
LABEL_25:
  viewObject = (UnityEngine_Object_o *)v17->fields.viewObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
    return v21;
  this = (SvtEqCombineListViewManager_o *)v17->fields.viewObject;
  if ( !this )
LABEL_34:
    sub_B5D69C(this, *(_QWORD *)&index);
  v27 = *(&SvtEqCombineListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v27
    && (SvtEqCombineListViewObject_c *)this->klass->_2.typeHierarchy[v27 - 1] == SvtEqCombineListViewObject_TypeInfo )
  {
    SvtEqCombineListViewObject__SetupDisp(
      (SvtEqCombineListViewObject_o *)this,
      (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo);
    return v21;
  }
LABEL_36:
  sub_B5D990(this);
  SvtEqCombineListViewObject__SetupDisp(v29, v30);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int32_t dragStartIndex; // w8
  int32_t dragEndIndex; // w9
  int v18; // w25
  int v19; // w26
  int32_t v20; // w23
  int32_t v21; // w24
  int32_t v22; // w22
  int v23; // w27
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x20
  SvtEqCombineListViewManager_o *v25; // x20
  __int64 v26; // x9
  UnityEngine_Object_o *clipRange; // x21
  __int64 v28; // x9
  SvtEqCombineListViewManager_o *v29; // x0
  int32_t v30; // w1
  bool v31; // w2
  const MethodInfo *v32; // x3

  v5 = startIndex;
  v6 = this;
  if ( (byte_42EE50B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, startIndex, endIndex, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&SvtEqCombineListViewItem_TypeInfo, v10, v11, v12);
    this = (SvtEqCombineListViewManager_o *)sub_B5D5C4(&SvtEqCombineListViewObject_TypeInfo, v13, v14, v15);
    byte_42EE50B = 1;
  }
  dragStartIndex = v6->fields.dragStartIndex;
  if ( (dragStartIndex & 0x80000000) != 0 )
  {
    v18 = -1;
    v19 = -1;
  }
  else
  {
    dragEndIndex = v6->fields.dragEndIndex;
    if ( dragStartIndex <= dragEndIndex )
      v18 = v6->fields.dragEndIndex;
    else
      v18 = v6->fields.dragStartIndex;
    if ( dragStartIndex <= dragEndIndex )
      v19 = v6->fields.dragStartIndex;
    else
      v19 = v6->fields.dragEndIndex;
  }
  v6->fields.dragStartIndex = v5;
  v6->fields.dragEndIndex = endIndex;
  if ( (v5 & 0x80000000) != 0 )
  {
    v20 = -1;
    v21 = -1;
    if ( (v19 & 0x80000000) != 0 )
      goto LABEL_28;
  }
  else
  {
    if ( v5 <= endIndex )
      v20 = endIndex;
    else
      v20 = v5;
    if ( v5 <= endIndex )
      v21 = v5;
    else
      v21 = endIndex;
    if ( (v19 & 0x80000000) != 0 )
      goto LABEL_28;
  }
  if ( v19 <= v18 )
  {
    v22 = v19;
    do
    {
      if ( v22 > v20 || (v21 & 0x80000000) != 0 || v22 < v21 )
        this = (SvtEqCombineListViewManager_o *)SvtEqCombineListViewManager__SetDragSelect(v6, v22, 0, method);
      ++v22;
    }
    while ( v22 <= v18 );
  }
LABEL_28:
  if ( (v5 & 0x80000000) == 0 )
  {
    if ( v5 <= endIndex )
    {
      do
      {
        if ( v5 > v18 || (v19 & 0x80000000) != 0 || v5 < v19 )
          this = (SvtEqCombineListViewManager_o *)SvtEqCombineListViewManager__SetDragSelect(v6, v5, 1, method);
        ++v5;
      }
      while ( v5 <= endIndex );
    }
    else
    {
      do
      {
        if ( v5 > v18 || (v19 & 0x80000000) != 0 || v5 < v19 )
          this = (SvtEqCombineListViewManager_o *)SvtEqCombineListViewManager__SetDragSelect(v6, v5, 1, method);
        --v5;
      }
      while ( v5 >= endIndex );
    }
    if ( v6->fields.isDragSelect && (v21 & 0x80000000) == 0 && v21 <= v20 )
    {
      v23 = v6->fields.selectSum + 1;
      while ( 1 )
      {
        itemSortList = v6->fields.itemSortList;
        if ( !itemSortList )
          goto LABEL_62;
        if ( itemSortList->fields._size <= (unsigned int)v21 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v25 = (SvtEqCombineListViewManager_o *)itemSortList->fields._items->m_Items[v21];
        if ( !v25 )
LABEL_62:
          sub_B5D69C(this, *(_QWORD *)&startIndex);
        *(_QWORD *)&startIndex = SvtEqCombineListViewItem_TypeInfo;
        v26 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v25->klass->_2.bitflags2 + 1) < (unsigned int)v26
          || (SvtEqCombineListViewItem_c *)v25->klass->_2.typeHierarchy[v26 - 1] != SvtEqCombineListViewItem_TypeInfo )
        {
          break;
        }
        if ( SLODWORD(v25->fields.rightItem) >= 1 )
        {
          LODWORD(v25->fields.rightItem) = v23;
          clipRange = (UnityEngine_Object_o *)v25->fields.clipRange;
          ++v23;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          this = (SvtEqCombineListViewManager_o *)UnityEngine_Object__op_Inequality(clipRange, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (SvtEqCombineListViewManager_o *)v25->fields.clipRange;
            if ( !this )
              goto LABEL_62;
            v28 = *(&SvtEqCombineListViewObject_TypeInfo->_2.bitflags2 + 1);
            if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v28
              || (SvtEqCombineListViewObject_c *)this->klass->_2.typeHierarchy[v28 - 1] != SvtEqCombineListViewObject_TypeInfo )
            {
              goto LABEL_64;
            }
            SvtEqCombineListViewObject__SetupDisp(
              (SvtEqCombineListViewObject_o *)this,
              (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo);
          }
        }
        if ( ++v21 > v20 )
          return;
      }
      this = v25;
LABEL_64:
      sub_B5D990(this);
      SvtEqCombineListViewManager__SetDragSelect(v29, v30, v31, v32);
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x25
  int size; // w21
  int v18; // w22
  __int64 v19; // x9
  UnityEngine_Object_o *scrollView; // x20

  v5 = startIndex;
  v6 = this;
  if ( (byte_42EE50D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, startIndex, isDragSelect, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7, v8, v9);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    this = (SvtEqCombineListViewManager_o *)sub_B5D5C4(&SvtEqCombineListViewItem_TypeInfo, v13, v14, v15);
    byte_42EE50D = 1;
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
    v18 = 0;
    while ( 1 )
    {
      if ( itemSortList->fields._size <= (unsigned int)v18 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      this = (SvtEqCombineListViewManager_o *)itemSortList->fields._items->m_Items[v18];
      if ( !this )
        goto LABEL_22;
      *(_QWORD *)&startIndex = SvtEqCombineListViewItem_TypeInfo;
      v19 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v19
        || (SvtEqCombineListViewItem_c *)this->klass->_2.typeHierarchy[v19 - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        break;
      }
      ++v18;
      LODWORD(this->fields.rightItem) = -1;
      if ( v18 >= size )
        goto LABEL_14;
      itemSortList = v6->fields.itemSortList;
      if ( !itemSortList )
        goto LABEL_22;
    }
    sub_B5D990(this);
LABEL_22:
    sub_B5D69C(this, *(_QWORD *)&startIndex);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v10; // x8

  if ( (byte_42EE4FC & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17202/*"btn_filter_on"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17201/*"btn_filter"*/, v5, v6, v7);
    byte_42EE4FC = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B5D69C(sort, method);
  }
  v10 = (System_String_o **)&StringLiteral_17201/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v10 = (System_String_o **)&StringLiteral_17202/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v10, 0LL);
}


void __fastcall SvtEqCombineListViewManager__SetMaterialSvtInfo(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SvtEqCombineListViewManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *selectedMtSvtList_k__BackingField; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v28; // x21
  Il2CppObject *current; // x20
  __int64 v30; // x26
  int size; // w8
  SvtEqCombineListViewItem_o *v32; // x21
  __int64 v33; // x9
  int64_t UserSvtId; // x0
  const MethodInfo *v35; // x1
  int64_t v36; // x22
  int64_t v37; // x0
  __int64 v38; // x1
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+20h] [xbp-60h] BYREF

  v4 = this;
  if ( (byte_42EE4DB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v20, v21, v22);
    this = (SvtEqCombineListViewManager_o *)sub_B5D5C4(&SvtEqCombineListViewItem_TypeInfo, v23, v24, v25);
    byte_42EE4DB = 1;
  }
  memset(&v40, 0, sizeof(v40));
  itemList = v4->fields.itemList;
  if ( !itemList )
    sub_B5D69C(this, method);
  if ( itemList->fields._size >= 1 )
  {
    selectedMtSvtList_k__BackingField = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v4->fields._selectedMtSvtList_k__BackingField;
    if ( selectedMtSvtList_k__BackingField )
    {
      if ( selectedMtSvtList_k__BackingField->fields._size >= 1 )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v39,
          selectedMtSvtList_k__BackingField,
          (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__);
        v40 = v39;
LABEL_21:
        while ( 1 )
        {
          v37 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v40,
                  (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__);
          if ( (v37 & 1) == 0 )
            break;
          v28 = v4->fields.itemList;
          if ( !v28 )
            goto LABEL_25;
          current = v40.fields.current;
          v30 = 0LL;
          while ( 1 )
          {
            size = v28->fields._size;
            if ( (int)v30 >= size )
              goto LABEL_21;
            if ( size <= (unsigned int)v30 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            v32 = (SvtEqCombineListViewItem_o *)v28->fields._items->m_Items[v30];
            if ( !v32 )
              sub_B5D69C(v37, v38);
            v33 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v32->klass->_2.bitflags2 + 1) < (unsigned int)v33
              || (SvtEqCombineListViewItem_c *)v32->klass->_2.typeHierarchy[v33 - 1] != SvtEqCombineListViewItem_TypeInfo )
            {
              sub_B5D990(v32);
LABEL_25:
              sub_B5D69C(v37, v38);
            }
            UserSvtId = SvtEqCombineListViewItem__get_UserSvtId(
                          v32,
                          (const MethodInfo *)SvtEqCombineListViewItem_TypeInfo);
            if ( !current )
              sub_B5D69C(UserSvtId, v35);
            v36 = UserSvtId;
            v37 = SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)current, v35);
            if ( v36 == v37 )
              break;
            v28 = v4->fields.itemList;
            ++v30;
            if ( !v28 )
              goto LABEL_25;
          }
          v32->fields.isCanNotLock = 1;
        }
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v40,
          (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  SvtEqCombineListViewManager__SetMode_35014664(this, mode, v10);
}


void __fastcall SvtEqCombineListViewManager__SetMode_35014664(
        SvtEqCombineListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  UnityEngine_Behaviour_o *ObjectSum; // x0
  __int64 v22; // x1
  UnityEngine_Object_o *scrollView; // x21
  const MethodInfo *v24; // x2
  int32_t v25; // w1
  int v26; // w23
  char v27; // w24
  _BOOL8 v28; // x0
  __int64 v29; // x1
  ListViewItem_o *current; // x21
  __int64 v31; // x9
  const MethodInfo *v32; // x1
  int32_t selectNum; // w28
  __int64 v34; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  int32_t klass; // w9
  _BOOL8 v37; // x0
  __int64 v38; // x1
  int v39; // w28
  int v40; // w22
  const MethodInfo *v41; // x1
  _BYTE v42[32]; // [xsp+8h] [xbp-B8h] BYREF
  int v43; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_42EE4E8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, mode, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&SvtEqCombineListViewItem_TypeInfo, v18, v19, v20);
    byte_42EE4E8 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  memset(&v44, 0, sizeof(v44));
  v43 = 0;
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
        (System_Collections_Generic_List_Enumerator_T__o *)v42,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectSum,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v26 = 0;
      v27 = 0;
      v45 = *(System_Collections_Generic_List_Enumerator_T__o *)v42;
      while ( 1 )
      {
        v28 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v45,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v28 )
          break;
        current = (ListViewItem_o *)v45.fields.current;
        if ( !v45.fields.current )
          goto LABEL_45;
        v31 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v45.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v31
          || (SvtEqCombineListViewItem_c *)v45.fields.current->klass->_2.typeHierarchy[v31 - 1] != SvtEqCombineListViewItem_TypeInfo )
        {
          sub_B5D990(v45.fields.current);
LABEL_45:
          sub_B5D69C(v28, v29);
        }
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v45.fields.current, 0LL)
          && SvtEqCombineListViewItem__get_IsCanNotSelect((SvtEqCombineListViewItem_o *)current, v32) )
        {
          selectNum = current->fields.selectNum;
          ListViewItem__set_IsSelect(current, 0, 0LL);
          itemList = this->fields.itemList;
          --this->fields.selectSum;
          if ( !itemList )
            sub_B5D69C(0LL, v34);
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v42,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
            (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v44 = *(System_Collections_Generic_List_Enumerator_T__o *)v42;
          while ( 1 )
          {
            v37 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v44,
                    (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v37 )
              break;
            if ( !v44.fields.current )
              sub_B5D69C(v37, v38);
            klass = (int32_t)v44.fields.current[1].klass;
            if ( klass > selectNum )
              LODWORD(v44.fields.current[1].klass) = klass - 1;
          }
          *(_DWORD *)&v42[4 * v26 + 24] = 252;
          v39 = ++v43;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v44,
            (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          v26 = 0;
          v27 = 1;
          if ( v39 )
          {
            v27 = 1;
            v26 = v39;
            if ( *(_DWORD *)&v42[4 * v39 + 20] == 252 )
            {
              v27 = 1;
              v26 = v39 - 1;
              v43 = v39 - 1;
            }
          }
        }
      }
      *(_DWORD *)&v42[4 * v26 + 24] = 280;
      v40 = ++v43;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v45,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( v40 && *(_DWORD *)&v42[4 * v40 + 20] == 280 )
        v43 = v40 - 1;
      if ( (v27 & 1) != 0 )
        SvtEqCombineListViewManager__RefrashListDisp(this, v41);
      if ( mode == 2 )
        v25 = 4;
      else
        v25 = 2;
      goto LABEL_42;
    }
LABEL_46:
    sub_B5D69C(ObjectSum, v22);
  }
  if ( mode != 3 )
    return;
  v25 = 5;
LABEL_42:
  SvtEqCombineListViewManager__RequestListObject_35015776(this, v25, v24);
}


void __fastcall SvtEqCombineListViewManager__SetMode_35015720(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  SvtEqCombineListViewManager__SetMode_35014664(this, mode, v10);
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
  if ( (byte_42EE4E7 & 1) == 0 )
  {
    this = (SvtEqCombineListViewManager_o *)sub_B5D5C4(
                                              &SvtEqCombineListViewObject_TypeInfo,
                                              (_DWORD)obj,
                                              (_DWORD)item,
                                              method);
    byte_42EE4E7 = 1;
  }
  if ( !obj )
LABEL_11:
    sub_B5D69C(this, obj);
  v6 = *(&SvtEqCombineListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (SvtEqCombineListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    sub_B5D990(obj);
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
    sub_B5D69C(0LL, isEnable);
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
  sub_B5D560(
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  SetCombineData_o *v36; // x22
  struct SetCombineData_o **p_combineData; // x19
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  char *combineData; // x0
  System_Int32_array **baseUsrSvtData; // x1
  struct SetCombineData_o *v53; // x8
  struct SetCombineData_o *v54; // x8
  struct SetCombineData_o *v55; // x8
  struct SetCombineData_o *v56; // x8
  struct SetCombineData_o *v57; // x8
  struct SetCombineData_o *v58; // x8
  System_Collections_Generic_Dictionary_long__bool__o *v59; // x20
  _BOOL8 v60; // x0
  const MethodInfo *v61; // x1
  SvtEqCombineListViewItem_o *current; // x21
  const MethodInfo *v63; // x1
  int64_t UserSvtId; // x0
  int isUseSupportEquip; // w8
  struct SetCombineData_o *v66; // x21
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_Collections_Generic_List_Enumerator_T__o v80; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v81; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42EE4F0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_long__bool__Add__,
      (_DWORD)selectedItems,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_long__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_long__bool__get_Count__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_long__bool__get_Keys__, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_long__bool__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_long___, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__, v24, v25, v26);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__get_Current__,
      v27,
      v28,
      v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__, v30, v31, v32);
    sub_B5D5C4(&SetCombineData_TypeInfo, v33, v34, v35);
    byte_42EE4F0 = 1;
  }
  memset(&v81, 0, sizeof(v81));
  v36 = (SetCombineData_o *)sub_B5D694(SetCombineData_TypeInfo);
  SetCombineData___ctor(v36, 0LL);
  p_combineData = &this->fields.combineData;
  this->fields.combineData = v36;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.combineData,
    (System_Int32_array **)v36,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  combineData = (char *)this->fields.combineData;
  if ( !combineData )
    goto LABEL_29;
  baseUsrSvtData = (System_Int32_array **)this->fields.baseUsrSvtData;
  *((_QWORD *)combineData + 2) = baseUsrSvtData;
  sub_B5D560((BattleServantConfConponent_o *)(combineData + 16), baseUsrSvtData, v45, v46, v47, v48, v49, v50);
  if ( !*p_combineData )
    goto LABEL_29;
  (*p_combineData)->fields.selectSum = this->fields.selectSum;
  v53 = this->fields.combineData;
  if ( !v53 )
    goto LABEL_29;
  v53->fields.spendQp = this->fields.selectQp;
  v54 = this->fields.combineData;
  if ( !v54 )
    goto LABEL_29;
  v54->fields.getExp = this->fields.selectExp;
  v55 = this->fields.combineData;
  if ( !v55 )
    goto LABEL_29;
  v55->fields.getAddExp = this->fields.addTotalExp;
  v56 = this->fields.combineData;
  if ( !v56 )
    goto LABEL_29;
  v56->fields.getHpAdjustVal = this->fields.getHpUpVal;
  v57 = this->fields.combineData;
  if ( !v57 )
    goto LABEL_29;
  v57->fields.getAtkAdjustVal = this->fields.getAtkUpVal;
  v58 = this->fields.combineData;
  if ( !v58 )
    goto LABEL_29;
  v58->fields.isAdjustMax = this->fields.isAllUpMax;
  v59 = (System_Collections_Generic_Dictionary_long__bool__o *)sub_B5D694(System_Collections_Generic_Dictionary_long__bool__TypeInfo);
  System_Collections_Generic_Dictionary_long__bool____ctor(
    v59,
    (const MethodInfo_2F5068C *)Method_System_Collections_Generic_Dictionary_long__bool___ctor__);
  if ( !selectedItems )
    goto LABEL_29;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v80,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)selectedItems,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__);
  v81 = v80;
  while ( 1 )
  {
    v60 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v81,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__);
    if ( !v60 )
      break;
    current = (SvtEqCombineListViewItem_o *)v81.fields.current;
    if ( !v81.fields.current )
      sub_B5D69C(v60, v61);
    if ( SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)v81.fields.current, v61) >= 1 )
    {
      UserSvtId = SvtEqCombineListViewItem__get_UserSvtId(current, v63);
      if ( current->fields.isEquiped )
      {
        isUseSupportEquip = 1;
        if ( !v59 )
          goto LABEL_28;
      }
      else
      {
        isUseSupportEquip = current->fields.isUseSupportEquip;
        if ( !v59 )
LABEL_28:
          sub_B5D69C(UserSvtId, UserSvtId);
      }
      System_Collections_Generic_Dictionary_long__bool___Add(
        v59,
        UserSvtId,
        isUseSupportEquip != 0,
        (const MethodInfo_2F51244 *)Method_System_Collections_Generic_Dictionary_long__bool__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v81,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
  if ( !v59 )
    goto LABEL_29;
  if ( System_Collections_Generic_Dictionary_long__bool___get_Count(
         v59,
         (const MethodInfo_2F50E3C *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__) < 1 )
    return;
  v66 = *p_combineData;
  Keys = System_Collections_Generic_Dictionary_long__bool___get_Keys(
           v59,
           (const MethodInfo_2F50E4C *)Method_System_Collections_Generic_Dictionary_long__bool__get_Keys__);
  combineData = (char *)System_Linq_Enumerable__ToArray_long_(
                          (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                          (const MethodInfo_1CB77D4 *)Method_System_Linq_Enumerable_ToArray_long___);
  if ( !v66
    || (v66->fields.materialUsrSvtIdList = (struct System_Int64_array *)combineData,
        sub_B5D560(
          (BattleServantConfConponent_o *)&v66->fields.materialUsrSvtIdList,
          (System_Int32_array **)combineData,
          v68,
          v69,
          v70,
          v71,
          v72,
          v73),
        (combineData = (char *)*p_combineData) == 0LL) )
  {
LABEL_29:
    sub_B5D69C(combineData, v44);
  }
  *((_QWORD *)combineData + 8) = v59;
  sub_B5D560(
    (BattleServantConfConponent_o *)(combineData + 64),
    (System_Int32_array **)v59,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
}


void __fastcall SvtEqCombineListViewManager__SetSelectedMaterialInfo(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v35; // x20
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o **p_selectedMtSvtList_k__BackingField; // x21
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  SvtEqCombineListViewItem_c *v43; // x1
  int64_t tempMtSvtList; // x0
  const MethodInfo *v45; // x1
  System_Collections_Generic_List_SvtEqCombineListViewItem__o *SelectedMaterialList; // x20
  System_Collections_Generic_List_long__o *v47; // x22
  int size; // w23
  __int64 v49; // x24
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x27
  __int64 v51; // x9
  struct System_Int64_array *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  const MethodInfo *v59; // x2
  SvtEqCombineListViewManager_o *v60; // x0
  System_Collections_Generic_List_SvtEqCombineListViewItem__o *v61; // x1

  if ( (byte_42EE4EF & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__AddRange__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&SvtEqCombineListViewItem_TypeInfo, v32, v33, v34);
    byte_42EE4EF = 1;
  }
  v35 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v35,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
  p_selectedMtSvtList_k__BackingField = &this->fields._selectedMtSvtList_k__BackingField;
  this->fields._selectedMtSvtList_k__BackingField = (struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v35;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._selectedMtSvtList_k__BackingField,
    (System_Int32_array **)v35,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  tempMtSvtList = (int64_t)this->fields.tempMtSvtList;
  if ( !tempMtSvtList )
    goto LABEL_22;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)tempMtSvtList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__);
  SelectedMaterialList = SvtEqCombineListViewManager__GetSelectedMaterialList(this, v45);
  v47 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v47,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
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
        (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__AddRange__);
      tempMtSvtList = (int64_t)*p_selectedMtSvtList_k__BackingField;
      if ( *p_selectedMtSvtList_k__BackingField )
      {
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)tempMtSvtList,
          (System_Collections_Generic_IEnumerable_T__o *)SelectedMaterialList,
          (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__AddRange__);
        if ( v47 )
        {
          v52 = System_Collections_Generic_List_long___ToArray(
                  v47,
                  (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
          this->fields.highRarityList = v52;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.highRarityList,
            (System_Int32_array **)v52,
            v53,
            v54,
            v55,
            v56,
            v57,
            v58);
          v60 = this;
          v61 = SelectedMaterialList;
          goto LABEL_21;
        }
      }
    }
LABEL_22:
    sub_B5D69C(tempMtSvtList, v43);
  }
  v49 = 0LL;
  while ( 1 )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_22;
    if ( itemList->fields._size <= (unsigned int)v49 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    tempMtSvtList = (int64_t)itemList->fields._items->m_Items[v49];
    if ( !tempMtSvtList )
      goto LABEL_22;
    v43 = SvtEqCombineListViewItem_TypeInfo;
    v51 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)tempMtSvtList + 300LL) < (unsigned int)v51
      || *(SvtEqCombineListViewItem_c **)(*(_QWORD *)(*(_QWORD *)tempMtSvtList + 200LL) + 8 * v51 - 8) != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    if ( *(int *)(tempMtSvtList + 156) >= 3 )
    {
      tempMtSvtList = SvtEqCombineListViewItem__get_UserSvtId(
                        (SvtEqCombineListViewItem_o *)tempMtSvtList,
                        (const MethodInfo *)SvtEqCombineListViewItem_TypeInfo);
      if ( !v47 )
        goto LABEL_22;
      System_Collections_Generic_List_long___Add(
        v47,
        tempMtSvtList,
        (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
    }
    if ( (int)++v49 >= size )
      goto LABEL_17;
  }
  sub_B5D990(tempMtSvtList);
LABEL_21:
  SvtEqCombineListViewManager__SetSelectMaterialList(v60, v61, v59);
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
    sub_B5D560(
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int64_t emptyListNoticeLabel; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  struct ListViewSort_o *sort; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeButtonSprite; // x23
  struct UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantMaster_o **p_userServantMaster; // x21
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  UserGameEntity_o *SelfUserGame; // x22
  int32_t qp; // w8
  UILabel_o *haveQpLabel; // x24
  Il2CppObject *v88; // x0
  UILabel_o *nextExpLabel; // x24
  Il2CppObject *v90; // x0
  int v91; // w9
  UserServantEntity_array *ServantEquipList; // x24
  const MethodInfo *v93; // x2
  int v94; // w20
  int32_t FriendShipSvtEquipNum; // w0
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v96; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v97; // x27
  int max_length; // w8
  __int64 v99; // x21
  UserServantEntity_o *v100; // x28
  __int128 v101; // q0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v103; // q0
  int64_t v104; // x25
  UILabel_o *v105; // x26
  Il2CppObject *v106; // x0
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v107; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v108; // x0
  const MethodInfo *v109; // x2
  int size; // w8
  int32_t v111; // w24
  WarBoardAIRoute_RouteData_o *v112; // x8
  __int128 v113; // q0
  struct UserServantEntity_o *v114; // x8
  __int128 v115; // q0
  int64_t v116; // x26
  il2cpp_array_size_t v117; // w20
  int32_t v118; // w0
  int v119; // w20
  UILabel_o *v120; // x25
  Il2CppObject *v121; // x0
  int v122; // w21
  int v123; // w8
  unsigned int v124; // w25
  Il2CppClass **v125; // x20
  Il2CppClass *v126; // x8
  UserServantEntity_o **v127; // x20
  Il2CppClass *v128; // t1
  Il2CppType byval_arg; // q0
  int64_t v130; // x26
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *selectedMtSvtList_k__BackingField; // x27
  int v132; // w8
  int v133; // w28
  int v134; // w21
  int32_t v135; // w23
  _BOOL4 v136; // w28
  UserServantEntity_array *v137; // x22
  UserServantEntity_o *v138; // x20
  UserServantEntity_o *v139; // x21
  int64_t favoriteUserSvtId; // x24
  SvtEqCombineListViewItem_o *v141; // x27
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *v142; // x8
  UILabel_o *servantInfoLabel; // x20
  System_String_o *v144; // x21
  Il2CppObject *v145; // x22
  Il2CppObject *v146; // x0
  const MethodInfo *v147; // x1
  const MethodInfo *v148; // x1
  __int64 v149; // x0
  const MethodInfo *v150; // [xsp+8h] [xbp-168h]
  int v151; // [xsp+14h] [xbp-15Ch]
  int v152; // [xsp+18h] [xbp-158h]
  UserGameEntity_o *v155; // [xsp+30h] [xbp-140h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v157; // [xsp+40h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v158; // [xsp+60h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v159; // [xsp+80h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v160; // [xsp+A0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v161; // [xsp+C0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v162; // [xsp+E0h] [xbp-90h] BYREF
  int32_t svtEquipKeep; // [xsp+108h] [xbp-68h] BYREF
  float barExp; // [xsp+10Ch] [xbp-64h] BYREF
  int32_t lateExp[2]; // [xsp+110h] [xbp-60h] BYREF

  if ( (byte_42EE4DA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, type, (_DWORD)setupInfo, finishSetupInfo);
    sub_B5D5C4(&int_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__Remove__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor___68753944, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__, v42, v43, v44);
    sub_B5D5C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v45, v46, v47);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v51, v52, v53);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v54, v55, v56);
    sub_B5D5C4(&SvtEqCombineListViewItem_TypeInfo, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_23838/*"{0:N0}"*/, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_12617/*"SUM_INFO"*/, v63, v64, v65);
    byte_42EE4DA = 1;
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
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)normalSizeSeed,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72);
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
  emptyListNoticeLabel = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !emptyListNoticeLabel )
    goto LABEL_111;
  MasterData_WarQuestSelectionMaster = (struct UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)emptyListNoticeLabel,
                                                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = &this->fields.userServantMaster;
  this->fields.userServantMaster = MasterData_WarQuestSelectionMaster;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userServantMaster,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !SelfUserGame )
    goto LABEL_111;
  qp = SelfUserGame->fields.qp;
  haveQpLabel = this->fields.haveQpLabel;
  this->fields.userQP = qp;
  LODWORD(v162.fields.currentCryptoKey) = qp;
  v88 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v162);
  emptyListNoticeLabel = (int64_t)System_String__Format((System_String_o *)StringLiteral_23838/*"{0:N0}"*/, v88, 0LL);
  if ( !haveQpLabel )
    goto LABEL_111;
  UILabel__set_text(haveQpLabel, (System_String_o *)emptyListNoticeLabel, 0LL);
  *(_OWORD *)&this->fields.selectSum = 0u;
  this->fields.isAllUpMax = 0;
  *(_QWORD *)&this->fields.getHpUpVal = 0LL;
  lateExp[0] = 0;
  nextExpLabel = this->fields.nextExpLabel;
  svtEquipKeep = 0;
  v90 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtEquipKeep);
  emptyListNoticeLabel = (int64_t)System_String__Format((System_String_o *)StringLiteral_23838/*"{0:N0}"*/, v90, 0LL);
  if ( !nextExpLabel )
    goto LABEL_111;
  UILabel__set_text(nextExpLabel, (System_String_o *)emptyListNoticeLabel, 0LL);
  v155 = SelfUserGame;
  if ( type )
  {
    v91 = 0;
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
    v94 = *(_DWORD *)(emptyListNoticeLabel + 24);
    ServantEquipList = (UserServantEntity_array *)emptyListNoticeLabel;
    FriendShipSvtEquipNum = SvtEqCombineListViewManager__GetFriendShipSvtEquipNum(
                              (SvtEqCombineListViewManager_o *)emptyListNoticeLabel,
                              (UserServantEntity_array *)emptyListNoticeLabel,
                              v93);
    v151 = v94 - FriendShipSvtEquipNum;
    if ( FriendShipSvtEquipNum <= 0 && v151 <= 0 )
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
    v96 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v96,
      (System_Collections_Generic_IEnumerable_T__o *)ServantEquipList,
      (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___68753944);
    v97 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v97,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( !this->fields.baseUsrSvtData )
      goto LABEL_75;
    max_length = ServantEquipList->max_length;
    if ( max_length >= 1 )
    {
      v99 = 0LL;
      while ( (unsigned int)v99 < max_length )
      {
        v100 = ServantEquipList->m_Items[v99];
        if ( !v100 )
          goto LABEL_111;
        v101 = *(_OWORD *)&v100->fields.id.fields.fakeValue;
        *(_OWORD *)&v162.fields.currentCryptoKey = *(_OWORD *)&v100->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v162.fields.fakeValue = v101;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v161 = v162;
        emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v161, 0LL);
        baseUsrSvtData = this->fields.baseUsrSvtData;
        if ( !baseUsrSvtData )
          goto LABEL_111;
        v103 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
        v104 = emptyListNoticeLabel;
        *(_OWORD *)&v160.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v160.fields.fakeValue = v103;
        emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v160, 0LL);
        if ( v104 == emptyListNoticeLabel )
        {
          if ( !v97 )
            goto LABEL_111;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v97,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v100,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
          if ( !v96 )
            goto LABEL_111;
          emptyListNoticeLabel = System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                                   (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v96,
                                   (WarBoardManager_TaskList_o *)v100,
                                   (const MethodInfo_305896C *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
        }
        max_length = ServantEquipList->max_length;
        if ( (int)++v99 >= max_length )
          goto LABEL_44;
      }
LABEL_112:
      v149 = sub_B5D6C8(emptyListNoticeLabel);
      sub_B5D668(v149, 0LL);
    }
LABEL_44:
    if ( !v97 )
      goto LABEL_111;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v97,
      (System_Collections_Generic_IEnumerable_T__o *)v96,
      (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    emptyListNoticeLabel = (int64_t)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v97,
                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    p_userServantMaster = &this->fields.userServantMaster;
    if ( !this->fields.baseUsrSvtData )
      goto LABEL_111;
    ServantEquipList = (UserServantEntity_array *)emptyListNoticeLabel;
    UserServantEntity__getExpInfo(this->fields.baseUsrSvtData, &lateExp[1], lateExp, &barExp, 0LL);
    v105 = this->fields.nextExpLabel;
    LODWORD(v162.fields.currentCryptoKey) = lateExp[0];
    v106 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v162);
    emptyListNoticeLabel = (int64_t)System_String__Format((System_String_o *)StringLiteral_23838/*"{0:N0}"*/, v106, 0LL);
    if ( !v105 )
      goto LABEL_111;
    UILabel__set_text(v105, (System_String_o *)emptyListNoticeLabel, 0LL);
    v91 = v151;
  }
  if ( type != 1 )
  {
    v151 = v91;
    if ( !ServantEquipList )
      goto LABEL_111;
LABEL_75:
    v122 = 0;
    goto LABEL_76;
  }
  emptyListNoticeLabel = (int64_t)*p_userServantMaster;
  if ( !*p_userServantMaster )
    goto LABEL_111;
  ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)emptyListNoticeLabel, 0LL);
  v107 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v107,
    (System_Collections_Generic_IEnumerable_T__o *)ServantEquipList,
    (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___68753944);
  v108 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v108,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( this->fields.baseUsrSvtData )
  {
    if ( !v107 )
      goto LABEL_111;
    size = v107->fields._size;
    if ( size >= 1 )
    {
      v111 = 0;
      while ( 1 )
      {
        if ( size <= (unsigned int)v111 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v112 = v107->fields._items->m_Items[v111];
        if ( !v112 )
          break;
        v113 = *(_OWORD *)&v112->fields.baseSquare;
        *(_OWORD *)&v162.fields.currentCryptoKey = *(_OWORD *)&v112->fields.flagNow;
        *(_OWORD *)&v162.fields.fakeValue = v113;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v159 = v162;
        emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v159, 0LL);
        v114 = this->fields.baseUsrSvtData;
        if ( !v114 )
          break;
        v115 = *(_OWORD *)&v114->fields.id.fields.fakeValue;
        v116 = emptyListNoticeLabel;
        *(_OWORD *)&v158.fields.currentCryptoKey = *(_OWORD *)&v114->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v158.fields.fakeValue = v115;
        emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v158, 0LL);
        if ( v116 == emptyListNoticeLabel )
          System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)v107,
            v111,
            (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
        size = v107->fields._size;
        if ( ++v111 >= size )
          goto LABEL_64;
      }
LABEL_111:
      sub_B5D69C(emptyListNoticeLabel, *(_QWORD *)&type);
    }
LABEL_64:
    emptyListNoticeLabel = (int64_t)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v107,
                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    ServantEquipList = (UserServantEntity_array *)emptyListNoticeLabel;
  }
  if ( !ServantEquipList )
    goto LABEL_111;
  v117 = ServantEquipList->max_length;
  v118 = SvtEqCombineListViewManager__GetFriendShipSvtEquipNum(
           (SvtEqCombineListViewManager_o *)emptyListNoticeLabel,
           ServantEquipList,
           v109);
  v119 = v117 - v118;
  if ( v118 <= 0 && v119 <= 0 )
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
  v151 = v119;
  if ( !emptyListNoticeLabel )
    goto LABEL_111;
  UserServantEntity__getExpInfo((UserServantEntity_o *)emptyListNoticeLabel, &lateExp[1], lateExp, &barExp, 0LL);
  v120 = this->fields.nextExpLabel;
  LODWORD(v162.fields.currentCryptoKey) = lateExp[0];
  v121 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v162);
  emptyListNoticeLabel = (int64_t)System_String__Format((System_String_o *)StringLiteral_23838/*"{0:N0}"*/, v121, 0LL);
  if ( !v120 )
    goto LABEL_111;
  UILabel__set_text(v120, (System_String_o *)emptyListNoticeLabel, 0LL);
  v122 = 1;
LABEL_76:
  v123 = ServantEquipList->max_length;
  if ( v123 >= 1 )
  {
    v124 = 0;
    v152 = v122;
    while ( v124 < v123 )
    {
      v125 = &ServantEquipList->obj.klass + (int)v124;
      v128 = v125[4];
      v127 = (UserServantEntity_o **)(v125 + 4);
      v126 = v128;
      if ( !v128 )
        goto LABEL_111;
      byval_arg = v126->_1.byval_arg;
      *(_OWORD *)&v162.fields.currentCryptoKey = *(_OWORD *)&v126->_1.name;
      *(Il2CppType *)&v162.fields.fakeValue = byval_arg;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v157 = v162;
      emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v157, 0LL);
      v130 = emptyListNoticeLabel;
      if ( v122
        && (selectedMtSvtList_k__BackingField = this->fields._selectedMtSvtList_k__BackingField) != 0LL
        && (v132 = selectedMtSvtList_k__BackingField->fields._size, v132 >= 1) )
      {
        v133 = 0;
        v134 = 0;
        v135 = 0;
        do
        {
          if ( v132 <= (unsigned int)v133 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          emptyListNoticeLabel = (int64_t)selectedMtSvtList_k__BackingField->fields._items->m_Items[v133];
          if ( !emptyListNoticeLabel )
            goto LABEL_111;
          emptyListNoticeLabel = SvtEqCombineListViewItem__get_UserSvtId(
                                   (SvtEqCombineListViewItem_o *)emptyListNoticeLabel,
                                   *(const MethodInfo **)&type);
          selectedMtSvtList_k__BackingField = this->fields._selectedMtSvtList_k__BackingField;
          if ( !selectedMtSvtList_k__BackingField )
            goto LABEL_111;
          v132 = selectedMtSvtList_k__BackingField->fields._size;
          if ( emptyListNoticeLabel == v130 )
            v135 = v133;
          ++v133;
          if ( emptyListNoticeLabel == v130 )
            v134 = 1;
        }
        while ( v133 < v132 );
        v136 = v134;
      }
      else
      {
        v136 = 0;
        v135 = 0;
      }
      if ( v124 >= ServantEquipList->max_length )
        break;
      v137 = ServantEquipList;
      v138 = *v127;
      v139 = this->fields.baseUsrSvtData;
      favoriteUserSvtId = v155->fields.favoriteUserSvtId;
      v141 = (SvtEqCombineListViewItem_o *)sub_B5D694(SvtEqCombineListViewItem_TypeInfo);
      SvtEqCombineListViewItem___ctor(
        v141,
        type,
        v124,
        v138,
        v130 == favoriteUserSvtId,
        v139,
        v136,
        setupInfo,
        finishSetupInfo,
        v150);
      v122 = v152;
      if ( (v152 & v136) == 1 )
      {
        if ( !v141 )
          goto LABEL_111;
        v141->fields.selectNum = v135;
        v142 = this->fields._selectedMtSvtList_k__BackingField;
        ++this->fields.selectSum;
        if ( !v142 )
          goto LABEL_111;
        if ( v135 == v142->fields._size - 1 )
          v141->fields.isLastSelectMaterial = 1;
      }
      emptyListNoticeLabel = (int64_t)this->fields.itemList;
      if ( !emptyListNoticeLabel )
        goto LABEL_111;
      ServantEquipList = v137;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)emptyListNoticeLabel,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v141,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      v123 = v137->max_length;
      if ( (int)++v124 >= v123 )
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
  v144 = LocalizationManager__Get((System_String_o *)StringLiteral_12617/*"SUM_INFO"*/, 0LL);
  LODWORD(v162.fields.currentCryptoKey) = v151;
  v145 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v162);
  svtEquipKeep = v155->fields.svtEquipKeep;
  v146 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtEquipKeep);
  emptyListNoticeLabel = (int64_t)System_String__Format_44573324(v144, v145, v146, 0LL);
  if ( !servantInfoLabel )
    goto LABEL_111;
  UILabel__set_text(servantInfoLabel, (System_String_o *)emptyListNoticeLabel, 0LL);
  SvtEqCombineListViewManager__SetMaterialSvtInfo(this, v147);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  SvtEqCombineListViewManager__SetFilterButtonImage(this, v148);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
}


void __fastcall SvtEqCombineListViewManager__SetSortButtonImage(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v24; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v26; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v28; // x8
  int32_t sortKind; // w9
  System_String_o **v30; // x8
  struct ListViewSort_o *v31; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v33; // x9
  System_String_o **v34; // x10
  System_String_o **v35; // x8
  struct ListViewSort_o *v36; // x8
  System_String_o **v37; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v39; // x20

  if ( (byte_42EE502 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17230/*"btn_sort_up"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_17314/*"btn_txt_up"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17270/*"btn_txt_new"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_17260/*"btn_txt_down"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_17277/*"btn_txt_old"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_17227/*"btn_sort_down"*/, v20, v21, v22);
    byte_42EE502 = 1;
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
    v26 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v26 )
      goto LABEL_46;
    UILabel__set_text(v26, (System_String_o *)sort, 0LL);
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
    v28 = this->fields.sort;
    if ( !v28 )
      goto LABEL_46;
    sortKind = v28->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_46;
      v30 = (System_String_o **)(v28->fields.isAscendingOrder ? &StringLiteral_17277/*"btn_txt_old"*/ : &StringLiteral_17270/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v30, 0LL);
      v31 = this->fields.sort;
      if ( !v31 )
        goto LABEL_46;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_46;
      isAscendingOrder = v31->fields.isAscendingOrder;
      v33 = (System_String_o **)&StringLiteral_17227/*"btn_sort_down"*/;
      v34 = (System_String_o **)&StringLiteral_17230/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_46;
      v35 = (System_String_o **)(v28->fields.isAscendingOrder ? &StringLiteral_17314/*"btn_txt_up"*/ : &StringLiteral_17260/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v35, 0LL);
      v36 = this->fields.sort;
      if ( !v36 )
        goto LABEL_46;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_46;
      isAscendingOrder = v36->fields.isAscendingOrder;
      v33 = (System_String_o **)&StringLiteral_17230/*"btn_sort_up"*/;
      v34 = (System_String_o **)&StringLiteral_17227/*"btn_sort_down"*/;
    }
    if ( isAscendingOrder )
      v37 = v33;
    else
      v37 = v34;
    UISprite__set_spriteName((UISprite_o *)sort, *v37, 0LL);
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
      v39 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusKind2Text_34067136(
                                 sort,
                                 this->fields.bonusEventIdList,
                                 0LL,
                                 0LL,
                                 0LL,
                                 this->fields.bonusFinishEventIdList,
                                 0LL);
      if ( v39 )
      {
        UILabel__set_text(v39, (System_String_o *)sort, 0LL);
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
    sub_B5D69C(sort, v24);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__SetStatusKind(
        SvtEqCombineListViewManager_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t v4; // w20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  UnityEngine_Behaviour_o *statusTabButton; // x0
  __int64 *v37; // x8
  UICommonButton_o *v38; // x21
  bool enabled; // w0
  __int64 *v40; // x8
  UICommonButton_o *lockTabButton; // x21
  bool v42; // w0
  __int64 *v43; // x8
  UICommonButton_o *choiceTabButton; // x20
  bool v45; // w0
  int32_t currentType; // w8
  UILabel_o *combineInfoMsgLb; // x20
  __int64 *v48; // x8
  int32_t v49; // w8
  UILabel_o *v50; // x20
  __int64 *v51; // x8

  v4 = modeKind;
  if ( (byte_42EE4D7 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, modeKind, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_17333/*"button_allchoice_reg"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_17336/*"button_alllock_unreg"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_11877/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_11878/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_17349/*"button_select_reg"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_7126/*"HEADER_MSG_SVTEQ_MATERIAL"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_7125/*"HEADER_MSG_SVTEQ_BASE"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_17350/*"button_select_unreg"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_17335/*"button_alllock_reg"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_17334/*"button_allchoice_unreg"*/, v33, v34, v35);
    byte_42EE4D7 = 1;
  }
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  this->fields.modeKind = v4;
  if ( !statusTabButton )
    goto LABEL_56;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
    statusTabButton,
    1LL,
    statusTabButton->klass[1]._1.byval_arg.data);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_56;
  UnityEngine_Behaviour__set_enabled(statusTabButton, v4 != 0, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabSprite;
  if ( !statusTabButton )
    goto LABEL_56;
  v37 = &StringLiteral_17349/*"button_select_reg"*/;
  if ( v4 )
    v37 = &StringLiteral_17350/*"button_select_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v37, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_56;
  statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                 statusTabButton,
                                                 0LL,
                                                 0LL,
                                                 statusTabButton->klass[1]._1.interfaceOffsets);
  v38 = this->fields.statusTabButton;
  if ( !v38 )
    goto LABEL_56;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0LL);
  UICommonButton__SetColliderEnable(v38, enabled, 0, 0LL);
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
  UnityEngine_Behaviour__set_enabled(statusTabButton, v4 != 1, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
  if ( !statusTabButton )
    goto LABEL_56;
  v40 = &StringLiteral_17335/*"button_alllock_reg"*/;
  if ( v4 != 1 )
    v40 = &StringLiteral_17336/*"button_alllock_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v40, 0LL);
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
  v42 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
  UICommonButton__SetColliderEnable(lockTabButton, v42, 0, 0LL);
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
  UnityEngine_Behaviour__set_enabled(statusTabButton, v4 != 2, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
  if ( !statusTabButton )
    goto LABEL_56;
  v43 = &StringLiteral_17333/*"button_allchoice_reg"*/;
  if ( v4 != 2 )
    v43 = &StringLiteral_17334/*"button_allchoice_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v43, 0LL);
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
  v45 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
  UICommonButton__SetColliderEnable(choiceTabButton, v45, 0, 0LL);
  currentType = this->fields.currentType;
  if ( currentType == 1 )
  {
    combineInfoMsgLb = this->fields.combineInfoMsgLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v48 = &StringLiteral_7126/*"HEADER_MSG_SVTEQ_MATERIAL"*/;
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
    v48 = &StringLiteral_7125/*"HEADER_MSG_SVTEQ_BASE"*/;
  }
  statusTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v48, 0LL);
  if ( !combineInfoMsgLb )
    goto LABEL_56;
  UILabel__set_text(combineInfoMsgLb, (System_String_o *)statusTabButton, 0LL);
LABEL_36:
  v49 = this->fields.modeKind;
  if ( v49 == 1 )
  {
    v50 = this->fields.combineInfoMsgLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v51 = &StringLiteral_11878/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
  }
  else
  {
    if ( v49 != 2 )
      goto LABEL_48;
    v50 = this->fields.combineInfoMsgLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v51 = &StringLiteral_11877/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
  }
  statusTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v51, 0LL);
  if ( !v50 )
    goto LABEL_56;
  UILabel__set_text(v50, (System_String_o *)statusTabButton, 0LL);
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
    sub_B5D69C(statusTabButton, *(_QWORD *)&modeKind);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int32_t modeKind; // w8
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  NetworkManager_ResultCallbackFunc_o *v22; // x20
  CardStatusSyncRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v24; // x1
  System_Int64_array *v25; // x2
  System_Int64_array *v26; // x1
  bool v27; // w4
  bool v28; // w5
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  NetworkManager_ResultCallbackFunc_o *v35; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_42EE50A & 1) == 0 )
  {
    sub_B5D5C4(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SvtEqCombineListViewManager_EndStatusSync__, v12, v13, v14);
    byte_42EE50A = 1;
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
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.requestCallback,
        (System_Int32_array **)callback,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
      v35 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v35,
        (Il2CppObject *)this,
        Method_SvtEqCombineListViewManager_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                       v35,
                                                                       (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        v25 = unchoiceList;
        v26 = choiceList;
        v28 = 1;
        v27 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_B5D69C(Request_WarBoardWallAttackRequest, v24);
    }
  }
  else if ( modeKind == 1 && SvtEqCombineListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.requestCallback,
      (System_Int32_array **)callback,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    v22 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v22,
      (Il2CppObject *)this,
      Method_SvtEqCombineListViewManager_EndStatusSync__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                     v22,
                                                                     (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( Request_WarBoardWallAttackRequest )
    {
      v25 = unlockList;
      v26 = lockList;
      v27 = 1;
      v28 = 0;
LABEL_17:
      CardStatusSyncRequest__beginRequest(Request_WarBoardWallAttackRequest, v26, v25, 0, v27, v28, 0LL);
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
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct SvtEqCombineListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SvtEqCombineListViewManager_o *v11; // x0
  SvtEqCombineListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EE4CD & 1) == 0 )
  {
    sub_B5D5C4(&SvtEqCombineListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EE4CD = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SvtEqCombineListViewManager_CallbackFunc_c *)v8->klass != SvtEqCombineListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  SvtEqCombineListViewManager__remove_callbackFunc(v11, v12, v13);
}


void __fastcall SvtEqCombineListViewManager__add_callbackFunc2(
        SvtEqCombineListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SvtEqCombineListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EE4CF & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EE4CF = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc2, v8, callbackFunc2);
    v10 = callbackFunc2 == (System_Delegate_o *)v9;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  SvtEqCombineListViewManager__remove_callbackFunc2(v11, v12, v13);
}


System_Collections_Generic_List_SvtEqCombineListViewObject__o *__fastcall SvtEqCombineListViewManager__get_ClippingObjectList(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v33; // x0
  __int64 v34; // x1
  SvtEqCombineListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v36; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x21
  ListViewItem_o *Item; // x0
  __int64 v39; // x1
  _BOOL8 v40; // x0
  __int64 v41; // x1
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42EE4D5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_SvtEqCombineListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42EE4D5 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SvtEqCombineListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v43,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v44 = v43;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v44,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v44.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (SvtEqCombineListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  (UnityEngine_GameObject_o *)current,
                                                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___);
      v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B5D69C(0LL, v36);
      Item = (ListViewItem_o *)SvtEqCombineListViewObject__GetItem(Component_srcLineSprite, v36);
      if ( !Item )
        sub_B5D69C(0LL, v39);
      if ( Item->fields.isTermination )
      {
        v40 = ListViewManager__ClippingItem_23920288((ListViewManager_o *)this, Item, 0LL);
        if ( v40 )
        {
          if ( !v29 )
            sub_B5D69C(v40, v41);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v29 )
          sub_B5D69C(Item, v39);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v29,
          v37,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v44,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SvtEqCombineListViewObject__o *)v29;
}


System_Collections_Generic_List_SvtEqCombineListViewObject__o *__fastcall SvtEqCombineListViewManager__get_ObjectList(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v33; // x0
  __int64 v34; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42EE4D4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_SvtEqCombineListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42EE4D4 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SvtEqCombineListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v37,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v38 = v37;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v38,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v38.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___);
      if ( !v29 )
        sub_B5D69C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v29,
        Component_srcLineSprite,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SvtEqCombineListViewObject__o *)v29;
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
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct SvtEqCombineListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SvtEqCombineListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EE4CE & 1) == 0 )
  {
    sub_B5D5C4(&SvtEqCombineListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EE4CE = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SvtEqCombineListViewManager_CallbackFunc_c *)v8->klass != SvtEqCombineListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  SvtEqCombineListViewManager__add_callbackFunc2(v11, v12, v13);
}


void __fastcall SvtEqCombineListViewManager__remove_callbackFunc2(
        SvtEqCombineListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SvtEqCombineListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42EE4D0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EE4D0 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc2, v8, callbackFunc2);
    v10 = callbackFunc2 == (System_Delegate_o *)v9;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  SvtEqCombineListViewManager__get_isOpenCheckEquipDialog(v11, v12);
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
  sub_B5D560(
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
  sub_B5D560(p_method);
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
  if ( (byte_42E6496 & 1) == 0 )
  {
    sub_B5D5C4(&SvtEqCombineListViewManager_ResultKind_TypeInfo, kind, (_DWORD)list, callback);
    byte_42E6496 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(SvtEqCombineListViewManager_ResultKind_TypeInfo, &v12);
  v11[1] = (__int64)list;
  return (System_IAsyncResult_o *)sub_B5D568(this, v11, callback, object);
}


void __fastcall SvtEqCombineListViewManager_CallbackFunc__EndInvoke(
        SvtEqCombineListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned int v14; // w23
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, _QWORD, System_Int32_array *, _QWORD); // x0
  SvtEqCombineListViewManager_CallbackFunc_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(unsigned int *, System_Int32_array *, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  unsigned int v28; // w24
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  unsigned int v34; // [xsp+Ch] [xbp-54h] BYREF
  SvtEqCombineListViewManager_CallbackFunc_o *v35; // [xsp+18h] [xbp-48h] BYREF

  v35 = this;
  v34 = kind;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v35;
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
      v21 = v8[v9];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(unsigned int *, System_Int32_array *, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&kind, list);
      if ( (sub_B5D5F4(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_36;
      v24((unsigned int *)v34, list, v23);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v22 )
    {
      v24(&v34 - 4, list, v23);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B5D5EC(v23);
      v26 = sub_B5D9F0(v23);
      if ( (v25 & 1) != 0 )
      {
        v28 = v34;
        if ( (v26 & 1) != 0 )
        {
          v29 = *v22;
          v30 = *(_QWORD *)(v23 + 24);
          v31 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_35;
            }
            v19 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v19 = sub_AF54C0(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, System_Int32_array *, _QWORD))sub_B5D674(v18, v23);
        (*v20)(v22, v28, list, v20);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v13 = *v22;
          v14 = v34;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v17 = v13 + 16LL * (int)(*v16 + v10) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AF54C0(v22, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, System_Int32_array *, _QWORD))v17)(
            v22,
            v14,
            list,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, System_Int32_array *, _QWORD))(*v22
                                                                                  + 16LL
                                                                                  * *(unsigned __int16 *)(v23 + 72)
                                                                                  + 312))(
            v22,
            v34,
            list,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, System_Int32_array *, __int64))v24)(v22, v34, list, v23);
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
  sub_B5D560(p_method);
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
  if ( (byte_42E6497 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, isRequest, (_DWORD)callback, object);
    byte_42E6497 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall SvtEqCombineListViewManager_RequestCallbackFunc__EndInvoke(
        SvtEqCombineListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
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
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  SvtEqCombineListViewManager_RequestCallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, isRequest, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isRequest, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, isRequest, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
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
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct SvtEqCombineListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_42E6495 & 1) == 0 )
  {
    sub_B5D5C4(&SvtEqCombineListViewManager___c_TypeInfo, v1, v2, v3);
    byte_42E6495 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(SvtEqCombineListViewManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = SvtEqCombineListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SvtEqCombineListViewManager___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
  return a->fields.selectNum - b->fields.selectNum;
}