void __fastcall SvtEqCombineListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  struct SvtEqCombineListViewManager_StaticFields *static_fields; // x0
  int64_t v10; // x1

  if ( (byte_4BCB894 & 1) == 0 )
  {
    sub_1C1ABD4(&SvtEqCombineListViewManager_TypeInfo, v1);
    sub_1C1ABD4(&StringLiteral_13340/*"SvtEqCombine"*/, v8);
    byte_4BCB894 = 1;
  }
  static_fields = SvtEqCombineListViewManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->COLOR_VAL = 0x13EC00000LL;
  v10 = StringLiteral_13340/*"SvtEqCombine"*/;
  static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_13340/*"SvtEqCombine"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->SORT_SAVE_KEY, v10, v2, v3, v4, v5, v6, v7);
  SvtEqCombineListViewManager_TypeInfo->static_fields->isInitSystem = 0;
}


void __fastcall SvtEqCombineListViewManager___ctor(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BCB893 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__, method);
    sub_1C1ABD4(&System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo, v3);
    byte_4BCB893 = 1;
  }
  this->fields.selectMax = 20;
  v4 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
  this->fields.tempMtSvtList = (struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v4;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.tempMtSvtList, (int64_t)v4, v5, v6, v7, v8, v9, v10);
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
  System_Collections_Generic_List_object__o *itemSortList; // x0
  __int64 methodPtr_low; // x9
  SvtEqCombineListViewManager_o *v8; // x0
  int32_t *v9; // x1
  System_Collections_Generic_List_ListViewItem__o *v10; // x2
  int32_t v11; // w3
  const MethodInfo *v12; // x4

  if ( (byte_4BCB891 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1C1ABD4(&SvtEqCombineListViewItem_TypeInfo, v5);
    byte_4BCB891 = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList
    || (itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      itemSortList,
                                                                      index,
                                                                      (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__)) == 0LL )
  {
    sub_1C1AE30(itemSortList, *(_QWORD *)&index);
  }
  methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (SvtEqCombineListViewItem_c *)itemSortList->klass->_2.typeHierarchy[methodPtr_low - 1] == SvtEqCombineListViewItem_TypeInfo )
  {
    LODWORD(itemSortList[6].monitor) = -1;
  }
  else
  {
    sub_1C1B0F0(itemSortList);
    SvtEqCombineListViewManager__GetFocusItemIndex(v8, v9, v10, v11, v12);
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
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v9; // w21
  System_Collections_Generic_List_object__o *v10; // x22
  __int64 methodPtr_low; // x9
  SvtEqCombineListViewManager_o *v13; // x0
  int32_t *v14; // x1
  int32_t *v15; // x2
  int32_t v16; // w3
  const MethodInfo *v17; // x4

  CombineQpSvtEq = nowCombineQp;
  if ( (byte_4BCB85D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&nowCombineQp);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1C1ABD4(&SvtEqCombineListViewItem_TypeInfo, v6);
    byte_4BCB85D = 1;
  }
  if ( !this->fields.selectSum )
    return CombineQpSvtEq;
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_18:
    sub_1C1AE30(itemList, *(_QWORD *)&nowCombineQp);
  size = itemList->fields._size;
  if ( size < 1 )
    return CombineQpSvtEq;
  v9 = 0;
  while ( 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v9,
                                                              (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_18;
    v10 = itemList;
    methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (SvtEqCombineListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0LL) && BYTE1(v10[4].klass) )
    {
      itemList = (System_Collections_Generic_List_object__o *)v10[3].klass;
      if ( !itemList )
        goto LABEL_18;
      if ( CombineQpSvtEq < UserServantEntity__getCombineQpSvtEq((UserServantEntity_o *)itemList, 0LL) )
      {
        itemList = (System_Collections_Generic_List_object__o *)v10[3].klass;
        if ( !itemList )
          goto LABEL_18;
        CombineQpSvtEq = UserServantEntity__getCombineQpSvtEq((UserServantEntity_o *)itemList, 0LL);
      }
    }
    if ( size == ++v9 )
      return CombineQpSvtEq;
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_18;
  }
  sub_1C1B0F0(itemList);
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
  int v20; // w25
  _BOOL8 v21; // x0
  __int64 v22; // x1
  SvtEqCombineListViewItem_o *current; // x21
  __int64 methodPtr_low; // x9
  __int64 v25; // x1
  UserServantEntity_o *baseUsrSvtData; // x0
  const MethodInfo *v27; // x1
  UserServantEntity_o *v28; // x0
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_object__o *combineEventList; // x0
  _BOOL8 v31; // x0
  __int64 v32; // x1
  float v33; // s8
  float v34; // s0
  unsigned int v35; // w8
  struct UserServantEntity_o *v36; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v37; // x21
  __int64 v38; // x22
  __int64 v39; // x23
  int32_t v40; // w8
  int v41; // w23
  int v42; // w22
  const MethodInfo *v43; // x4
  int32_t LevelMax; // w21
  int32_t v45; // w8
  int32_t v46; // w22
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+40h] [xbp-80h] BYREF
  __int64 checkLv; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_4BCB85F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantMaster___, isMaxLvSelected);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v14);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1C1ABD4(&SvtEqCombineListViewItem_TypeInfo, v17);
    byte_4BCB85F = 1;
  }
  memset(&v49, 0, sizeof(v49));
  checkLv = 0LL;
  memset(&v48, 0, sizeof(v48));
  *isMaxLvSelected = 0;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_53;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v47,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v19 = 0;
  v20 = 0;
  v49 = v47;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v49,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v21 )
      break;
    current = (SvtEqCombineListViewItem_o *)v49.fields._current;
    if ( !v49.fields._current )
      goto LABEL_49;
    methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v49.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (SvtEqCombineListViewItem_c *)v49.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      sub_1C1B0F0(v49.fields._current);
LABEL_49:
      sub_1C1AE30(v21, v22);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v49.fields._current, 0LL) || current->fields.dragSelectNum >= 1 )
    {
      baseUsrSvtData = this->fields.baseUsrSvtData;
      if ( !baseUsrSvtData )
        sub_1C1AE30(0LL, v25);
      if ( !UserServantEntity__isLevelMax(baseUsrSvtData, 0LL) )
        goto LABEL_16;
      v28 = this->fields.baseUsrSvtData;
      if ( !v28 )
        sub_1C1AE30(0LL, v27);
      if ( UserServantEntity__isLevelMax(v28, 0LL) && current->fields.isLimitCntTarget )
      {
LABEL_16:
        v20 += current->fields.materialExp;
        v19 += SvtEqCombineListViewItem__get_GetAddTotalExp(current, v27);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v49,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_53;
  combineEventList = (System_Collections_Generic_List_object__o *)menuListCtr->fields.combineEventList;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v47,
      combineEventList,
      (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v48 = v47;
    while ( 1 )
    {
      v31 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v48,
              (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v31 )
        break;
      if ( !v48.fields._current )
        sub_1C1AE30(v31, v32);
      if ( HIDWORD(v48.fields._current[1].klass) == 17 )
      {
        v33 = *(float *)&v48.fields._current[3].monitor;
        if ( !byte_4BC27F5 )
        {
          sub_1C1ABD4(&System_Math_TypeInfo, v32);
          byte_4BC27F5 = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v34 = v33 * (float)v20;
        v35 = vcvtps_s32_f32(v34);
        if ( ceilf(v34) == INFINITY )
          v20 = 0x80000000;
        else
          v20 = v35;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v48,
      (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  if ( this->fields.baseUsrSvtData && this->fields.itemType == 1 )
  {
    itemList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( itemList )
    {
      itemList = DataManager__GetMasterData_object_(
                   (DataManager_o *)itemList,
                   (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantMaster___);
      v36 = this->fields.baseUsrSvtData;
      if ( v36 )
      {
        v37 = (DataMasterBase_TMaster__TEntity__PKType__o *)itemList;
        v39 = *(_QWORD *)&v36->fields.svtId.fields.currentCryptoKey;
        v38 = *(_QWORD *)&v36->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v51.fields.currentCryptoKey = v39;
        *(_QWORD *)&v51.fields.fakeValue = v38;
        itemList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v51, 0LL);
        if ( v37 )
        {
          itemList = DataMasterBase_object__object__int___GetEntity(
                       v37,
                       (int32_t)itemList,
                       (const MethodInfo_3248678 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( itemList )
          {
            v40 = *((_DWORD *)itemList + 33);
            itemList = this->fields.baseUsrSvtData;
            this->fields.expType = v40;
            if ( itemList )
            {
              v42 = *((_DWORD *)itemList + 65);
              LODWORD(checkLv) = *((_DWORD *)itemList + 64);
              v41 = checkLv;
              LevelMax = UserServantEntity__getLevelMax((UserServantEntity_o *)itemList, 0LL);
              if ( v41 == LevelMax )
              {
                v45 = 0;
              }
              else
              {
                v46 = v20 + v19 + v42;
                while ( !SvtEqCombineListViewManager__CheckIncrementLv(
                           this,
                           (int32_t *)&checkLv,
                           (int32_t *)&checkLv + 1,
                           v46,
                           v43) )
                  ;
                v45 = HIDWORD(checkLv);
              }
              *isMaxLvSelected = v45 >= LevelMax;
              return;
            }
          }
        }
      }
    }
LABEL_53:
    sub_1C1AE30(itemList, isMaxLvSelected);
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

  if ( (byte_4BCB860 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantExpMaster___, checkLv);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4BCB860 = 1;
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
  baseUsrSvtData = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUsrSvtData
    || (baseUsrSvtData = DataManager__GetMasterData_object_(
                           (DataManager_o *)baseUsrSvtData,
                           (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
    || (baseUsrSvtData = ServantExpMaster__GetEntity(
                           (ServantExpMaster_o *)baseUsrSvtData,
                           this->fields.expType,
                           *checkLv,
                           0LL)) == 0LL )
  {
LABEL_16:
    sub_1C1AE30(baseUsrSvtData, checkLv);
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
  System_Collections_Generic_List_object__o *selectedMtSvtList_k__BackingField; // x0
  const MethodInfo *v10; // x1
  bool v11; // w20
  int v12; // w19
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BCB87A & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__, usrSvtId);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__get_Current__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v8);
    byte_4BCB87A = 1;
  }
  memset(&v14, 0, sizeof(v14));
  selectedMtSvtList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._selectedMtSvtList_k__BackingField;
  if ( selectedMtSvtList_k__BackingField )
  {
    if ( selectedMtSvtList_k__BackingField->fields._size < 1 )
    {
      LOBYTE(selectedMtSvtList_k__BackingField) = 0;
    }
    else
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v14,
        selectedMtSvtList_k__BackingField,
        (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__);
      while ( 1 )
      {
        v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v14,
                (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__);
        if ( !v11 )
          break;
        if ( !v14.fields._current )
          sub_1C1AE30(0LL, v10);
        if ( SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)v14.fields._current, v10) == usrSvtId )
        {
          v12 = 5;
          goto LABEL_12;
        }
      }
      v12 = 2;
LABEL_12:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v14,
        (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
      LOBYTE(selectedMtSvtList_k__BackingField) = v11 && v12 == 5;
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
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w22
  int32_t v7; // w20
  System_Collections_Generic_List_object__o *v8; // x21
  __int64 methodPtr_low; // x9
  SvtEqCombineListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4BCB86E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v3);
    sub_1C1ABD4(&SvtEqCombineListViewItem_TypeInfo, v4);
    byte_4BCB86E = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_1C1AE30(itemList, method);
  size = itemList->fields._size;
  if ( size < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v7,
                                                              (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_15;
    v8 = itemList;
    methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (SvtEqCombineListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0LL)
      && (BYTE4(v8[5].klass) || BYTE4(v8[6].klass) || BYTE5(v8[6].klass)) )
    {
      return 1;
    }
    if ( size == ++v7 )
      return 0;
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_15;
  }
  sub_1C1B0F0(itemList);
  return (unsigned __int8)SvtEqCombineListViewManager__GetSelectedMaterialList(v11, v12);
}


void __fastcall SvtEqCombineListViewManager__ClearSelectedSvtList(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *selectedMtSvtList_k__BackingField; // x8
  int32_t size; // w2
  int v5; // w9

  if ( (byte_4BCB872 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__, method);
    byte_4BCB872 = 1;
  }
  selectedMtSvtList_k__BackingField = this->fields._selectedMtSvtList_k__BackingField;
  if ( selectedMtSvtList_k__BackingField )
  {
    size = selectedMtSvtList_k__BackingField->fields._size;
    v5 = selectedMtSvtList_k__BackingField->fields._version + 1;
    selectedMtSvtList_k__BackingField->fields._size = 0;
    selectedMtSvtList_k__BackingField->fields._version = v5;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)selectedMtSvtList_k__BackingField->fields._items, 0, size, 0LL);
  }
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
    sub_1C1AE30(servantEquipCheckDialog, isDecide);
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
  ListViewSort_o *sort; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct ListViewSort_array *sortStatusList; // x8
  struct ListViewSort_o *v24; // x1
  struct ListViewSort_o **p_sort; // x22
  UnityEngine_GameObject_o *gameObject; // x25
  System_Collections_ICollection_o **p_alignedBonusFilterInfos; // x25
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_Int32_array *servantEquipFilterEventCampaignIds; // x2
  System_Int32_array *servantEquipFilterEventIds; // x3
  System_Int32_array *v36; // x4
  ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct ListViewSort_o *v44; // x26
  const MethodInfo *v45; // x2
  const MethodInfo *v46; // x2
  const MethodInfo *v47; // x4
  UILabel_o *spendQpInfoLabel; // x23
  UILabel_o *getExpInfoLabel; // x23
  const MethodInfo *v50; // x2
  const MethodInfo *v51; // x4
  const MethodInfo *v52; // x2

  if ( (byte_4BCB857 & 1) == 0 )
  {
    sub_1C1ABD4(&LocalizationManager_TypeInfo, *(_QWORD *)&type);
    sub_1C1ABD4(&SvtEqCombineListViewManager_TypeInfo, v11);
    sub_1C1ABD4(&StringLiteral_7066/*"GET_EXP_INFO"*/, v12);
    sub_1C1ABD4(&StringLiteral_9395/*"NEED_QP_INFO"*/, v13);
    byte_4BCB857 = 1;
  }
  this->fields.currentType = type;
  v14 = SvtEqCombineListViewManager_TypeInfo;
  if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
  SvtEqCombineListViewManager__CreateSorteData((const MethodInfo *)v14);
  sortStatusList = SvtEqCombineListViewManager_TypeInfo->static_fields->sortStatusList;
  if ( !sortStatusList )
    goto LABEL_37;
  if ( sortStatusList->max_length <= type )
    sub_1C1AE38(sort, v16);
  v24 = sortStatusList->m_Items[type];
  this->fields.sort = v24;
  p_sort = &this->fields.sort;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.sort, (int64_t)v24, v17, v18, v19, v20, v21, v22);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_37;
  sort->fields.listViewKind = 1;
  ListViewSort__Load(sort, 0LL);
  this->fields.dragEndIndex = -1;
  *(_QWORD *)&this->fields.dragSelectSum = 0xFFFFFFFF00000000LL;
  sort = (ListViewSort_o *)this->fields.bgTxtSprite;
  this->fields.isDragSelect = 1;
  if ( !sort )
    goto LABEL_37;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
  sort = (ListViewSort_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)sort & 1, 0LL);
  p_alignedBonusFilterInfos = (System_Collections_ICollection_o **)&this->fields.alignedBonusFilterInfos;
  this->fields.alignedBonusFilterInfos = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.alignedBonusFilterInfos, 0LL, v28, v29, v30, v31, v32, v33);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_37;
  sort->fields.isBonusKind = 0;
  if ( !setupInfo )
  {
    servantEquipFilterEventCampaignIds = 0LL;
    servantEquipFilterEventIds = 0LL;
    if ( finishSetupInfo )
      goto LABEL_13;
LABEL_15:
    v36 = 0LL;
    goto LABEL_16;
  }
  servantEquipFilterEventCampaignIds = setupInfo->fields.servantEquipFilterEventCampaignIds;
  servantEquipFilterEventIds = setupInfo->fields.servantEquipFilterEventIds;
  if ( !finishSetupInfo )
    goto LABEL_15;
LABEL_13:
  v36 = finishSetupInfo->fields.servantEquipFilterEventIds;
LABEL_16:
  AlignedBonusFilter = ListViewSort__GetAlignedBonusFilter(
                         sort,
                         0LL,
                         servantEquipFilterEventCampaignIds,
                         servantEquipFilterEventIds,
                         v36,
                         0LL,
                         0,
                         0LL);
  *p_alignedBonusFilterInfos = (System_Collections_ICollection_o *)AlignedBonusFilter;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.alignedBonusFilterInfos,
    (int64_t)AlignedBonusFilter,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v44 = *p_sort;
  sort = (ListViewSort_o *)BasicHelper__IsNullOrEmpty(*p_alignedBonusFilterInfos, 0LL);
  if ( !v44 )
    goto LABEL_37;
  v44->fields.isBonusKind = ((unsigned __int8)sort & 1) == 0;
  sort = (ListViewSort_o *)this->fields.scaleChangeButton;
  if ( !sort )
    goto LABEL_37;
  sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
  if ( !sort )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0LL);
  if ( !type )
  {
    SvtEqCombineListViewManager__SetDispActive(this, 0, v45);
    SvtEqCombineListViewManager__SetBtnEnable(this, 0, v50);
    SvtEqCombineListViewManager__SetServantList(this, 0, setupInfo, finishSetupInfo, v51);
    sort = (ListViewSort_o *)this->fields.selectInfoLabel;
    if ( sort )
    {
      sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
      if ( sort )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 0, 0LL);
        goto LABEL_32;
      }
    }
    goto LABEL_37;
  }
  if ( type == 1 )
  {
    SvtEqCombineListViewManager__SetDispActive(this, 1, v45);
    SvtEqCombineListViewManager__SetBtnEnable(this, 0, v46);
    this->fields.selectMax = 20;
    SvtEqCombineListViewManager__SetServantList(this, 1, setupInfo, finishSetupInfo, v47);
    sort = (ListViewSort_o *)this->fields.selectInfoLabel;
    if ( sort )
    {
      sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
      if ( sort )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0LL);
        sort = (ListViewSort_o *)this->fields.getExpInfo;
        if ( sort )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0LL);
          spendQpInfoLabel = this->fields.spendQpInfoLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          sort = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9395/*"NEED_QP_INFO"*/, 0LL);
          if ( spendQpInfoLabel )
          {
            UILabel__set_text(spendQpInfoLabel, (System_String_o *)sort, 0LL);
            getExpInfoLabel = this->fields.getExpInfoLabel;
            sort = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7066/*"GET_EXP_INFO"*/, 0LL);
            if ( getExpInfoLabel )
            {
              UILabel__set_text(getExpInfoLabel, (System_String_o *)sort, 0LL);
              goto LABEL_32;
            }
          }
        }
      }
    }
LABEL_37:
    sub_1C1AE30(sort, v16);
  }
LABEL_32:
  sort = (ListViewSort_o *)this->fields.bonusFilterKindButton;
  if ( !sort )
    goto LABEL_37;
  sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
  if ( !*p_sort || !sort )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, (*p_sort)->fields.isBonusKind, 0LL);
  SvtEqCombineListViewManager__SetStatusKind(this, modeKind, v52);
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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  SvtEqCombineListViewManager_c *v12; // x8
  int64_t v13; // x19
  struct SvtEqCombineListViewManager_StaticFields *static_fields; // x0
  unsigned __int64 v15; // x24
  __int64 i; // x22
  SvtEqCombineListViewManager_c *v17; // x0
  struct SvtEqCombineListViewManager_StaticFields *v18; // x8
  unsigned int *sortStatusList; // x26
  System_String_o *SORT_SAVE_KEY; // x19
  System_String_o *v21; // x0
  System_String_o *v22; // x20
  ListViewSort_o *v23; // x19
  __int64 v24; // x0
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x0
  int v33; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BCB852 & 1) == 0 )
  {
    sub_1C1ABD4(&ListViewSort___TypeInfo, v1);
    sub_1C1ABD4(&ListViewSort_TypeInfo, v2);
    sub_1C1ABD4(&SvtEqCombineListViewManager_TypeInfo, v3);
    byte_4BCB852 = 1;
  }
  v4 = SvtEqCombineListViewManager_TypeInfo;
  v33 = 0;
  if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
    v4 = SvtEqCombineListViewManager_TypeInfo;
  }
  if ( !v4->static_fields->isInitSystem )
  {
    v5 = sub_1C1AC7C(ListViewSort___TypeInfo, 2LL);
    v12 = SvtEqCombineListViewManager_TypeInfo;
    v13 = v5;
    if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
      v12 = SvtEqCombineListViewManager_TypeInfo;
    }
    static_fields = v12->static_fields;
    static_fields->sortStatusList = (struct ListViewSort_array *)v13;
    sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->sortStatusList, v13, v6, v7, v8, v9, v10, v11);
    v15 = 0LL;
    for ( i = 8LL; ; i += 2LL )
    {
      v17 = SvtEqCombineListViewManager_TypeInfo;
      if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
        v17 = SvtEqCombineListViewManager_TypeInfo;
      }
      v18 = v17->static_fields;
      if ( i == 12 )
        break;
      sortStatusList = (unsigned int *)v18->sortStatusList;
      SORT_SAVE_KEY = v18->SORT_SAVE_KEY;
      v33 = v15 + 1;
      v21 = System_Int32__ToString((int32_t)&v33, 0LL);
      v22 = System_String__Concat_63040368(SORT_SAVE_KEY, v21, 0LL);
      v23 = (ListViewSort_o *)sub_1C1AE20(ListViewSort_TypeInfo);
      ListViewSort___ctor_41977068(v23, v22, 3, 0, 0LL);
      if ( !sortStatusList )
        sub_1C1AE30(v24, v25);
      if ( v23 )
      {
        v24 = sub_1C1AD10(v23, *(_QWORD *)(*(_QWORD *)sortStatusList + 64LL));
        if ( !v24 )
        {
          v32 = sub_1C1AE54(0LL);
          sub_1C1ACFC(v32, 0LL);
        }
      }
      if ( v15 >= sortStatusList[6] )
        sub_1C1AE38(v24, v25);
      *(_QWORD *)&sortStatusList[i] = v23;
      sub_1C1AB78((PartyOrganizationUtility_o *)&sortStatusList[i], (int64_t)v23, v26, v27, v28, v29, v30, v31);
      ++v15;
    }
    v18->isInitSystem = 1;
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
  System_Collections_Generic_List_object__o *itemSortList; // x0
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 methodPtr_low; // x9
  _BOOL4 isDragSelect; // w21
  bool IsSelect; // w0
  int32_t selectSum; // w8
  int items; // w21
  _BOOL8 v17; // x0
  __int64 v18; // x1
  int klass; // w9
  void *v20; // x0
  int v21; // w1
  __int64 v22; // x20
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BCB890 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&index);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    sub_1C1ABD4(&SvtEqCombineListViewItem_TypeInfo, v9);
    byte_4BCB890 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_22;
  itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemSortList,
                                                                index,
                                                                (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !itemSortList )
    goto LABEL_22;
  v11 = itemSortList;
  methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (SvtEqCombineListViewItem_c *)itemSortList->klass->_2.typeHierarchy[methodPtr_low - 1] == SvtEqCombineListViewItem_TypeInfo )
  {
    if ( SLODWORD(itemSortList[6].monitor) < 1 )
      goto LABEL_20;
    isDragSelect = this->fields.isDragSelect;
    IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)itemSortList, 0LL);
    if ( isDragSelect )
    {
      if ( !IsSelect )
      {
        selectSum = this->fields.selectSum;
        if ( selectSum < this->fields.selectMax )
        {
          LODWORD(v11->fields._items) = selectSum;
          this->fields.selectSum = selectSum + 1;
        }
      }
      goto LABEL_20;
    }
    if ( !IsSelect )
      goto LABEL_20;
    items = (int)v11->fields._items;
    ListViewItem__set_IsSelect((ListViewItem_o *)v11, 0, 0LL);
    BYTE2(v11[4].monitor) = 0;
    itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    --this->fields.selectSum;
    if ( itemSortList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v23,
        itemSortList,
        (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( 1 )
      {
        v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v23,
                (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v17 )
          break;
        if ( !v23.fields._current )
          sub_1C1AE30(v17, v18);
        klass = (int)v23.fields._current[1].klass;
        if ( klass > items )
          LODWORD(v23.fields._current[1].klass) = klass - 1;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v23,
        (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      goto LABEL_20;
    }
LABEL_22:
    sub_1C1AE30(itemSortList, *(_QWORD *)&index);
  }
  sub_1C1B0F0(itemSortList);
  if ( v21 != 1 )
  {
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v23,
      (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1D05664();
  }
  v22 = *(_QWORD *)__cxa_begin_catch(v20);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( v22 )
    sub_1C1AE28(v22);
LABEL_20:
  LODWORD(v11[6].monitor) = -1;
}


void __fastcall SvtEqCombineListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  SvtEqCombineListViewManager_c *v2; // x0
  __int64 v3; // x1
  __int64 v4; // x20
  SvtEqCombineListViewManager_c *v5; // x0
  struct ListViewSort_array *sortStatusList; // x8

  if ( (byte_4BCB853 & 1) == 0 )
  {
    sub_1C1ABD4(&SvtEqCombineListViewManager_TypeInfo, v1);
    byte_4BCB853 = 1;
  }
  v2 = SvtEqCombineListViewManager_TypeInfo;
  if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
  SvtEqCombineListViewManager__CreateSorteData((const MethodInfo *)v2);
  v4 = 0LL;
  do
  {
    v5 = SvtEqCombineListViewManager_TypeInfo;
    if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
      v5 = SvtEqCombineListViewManager_TypeInfo;
    }
    sortStatusList = v5->static_fields->sortStatusList;
    if ( !sortStatusList )
      goto LABEL_13;
    if ( (unsigned int)v4 >= sortStatusList->max_length )
      sub_1C1AE38(v5, v3);
    v5 = (SvtEqCombineListViewManager_c *)sortStatusList->m_Items[v4];
    if ( !v5 )
LABEL_13:
      sub_1C1AE30(v5, v3);
    ListViewSort__DeleteContinueData((ListViewSort_o *)v5, 0LL);
    ++v4;
  }
  while ( (_DWORD)v4 != 2 );
}


void __fastcall SvtEqCombineListViewManager__DestroyList(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C1AE30(0LL, v3);
  ListViewSort__Save(sort, 0LL);
  this->fields.alignedBonusFilterInfos = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.alignedBonusFilterInfos, 0LL, v5, v6, v7, v8, v9, v10);
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
  SvtEqCombineListViewManager__SetMode_46787164(this, 2, v6);
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
  SvtEqCombineListViewManager__SetMode_46787164(this, 2, v6);
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
  SvtEqCombineListViewManager__SetMode_46787164(this, 2, v5);
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
  Il2CppObject *Instance; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4BCB87C & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, isDecide);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C1ABD4(&Method_SvtEqCombineListViewManager_EndCloseSelectFilterKind__, v6);
    byte_4BCB87C = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    SvtEqCombineListViewManager__SetFilterButtonImage(this, v7);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_SvtEqCombineListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_1C1AE30(v10, v11);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__EndSelectSortKind(
        SvtEqCombineListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4BCB881 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4BCB881 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v6);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall SvtEqCombineListViewManager__EndStatusSync(
        SvtEqCombineListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct SvtEqCombineListViewManager_RequestCallbackFunc_o *requestCallback; // x19
  PartyOrganizationUtility_o *p_requestCallback; // x0

  requestCallback = this->fields.requestCallback;
  if ( requestCallback )
  {
    p_requestCallback = (PartyOrganizationUtility_o *)&this->fields.requestCallback;
    p_requestCallback->klass = 0LL;
    sub_1C1AB78(p_requestCallback, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))requestCallback->fields.m_target)(
      requestCallback->fields.original_method_info,
      1LL,
      *(_QWORD *)&requestCallback->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall SvtEqCombineListViewManager__GetAmountSortValue(
        SvtEqCombineListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v9; // w22
  int64_t v10; // x21
  __int64 methodPtr_low; // x9
  SvtEqCombineListViewItem_o *v13; // x0
  ListViewSort_o *v14; // x1
  const MethodInfo *v15; // x2

  v3 = svtId;
  if ( (byte_4BCB884 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1C1ABD4(&SvtEqCombineListViewItem_TypeInfo, v6);
    byte_4BCB884 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_13:
    sub_1C1AE30(itemList, *(_QWORD *)&svtId);
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
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v9,
                                                                (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_13;
      *(_QWORD *)&svtId = SvtEqCombineListViewItem_TypeInfo;
      methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (SvtEqCombineListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        break;
      }
      ++v9;
      if ( LODWORD(itemList[3].fields._syncRoot) == v3 )
        ++v10;
      if ( size == v9 )
        return v10;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        goto LABEL_13;
    }
    sub_1C1B0F0(itemList);
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
  __int64 v7; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v9; // q1
  UserServantCollectionMaster_o *v10; // x20
  struct UserServantEntity_o *v11; // x8
  int64_t v12; // x19
  __int64 v13; // x21
  __int64 v14; // x22
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4BCB862 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4BCB862 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_14;
  v9 = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.fakeValue;
  v10 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v18.fields.fakeValue = v9;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v17 = v18;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v17, 0LL);
  v11 = this->fields.baseUsrSvtData;
  if ( !v11 )
    goto LABEL_14;
  v12 = Instance;
  v14 = *(_QWORD *)&v11->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&v11->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v14;
  *(_QWORD *)&v19.fields.fakeValue = v13;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v19, 0LL);
  if ( !v10 )
LABEL_14:
    sub_1C1AE30(Instance, v7);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v10, v12, Instance, 0LL);
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


bool __fastcall SvtEqCombineListViewManager__GetFocusItemIndex(
        SvtEqCombineListViewManager_o *this,
        int32_t *index,
        System_Collections_Generic_List_ListViewItem__o *list,
        int32_t sum,
        const MethodInfo *method)
{
  __int64 v8; // x1
  int32_t v9; // w22
  __int64 methodPtr_low; // x10

  if ( (byte_4BCB892 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, index);
    this = (SvtEqCombineListViewManager_o *)sub_1C1ABD4(&SvtEqCombineListViewItem_TypeInfo, v8);
    byte_4BCB892 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_15:
      sub_1C1AE30(this, index);
    v9 = 0;
    while ( 1 )
    {
      this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)list,
                                                v9,
                                                (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        goto LABEL_15;
      methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (SvtEqCombineListViewItem_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        goto LABEL_15;
      }
      if ( BYTE1(this->fields.topFocusOffset) || HIBYTE(this->fields.topFocusOffset) )
        break;
      if ( sum == ++v9 )
        return 1;
    }
    *index = v9;
  }
  return 1;
}


int32_t __fastcall SvtEqCombineListViewManager__GetFriendShipSvtEquipNum(
        SvtEqCombineListViewManager_o *this,
        UserServantEntity_array *list,
        const MethodInfo *method)
{
  signed int max_length; // w8
  signed int v5; // w21
  int32_t v6; // w20

  if ( !list )
    goto LABEL_10;
  max_length = list->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    v6 = 0;
    while ( 1 )
    {
      if ( v5 >= (unsigned int)max_length )
        sub_1C1AE38(this, list);
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
LABEL_10:
    sub_1C1AE30(this, list);
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
  SvtEqCombineListViewItem_o *result; // x0
  __int64 methodPtr_low; // x9
  SvtEqCombineListViewManager_o *v8; // x0
  int64_t v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4BCB863 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1C1ABD4(&SvtEqCombineListViewItem_TypeInfo, v5);
    byte_4BCB863 = 1;
  }
  result = (SvtEqCombineListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (SvtEqCombineListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (SvtEqCombineListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        sub_1C1B0F0(result);
        SvtEqCombineListViewManager__ModifyItem(v8, v9, v10);
      }
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
  __int64 v7; // x1
  PartyOrganizationUtility_o *p_baseUsrSvtData; // x19
  PartyOrganizationUtility_c *klass; // x8
  Il2CppType byval_arg; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x20
  Il2CppObject *Entity; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-40h]

  if ( (byte_4BCB861 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1C1ABD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4BCB861 = 1;
  }
  if ( !this->fields.baseUsrSvtData )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  p_baseUsrSvtData = (PartyOrganizationUtility_o *)&this->fields.baseUsrSvtData;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantMaster___);
  klass = p_baseUsrSvtData->klass;
  if ( !p_baseUsrSvtData->klass )
    goto LABEL_12;
  byval_arg = klass->_1.byval_arg;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
  *(Il2CppType *)&v21.fields.fakeValue = byval_arg;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v20 = v21;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v20, 0LL);
  if ( !v11 )
LABEL_12:
    sub_1C1AE30(Instance, v7);
  Entity = DataMasterBase_object__object__long___GetEntity(
             v11,
             (int64_t)Instance,
             (const MethodInfo_324ABD4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_baseUsrSvtData->klass = (PartyOrganizationUtility_c *)Entity;
  sub_1C1AB78(p_baseUsrSvtData, (int64_t)Entity, v13, v14, v15, v16, v17, v18);
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
  System_Collections_Generic_List_object__o *v14; // x20
  __int64 v15; // x1
  void *itemList; // x0
  int v17; // w23
  int32_t v18; // w21
  Il2CppObject *v19; // x22
  __int64 methodPtr_low; // x9
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Comparison_T__o *v31; // x21
  Il2CppObject *v32; // x22
  struct SvtEqCombineListViewManager___c_StaticFields *static_fields; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int v40; // w23
  int32_t v41; // w21
  System_Collections_Generic_List_SvtEqCombineListViewItem__o *result; // x0
  SvtEqCombineListViewManager_o *v43; // x0
  const MethodInfo *v44; // x1

  if ( (byte_4BCB86F & 1) == 0 )
  {
    sub_1C1ABD4(&System_Comparison_SvtEqCombineListViewItem__TypeInfo, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Add__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Sort__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__, v9);
    sub_1C1ABD4(&System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo, v10);
    sub_1C1ABD4(&SvtEqCombineListViewItem_TypeInfo, v11);
    sub_1C1ABD4(&Method_SvtEqCombineListViewManager___c__GetSelectedMaterialList_b__138_0__, v12);
    sub_1C1ABD4(&SvtEqCombineListViewManager___c_TypeInfo, v13);
    byte_4BCB86F = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_34;
  v17 = *((_DWORD *)itemList + 6);
  if ( v17 < 1 )
  {
LABEL_18:
    itemList = SvtEqCombineListViewManager___c_TypeInfo;
    if ( !SvtEqCombineListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager___c_TypeInfo);
      itemList = SvtEqCombineListViewManager___c_TypeInfo;
    }
    v31 = *(System_Comparison_T__o **)(*((_QWORD *)itemList + 23) + 8LL);
    if ( !v31 )
    {
      if ( !*((_DWORD *)itemList + 56) )
      {
        j_il2cpp_runtime_class_init_0(itemList);
        itemList = SvtEqCombineListViewManager___c_TypeInfo;
      }
      v32 = (Il2CppObject *)**((_QWORD **)itemList + 23);
      v31 = (System_Comparison_T__o *)sub_1C1AE20(System_Comparison_SvtEqCombineListViewItem__TypeInfo);
      System_Comparison_object____ctor(
        v31,
        v32,
        Method_SvtEqCombineListViewManager___c__GetSelectedMaterialList_b__138_0__,
        0LL);
      static_fields = SvtEqCombineListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__138_0 = (struct System_Comparison_SvtEqCombineListViewItem__o *)v31;
      sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->__9__138_0, (int64_t)v31, v34, v35, v36, v37, v38, v39);
    }
    if ( v14 )
    {
      System_Collections_Generic_List_object___Sort_56877908(
        v14,
        v31,
        (const MethodInfo_363E354 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Sort__);
      if ( v14->fields._size < 1 )
        return (System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v14;
      v40 = 0;
      v41 = 0;
      while ( 1 )
      {
        itemList = System_Collections_Generic_List_object___get_Item(
                     v14,
                     v41,
                     (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
        if ( !itemList )
          break;
        if ( *((_DWORD *)itemList + 39) > v40 )
        {
          itemList = System_Collections_Generic_List_object___get_Item(
                       v14,
                       v41,
                       (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
          if ( !itemList )
            break;
          v40 = *((_DWORD *)itemList + 39);
          itemList = System_Collections_Generic_List_object___get_Item(
                       v14,
                       v41,
                       (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
          if ( !itemList )
            break;
          this->fields.lastSelectIndex = *((_DWORD *)itemList + 6);
        }
        if ( ++v41 >= v14->fields._size )
          return (System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v14;
      }
    }
LABEL_34:
    sub_1C1AE30(itemList, v15);
  }
  v18 = 0;
  while ( 1 )
  {
    itemList = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)itemList,
                 v18,
                 (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_34;
    v19 = (Il2CppObject *)itemList;
    methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
      || *(SvtEqCombineListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    itemList = (void *)ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0LL);
    if ( ((unsigned __int8)itemList & 1) != 0 )
    {
      if ( !v14 )
        goto LABEL_34;
      items = v14->fields._items;
      v28 = Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Add__;
      ++v14->fields._version;
      if ( !items )
        goto LABEL_34;
      size = v14->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v14,
          v19,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v14->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v19;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v30 + 4), (int64_t)v19, v21, v22, v23, v24, v25, v26);
      }
    }
    if ( v17 == ++v18 )
      goto LABEL_18;
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_34;
  }
  sub_1C1B0F0(itemList);
  SvtEqCombineListViewManager__SetSelectedMaterialInfo(v43, v44);
  return result;
}


bool __fastcall SvtEqCombineListViewManager__GetSwapChoiceList(
        SvtEqCombineListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_long__o *v15; // x23
  System_Collections_Generic_List_long__o *v16; // x22
  SvtEqCombineListViewItem_c *v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t itemList; // x0
  int v25; // w25
  int32_t v26; // w24
  __int64 methodPtr_low; // x9
  __int64 v28; // x8
  __int128 v29; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x8
  __int128 v34; // q0
  struct System_Int64_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  __int64 v38; // x8
  System_Collections_Generic_List_long__o *v39; // x0
  int v40; // w21
  System_Int64_array *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  System_Int64_array *v48; // x1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  System_Int64_array **v55; // x0
  bool result; // w0
  SvtEqCombineListViewManager_o *v57; // x0
  const MethodInfo *v58; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+40h] [xbp-80h]

  if ( (byte_4BCB887 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long__Add__, choiceList);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1C1ABD4(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1C1ABD4(&SvtEqCombineListViewItem_TypeInfo, v14);
    byte_4BCB887 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1C1AE20(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_3624070 *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1C1AE20(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_3624070 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v25 = *(_DWORD *)(itemList + 24);
  if ( v25 >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v26,
                            (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      v17 = SvtEqCombineListViewItem_TypeInfo;
      methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(SvtEqCombineListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != SvtEqCombineListViewItem_TypeInfo )
      {
        sub_1C1B0F0(itemList);
        SvtEqCombineListViewManager__OnClickNormalStatus(v57, v58);
        return result;
      }
      v28 = *(_QWORD *)(itemList + 120);
      if ( v28 && *(_BYTE *)(itemList + 247) )
      {
        if ( *(_BYTE *)(itemList + 165) )
        {
          v29 = *(_OWORD *)(v28 + 32);
          *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)(v28 + 16);
          *(_OWORD *)&v61.fields.fakeValue = v29;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v60 = v61;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v60, 0LL);
          if ( !v16 )
            goto LABEL_37;
          items = v16->fields._items;
          v31 = Method_System_Collections_Generic_List_long__Add__;
          ++v16->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v16->fields._size;
          v17 = (SvtEqCombineListViewItem_c *)itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v38 = v31[4];
            v39 = v16;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v39,
              (int64_t)v17,
              *(const MethodInfo_36248C4 **)(*(_QWORD *)(v38 + 192) + 112LL));
            goto LABEL_28;
          }
          v33 = &items->obj.klass + size;
          v16->fields._size = size + 1;
        }
        else
        {
          v34 = *(_OWORD *)(v28 + 32);
          *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)(v28 + 16);
          *(_OWORD *)&v61.fields.fakeValue = v34;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v59 = v61;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v59, 0LL);
          if ( !v15 )
            goto LABEL_37;
          v35 = v15->fields._items;
          v36 = Method_System_Collections_Generic_List_long__Add__;
          ++v15->fields._version;
          if ( !v35 )
            goto LABEL_37;
          v37 = v15->fields._size;
          v17 = (SvtEqCombineListViewItem_c *)itemList;
          if ( (unsigned int)v37 >= v35->max_length )
          {
            v38 = v36[4];
            v39 = v15;
            goto LABEL_27;
          }
          v33 = &v35->obj.klass + v37;
          v15->fields._size = v37 + 1;
        }
        v33[4] = (Il2CppClass *)v17;
      }
LABEL_28:
      if ( v25 == ++v26 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v15 || !v16 )
LABEL_37:
    sub_1C1AE30(itemList, v17);
  v40 = v16->fields._size + v15->fields._size;
  if ( v40 < 1 )
  {
    *choiceList = 0LL;
    sub_1C1AB78((PartyOrganizationUtility_o *)choiceList, 0LL, v18, v19, v20, v21, v22, v23);
    v55 = unchoiceList;
    v48 = 0LL;
    *unchoiceList = 0LL;
  }
  else
  {
    v41 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_362637C *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v41;
    sub_1C1AB78((PartyOrganizationUtility_o *)choiceList, (int64_t)v41, v42, v43, v44, v45, v46, v47);
    v48 = System_Collections_Generic_List_long___ToArray(
            v16,
            (const MethodInfo_362637C *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v48;
    v55 = unchoiceList;
  }
  sub_1C1AB78((PartyOrganizationUtility_o *)v55, (int64_t)v48, v49, v50, v51, v52, v53, v54);
  return v40 > 0;
}


bool __fastcall SvtEqCombineListViewManager__GetSwapLockList(
        SvtEqCombineListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_long__o *v15; // x23
  System_Collections_Generic_List_long__o *v16; // x22
  SvtEqCombineListViewItem_c *v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t itemList; // x0
  int v25; // w25
  int32_t v26; // w24
  __int64 methodPtr_low; // x9
  __int64 v28; // x8
  __int128 v29; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x8
  __int128 v34; // q0
  struct System_Int64_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  __int64 v38; // x8
  System_Collections_Generic_List_long__o *v39; // x0
  int v40; // w21
  System_Int64_array *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  System_Int64_array *v48; // x1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  System_Int64_array **v55; // x0
  SvtEqCombineListViewManager_o *v57; // x0
  System_Int64_array **v58; // x1
  System_Int64_array **v59; // x2
  const MethodInfo *v60; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+40h] [xbp-80h]

  if ( (byte_4BCB886 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long__Add__, lockList);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1C1ABD4(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1C1ABD4(&SvtEqCombineListViewItem_TypeInfo, v14);
    byte_4BCB886 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1C1AE20(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_3624070 *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1C1AE20(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_3624070 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v25 = *(_DWORD *)(itemList + 24);
  if ( v25 >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v26,
                            (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      v17 = SvtEqCombineListViewItem_TypeInfo;
      methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(SvtEqCombineListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != SvtEqCombineListViewItem_TypeInfo )
      {
        sub_1C1B0F0(itemList);
        return SvtEqCombineListViewManager__GetSwapChoiceList(v57, v58, v59, v60);
      }
      v28 = *(_QWORD *)(itemList + 120);
      if ( v28 && *(_BYTE *)(itemList + 246) )
      {
        if ( *(_BYTE *)(itemList + 160) )
        {
          v29 = *(_OWORD *)(v28 + 32);
          *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)(v28 + 16);
          *(_OWORD *)&v63.fields.fakeValue = v29;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v62 = v63;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v62, 0LL);
          if ( !v16 )
            goto LABEL_37;
          items = v16->fields._items;
          v31 = Method_System_Collections_Generic_List_long__Add__;
          ++v16->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v16->fields._size;
          v17 = (SvtEqCombineListViewItem_c *)itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v38 = v31[4];
            v39 = v16;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v39,
              (int64_t)v17,
              *(const MethodInfo_36248C4 **)(*(_QWORD *)(v38 + 192) + 112LL));
            goto LABEL_28;
          }
          v33 = &items->obj.klass + size;
          v16->fields._size = size + 1;
        }
        else
        {
          v34 = *(_OWORD *)(v28 + 32);
          *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)(v28 + 16);
          *(_OWORD *)&v63.fields.fakeValue = v34;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v61 = v63;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v61, 0LL);
          if ( !v15 )
            goto LABEL_37;
          v35 = v15->fields._items;
          v36 = Method_System_Collections_Generic_List_long__Add__;
          ++v15->fields._version;
          if ( !v35 )
            goto LABEL_37;
          v37 = v15->fields._size;
          v17 = (SvtEqCombineListViewItem_c *)itemList;
          if ( (unsigned int)v37 >= v35->max_length )
          {
            v38 = v36[4];
            v39 = v15;
            goto LABEL_27;
          }
          v33 = &v35->obj.klass + v37;
          v15->fields._size = v37 + 1;
        }
        v33[4] = (Il2CppClass *)v17;
      }
LABEL_28:
      if ( v25 == ++v26 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v15 || !v16 )
LABEL_37:
    sub_1C1AE30(itemList, v17);
  v40 = v16->fields._size + v15->fields._size;
  if ( v40 < 1 )
  {
    *lockList = 0LL;
    sub_1C1AB78((PartyOrganizationUtility_o *)lockList, 0LL, v18, v19, v20, v21, v22, v23);
    v55 = unlockList;
    v48 = 0LL;
    *unlockList = 0LL;
  }
  else
  {
    v41 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_362637C *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v41;
    sub_1C1AB78((PartyOrganizationUtility_o *)lockList, (int64_t)v41, v42, v43, v44, v45, v46, v47);
    v48 = System_Collections_Generic_List_long___ToArray(
            v16,
            (const MethodInfo_362637C *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v48;
    v55 = unlockList;
  }
  sub_1C1AB78((PartyOrganizationUtility_o *)v55, (int64_t)v48, v49, v50, v51, v52, v53, v54);
  return v40 > 0;
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
  __int64 i; // x20
  struct ListViewSort_array *sortStatusList; // x8

  if ( (byte_4BCB854 & 1) == 0 )
  {
    sub_1C1ABD4(&SvtEqCombineListViewManager_TypeInfo, v1);
    byte_4BCB854 = 1;
  }
  v2 = SvtEqCombineListViewManager_TypeInfo;
  if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
    v2 = SvtEqCombineListViewManager_TypeInfo;
  }
  if ( v2->static_fields->isInitSystem )
  {
    for ( i = 0LL; ; ++i )
    {
      if ( !v2->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v2);
        v2 = SvtEqCombineListViewManager_TypeInfo;
      }
      sortStatusList = v2->static_fields->sortStatusList;
      if ( !sortStatusList )
        goto LABEL_15;
      if ( (unsigned int)i >= sortStatusList->max_length )
        sub_1C1AE38(v2, v1);
      v2 = (SvtEqCombineListViewManager_c *)sortStatusList->m_Items[i];
      if ( !v2 )
LABEL_15:
        sub_1C1AE30(v2, v1);
      ListViewSort__InitLoad((ListViewSort_o *)v2, 0LL);
      if ( (_DWORD)i == 1 )
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

  if ( this->fields.modeKind )
    return 0;
  result = 0;
  if ( item && this->fields.currentType == 1 )
    return !SvtEqCombineListViewItem__get_IsCanNotSelect(item, (const MethodInfo *)item)
        && (ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL)
         || this->fields.modeKind
         || this->fields.selectSum < this->fields.selectMax);
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
  __int64 v14; // x1
  UserGameEntity_o *SelfUserGame; // x19
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x20
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppObject *current; // x21
  SvtEqCombineListViewItem_c *v21; // x1
  __int64 methodPtr_low; // x9
  _OWORD *monitor; // x8
  _QWORD *p_monitor; // x22
  __int128 v25; // q0
  int64_t v26; // x0
  Il2CppObject v27; // q0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t UserSvtId; // x0
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x1
  UnityEngine_Object_o *v37; // x22
  __int64 v38; // x1
  void *v39; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4BCB864 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId);
    sub_1C1ABD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v9);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v10);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1C1ABD4(&SvtEqCombineListViewItem_TypeInfo, v13);
    byte_4BCB864 = 1;
  }
  memset(&v43, 0, sizeof(v43));
  if ( !this->fields.itemList )
    return;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( usrSvtId < 1 )
  {
    Entity = 0LL;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
LABEL_36:
      sub_1C1AE30(Instance, v14);
    }
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               usrSvtId,
               (const MethodInfo_324ABD4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_36;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v42,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v43.fields._list = *(_OWORD *)&v42.fields.currentCryptoKey;
  v43.fields._current = (Il2CppObject *)v42.fields.fakeValue;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v43,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v18 )
      break;
    current = v43.fields._current;
    if ( !v43.fields._current )
      goto LABEL_30;
    v21 = SvtEqCombineListViewItem_TypeInfo;
    methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v43.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (SvtEqCombineListViewItem_c *)v43.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      sub_1C1B0F0(v43.fields._current);
LABEL_30:
      if ( !Entity )
        sub_1C1AE30(v18, v19);
      sub_1C1AE30(v18, v19);
    }
    if ( Entity )
    {
      p_monitor = &v43.fields._current[7].monitor;
      monitor = v43.fields._current[7].monitor;
      if ( !monitor )
        sub_1C1AE30(v18, SvtEqCombineListViewItem_TypeInfo);
      v25 = monitor[2];
      *(_OWORD *)&v42.fields.currentCryptoKey = monitor[1];
      *(_OWORD *)&v42.fields.fakeValue = v25;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v41 = v42;
      v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v41, 0LL);
      v27 = Entity[2];
      *(Il2CppObject *)&v40.fields.currentCryptoKey = Entity[1];
      *(Il2CppObject *)&v40.fields.fakeValue = v27;
      if ( v26 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v40, 0LL) )
      {
        *p_monitor = Entity;
        sub_1C1AB78((PartyOrganizationUtility_o *)&current[7].monitor, (int64_t)Entity, v28, v29, v30, v31, v32, v33);
      }
    }
    UserSvtId = SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)current, (const MethodInfo *)v21);
    if ( !SelfUserGame )
      sub_1C1AE30(UserSvtId, v35);
    BYTE4(current[10].klass) = UserSvtId == SelfUserGame->fields.favoriteUserSvtId;
    SvtEqCombineListViewItem__ModifyLockItem((SvtEqCombineListViewItem_o *)current, v35);
    SvtEqCombineListViewItem__ModifyChoiceItem((SvtEqCombineListViewItem_o *)current, v36);
    v37 = (UnityEngine_Object_o *)current[6].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v37, 0LL, 0LL) )
    {
      v39 = current[6].monitor;
      if ( !v39 )
        sub_1C1AE30(0LL, v38);
      (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v39 + 392LL))(
        v39,
        current,
        *(_QWORD *)(*(_QWORD *)v39 + 400LL));
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v43,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__ModifyList(
        SvtEqCombineListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  bool v3; // w21
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
  void *ServantEquipList; // x21
  System_Collections_Generic_List_object__o *v22; // x22
  System_Collections_Generic_List_object__o *v23; // x23
  int v24; // w8
  __int64 v25; // x20
  int64_t v26; // x24
  __int128 v27; // q0
  struct UserServantEntity_o *v28; // x8
  __int128 v29; // q0
  SvtEqCombineListViewManager_o *v30; // x25
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct System_Object_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppClass **v40; // x0
  System_Collections_Generic_List_object__o *v41; // x22
  System_Collections_Generic_List_object__o *v42; // x23
  int32_t v43; // w21
  __int128 v44; // q0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v46; // q0
  int32_t v47; // w24
  SvtEqCombineListViewManager_o *v48; // x25
  unsigned int v49; // w20
  struct UnityEngine_GameObject_o *dragParentObject; // x8
  __int128 v51; // q1
  __int64 v52; // x28
  __int128 v53; // q0
  SvtEqCombineListViewManager_o *v54; // x26
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  struct System_Object_array *items; // x8
  _QWORD *v62; // x9
  __int64 size; // x10
  Il2CppClass **v64; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 v66; // x25
  int v67; // w28
  unsigned int v68; // w26
  __int64 v69; // x8
  __int128 v70; // q0
  SvtEqCombineListViewManager_o *v71; // x23
  int32_t v72; // w24
  SvtEqCombineListViewItem_o *v73; // x22
  __int64 methodPtr_low; // x9
  struct UnityEngine_GameObject_o *v75; // x8
  __int128 v76; // q0
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v78; // q0
  int64_t v79; // x0
  const MethodInfo *v80; // x5
  SvtEqCombineListViewManager_o *v81; // x0
  ListViewObject_o *v82; // x1
  ListViewItem_o *v83; // x2
  const MethodInfo *v84; // x3
  bool isIconSizeChangea; // [xsp+Ch] [xbp-1A4h]
  bool isIconSizeChangeb; // [xsp+Ch] [xbp-1A4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+10h] [xbp-1A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+30h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89; // [xsp+50h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v90; // [xsp+70h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v91; // [xsp+90h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v92; // [xsp+B0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v93; // [xsp+D0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v94; // [xsp+F0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v95; // [xsp+110h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v96; // [xsp+130h] [xbp-80h]

  v3 = isIconSizeChange;
  v4 = this;
  if ( (byte_4BCB867 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, isIconSizeChange);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserServantEntity__Remove__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserServantEntity___ctor___77510248, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v14);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v15);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__, v16);
    sub_1C1ABD4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v17);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18);
    this = (SvtEqCombineListViewManager_o *)sub_1C1ABD4(&SvtEqCombineListViewItem_TypeInfo, v19);
    byte_4BCB867 = 1;
  }
  currentType = v4->fields.currentType;
  isIconSizeChangea = v3;
  if ( currentType == 1 )
  {
    this = (SvtEqCombineListViewManager_o *)v4->fields.userServantMaster;
    if ( !this )
      goto LABEL_102;
    ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)this, 0LL);
    v41 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_56869252(
      v41,
      (System_Collections_Generic_IEnumerable_T__o *)ServantEquipList,
      (const MethodInfo_363C184 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___77510248);
    v42 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v42,
      (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( v4->fields.baseUsrSvtData )
    {
      if ( !v41 )
        goto LABEL_102;
      if ( v41->fields._size >= 1 )
      {
        v43 = 0;
        do
        {
          this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                    v41,
                                                    v43,
                                                    (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
          if ( !this )
            goto LABEL_102;
          v44 = *(_OWORD *)&this->fields.dropObjectList;
          *(UnityEngine_MonoBehaviour_Fields *)&v96.fields.currentCryptoKey = this->fields.UnityEngine_MonoBehaviour_Fields;
          *(_OWORD *)&v96.fields.fakeValue = v44;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v93 = v96;
          this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(
                                                    &v93,
                                                    0LL);
          baseUsrSvtData = v4->fields.baseUsrSvtData;
          if ( !baseUsrSvtData )
            goto LABEL_102;
          v46 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
          *(_OWORD *)&v92.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v92.fields.fakeValue = v46;
          if ( this == (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(
                                                          &v92,
                                                          0LL) )
            System_Collections_Generic_List_object___RemoveAt(
              v41,
              v43,
              (const MethodInfo_363E064 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
          ++v43;
        }
        while ( v43 < v41->fields._size );
      }
      ServantEquipList = System_Collections_Generic_List_object___ToArray(
                           v41,
                           (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    }
    this = (SvtEqCombineListViewManager_o *)v4->fields._selectedMtSvtList_k__BackingField;
    if ( this && SLODWORD(this->fields.m_CancellationTokenSource) >= 1 )
    {
      v47 = 0;
      while ( 1 )
      {
        this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)this,
                                                  v47,
                                                  (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
        if ( !v41 )
          goto LABEL_102;
        if ( v41->fields._size >= 1 )
          break;
LABEL_67:
        this = (SvtEqCombineListViewManager_o *)v4->fields._selectedMtSvtList_k__BackingField;
        if ( !this )
          goto LABEL_102;
        if ( ++v47 >= SLODWORD(this->fields.m_CancellationTokenSource) )
        {
          if ( !v42 )
            goto LABEL_102;
          System_Collections_Generic_List_object___AddRange(
            v42,
            (System_Collections_Generic_IEnumerable_T__o *)v41,
            (const MethodInfo_363CA9C *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
          this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___ToArray(
                                                    v42,
                                                    (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
          ServantEquipList = this;
          goto LABEL_71;
        }
      }
      v48 = this;
      v49 = 0;
      while ( 1 )
      {
        if ( !ServantEquipList )
          goto LABEL_102;
        if ( v49 >= *((_DWORD *)ServantEquipList + 6) )
          break;
        if ( !v48 )
          goto LABEL_102;
        dragParentObject = v48->fields.dragParentObject;
        if ( !dragParentObject )
          goto LABEL_102;
        v51 = *(_OWORD *)&dragParentObject[1].monitor;
        v52 = *((_QWORD *)ServantEquipList + (int)v49 + 4);
        *(_OWORD *)&v96.fields.currentCryptoKey = *(_OWORD *)&dragParentObject->fields.m_CachedPtr;
        *(_OWORD *)&v96.fields.fakeValue = v51;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v91 = v96;
        this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(
                                                  &v91,
                                                  0LL);
        if ( !v52 )
          goto LABEL_102;
        v53 = *(_OWORD *)(v52 + 32);
        v54 = this;
        *(_OWORD *)&v90.fields.currentCryptoKey = *(_OWORD *)(v52 + 16);
        *(_OWORD *)&v90.fields.fakeValue = v53;
        this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(
                                                  &v90,
                                                  0LL);
        if ( v54 == this )
        {
          if ( !v42 )
            goto LABEL_102;
          *(_QWORD *)&isIconSizeChange = v48->fields.dragParentObject;
          items = v42->fields._items;
          v62 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v42->fields._version;
          if ( !items )
            goto LABEL_102;
          size = v42->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v42,
              (Il2CppObject *)isIconSizeChange,
              *(const MethodInfo_363C890 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
          }
          else
          {
            v64 = &items->obj.klass + size;
            v42->fields._size = size + 1;
            v64[4] = (Il2CppClass *)isIconSizeChange;
            sub_1C1AB78((PartyOrganizationUtility_o *)(v64 + 4), isIconSizeChange, v55, v56, v57, v58, v59, v60);
          }
          this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___Remove(
                                                    v41,
                                                    (Il2CppObject *)v48->fields.dragParentObject,
                                                    (const MethodInfo_363DDB8 *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
        }
        if ( (signed int)++v49 >= v41->fields._size )
          goto LABEL_67;
      }
LABEL_100:
      sub_1C1AE38(this, isIconSizeChange);
    }
LABEL_71:
    if ( !ServantEquipList )
      goto LABEL_102;
    if ( !*((_QWORD *)ServantEquipList + 3) )
    {
      this = (SvtEqCombineListViewManager_o *)v4->fields.emptyListNoticeLabel;
      if ( !this )
        goto LABEL_102;
      this = (SvtEqCombineListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
      if ( !this )
        goto LABEL_102;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    }
  }
  else
  {
    if ( currentType )
      goto LABEL_102;
    this = (SvtEqCombineListViewManager_o *)v4->fields.levelUpInfoImg;
    if ( !this )
      goto LABEL_102;
    this = (SvtEqCombineListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (SvtEqCombineListViewManager_o *)v4->fields.userServantMaster;
    if ( !this )
      goto LABEL_102;
    this = (SvtEqCombineListViewManager_o *)UserServantMaster__getServantEquipList((UserServantMaster_o *)this, 0LL);
    if ( !this )
      goto LABEL_102;
    ServantEquipList = this;
    if ( !this->fields.m_CancellationTokenSource )
    {
      this = (SvtEqCombineListViewManager_o *)v4->fields.emptyListNoticeLabel;
      if ( !this )
        goto LABEL_102;
      this = (SvtEqCombineListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
      if ( !this )
        goto LABEL_102;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    }
    v22 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_56869252(
      v22,
      (System_Collections_Generic_IEnumerable_T__o *)ServantEquipList,
      (const MethodInfo_363C184 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___77510248);
    v23 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v23,
      (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( v4->fields.baseUsrSvtData )
    {
      v24 = *((_DWORD *)ServantEquipList + 6);
      if ( v24 >= 1 )
      {
        v25 = 0LL;
        while ( (unsigned int)v25 < v24 )
        {
          v26 = *((_QWORD *)ServantEquipList + v25 + 4);
          if ( !v26 )
            goto LABEL_102;
          v27 = *(_OWORD *)(v26 + 32);
          *(_OWORD *)&v96.fields.currentCryptoKey = *(_OWORD *)(v26 + 16);
          *(_OWORD *)&v96.fields.fakeValue = v27;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v95 = v96;
          this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(
                                                    &v95,
                                                    0LL);
          v28 = v4->fields.baseUsrSvtData;
          if ( !v28 )
            goto LABEL_102;
          v29 = *(_OWORD *)&v28->fields.id.fields.fakeValue;
          v30 = this;
          *(_OWORD *)&v94.fields.currentCryptoKey = *(_OWORD *)&v28->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v94.fields.fakeValue = v29;
          this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(
                                                    &v94,
                                                    0LL);
          if ( v30 == this )
          {
            if ( !v23 )
              goto LABEL_102;
            v37 = v23->fields._items;
            v38 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v23->fields._version;
            if ( !v37 )
              goto LABEL_102;
            v39 = v23->fields._size;
            if ( (unsigned int)v39 >= v37->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v23,
                (Il2CppObject *)v26,
                *(const MethodInfo_363C890 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
            }
            else
            {
              v40 = &v37->obj.klass + v39;
              v23->fields._size = v39 + 1;
              v40[4] = (Il2CppClass *)v26;
              sub_1C1AB78((PartyOrganizationUtility_o *)(v40 + 4), v26, v31, v32, v33, v34, v35, v36);
            }
            if ( !v22 )
              goto LABEL_102;
            this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___Remove(
                                                      v22,
                                                      (Il2CppObject *)v26,
                                                      (const MethodInfo_363DDB8 *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
          }
          v24 = *((_DWORD *)ServantEquipList + 6);
          if ( (int)++v25 >= v24 )
            goto LABEL_30;
        }
        goto LABEL_100;
      }
LABEL_30:
      if ( !v23 )
        goto LABEL_102;
      System_Collections_Generic_List_object___AddRange(
        v23,
        (System_Collections_Generic_IEnumerable_T__o *)v22,
        (const MethodInfo_363CA9C *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___ToArray(
                                                v23,
                                                (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      ServantEquipList = this;
      if ( !this )
        goto LABEL_102;
    }
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_102;
  v66 = *((_QWORD *)ServantEquipList + 3);
  if ( (int)v66 >= 1 )
  {
    v67 = itemList->fields._size;
    v68 = 0;
    isIconSizeChangeb = isIconSizeChangea;
    while ( 1 )
    {
      v69 = *((_QWORD *)ServantEquipList + (int)v68 + 4);
      if ( !v69 )
        goto LABEL_102;
      v70 = *(_OWORD *)(v69 + 32);
      *(_OWORD *)&v96.fields.currentCryptoKey = *(_OWORD *)(v69 + 16);
      *(_OWORD *)&v96.fields.fakeValue = v70;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v89 = v96;
      this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(
                                                &v89,
                                                0LL);
      if ( v67 >= 1 )
        break;
LABEL_98:
      if ( ++v68 == (_DWORD)v66 )
        return;
      if ( v68 >= *((_DWORD *)ServantEquipList + 6) )
        goto LABEL_100;
    }
    v71 = this;
    v72 = 0;
    while ( 1 )
    {
      this = (SvtEqCombineListViewManager_o *)v4->fields.itemList;
      if ( !this )
        goto LABEL_102;
      this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)this,
                                                v72,
                                                (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        goto LABEL_102;
      *(_QWORD *)&isIconSizeChange = SvtEqCombineListViewItem_TypeInfo;
      v73 = (SvtEqCombineListViewItem_o *)this;
      methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (SvtEqCombineListViewItem_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        break;
      }
      v75 = this->fields.dragParentObject;
      if ( v75 )
      {
        v76 = *(_OWORD *)&v75[1].monitor;
        *(_OWORD *)&v96.fields.currentCryptoKey = *(_OWORD *)&v75->fields.m_CachedPtr;
        *(_OWORD *)&v96.fields.fakeValue = v76;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v88 = v96;
        this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(
                                                  &v88,
                                                  0LL);
        if ( this == v71 )
        {
          userSvtEntity = v73->fields.userSvtEntity;
          if ( userSvtEntity )
          {
            v78 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v96.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v96.fields.fakeValue = v78;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v87 = v96;
            v79 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v87, 0LL);
            SvtEqCombineListViewManager__ModifyLockItem_46784468(v4, v73, v79, 1, isIconSizeChangeb, v80);
            goto LABEL_98;
          }
LABEL_102:
          sub_1C1AE30(this, isIconSizeChange);
        }
      }
      if ( v67 == ++v72 )
        goto LABEL_98;
    }
    sub_1C1B0F0(this);
    SvtEqCombineListViewManager__SetObjectItem(v81, v82, v83, v84);
  }
}


void __fastcall SvtEqCombineListViewManager__ModifyLockItem(
        SvtEqCombineListViewManager_o *this,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
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
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x21
  bool v21; // w29
  int64_t v22; // x0
  SvtEqCombineListViewItem_c *v23; // x1
  Il2CppObject *current; // x22
  __int64 methodPtr_low; // x9
  _OWORD *monitor; // x8
  _QWORD *p_monitor; // x23
  __int128 v28; // q0
  int64_t v29; // x0
  Il2CppObject v30; // q0
  int64_t v31; // x24
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  const MethodInfo *v38; // x1
  UnityEngine_Object_o *v39; // x23
  __int64 v40; // x1
  void *v41; // x0
  __int64 v42; // x1
  ListViewObject_o *v43; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4BCB865 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId);
    sub_1C1ABD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v13);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v14);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1C1ABD4(&SvtEqCombineListViewItem_TypeInfo, v17);
    byte_4BCB865 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  if ( !this->fields.itemList )
    return;
  UserGameMaster__getSelfUserGame(0LL);
  if ( usrSvtId < 1 )
  {
    Entity = 0LL;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
LABEL_42:
      sub_1C1AE30(Instance, v18);
    }
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               usrSvtId,
               (const MethodInfo_324ABD4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_42;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v47.fields._list = *(_OWORD *)&v46.fields.currentCryptoKey;
  v47.fields._current = (Il2CppObject *)v46.fields.fakeValue;
  v21 = !isIconSizeChange && isInit;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v47,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v22 & 1) == 0 )
      break;
    current = v47.fields._current;
    if ( v47.fields._current )
    {
      v23 = SvtEqCombineListViewItem_TypeInfo;
      methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v47.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (SvtEqCombineListViewItem_c *)v47.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        sub_1C1B0F0(v47.fields._current);
LABEL_36:
        sub_1C1AE30(v22, v23);
      }
      if ( Entity )
      {
        p_monitor = &v47.fields._current[7].monitor;
        monitor = v47.fields._current[7].monitor;
        if ( !monitor )
          sub_1C1AE30(v22, SvtEqCombineListViewItem_TypeInfo);
        v28 = monitor[2];
        *(_OWORD *)&v46.fields.currentCryptoKey = monitor[1];
        *(_OWORD *)&v46.fields.fakeValue = v28;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v45 = v46;
        v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v45, 0LL);
        v30 = Entity[2];
        v31 = v29;
        *(Il2CppObject *)&v44.fields.currentCryptoKey = Entity[1];
        *(Il2CppObject *)&v44.fields.fakeValue = v30;
        v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v44, 0LL);
        if ( v31 == v22 )
        {
          *p_monitor = Entity;
          sub_1C1AB78((PartyOrganizationUtility_o *)&current[7].monitor, (int64_t)Entity, v32, v33, v34, v35, v36, v37);
        }
      }
    }
    else if ( Entity )
    {
      sub_1C1AE30(v22, v23);
    }
    if ( v21 )
    {
      if ( !current )
        goto LABEL_36;
      SvtEqCombineListViewItem__ModifyLockItem((SvtEqCombineListViewItem_o *)current, (const MethodInfo *)v23);
      SvtEqCombineListViewItem__ModifyChoiceItem((SvtEqCombineListViewItem_o *)current, v38);
    }
    else if ( !current )
    {
      sub_1C1AE30(v22, v23);
    }
    v39 = (UnityEngine_Object_o *)current[6].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v39, 0LL, 0LL) )
    {
      v41 = current[6].monitor;
      if ( !v41 )
        sub_1C1AE30(0LL, v40);
      (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v41 + 392LL))(
        v41,
        current,
        *(_QWORD *)(*(_QWORD *)v41 + 400LL));
      if ( isIconSizeChange )
      {
        v43 = (ListViewObject_o *)current[6].monitor;
        if ( !v43 )
          sub_1C1AE30(0LL, v42);
        ListViewObject__SetItemSeed(v43, (ListViewItem_o *)current, this->fields.seed, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v47,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall SvtEqCombineListViewManager__ModifyLockItem_46784468(
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
  __int128 v19; // q1
  SvtEqCombineListViewManager_o *v20; // x25
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  const MethodInfo *v27; // x1
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+40h] [xbp-60h]

  v10 = this;
  if ( (byte_4BCB866 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantMaster___, servantItem);
    sub_1C1ABD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v12);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    this = (SvtEqCombineListViewManager_o *)sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4BCB866 = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (SvtEqCombineListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_26;
    this = (SvtEqCombineListViewManager_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_26;
    this = (SvtEqCombineListViewManager_o *)DataMasterBase_object__object__long___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              usrSvtId,
                                              (const MethodInfo_324ABD4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( this )
    {
      if ( !servantItem )
        goto LABEL_26;
      userSvtEntity = servantItem->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_26;
      v16 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      v17 = this;
      *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v31.fields.fakeValue = v16;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v30 = v31;
      v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v30, 0LL);
      v19 = *(_OWORD *)&v17->fields.dropObjectList;
      v20 = (SvtEqCombineListViewManager_o *)v18;
      *(UnityEngine_MonoBehaviour_Fields *)&v29.fields.currentCryptoKey = v17->fields.UnityEngine_MonoBehaviour_Fields;
      *(_OWORD *)&v29.fields.fakeValue = v19;
      this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(
                                                &v29,
                                                0LL);
      if ( v20 == this )
      {
        servantItem->fields.userSvtEntity = (struct UserServantEntity_o *)v17;
        sub_1C1AB78(
          (PartyOrganizationUtility_o *)&servantItem->fields.userSvtEntity,
          (int64_t)v17,
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
      goto LABEL_26;
  }
  else
  {
    if ( !servantItem )
      goto LABEL_26;
    SvtEqCombineListViewItem__ModifyLockItem(servantItem, (const MethodInfo *)servantItem);
    SvtEqCombineListViewItem__ModifyChoiceItem(servantItem, v27);
  }
  viewObject = (UnityEngine_Object_o *)servantItem->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
  {
    this = (SvtEqCombineListViewManager_o *)servantItem->fields.viewObject;
    if ( this )
    {
      ((void (__fastcall *)(SvtEqCombineListViewManager_o *, SvtEqCombineListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
        this,
        servantItem,
        this->klass->vtable._6_GetFocusItemIndex.methodPtr);
      if ( !isIconSizeChange )
        return;
      this = (SvtEqCombineListViewManager_o *)servantItem->fields.viewObject;
      if ( this )
      {
        ListViewObject__SetItemSeed((ListViewObject_o *)this, (ListViewItem_o *)servantItem, v10->fields.seed, 0LL);
        return;
      }
    }
LABEL_26:
    sub_1C1AE30(this, servantItem);
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickBonusFilterKind(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_4BCB87E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SvtEqCombineListViewManager_OnClickBonusFilterKind__, method);
    byte_4BCB87E = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SvtEqCombineListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C1ABEC(Method_SvtEqCombineListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C1AE30(0LL, v5);
    ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, 0, 0LL, 0LL);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickChoiceTab(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  SvtEqCombineListViewManager_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2

  if ( (byte_4BCB88A & 1) == 0 )
  {
    sub_1C1ABD4(&SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo, method);
    sub_1C1ABD4(&Method_SvtEqCombineListViewManager_EndClickTabChoice__, v3);
    sub_1C1ABD4(&Method_SvtEqCombineListViewManager_OnClickChoiceTab__, v4);
    byte_4BCB88A = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    v5 = Method_SvtEqCombineListViewManager_OnClickChoiceTab__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickChoiceTab__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C1ABEC(Method_SvtEqCombineListViewManager_OnClickChoiceTab__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v8 = (SvtEqCombineListViewManager_RequestCallbackFunc_o *)sub_1C1AE20(SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo);
      SvtEqCombineListViewManager_RequestCallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_SvtEqCombineListViewManager_EndClickTabChoice__,
        v9);
      SvtEqCombineListViewManager__StatusRequest(this, v8, v10);
    }
    else
    {
      SvtEqCombineListViewManager__SetStatusKind(this, 2, v7);
      SvtEqCombineListViewManager__ReleaseAll(this, v11);
      SvtEqCombineListViewManager__ModifyList(this, 0, v12);
      SvtEqCombineListViewManager__SetMode_46787164(this, 2, v13);
    }
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickCollectLock(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  SvtEqCombineListViewManager_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2

  if ( (byte_4BCB889 & 1) == 0 )
  {
    sub_1C1ABD4(&SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo, method);
    sub_1C1ABD4(&Method_SvtEqCombineListViewManager_EndClickTabLock__, v3);
    sub_1C1ABD4(&Method_SvtEqCombineListViewManager_OnClickCollectLock__, v4);
    byte_4BCB889 = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    v5 = Method_SvtEqCombineListViewManager_OnClickCollectLock__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickCollectLock__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C1ABEC(Method_SvtEqCombineListViewManager_OnClickCollectLock__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v8 = (SvtEqCombineListViewManager_RequestCallbackFunc_o *)sub_1C1AE20(SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo);
      SvtEqCombineListViewManager_RequestCallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_SvtEqCombineListViewManager_EndClickTabLock__,
        v9);
      SvtEqCombineListViewManager__StatusRequest(this, v8, v10);
    }
    else
    {
      SvtEqCombineListViewManager__SetStatusKind(this, 1, v7);
      SvtEqCombineListViewManager__ReleaseAll(this, v11);
      SvtEqCombineListViewManager__ModifyList(this, 0, v12);
      SvtEqCombineListViewManager__SetMode_46787164(this, 2, v13);
    }
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickDecide(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  _BOOL4 isDecideFlg; // w20
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1
  struct CombineRootComponent_o *v9; // x0
  __int64 v10; // x1
  CombineRootComponent_o *combineRootComponent; // x8
  const MethodInfo *v12; // x1
  ServantCheckEquipDialog_o *servantEquipCheckDialog; // x20
  System_Collections_Generic_List_SvtEqCombineListViewItem__o *SelectedMaterialList; // x21
  ServantCheckEquipDialog_ClickDelegate_o *v15; // x22

  if ( (byte_4BCB86D & 1) == 0 )
  {
    sub_1C1ABD4(&ServantCheckEquipDialog_ClickDelegate_TypeInfo, method);
    sub_1C1ABD4(&Method_SvtEqCombineListViewManager_CloseServantCheckEquipDialog__, v3);
    sub_1C1ABD4(&Method_SvtEqCombineListViewManager_OnClickDecide__, v4);
    byte_4BCB86D = 1;
  }
  v5 = Method_SvtEqCombineListViewManager_OnClickDecide__;
  isDecideFlg = this->fields.isDecideFlg;
  if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickDecide__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C1ABEC(Method_SvtEqCombineListViewManager_OnClickDecide__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v5, v5[4]);
  if ( isDecideFlg )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    v9 = (struct CombineRootComponent_o *)SvtEqCombineListViewManager__CheckMaterialEquipped(this, v8);
    combineRootComponent = this->fields.combineRootComponent;
    this->fields._isOpenCheckEquipDialog_k__BackingField = (unsigned __int8)v9 & 1;
    if ( !combineRootComponent )
      goto LABEL_15;
    CombineRootComponent__SetBackSelect(combineRootComponent, 1, 0LL);
    if ( this->fields._isOpenCheckEquipDialog_k__BackingField )
    {
      servantEquipCheckDialog = this->fields.servantEquipCheckDialog;
      SelectedMaterialList = SvtEqCombineListViewManager__GetSelectedMaterialList(this, v12);
      v15 = (ServantCheckEquipDialog_ClickDelegate_o *)sub_1C1AE20(ServantCheckEquipDialog_ClickDelegate_TypeInfo);
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
LABEL_15:
      sub_1C1AE30(v9, v10);
    }
    SvtEqCombineListViewManager__SetSelectedMaterialInfo(this, v12);
    v9 = this->fields.combineRootComponent;
    if ( !v9 )
      goto LABEL_15;
    if ( v9->fields.state == 4 )
      CombineRootComponent__SetSelectSvtEqMaterialList(v9, 0LL);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0, 0LL);
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickFilter2Kind(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  struct ListViewSort_o *sort; // x8
  int32_t filter2Kind; // w21
  int32_t v10; // w9

  if ( (byte_4BCB87F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SvtEqCombineListViewManager_OnClickFilter2Kind__, method);
    sub_1C1ABD4(&SvtEqCombineListViewManager_TypeInfo, v3);
    byte_4BCB87F = 1;
  }
  if ( this->fields.isInput )
  {
    v4 = Method_SvtEqCombineListViewManager_OnClickFilter2Kind__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickFilter2Kind__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C1ABEC(Method_SvtEqCombineListViewManager_OnClickFilter2Kind__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort
      || (filter2Kind = sort->fields.filter2Kind, !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished)
      && (j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo), (sort = this->fields.sort) == 0LL) )
    {
      sub_1C1AE30(v6, v7);
    }
    if ( filter2Kind + 1 <= SvtEqCombineListViewManager_TypeInfo->static_fields->FILTER2_MAX_KIND_NUM )
      v10 = filter2Kind + 1;
    else
      v10 = 0;
    sort->fields.filter2Kind = v10;
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
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v10; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_4BCB87B & 1) == 0 )
  {
    sub_1C1ABD4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1C1ABD4(&Method_SvtEqCombineListViewManager_EndSelectFilterKind__, v4);
    sub_1C1ABD4(&Method_SvtEqCombineListViewManager_OnClickFilterKind__, v5);
    byte_4BCB87B = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_SvtEqCombineListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C1ABEC(Method_SvtEqCombineListViewManager_OnClickFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C1AE20(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_SvtEqCombineListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v10 )
      sub_1C1AE30(v12, v13);
    CommonUI__OpenServantFilterSelectMenu_31105860(v10, 5, sort, (ListViewManager_o *)this, v11, -1, 0LL);
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
  __int64 methodPtr_low; // x9
  SvtEqCombineListViewItem_o *Item; // x0
  _QWORD *v9; // x8
  SvtEqCombineListViewItem_o *v10; // x20
  System_Reflection_MethodBase_o *v11; // x0
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v13; // q1
  int64_t v14; // x0
  const MethodInfo *v15; // x4
  const MethodInfo *v16; // x2
  SvtEqCombineListViewManager_o *v17; // x0
  SvtEqCombineListViewItem_o *v18; // x1
  const MethodInfo *v19; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_4BCB878 & 1) == 0 )
  {
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, obj);
    sub_1C1ABD4(&Method_SvtEqCombineListViewManager_OnClickLockModeItem__, v5);
    this = (SvtEqCombineListViewManager_o *)sub_1C1ABD4(&SvtEqCombineListViewObject_TypeInfo, v6);
    byte_4BCB878 = 1;
  }
  if ( !obj )
    goto LABEL_13;
  methodPtr_low = LOBYTE(SvtEqCombineListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (SvtEqCombineListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    sub_1C1B0F0(obj);
    SvtEqCombineListViewManager__IsDragEnable(v17, v18, v19);
    return;
  }
  Item = SvtEqCombineListViewObject__GetItem(
           (SvtEqCombineListViewObject_o *)obj,
           (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo);
  v9 = Method_SvtEqCombineListViewManager_OnClickLockModeItem__;
  v10 = Item;
  if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickLockModeItem__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1C1ABEC(Method_SvtEqCombineListViewManager_OnClickLockModeItem__);
  v11 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v9, v9[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 11, 0, 0LL);
  if ( !v10 || (userSvtEntity = v10->fields.userSvtEntity, v10->fields.isSwapLock ^= 1u, !userSvtEntity) )
LABEL_13:
    sub_1C1AE30(this, obj);
  v13 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v21.fields.fakeValue = v13;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v20 = v21;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v20, 0LL);
  SvtEqCombineListViewManager__ModifyLockItem(v4, v14, 0, 0, v15);
  SvtEqCombineListViewManager__SetMode_46787164(v4, 3, v16);
}


void __fastcall SvtEqCombineListViewManager__OnClickNormalStatus(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  SvtEqCombineListViewManager_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4BCB888 & 1) == 0 )
  {
    sub_1C1ABD4(&SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo, method);
    sub_1C1ABD4(&Method_SvtEqCombineListViewManager_EndClickTabStatus__, v3);
    sub_1C1ABD4(&Method_SvtEqCombineListViewManager_OnClickNormalStatus__, v4);
    byte_4BCB888 = 1;
  }
  if ( this->fields.modeKind )
  {
    v5 = Method_SvtEqCombineListViewManager_OnClickNormalStatus__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickNormalStatus__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C1ABEC(Method_SvtEqCombineListViewManager_OnClickNormalStatus__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    v7 = (SvtEqCombineListViewManager_RequestCallbackFunc_o *)sub_1C1AE20(SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo);
    SvtEqCombineListViewManager_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_SvtEqCombineListViewManager_EndClickTabStatus__,
      v8);
    SvtEqCombineListViewManager__StatusRequest(this, v7, v9);
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickReleaseAll(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4BCB873 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SvtEqCombineListViewManager_OnClickReleaseAll__, method);
    byte_4BCB873 = 1;
  }
  v3 = Method_SvtEqCombineListViewManager_OnClickReleaseAll__;
  if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickReleaseAll__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C1ABEC(Method_SvtEqCombineListViewManager_OnClickReleaseAll__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
  SvtEqCombineListViewManager__ReleaseAll(this, v5);
}


void __fastcall SvtEqCombineListViewManager__OnClickScaleChange(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  SvtEqCombineListViewManager_o *v14; // x0
  int v15; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  ListViewSort_o *sort; // x0
  int32_t v18; // w1
  UISprite_o *scaleChangeButtonSprite; // x20
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2

  if ( (byte_4BCB885 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SvtEqCombineListViewManager_OnClickScaleChange__, method);
    byte_4BCB885 = 1;
  }
  v3 = Method_SvtEqCombineListViewManager_OnClickScaleChange__;
  if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C1ABEC(Method_SvtEqCombineListViewManager_OnClickScaleChange__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v14 = this;
    v15 = 2;
    goto LABEL_11;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v14 = this;
    v15 = 3;
    goto LABEL_11;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v14 = this;
    v15 = 1;
LABEL_11:
    v14->fields.seed = smallSizeSeed;
    p_seed = &v14->fields.seed;
    *((_DWORD *)p_seed + 159) = v15;
    sub_1C1AB78((PartyOrganizationUtility_o *)p_seed, (int64_t)smallSizeSeed, v6, v7, v8, v9, v10, v11);
  }
  sort = this->fields.sort;
  if ( !sort
    || (v18 = this->fields.scaleType,
        sort->fields.iconScaleKind = v18,
        scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, v18, 0LL),
        !scaleChangeButtonSprite) )
  {
    sub_1C1AE30(sort, v5);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL);
  SvtEqCombineListViewManager__ModifyList(this, 1, v20);
  SvtEqCombineListViewManager__SetMode_46787164(this, 2, v21);
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
  __int64 methodPtr_low; // x9
  struct UserServantEntity_o *baseUsrSvtData; // x8
  SvtEqCombineListViewItem_o *v10; // x21
  __int128 v11; // q1
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *tempMtSvtList; // x8
  int32_t size; // w2
  int v22; // w9
  int32_t v23; // w22
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  int64_t userSvtEntity; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  SvtEqCombineListViewManager_o *v33; // x0
  ListViewObject_o *v34; // x1
  const MethodInfo *v35; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+20h] [xbp-50h]

  v4 = this;
  if ( (byte_4BCB876 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__, obj);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    sub_1C1ABD4(&Method_SvtEqCombineListViewManager_OnClickSelectBase__, v6);
    this = (SvtEqCombineListViewManager_o *)sub_1C1ABD4(&SvtEqCombineListViewObject_TypeInfo, v7);
    byte_4BCB876 = 1;
  }
  if ( !obj )
    goto LABEL_31;
  methodPtr_low = LOBYTE(SvtEqCombineListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (SvtEqCombineListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    sub_1C1B0F0(obj);
    SvtEqCombineListViewManager__OnClickListView(v33, v34, v35);
    return;
  }
  this = (SvtEqCombineListViewManager_o *)SvtEqCombineListViewObject__GetItem(
                                            (SvtEqCombineListViewObject_o *)obj,
                                            (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo);
  baseUsrSvtData = v4->fields.baseUsrSvtData;
  v10 = (SvtEqCombineListViewItem_o *)this;
  if ( baseUsrSvtData )
  {
    v11 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v37.fields.fakeValue = v11;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v36 = v37;
    this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(
                                              &v36,
                                              0LL);
    if ( !v10 )
      goto LABEL_31;
    if ( this == (SvtEqCombineListViewManager_o *)SvtEqCombineListViewItem__get_UserSvtId(v10, (const MethodInfo *)obj) )
    {
      v12 = Method_SvtEqCombineListViewManager_OnClickSelectBase__;
      if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickSelectBase__ + 83) & 2) != 0 )
        v12 = (_QWORD *)sub_1C1ABEC(Method_SvtEqCombineListViewManager_OnClickSelectBase__);
      v13 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v12, v12[4]);
      OverwriteAssetSoundName__PlaySystemSe(v13, 1, 0, 0LL);
      v4->fields.baseUsrSvtData = 0LL;
      sub_1C1AB78((PartyOrganizationUtility_o *)&v4->fields.baseUsrSvtData, 0LL, v14, v15, v16, v17, v18, v19);
      tempMtSvtList = v4->fields.tempMtSvtList;
      if ( tempMtSvtList )
      {
        size = tempMtSvtList->fields._size;
        v22 = tempMtSvtList->fields._version + 1;
        tempMtSvtList->fields._size = 0;
        tempMtSvtList->fields._version = v22;
        if ( size >= 1 )
          System_Array__Clear((System_Array_o *)tempMtSvtList->fields._items, 0, size, 0LL);
        goto LABEL_26;
      }
LABEL_31:
      sub_1C1AE30(this, obj);
    }
  }
  else if ( !this )
  {
    goto LABEL_31;
  }
  if ( v10->fields.type )
  {
    v23 = 0;
  }
  else if ( v10->fields.isLvMax && v10->fields.isLimitCntMax )
  {
    v23 = 2;
  }
  else
  {
    v23 = 2 * v10->fields.isSvtEqMaterial;
  }
  v24 = Method_SvtEqCombineListViewManager_OnClickSelectBase__;
  if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickSelectBase__ + 83) & 2) != 0 )
    v24 = (_QWORD *)sub_1C1ABEC(Method_SvtEqCombineListViewManager_OnClickSelectBase__);
  v25 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v24, v24[4]);
  OverwriteAssetSoundName__PlaySystemSe(v25, v23, 0, 0LL);
  userSvtEntity = (int64_t)v10->fields.userSvtEntity;
  v4->fields.baseUsrSvtData = (struct UserServantEntity_o *)userSvtEntity;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v4->fields.baseUsrSvtData, userSvtEntity, v27, v28, v29, v30, v31, v32);
LABEL_26:
  this = (SvtEqCombineListViewManager_o *)v4->fields.combineRootComponent;
  if ( !this )
    goto LABEL_31;
  CombineRootComponent__SetBackSelect((CombineRootComponent_o *)this, v4->fields.baseUsrSvtData != 0LL, 0LL);
  this = (SvtEqCombineListViewManager_o *)v4->fields.combineRootComponent;
  if ( !this )
    goto LABEL_31;
  if ( HIDWORD(this->fields.haveQpLabel) == 4 )
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
  __int64 methodPtr_low; // x9
  ListViewItem_o *v10; // x20
  const MethodInfo *v11; // x1
  int32_t selectNum; // w21
  _BOOL8 v13; // x0
  __int64 v14; // x1
  int32_t klass; // w9
  int32_t selectSum; // w8
  void *v17; // x0
  int v18; // w1
  __int64 v19; // x20
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4BCB877 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, obj);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    this = (SvtEqCombineListViewManager_o *)sub_1C1ABD4(&SvtEqCombineListViewObject_TypeInfo, v8);
    byte_4BCB877 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( !obj )
    goto LABEL_21;
  methodPtr_low = LOBYTE(SvtEqCombineListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (SvtEqCombineListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    sub_1C1B0F0(obj);
    if ( v18 != 1 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v20,
        (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      sub_1D05664();
    }
    v19 = *(_QWORD *)__cxa_begin_catch(v17);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( v19 )
      sub_1C1AE28(v19);
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
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v20,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( 1 )
      {
        v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v20,
                (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v13 )
          break;
        if ( !v20.fields._current )
          sub_1C1AE30(v13, v14);
        klass = (int32_t)v20.fields._current[1].klass;
        if ( klass > selectNum )
          LODWORD(v20.fields._current[1].klass) = klass - 1;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v20,
        (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      goto LABEL_18;
    }
LABEL_21:
    sub_1C1AE30(this, obj);
  }
  selectSum = v4->fields.selectSum;
  if ( v4->fields.modeKind || selectSum < v4->fields.selectMax )
  {
    v10->fields.selectNum = selectSum;
    v4->fields.selectSum = selectSum + 1;
LABEL_18:
    SvtEqCombineListViewManager__RefrashListDisp(v4, v11);
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickSortAscendingOrder(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4BCB882 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SvtEqCombineListViewManager_OnClickSortAscendingOrder__, method);
    byte_4BCB882 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SvtEqCombineListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C1ABEC(Method_SvtEqCombineListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C1AE30(v5, v6);
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
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  int32_t itemType; // w23
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v11; // x21
  ServantSortSelectMenu_CallbackFunc_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_4BCB880 & 1) == 0 )
  {
    sub_1C1ABD4(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1C1ABD4(&Method_SvtEqCombineListViewManager_EndSelectSortKind__, v4);
    sub_1C1ABD4(&Method_SvtEqCombineListViewManager_OnClickSortKind__, v5);
    byte_4BCB880 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_SvtEqCombineListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C1ABEC(Method_SvtEqCombineListViewManager_OnClickSortKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    itemType = this->fields.itemType;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v11 = (CommonUI_o *)Instance;
    v12 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1C1AE20(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v12,
      (Il2CppObject *)this,
      Method_SvtEqCombineListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v11 )
      sub_1C1AE30(v13, v14);
    CommonUI__OpenServantSortSelectMenu(v11, 2, sort, itemType == 1, v12, 0LL);
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
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  SvtEqCombineListViewItem_c *v13; // x1
  __int64 methodPtr_low; // x9
  System_Collections_Generic_List_object__o *selectedMtSvtList_k__BackingField; // x0
  const MethodInfo *v16; // x1
  int64_t UserSvtId; // x0
  const MethodInfo *v18; // x1
  UnityEngine_Behaviour_o *scrollView; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct UserServantEntity_o *monitor; // x1
  void *v27; // x0
  int v28; // w1
  __int64 v29; // x22
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4BCB879 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__, item);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__get_Current__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v8);
    sub_1C1ABD4(&SvtEqCombineListViewItem_TypeInfo, v9);
    sub_1C1ABD4(&Method_SvtEqCombineListViewManager_OnLongPushListView__, v10);
    byte_4BCB879 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  if ( (unsigned int)(this->fields.modeKind - 1) >= 2 )
  {
    v11 = Method_SvtEqCombineListViewManager_OnLongPushListView__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1C1ABEC(Method_SvtEqCombineListViewManager_OnLongPushListView__);
    v12 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0LL);
    if ( item
      && ((v13 = SvtEqCombineListViewItem_TypeInfo,
           methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
           LOBYTE(item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
       || (SvtEqCombineListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo) )
    {
      sub_1C1B0F0(item);
      if ( v28 != 1 )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v31,
          (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
        sub_1D05664();
      }
      v29 = *(_QWORD *)__cxa_begin_catch(v27);
      __cxa_end_catch();
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v31,
        (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
      if ( v29 )
        sub_1C1AE28(v29);
    }
    else
    {
      selectedMtSvtList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._selectedMtSvtList_k__BackingField;
      this->fields.isSelectMaterial = 0;
      if ( selectedMtSvtList_k__BackingField && selectedMtSvtList_k__BackingField->fields._size >= 1 )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v30,
          selectedMtSvtList_k__BackingField,
          (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__);
        v31 = v30;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v31,
                  (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__) )
        {
          if ( !v31.fields._current )
            sub_1C1AE30(0LL, v16);
          UserSvtId = SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)v31.fields._current, v16);
          if ( !item )
            sub_1C1AE30(UserSvtId, v18);
          if ( UserSvtId == SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)item, v18) )
            this->fields.isSelectMaterial = 1;
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v31,
          (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
      }
    }
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !scrollView
      || (UnityEngine_Behaviour__set_enabled(scrollView, 0, 0LL), !item)
      || (monitor = (struct UserServantEntity_o *)item[1].monitor,
          this->fields.selectUsrSvtEntity = monitor,
          sub_1C1AB78(
            (PartyOrganizationUtility_o *)&this->fields.selectUsrSvtEntity,
            (int64_t)monitor,
            v20,
            v21,
            v22,
            v23,
            v24,
            v25),
          (scrollView = (UnityEngine_Behaviour_o *)this->fields.combineRootComponent) == 0LL) )
    {
      sub_1C1AE30(scrollView, v13);
    }
    if ( *((_DWORD *)&scrollView[18].fields + 1) == 4 )
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  UIScrollView_o *v14; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4BCB86C & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BCB86C = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          sub_1C1AE30(v14, v7);
        }
        UIScrollView__UpdatePosition(v14, 0LL);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
      if ( callbackFunc2 )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
          callbackFunc2->fields.original_method_info,
          *(_QWORD *)&callbackFunc2->fields.extra_arg);
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
  __int64 v23; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x20
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t CombineQpSvtEq; // w0
  const MethodInfo *v27; // x2
  int32_t v28; // w21
  __int64 itemList; // x0
  _BOOL8 v30; // x0
  __int64 v31; // x1
  SvtEqCombineListViewItem_o *current; // x22
  __int64 methodPtr_low; // x9
  __int64 v34; // x1
  UserServantEntity_o *v35; // x0
  const MethodInfo *v36; // x1
  UserServantEntity_o *v37; // x0
  int32_t addTotalExp; // w24
  UILabel_o *selectInfoLabel; // x21
  System_String_o *v40; // x22
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  Il2CppObject *v44; // x23
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  Il2CppObject *v48; // x0
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_object__o *combineEventList; // x0
  _BOOL8 v54; // x0
  __int64 v55; // x1
  Il2CppObject *v56; // x24
  int klass_high; // w8
  float v58; // s8
  int32_t selectExp; // s9
  float v60; // s0
  int32_t v61; // w8
  float v62; // s8
  int32_t selectQp; // s9
  float v64; // s0
  int32_t v65; // w8
  UILabel_o *spendQpLabel; // x21
  Il2CppObject *v67; // x0
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  float v71; // s1
  float v72; // s0
  float v73; // s3
  float v74; // s2
  UILabel_o *getBasicExpLabel; // x21
  Il2CppObject *v76; // x0
  UILabel_o *getAccExpLabel; // x21
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  Il2CppObject *v81; // x0
  const MethodInfo *v82; // x2
  struct UserServantEntity_o *v83; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v84; // x21
  __int64 v85; // x22
  __int64 v86; // x23
  int32_t v87; // w8
  const MethodInfo *v88; // x4
  int32_t LevelMax; // w21
  struct UserServantEntity_o *v90; // x8
  int32_t increLv; // w22
  int32_t lv; // w23
  bool v93; // w22
  _BOOL8 v94; // x0
  __int64 v95; // x1
  Il2CppObject *v96; // x21
  __int64 v97; // x9
  bool v98; // w1
  SvtEqCombineListViewManager_o *v99; // x0
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *tempMtSvtList; // x8
  int32_t size; // w8
  int32_t v102; // w21
  int32_t selectMax; // [xsp+4h] [xbp-CCh] BYREF
  System_Collections_Generic_List_Enumerator_object__o v104; // [xsp+8h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v105; // [xsp+20h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v106; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // 0:x0.16

  if ( (byte_4BCB85E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v9);
    sub_1C1ABD4(&int_TypeInfo, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Count__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v14);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v15);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Item__, v16);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v17);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1C1ABD4(&SvtEqCombineListViewItem_TypeInfo, v20);
    sub_1C1ABD4(&StringLiteral_25393/*"{0:N0}"*/, v21);
    sub_1C1ABD4(&StringLiteral_12610/*"SUM_INFO"*/, v22);
    byte_4BCB85E = 1;
  }
  memset(&v106, 0, sizeof(v106));
  memset(&v105, 0, sizeof(v105));
  ObjectList = (System_Collections_Generic_List_object__o *)SvtEqCombineListViewManager__get_ObjectList(this, method);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  *(_QWORD *)&this->fields.selectQp = 0LL;
  this->fields.addTotalExp = 0;
  this->fields.isAllUpMax = 0;
  if ( baseUsrSvtData && this->fields.itemType == 1 )
  {
    CombineQpSvtEq = UserServantEntity__getCombineQpSvtEq(baseUsrSvtData, 0LL);
    v28 = SvtEqCombineListViewManager__CheckCompareQp(this, CombineQpSvtEq, v27);
  }
  else
  {
    v28 = 0;
  }
  itemList = (__int64)this->fields.itemList;
  if ( !itemList )
    goto LABEL_95;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v104,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v106 = v104;
  while ( 1 )
  {
    v30 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v106,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v30 )
      break;
    current = (SvtEqCombineListViewItem_o *)v106.fields._current;
    if ( !v106.fields._current )
      goto LABEL_94;
    methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v106.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (SvtEqCombineListViewItem_c *)v106.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      sub_1C1B0F0(v106.fields._current);
LABEL_94:
      sub_1C1AE30(v30, v31);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v106.fields._current, 0LL) )
    {
      v35 = this->fields.baseUsrSvtData;
      this->fields.selectQp += v28;
      if ( !v35 )
        goto LABEL_97;
      if ( !UserServantEntity__isLevelMax(v35, 0LL) )
        goto LABEL_19;
      v37 = this->fields.baseUsrSvtData;
      if ( !v37 )
        sub_1C1AE30(0LL, v36);
      if ( UserServantEntity__isLevelMax(v37, 0LL) && current->fields.isLimitCntTarget )
      {
LABEL_19:
        addTotalExp = this->fields.addTotalExp;
        this->fields.selectExp += current->fields.materialExp;
        this->fields.addTotalExp = SvtEqCombineListViewItem__get_GetAddTotalExp(current, v36) + addTotalExp;
      }
    }
    else
    {
      current->fields.isMaxSelect = this->fields.selectSum >= this->fields.selectMax;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v106,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  selectInfoLabel = this->fields.selectInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_12610/*"SUM_INFO"*/, 0LL);
  LODWORD(v104.fields._list) = this->fields.selectSum;
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v104, v41, v42, v43);
  selectMax = this->fields.selectMax;
  v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &selectMax, v45, v46, v47);
  itemList = (__int64)System_String__Format_63054740(v40, v44, v48, 0LL);
  if ( !selectInfoLabel )
    goto LABEL_95;
  UILabel__set_text(selectInfoLabel, (System_String_o *)itemList, 0LL);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_95;
  combineEventList = (System_Collections_Generic_List_object__o *)menuListCtr->fields.combineEventList;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v104,
      combineEventList,
      (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v105 = v104;
    while ( 1 )
    {
      v54 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v105,
              (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v54 )
        break;
      v56 = v105.fields._current;
      if ( !v105.fields._current )
        sub_1C1AE30(v54, v55);
      klass_high = HIDWORD(v105.fields._current[1].klass);
      if ( klass_high == 17 )
      {
        v58 = *(float *)&v105.fields._current[3].monitor;
        selectExp = this->fields.selectExp;
        if ( !byte_4BC27F5 )
        {
          sub_1C1ABD4(&System_Math_TypeInfo, v55);
          byte_4BC27F5 = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v60 = v58 * (float)selectExp;
        v61 = vcvtps_s32_f32(v60);
        if ( ceilf(v60) == INFINITY )
          v61 = 0x80000000;
        this->fields.selectExp = v61;
        klass_high = HIDWORD(v56[1].klass);
      }
      if ( klass_high == 16 )
      {
        v62 = *(float *)&v56[3].monitor;
        selectQp = this->fields.selectQp;
        if ( !byte_4BC27F5 )
        {
          sub_1C1ABD4(&System_Math_TypeInfo, v55);
          byte_4BC27F5 = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v64 = v62 * (float)selectQp;
        v65 = vcvtps_s32_f32(v64);
        if ( ceilf(v64) == INFINITY )
          v65 = 0x80000000;
        this->fields.selectQp = v65;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v105,
      (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  spendQpLabel = this->fields.spendQpLabel;
  LODWORD(v104.fields._list) = this->fields.selectQp;
  v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v104, v49, v50, v51);
  itemList = (__int64)System_String__Format((System_String_o *)StringLiteral_25393/*"{0:N0}"*/, v67, 0LL);
  if ( !spendQpLabel )
LABEL_95:
    sub_1C1AE30(itemList, v23);
  UILabel__set_text(spendQpLabel, (System_String_o *)itemList, 0LL);
  if ( this->fields.itemType == 1 )
  {
    itemList = (__int64)this->fields.spendQpLabel;
    v71 = 0.0;
    if ( this->fields.selectQp <= this->fields.userQP )
      v71 = 1.0;
    if ( !itemList )
      goto LABEL_95;
    v72 = 1.0;
    v73 = 1.0;
    v74 = v71;
    UIWidget__set_color((UIWidget_o *)itemList, *(UnityEngine_Color_o *)(&v71 - 1), 0LL);
  }
  getBasicExpLabel = this->fields.getBasicExpLabel;
  LODWORD(v104.fields._list) = this->fields.selectExp;
  v76 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v104, v68, v69, v70);
  itemList = (__int64)System_String__Format((System_String_o *)StringLiteral_25393/*"{0:N0}"*/, v76, 0LL);
  if ( !getBasicExpLabel )
    goto LABEL_95;
  UILabel__set_text(getBasicExpLabel, (System_String_o *)itemList, 0LL);
  getAccExpLabel = this->fields.getAccExpLabel;
  selectMax = this->fields.addTotalExp;
  v81 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &selectMax, v78, v79, v80);
  itemList = (__int64)System_String__Format((System_String_o *)StringLiteral_25393/*"{0:N0}"*/, v81, 0LL);
  if ( !getAccExpLabel )
    goto LABEL_95;
  UILabel__set_text(getAccExpLabel, (System_String_o *)itemList, 0LL);
  if ( this->fields.baseUsrSvtData && this->fields.itemType == 1 )
  {
    itemList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !itemList )
      goto LABEL_95;
    itemList = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)itemList,
                          (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantMaster___);
    v83 = this->fields.baseUsrSvtData;
    if ( !v83 )
      goto LABEL_95;
    v84 = (DataMasterBase_TMaster__TEntity__PKType__o *)itemList;
    v86 = *(_QWORD *)&v83->fields.svtId.fields.currentCryptoKey;
    v85 = *(_QWORD *)&v83->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v107.fields.currentCryptoKey = v86;
    *(_QWORD *)&v107.fields.fakeValue = v85;
    itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v107, 0LL);
    if ( !v84 )
      goto LABEL_95;
    itemList = (__int64)DataMasterBase_object__object__int___GetEntity(
                          v84,
                          itemList,
                          (const MethodInfo_3248678 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !itemList )
      goto LABEL_95;
    v87 = *(_DWORD *)(itemList + 132);
    itemList = (__int64)this->fields.baseUsrSvtData;
    this->fields.expType = v87;
    if ( !itemList )
      goto LABEL_95;
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
                     v88);
      while ( (itemList & 1) == 0 );
      v90 = this->fields.baseUsrSvtData;
      if ( !v90 )
        goto LABEL_95;
      itemList = (__int64)this->fields.levelUpInfoImg;
      if ( !itemList )
        goto LABEL_95;
      increLv = this->fields.increLv;
      lv = v90->fields.lv;
      itemList = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemList, 0LL);
      if ( !itemList )
        goto LABEL_95;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, increLv - lv > 0, 0LL);
    }
    itemList = (__int64)this->fields.itemList;
    if ( !itemList )
      goto LABEL_95;
    v93 = this->fields.increLv >= LevelMax;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v104,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v106 = v104;
    while ( 1 )
    {
      v94 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v106,
              (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v94 )
        break;
      v96 = v106.fields._current;
      if ( !v106.fields._current )
        sub_1C1AE30(v94, v95);
      v97 = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v106.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v97
        || (SvtEqCombineListViewItem_c *)v106.fields._current->klass->_2.typeHierarchy[v97 - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        sub_1C1B0F0(v106.fields._current);
LABEL_97:
        sub_1C1AE30(v35, v34);
      }
      if ( !ListViewItem__get_IsSelect((ListViewItem_o *)v106.fields._current, 0LL) )
        BYTE2(v96[15].klass) = v93;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v106,
      (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  if ( this->fields.selectSum >= 1 )
  {
    v98 = 1;
    v99 = this;
    goto LABEL_81;
  }
  tempMtSvtList = this->fields.tempMtSvtList;
  if ( !tempMtSvtList )
    goto LABEL_95;
  if ( tempMtSvtList->fields._size <= 0 )
  {
    v99 = this;
    v98 = 0;
LABEL_81:
    SvtEqCombineListViewManager__SetBtnEnable(v99, v98, v82);
    if ( !ObjectList )
      goto LABEL_95;
    goto LABEL_87;
  }
  itemList = (__int64)this->fields.allReleaseButton;
  if ( !itemList )
    goto LABEL_95;
  itemList = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)itemList + 536LL))(
               itemList,
               3LL,
               1LL,
               *(_QWORD *)(*(_QWORD *)itemList + 544LL));
  if ( !ObjectList )
    goto LABEL_95;
LABEL_87:
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    v102 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      itemList = (__int64)System_Collections_Generic_List_object___get_Item(
                            ObjectList,
                            v102,
                            (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Item__);
      if ( !itemList )
        break;
      (*(void (__fastcall **)(__int64, bool, _QWORD))(*(_QWORD *)itemList + 456LL))(
        itemList,
        this->fields.isInput,
        *(_QWORD *)(*(_QWORD *)itemList + 464LL));
      if ( ++v102 >= ObjectList->fields._size )
        return;
    }
    goto LABEL_95;
  }
}


void __fastcall SvtEqCombineListViewManager__ReleaseAll(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *current; // x20
  __int64 methodPtr_low; // x9
  const MethodInfo *v12; // x1
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4BCB874 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v5);
    sub_1C1ABD4(&SvtEqCombineListViewItem_TypeInfo, v6);
    byte_4BCB874 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  if ( this->fields.selectSum >= 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_17;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      itemList,
      (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v14 = v13;
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v14,
             (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v8 )
        break;
      current = v14.fields._current;
      if ( !v14.fields._current )
        goto LABEL_16;
      ListViewItem__set_IsSelect((ListViewItem_o *)v14.fields._current, 0, 0LL);
      methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (SvtEqCombineListViewItem_c *)current->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        sub_1C1B0F0(current);
LABEL_16:
        sub_1C1AE30(v8, v9);
      }
      BYTE2(current[10].monitor) = 0;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    itemList = (System_Collections_Generic_List_object__o *)this->fields.levelUpInfoImg;
    this->fields.selectSum = 0;
    if ( !itemList
      || (itemList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)itemList,
                                                                    0LL)) == 0LL )
    {
LABEL_17:
      sub_1C1AE30(itemList, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, 0, 0LL);
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BCB86A & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__Dispose__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__MoveNext__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__get_Current__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__GetEnumerator__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Count__, v11);
    sub_1C1ABD4(&Method_SvtEqCombineListViewManager_OnMoveEnd__, v12);
    sub_1C1ABD4(&StringLiteral_10123/*"OnMoveEnd"*/, v13);
    byte_4BCB86A = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)SvtEqCombineListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C1AE30(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10123/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_SvtEqCombineListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1C1AE30(v19, v20);
      SvtEqCombineListViewObject__Init_46789276((SvtEqCombineListViewObject_o *)current, mode, v18, delay, v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__RequestListObject_46788248(
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BCB86B & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__Dispose__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__MoveNext__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__get_Current__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__GetEnumerator__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Count__, v9);
    sub_1C1ABD4(&Method_SvtEqCombineListViewManager_OnMoveEnd__, v10);
    sub_1C1ABD4(&StringLiteral_10123/*"OnMoveEnd"*/, v11);
    byte_4BCB86B = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)SvtEqCombineListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C1AE30(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10123/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_SvtEqCombineListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1C1AE30(v17, v18);
      SvtEqCombineListViewObject__Init_46789360((SvtEqCombineListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__Dispose__);
  }
}


void __fastcall SvtEqCombineListViewManager__ResetInit(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_Component_o *levelUpInfoImg; // x0
  __int64 v14; // x1
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *selectedMtSvtList_k__BackingField; // x8
  int32_t size; // w2
  int v17; // w9
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *tempMtSvtList; // x8
  int32_t v19; // w2
  int v20; // w9
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v22; // x1
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BCB875 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v12);
    byte_4BCB875 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  this->fields.baseUsrSvtData = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.baseUsrSvtData, 0LL, v2, v3, v4, v5, v6, v7);
  selectedMtSvtList_k__BackingField = this->fields._selectedMtSvtList_k__BackingField;
  if ( selectedMtSvtList_k__BackingField )
  {
    size = selectedMtSvtList_k__BackingField->fields._size;
    v17 = selectedMtSvtList_k__BackingField->fields._version + 1;
    selectedMtSvtList_k__BackingField->fields._size = 0;
    selectedMtSvtList_k__BackingField->fields._version = v17;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)selectedMtSvtList_k__BackingField->fields._items, 0, size, 0LL);
  }
  tempMtSvtList = this->fields.tempMtSvtList;
  if ( !tempMtSvtList )
    goto LABEL_19;
  v19 = tempMtSvtList->fields._size;
  v20 = tempMtSvtList->fields._version + 1;
  tempMtSvtList->fields._size = 0;
  tempMtSvtList->fields._version = v20;
  if ( v19 >= 1 )
    System_Array__Clear((System_Array_o *)tempMtSvtList->fields._items, 0, v19, 0LL);
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v23,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v23,
              (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( !v23.fields._current )
        sub_1C1AE30(0LL, v22);
      ListViewItem__set_IsSelect((ListViewItem_o *)v23.fields._current, 0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v23,
      (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  levelUpInfoImg = (UnityEngine_Component_o *)this->fields.levelUpInfoImg;
  this->fields.selectSum = 0;
  if ( !levelUpInfoImg
    || (levelUpInfoImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(levelUpInfoImg, 0LL)) == 0LL )
  {
LABEL_19:
    sub_1C1AE30(levelUpInfoImg, v14);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelUpInfoImg, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__SetBtnEnable(
        SvtEqCombineListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  bool v5; // w21
  UnityEngine_Component_o *decideBtnBg; // x0
  float v7; // s0
  float v8; // s3
  float v9; // s1
  float v10; // s2
  __int64 v11; // x1

  v5 = isEnable;
  if ( (byte_4BCB85A & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_UIWidget___, isEnable);
    byte_4BCB85A = 1;
  }
  decideBtnBg = (UnityEngine_Component_o *)this->fields.decideBtnBg;
  this->fields.isDecideFlg = v5;
  if ( !decideBtnBg )
    goto LABEL_12;
  decideBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                             decideBtnBg,
                                             (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v7 = 1.0;
  if ( !this->fields.isDecideFlg )
    v7 = 0.5;
  if ( !decideBtnBg
    || (v8 = 1.0,
        v9 = v7,
        v10 = v7,
        UIWidget__set_color((UIWidget_o *)decideBtnBg, *(UnityEngine_Color_o *)&v7, 0LL),
        (decideBtnBg = (UnityEngine_Component_o *)this->fields.allReleaseButton) == 0LL) )
  {
LABEL_12:
    sub_1C1AE30(decideBtnBg, isEnable);
  }
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
  void *allReleaseButton; // x0
  float v7; // s8
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BCB859 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_UIWidget___, isShow);
    sub_1C1ABD4(&SvtEqCombineListViewManager_TypeInfo, v5);
    byte_4BCB859 = 1;
  }
  allReleaseButton = this->fields.allReleaseButton;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allReleaseButton, 0LL);
  if ( !allReleaseButton )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allReleaseButton, isShow, 0LL);
  allReleaseButton = this->fields.decideButton;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allReleaseButton, 0LL);
  if ( !allReleaseButton )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allReleaseButton, isShow, 0LL);
  allReleaseButton = SvtEqCombineListViewManager_TypeInfo;
  if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
    allReleaseButton = SvtEqCombineListViewManager_TypeInfo;
  }
  if ( !this->fields.spendQpBg )
    goto LABEL_40;
  v7 = **((float **)allReleaseButton + 23);
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this->fields.spendQpBg,
                       (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( isShow )
    v7 = 1.0;
  if ( !allReleaseButton )
    goto LABEL_40;
  v8.fields.a = 1.0;
  v8.fields.r = v7;
  v8.fields.g = v7;
  v8.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v8, 0LL);
  allReleaseButton = this->fields.spendQpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v9.fields.a = 1.0;
  v9.fields.r = v7;
  v9.fields.g = v7;
  v9.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v9, 0LL);
  allReleaseButton = this->fields.spendQpLabel;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v10.fields.a = 1.0;
  v10.fields.r = v7;
  v10.fields.g = v7;
  v10.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v10, 0LL);
  allReleaseButton = this->fields.getExpBg;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v11.fields.a = 1.0;
  v11.fields.r = v7;
  v11.fields.g = v7;
  v11.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v11, 0LL);
  allReleaseButton = this->fields.getExpBgImg;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v12.fields.a = 1.0;
  v12.fields.r = v7;
  v12.fields.g = v7;
  v12.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v12, 0LL);
  allReleaseButton = this->fields.getExpLabel;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v13.fields.a = 1.0;
  v13.fields.r = v7;
  v13.fields.g = v7;
  v13.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v13, 0LL);
  allReleaseButton = this->fields.getBasicExpLabel;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v14.fields.a = 1.0;
  v14.fields.r = v7;
  v14.fields.g = v7;
  v14.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v14, 0LL);
  allReleaseButton = this->fields.getAccExpLabel;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v15.fields.a = 1.0;
  v15.fields.r = v7;
  v15.fields.g = v7;
  v15.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v15, 0LL);
  allReleaseButton = this->fields.haveQpBg;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v16.fields.a = 1.0;
  v16.fields.r = v7;
  v16.fields.g = v7;
  v16.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v16, 0LL);
  allReleaseButton = this->fields.haveQpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v17.fields.a = 1.0;
  v17.fields.r = v7;
  v17.fields.g = v7;
  v17.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v17, 0LL);
  allReleaseButton = this->fields.haveQpLabel;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v18.fields.a = 1.0;
  v18.fields.r = v7;
  v18.fields.g = v7;
  v18.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v18, 0LL);
  allReleaseButton = this->fields.nextExpBg;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v19.fields.a = 1.0;
  v19.fields.r = v7;
  v19.fields.g = v7;
  v19.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v19, 0LL);
  allReleaseButton = this->fields.nextExpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton
    || (v20.fields.a = 1.0,
        v20.fields.r = v7,
        v20.fields.g = v7,
        v20.fields.b = v7,
        UIWidget__set_color((UIWidget_o *)allReleaseButton, v20, 0LL),
        (allReleaseButton = this->fields.nextExpLabel) == 0LL)
    || (allReleaseButton = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)allReleaseButton,
                             (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0LL )
  {
LABEL_40:
    sub_1C1AE30(allReleaseButton, isShow);
  }
  v21.fields.a = 1.0;
  v21.fields.r = v7;
  v21.fields.g = v7;
  v21.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v21, 0LL);
}


void __fastcall SvtEqCombineListViewManager__SetDragEnd(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  int32_t dragStartIndex; // w20
  int32_t dragEndIndex; // w21

  if ( (byte_4BCB88F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SvtEqCombineListViewManager_SetDragEnd__, method);
    byte_4BCB88F = 1;
  }
  v3 = Method_SvtEqCombineListViewManager_SetDragEnd__;
  if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_SetDragEnd__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C1ABEC(Method_SvtEqCombineListViewManager_SetDragEnd__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *itemSortList; // x0
  ListViewItem_o *v11; // x19
  SvtEqCombineListViewItem_c *v12; // x1
  __int64 methodPtr_low; // x9
  int monitor; // w8
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

  if ( (byte_4BCB88D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v7);
    sub_1C1ABD4(&SvtEqCombineListViewItem_TypeInfo, v8);
    sub_1C1ABD4(&SvtEqCombineListViewObject_TypeInfo, v9);
    byte_4BCB88D = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_31;
  itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemSortList,
                                                                index,
                                                                (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !itemSortList )
    goto LABEL_31;
  v11 = (ListViewItem_o *)itemSortList;
  v12 = SvtEqCombineListViewItem_TypeInfo;
  methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (SvtEqCombineListViewItem_c *)itemSortList->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
  {
    goto LABEL_32;
  }
  monitor = (int)itemSortList[6].monitor;
  if ( isDragSelect )
  {
    if ( (monitor & 0x80000000) != 0 )
    {
      LODWORD(itemSortList[6].monitor) = 0;
      v15 = 0;
      if ( SvtEqCombineListViewItem__get_IsCanNotSelect(
             (SvtEqCombineListViewItem_o *)itemSortList,
             (const MethodInfo *)v12) )
      {
        goto LABEL_23;
      }
      v16 = this->fields.isDragSelect;
      IsSelect = ListViewItem__get_IsSelect(v11, 0LL);
      if ( v16 )
      {
        if ( !IsSelect )
        {
          v15 = 1;
          if ( !SvtEqCombineListViewManager__IsSelectEnable(
                  this,
                  (SvtEqCombineListViewItem_o *)v11,
                  this->fields.dragSelectSum,
                  1,
                  v18) )
            goto LABEL_23;
          ++this->fields.dragSelectSum;
          v11[2].fields.sortIndex = 1;
        }
        goto LABEL_22;
      }
      if ( IsSelect )
      {
        v15 = 0;
        v19 = 1;
LABEL_19:
        v11[2].fields.sortIndex = v19;
        goto LABEL_23;
      }
    }
  }
  else if ( (monitor & 0x80000000) == 0 )
  {
    if ( !ListViewItem__get_IsSelect((ListViewItem_o *)itemSortList, 0LL) && v11[2].fields.sortIndex >= 1 )
      --this->fields.dragSelectSum;
    v15 = 0;
    v19 = -1;
    goto LABEL_19;
  }
LABEL_22:
  v15 = 0;
LABEL_23:
  viewObject = (UnityEngine_Object_o *)v11->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
    return v15;
  itemSortList = (System_Collections_Generic_List_object__o *)v11->fields.viewObject;
  if ( !itemSortList )
LABEL_31:
    sub_1C1AE30(itemSortList, *(_QWORD *)&index);
  v21 = LOBYTE(SvtEqCombineListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v21
    && (SvtEqCombineListViewObject_c *)itemSortList->klass->_2.typeHierarchy[v21 - 1] == SvtEqCombineListViewObject_TypeInfo )
  {
    SvtEqCombineListViewObject__SetupDisp(
      (SvtEqCombineListViewObject_o *)itemSortList,
      (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo);
    return v15;
  }
LABEL_32:
  sub_1C1B0F0(itemSortList);
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
  int v5; // w22
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t dragStartIndex; // w8
  int32_t dragEndIndex; // w9
  int32_t v12; // w25
  int32_t v13; // w26
  int32_t v14; // w8
  int32_t v15; // w9
  int v16; // w24
  int32_t v17; // w20
  int32_t v18; // w23
  int v19; // w27
  void *itemSortList; // x0
  _QWORD *v21; // x21
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *v23; // x22
  __int64 v24; // x9
  SvtEqCombineListViewManager_o *v25; // x0
  int32_t v26; // w1
  bool v27; // w2
  const MethodInfo *v28; // x3

  v5 = startIndex;
  if ( (byte_4BCB88C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&startIndex);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v7);
    sub_1C1ABD4(&SvtEqCombineListViewItem_TypeInfo, v8);
    sub_1C1ABD4(&SvtEqCombineListViewObject_TypeInfo, v9);
    byte_4BCB88C = 1;
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
  if ( v5 <= endIndex )
    v14 = endIndex;
  else
    v14 = v5;
  if ( v5 <= endIndex )
    v15 = v5;
  else
    v15 = endIndex;
  if ( v5 < 0 )
    v16 = -1;
  else
    v16 = v14;
  if ( v5 < 0 )
    v17 = -1;
  else
    v17 = v15;
  this->fields.dragStartIndex = v5;
  this->fields.dragEndIndex = endIndex;
  if ( (v13 & 0x80000000) == 0 && v13 <= v12 )
  {
    v18 = v13;
    do
    {
      if ( v18 > v16 || (v17 & 0x80000000) != 0 || v18 < v17 )
        SvtEqCombineListViewManager__SetDragSelect(this, v18, 0, method);
      ++v18;
    }
    while ( v18 <= v12 );
  }
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
    if ( (v17 & 0x80000000) == 0 && this->fields.isDragSelect && v17 <= v16 )
    {
      v19 = this->fields.selectSum + 1;
      while ( 1 )
      {
        itemSortList = this->fields.itemSortList;
        if ( !itemSortList
          || (itemSortList = System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)itemSortList,
                               v17,
                               (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__)) == 0LL )
        {
LABEL_62:
          sub_1C1AE30(itemSortList, *(_QWORD *)&startIndex);
        }
        *(_QWORD *)&startIndex = SvtEqCombineListViewItem_TypeInfo;
        v21 = itemSortList;
        methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)itemSortList + 304LL) < (unsigned int)methodPtr_low
          || *(SvtEqCombineListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemSortList + 200LL) + 8 * methodPtr_low - 8) != SvtEqCombineListViewItem_TypeInfo )
        {
          break;
        }
        if ( *((int *)itemSortList + 62) >= 1 )
        {
          *((_DWORD *)itemSortList + 62) = v19;
          v23 = (UnityEngine_Object_o *)*((_QWORD *)itemSortList + 13);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          ++v19;
          if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
          {
            itemSortList = (void *)v21[13];
            if ( !itemSortList )
              goto LABEL_62;
            v24 = LOBYTE(SvtEqCombineListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)itemSortList + 304LL) < (unsigned int)v24
              || *(SvtEqCombineListViewObject_c **)(*(_QWORD *)(*(_QWORD *)itemSortList + 200LL) + 8 * v24 - 8) != SvtEqCombineListViewObject_TypeInfo )
            {
              break;
            }
            SvtEqCombineListViewObject__SetupDisp(
              (SvtEqCombineListViewObject_o *)itemSortList,
              (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo);
          }
        }
        if ( ++v17 > v16 )
          return;
      }
      sub_1C1B0F0(itemSortList);
      SvtEqCombineListViewManager__SetDragSelect(v25, v26, v27, v28);
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
  int32_t v4; // w20
  bool v6; // w21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *itemSortList; // x0
  int size; // w22
  int32_t v12; // w21
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *scrollView; // x20

  v4 = startIndex;
  v6 = isDragSelect;
  if ( (byte_4BCB88E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&startIndex);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v8);
    sub_1C1ABD4(&SvtEqCombineListViewItem_TypeInfo, v9);
    byte_4BCB88E = 1;
  }
  this->fields.dragEndIndex = -1;
  *(_QWORD *)&this->fields.dragSelectSum = 0xFFFFFFFF00000000LL;
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  this->fields.isDragSelect = v6;
  if ( !itemSortList )
    goto LABEL_19;
  size = itemSortList->fields._size;
  if ( size >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    itemSortList,
                                                                    v12,
                                                                    (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemSortList )
        goto LABEL_19;
      *(_QWORD *)&startIndex = SvtEqCombineListViewItem_TypeInfo;
      methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (SvtEqCombineListViewItem_c *)itemSortList->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        break;
      }
      ++v12;
      LODWORD(itemSortList[6].monitor) = -1;
      if ( size == v12 )
        goto LABEL_12;
      itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
      if ( !itemSortList )
        goto LABEL_19;
    }
    sub_1C1B0F0(itemSortList);
LABEL_19:
    sub_1C1AE30(itemSortList, *(_QWORD *)&startIndex);
  }
LABEL_12:
  SvtEqCombineListViewManager__SetDragSelectItem(this, v4, v4, method);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    itemSortList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
    if ( !itemSortList )
      goto LABEL_19;
    UIScrollView__Press((UIScrollView_o *)itemSortList, 0, 0LL);
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

  if ( (byte_4BCB87D & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_17791/*"btn_filter_on"*/, method);
    sub_1C1ABD4(&StringLiteral_17790/*"btn_filter"*/, v3);
    byte_4BCB87D = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1C1AE30(sort, method);
  }
  v6 = (System_String_o **)&StringLiteral_17790/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17791/*"btn_filter_on"*/;
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
  System_Collections_Generic_List_object__o *selectedMtSvtList_k__BackingField; // x0
  int64_t v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x8
  Il2CppObject *current; // x20
  int32_t v16; // w21
  Il2CppObject *Item; // x0
  __int64 v18; // x1
  Il2CppObject *v19; // x22
  __int64 methodPtr_low; // x9
  int64_t UserSvtId; // x0
  const MethodInfo *v22; // x1
  int64_t v23; // x23
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_4BCB85C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__get_Current__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    this = (SvtEqCombineListViewManager_o *)sub_1C1ABD4(&SvtEqCombineListViewItem_TypeInfo, v9);
    byte_4BCB85C = 1;
  }
  memset(&v25, 0, sizeof(v25));
  itemList = v2->fields.itemList;
  if ( !itemList )
    sub_1C1AE30(this, method);
  if ( itemList->fields._size >= 1 )
  {
    selectedMtSvtList_k__BackingField = (System_Collections_Generic_List_object__o *)v2->fields._selectedMtSvtList_k__BackingField;
    if ( selectedMtSvtList_k__BackingField )
    {
      if ( selectedMtSvtList_k__BackingField->fields._size >= 1 )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v24,
          selectedMtSvtList_k__BackingField,
          (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__);
        v25 = v24;
LABEL_8:
        while ( 1 )
        {
          v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v25,
                  (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__);
          if ( (v12 & 1) == 0 )
            break;
          v14 = (System_Collections_Generic_List_object__o *)v2->fields.itemList;
          if ( !v14 )
            goto LABEL_23;
          current = v25.fields._current;
          v16 = 0;
          while ( 1 )
          {
            if ( v16 >= v14->fields._size )
              goto LABEL_8;
            Item = System_Collections_Generic_List_object___get_Item(
                     v14,
                     v16,
                     (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
            v19 = Item;
            if ( !Item )
              sub_1C1AE30(0LL, v18);
            methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
              || (SvtEqCombineListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
            {
              sub_1C1B0F0(Item);
LABEL_23:
              sub_1C1AE30(v12, v13);
            }
            UserSvtId = SvtEqCombineListViewItem__get_UserSvtId(
                          (SvtEqCombineListViewItem_o *)Item,
                          (const MethodInfo *)SvtEqCombineListViewItem_TypeInfo);
            if ( !current )
              sub_1C1AE30(UserSvtId, v22);
            v23 = UserSvtId;
            v12 = SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)current, v22);
            if ( v23 == v12 )
              break;
            v14 = (System_Collections_Generic_List_object__o *)v2->fields.itemList;
            ++v16;
            if ( !v14 )
              goto LABEL_23;
          }
          BYTE4(v19[15].monitor) = 1;
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v25,
          (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  SvtEqCombineListViewManager__SetMode_46787164(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__SetMode_46787164(
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
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  UnityEngine_Behaviour_o *itemList; // x0
  int32_t v14; // w1
  char v15; // w22
  _BOOL8 v16; // x0
  __int64 v17; // x1
  ListViewItem_o *current; // x21
  __int64 methodPtr_low; // x9
  const MethodInfo *v20; // x1
  int32_t selectNum; // w27
  __int64 v22; // x1
  struct System_Collections_Generic_List_ListViewItem__o *v23; // x0
  _BOOL8 v24; // x0
  __int64 v25; // x1
  int32_t klass; // w9
  const MethodInfo *v27; // x1
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4BCB869 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&mode);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v8);
    sub_1C1ABD4(&SvtEqCombineListViewItem_TypeInfo, v9);
    byte_4BCB869 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  memset(&v29, 0, sizeof(v29));
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, (mode & 0xFFFFFFFE) == 2, 0LL);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    itemList = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !itemList )
      goto LABEL_39;
    if ( !UnityEngine_Behaviour__get_enabled(itemList, 0LL) )
    {
      itemList = (UnityEngine_Behaviour_o *)this->fields.scrollView;
      if ( !itemList )
        goto LABEL_39;
      UnityEngine_Behaviour__set_enabled(itemList, 1, 0LL);
      itemList = (UnityEngine_Behaviour_o *)this->fields.scrollView;
      if ( !itemList )
        goto LABEL_39;
      UIScrollView__UpdatePosition((UIScrollView_o *)itemList, 0LL);
    }
  }
  if ( (unsigned int)(mode - 1) < 2 )
  {
    itemList = (UnityEngine_Behaviour_o *)this->fields.itemList;
    if ( itemList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v28,
        (System_Collections_Generic_List_object__o *)itemList,
        (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v30 = v28;
      v15 = 0;
      while ( 1 )
      {
        v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v30,
                (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v16 )
          break;
        current = (ListViewItem_o *)v30.fields._current;
        if ( !v30.fields._current )
          goto LABEL_38;
        methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v30.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (SvtEqCombineListViewItem_c *)v30.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
        {
          sub_1C1B0F0(v30.fields._current);
LABEL_38:
          sub_1C1AE30(v16, v17);
        }
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v30.fields._current, 0LL)
          && SvtEqCombineListViewItem__get_IsCanNotSelect((SvtEqCombineListViewItem_o *)current, v20) )
        {
          selectNum = current->fields.selectNum;
          ListViewItem__set_IsSelect(current, 0, 0LL);
          v23 = this->fields.itemList;
          --this->fields.selectSum;
          if ( !v23 )
            sub_1C1AE30(0LL, v22);
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v28,
            (System_Collections_Generic_List_object__o *)v23,
            (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v29 = v28;
          while ( 1 )
          {
            v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v29,
                    (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v24 )
              break;
            if ( !v29.fields._current )
              sub_1C1AE30(v24, v25);
            klass = (int32_t)v29.fields._current[1].klass;
            if ( klass > selectNum )
              LODWORD(v29.fields._current[1].klass) = klass - 1;
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v29,
            (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          v15 = 1;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v30,
        (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( (v15 & 1) != 0 )
        SvtEqCombineListViewManager__RefrashListDisp(this, v27);
      if ( mode == 2 )
        v14 = 4;
      else
        v14 = 2;
      goto LABEL_35;
    }
LABEL_39:
    sub_1C1AE30(itemList, v11);
  }
  if ( mode != 3 )
    return;
  v14 = 5;
LABEL_35:
  SvtEqCombineListViewManager__RequestListObject_46788248(this, v14, v12);
}


void __fastcall SvtEqCombineListViewManager__SetMode_46788196(
        SvtEqCombineListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc2,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  SvtEqCombineListViewManager__SetMode_46787164(this, mode, v10);
}


void __fastcall SvtEqCombineListViewManager__SetObjectItem(
        SvtEqCombineListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  SvtEqCombineListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x9
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4BCB868 & 1) == 0 )
  {
    this = (SvtEqCombineListViewManager_o *)sub_1C1ABD4(&SvtEqCombineListViewObject_TypeInfo, obj);
    byte_4BCB868 = 1;
  }
  if ( !obj )
LABEL_11:
    sub_1C1AE30(this, obj);
  methodPtr_low = LOBYTE(SvtEqCombineListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (SvtEqCombineListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    sub_1C1B0F0(obj);
    goto LABEL_11;
  }
  if ( v5->fields.initMode == 2 )
    v7 = 4;
  else
    v7 = 2;
  SvtEqCombineListViewObject__Init_46787040((SvtEqCombineListViewObject_o *)obj, v7, (const MethodInfo *)item);
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
    sub_1C1AE30(0LL, isEnable);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.baseUsrSvtData = resData;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.baseUsrSvtData,
    (int64_t)resData,
    (int64_t)method,
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  char *combineData; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x1
  struct SetCombineData_o *v32; // x8
  System_Collections_Generic_Dictionary_long__bool__o *v33; // x20
  _BOOL8 v34; // x0
  const MethodInfo *v35; // x1
  SvtEqCombineListViewItem_o *current; // x21
  const MethodInfo *v37; // x1
  int64_t UserSvtId; // x0
  int isUseRecommendSupportEquip; // w8
  struct SetCombineData_o *v40; // x21
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4BCB871 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_long__bool__Add__, selectedItems);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_long__bool___ctor__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_long__bool__get_Count__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_long__bool__get_Keys__, v7);
    sub_1C1ABD4(&System_Collections_Generic_Dictionary_long__bool__TypeInfo, v8);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_ToArray_long___, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__get_Current__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__, v13);
    sub_1C1ABD4(&SetCombineData_TypeInfo, v14);
    byte_4BCB871 = 1;
  }
  memset(&v55, 0, sizeof(v55));
  v15 = (SetCombineData_o *)sub_1C1AE20(SetCombineData_TypeInfo);
  SetCombineData___ctor(v15, 0LL);
  p_combineData = &this->fields.combineData;
  this->fields.combineData = v15;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.combineData, (int64_t)v15, v17, v18, v19, v20, v21, v22);
  combineData = (char *)this->fields.combineData;
  if ( !combineData )
    goto LABEL_23;
  baseUsrSvtData = this->fields.baseUsrSvtData;
  *((_QWORD *)combineData + 2) = baseUsrSvtData;
  sub_1C1AB78((PartyOrganizationUtility_o *)(combineData + 16), (int64_t)baseUsrSvtData, v24, v25, v26, v27, v28, v29);
  v32 = *p_combineData;
  if ( !*p_combineData )
    goto LABEL_23;
  *(_OWORD *)&v32->fields.selectSum = *(_OWORD *)&this->fields.selectSum;
  *(_QWORD *)&v32->fields.getHpAdjustVal = *(_QWORD *)&this->fields.getHpUpVal;
  v32->fields.isAdjustMax = this->fields.isAllUpMax;
  v33 = (System_Collections_Generic_Dictionary_long__bool__o *)sub_1C1AE20(System_Collections_Generic_Dictionary_long__bool__TypeInfo);
  System_Collections_Generic_Dictionary_long__bool____ctor(
    v33,
    (const MethodInfo_32D4F98 *)Method_System_Collections_Generic_Dictionary_long__bool___ctor__);
  if ( !selectedItems )
    goto LABEL_23;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v54,
    (System_Collections_Generic_List_object__o *)selectedItems,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__);
  v55 = v54;
  while ( 1 )
  {
    v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v55,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__);
    if ( !v34 )
      break;
    current = (SvtEqCombineListViewItem_o *)v55.fields._current;
    if ( !v55.fields._current )
      sub_1C1AE30(v34, v35);
    if ( SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)v55.fields._current, v35) >= 1 )
    {
      UserSvtId = SvtEqCombineListViewItem__get_UserSvtId(current, v37);
      if ( current->fields.isEquiped || current->fields.isUseSupportEquip )
      {
        isUseRecommendSupportEquip = 1;
        if ( !v33 )
          goto LABEL_15;
      }
      else
      {
        isUseRecommendSupportEquip = current->fields.isUseRecommendSupportEquip;
        if ( !v33 )
LABEL_15:
          sub_1C1AE30(UserSvtId, UserSvtId);
      }
      System_Collections_Generic_Dictionary_long__bool___Add(
        v33,
        UserSvtId,
        isUseRecommendSupportEquip != 0,
        (const MethodInfo_32D5978 *)Method_System_Collections_Generic_Dictionary_long__bool__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v55,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
  if ( !v33 )
    goto LABEL_23;
  if ( System_Collections_Generic_Dictionary_long__bool___get_Count(
         v33,
         (const MethodInfo_32D561C *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__) <= 0 )
    return;
  v40 = *p_combineData;
  Keys = System_Collections_Generic_Dictionary_long__bool___get_Keys(
           v33,
           (const MethodInfo_32D562C *)Method_System_Collections_Generic_Dictionary_long__bool__get_Keys__);
  combineData = (char *)System_Linq_Enumerable__ToArray_long_(
                          (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                          (const MethodInfo_2FD8DE8 *)Method_System_Linq_Enumerable_ToArray_long___);
  if ( !v40
    || (v40->fields.materialUsrSvtIdList = (struct System_Int64_array *)combineData,
        sub_1C1AB78(
          (PartyOrganizationUtility_o *)&v40->fields.materialUsrSvtIdList,
          (int64_t)combineData,
          v42,
          v43,
          v44,
          v45,
          v46,
          v47),
        (combineData = (char *)*p_combineData) == 0LL) )
  {
LABEL_23:
    sub_1C1AE30(combineData, v23);
  }
  *((_QWORD *)combineData + 8) = v33;
  sub_1C1AB78((PartyOrganizationUtility_o *)(combineData + 64), (int64_t)v33, v48, v49, v50, v51, v52, v53);
}


void __fastcall SvtEqCombineListViewManager__SetSelectedMaterialInfo(
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
  System_Collections_Generic_List_object__o *v13; // x21
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o **p_selectedMtSvtList_k__BackingField; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t itemList; // x0
  SvtEqCombineListViewItem_c *v22; // x1
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *tempMtSvtList; // x8
  int32_t size; // w2
  int v25; // w9
  System_Collections_Generic_List_SvtEqCombineListViewItem__o *SelectedMaterialList; // x21
  System_Collections_Generic_List_long__o *v27; // x22
  int v28; // w24
  int32_t v29; // w23
  __int64 methodPtr_low; // x9
  struct System_Int64_array *items; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  struct System_Int64_array *v34; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  const MethodInfo *v41; // x2
  SvtEqCombineListViewManager_o *v42; // x0
  System_Collections_Generic_List_SvtEqCombineListViewItem__o *v43; // x1

  if ( (byte_4BCB870 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__AddRange__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long__Add__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long__ToArray__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long___ctor__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9);
    sub_1C1ABD4(&System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo, v10);
    sub_1C1ABD4(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_1C1ABD4(&SvtEqCombineListViewItem_TypeInfo, v12);
    byte_4BCB870 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
  p_selectedMtSvtList_k__BackingField = &this->fields._selectedMtSvtList_k__BackingField;
  this->fields._selectedMtSvtList_k__BackingField = (struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v13;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields._selectedMtSvtList_k__BackingField,
    (int64_t)v13,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  tempMtSvtList = this->fields.tempMtSvtList;
  if ( !tempMtSvtList )
    goto LABEL_25;
  size = tempMtSvtList->fields._size;
  v25 = tempMtSvtList->fields._version + 1;
  tempMtSvtList->fields._size = 0;
  tempMtSvtList->fields._version = v25;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)tempMtSvtList->fields._items, 0, size, 0LL);
  SelectedMaterialList = SvtEqCombineListViewManager__GetSelectedMaterialList(this, (const MethodInfo *)v22);
  v27 = (System_Collections_Generic_List_long__o *)sub_1C1AE20(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v27,
    (const MethodInfo_3624070 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( !SelectedMaterialList )
    goto LABEL_25;
  v28 = SelectedMaterialList->fields._size;
  if ( v28 < 1 )
  {
LABEL_20:
    itemList = (int64_t)this->fields.tempMtSvtList;
    if ( itemList )
    {
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)itemList,
        (System_Collections_Generic_IEnumerable_T__o *)SelectedMaterialList,
        (const MethodInfo_363CA9C *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__AddRange__);
      itemList = (int64_t)*p_selectedMtSvtList_k__BackingField;
      if ( *p_selectedMtSvtList_k__BackingField )
      {
        System_Collections_Generic_List_object___AddRange(
          (System_Collections_Generic_List_object__o *)itemList,
          (System_Collections_Generic_IEnumerable_T__o *)SelectedMaterialList,
          (const MethodInfo_363CA9C *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__AddRange__);
        if ( v27 )
        {
          v34 = System_Collections_Generic_List_long___ToArray(
                  v27,
                  (const MethodInfo_362637C *)Method_System_Collections_Generic_List_long__ToArray__);
          this->fields.highRarityList = v34;
          sub_1C1AB78(
            (PartyOrganizationUtility_o *)&this->fields.highRarityList,
            (int64_t)v34,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40);
          v42 = this;
          v43 = SelectedMaterialList;
          goto LABEL_24;
        }
      }
    }
LABEL_25:
    sub_1C1AE30(itemList, v22);
  }
  v29 = 0;
  while ( 1 )
  {
    itemList = (int64_t)this->fields.itemList;
    if ( !itemList )
      goto LABEL_25;
    itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)itemList,
                          v29,
                          (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_25;
    v22 = SvtEqCombineListViewItem_TypeInfo;
    methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
      || *(SvtEqCombineListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    if ( *(int *)(itemList + 156) >= 3 )
    {
      itemList = SvtEqCombineListViewItem__get_UserSvtId(
                   (SvtEqCombineListViewItem_o *)itemList,
                   (const MethodInfo *)SvtEqCombineListViewItem_TypeInfo);
      if ( !v27 )
        goto LABEL_25;
      items = v27->fields._items;
      v32 = Method_System_Collections_Generic_List_long__Add__;
      ++v27->fields._version;
      if ( !items )
        goto LABEL_25;
      v33 = v27->fields._size;
      v22 = (SvtEqCombineListViewItem_c *)itemList;
      if ( (unsigned int)v33 >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v27,
          itemList,
          *(const MethodInfo_36248C4 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v27->fields._size = v33 + 1;
        items->m_Items[v33] = itemList;
      }
    }
    if ( v28 == ++v29 )
      goto LABEL_20;
  }
  sub_1C1B0F0(itemList);
LABEL_24:
  SvtEqCombineListViewManager__SetSelectMaterialList(v42, v43, v41);
}


void __fastcall SvtEqCombineListViewManager__SetSelectedSvtList(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *tempMtSvtList; // x1

  tempMtSvtList = this->fields.tempMtSvtList;
  if ( tempMtSvtList )
  {
    this->fields._selectedMtSvtList_k__BackingField = tempMtSvtList;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields._selectedMtSvtList_k__BackingField,
      (int64_t)tempMtSvtList,
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
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct ListViewSort_o *sort; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeButtonSprite; // x23
  Il2CppObject *MasterData_object; // x0
  struct UserServantMaster_o **p_userServantMaster; // x25
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  UserGameEntity_o *SelfUserGame; // x22
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  int32_t qp; // w8
  UILabel_o *haveQpLabel; // x24
  Il2CppObject *v51; // x0
  UILabel_o *nextExpLabel; // x24
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  Il2CppObject *v56; // x0
  UserServantEntity_array *ServantEquipList; // x29
  const MethodInfo *v58; // x2
  int v59; // w20
  int32_t FriendShipSvtEquipNum; // w0
  System_Collections_Generic_List_object__o *v61; // x26
  System_Collections_Generic_List_object__o *v62; // x27
  int max_length; // w8
  __int64 v64; // x21
  UserServantEntity_o **m_Items; // x22
  int64_t v66; // x28
  __int128 v67; // q0
  UserServantEntity_array *v68; // x24
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v70; // q0
  int64_t v71; // x29
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  bool v78; // zf
  struct System_Object_array *items; // x8
  _QWORD *v80; // x9
  __int64 size; // x10
  Il2CppClass **v82; // x0
  UILabel_o *v83; // x26
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x4
  Il2CppObject *v87; // x0
  System_Collections_Generic_List_object__o *v88; // x25
  System_Collections_Generic_List_object__o *v89; // x0
  const MethodInfo *v90; // x2
  int32_t v91; // w24
  __int128 v92; // q0
  struct UserServantEntity_o *v93; // x8
  __int128 v94; // q0
  il2cpp_array_size_t v95; // w20
  int32_t v96; // w0
  int v97; // w20
  UILabel_o *v98; // x25
  __int64 v99; // x2
  __int64 v100; // x3
  __int64 v101; // x4
  Il2CppObject *v102; // x0
  int v103; // w24
  int v104; // w8
  unsigned int v105; // w25
  Il2CppClass **v106; // x20
  Il2CppClass *v107; // x8
  UserServantEntity_o **v108; // x20
  Il2CppClass *v109; // t1
  Il2CppType byval_arg; // q0
  int64_t v111; // x26
  System_Collections_Generic_List_object__o *selectedMtSvtList_k__BackingField; // x8
  int32_t v113; // w27
  _BOOL4 v114; // w28
  int32_t v115; // w23
  UserServantEntity_array *v116; // x21
  UserServantEntity_o *v117; // x29
  UserServantEntity_o *v118; // x20
  int64_t favoriteUserSvtId; // x22
  SvtEqCombineListViewItem_o *v120; // x27
  int64_t v121; // x2
  int32_t v122; // w3
  System_String_o *v123; // x4
  BattleSetupInfo_o *v124; // x5
  FollowerInfo_o *v125; // x6
  PartyListViewItem_o *v126; // x7
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *v127; // x8
  __int64 v128; // x8
  _QWORD *v129; // x9
  __int64 v130; // x10
  __int64 v131; // x8
  UILabel_o *servantInfoLabel; // x20
  System_String_o *v133; // x21
  __int64 v134; // x2
  __int64 v135; // x3
  __int64 v136; // x4
  Il2CppObject *v137; // x22
  __int64 v138; // x2
  __int64 v139; // x3
  __int64 v140; // x4
  Il2CppObject *v141; // x0
  const MethodInfo *v142; // x1
  const MethodInfo *v143; // x1
  const MethodInfo *v144; // [xsp+8h] [xbp-168h]
  int v145; // [xsp+1Ch] [xbp-154h]
  UserGameEntity_o *v148; // [xsp+30h] [xbp-140h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v150; // [xsp+40h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v151; // [xsp+60h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v152; // [xsp+80h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v153; // [xsp+A0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v154; // [xsp+C0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v155; // [xsp+E0h] [xbp-90h] BYREF
  int32_t svtEquipKeep; // [xsp+100h] [xbp-70h] BYREF
  float barExp; // [xsp+104h] [xbp-6Ch] BYREF
  int32_t lateExp[2]; // [xsp+108h] [xbp-68h] BYREF

  if ( (byte_4BCB85B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&type);
    sub_1C1ABD4(&int_TypeInfo, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserServantEntity__Remove__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserServantEntity___ctor___77510248, v14);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v15);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v16);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v17);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__, v18);
    sub_1C1ABD4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v19);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v20);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1C1ABD4(&SvtEqCombineListViewItem_TypeInfo, v23);
    sub_1C1ABD4(&StringLiteral_25393/*"{0:N0}"*/, v24);
    sub_1C1ABD4(&StringLiteral_12610/*"SUM_INFO"*/, v25);
    byte_4BCB85B = 1;
  }
  *(_QWORD *)lateExp = 0LL;
  barExp = 0.0;
  emptyListNoticeLabel = (int64_t)this->fields.emptyListNoticeLabel;
  if ( !emptyListNoticeLabel )
    goto LABEL_112;
  emptyListNoticeLabel = (int64_t)UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)emptyListNoticeLabel,
                                    0LL);
  if ( !emptyListNoticeLabel )
    goto LABEL_112;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 0, 0LL);
  sort = this->fields.sort;
  this->fields.itemType = type;
  if ( !sort )
    goto LABEL_112;
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
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.seed, (int64_t)normalSizeSeed, v27, v28, v29, v30, v31, v32);
  }
  emptyListNoticeLabel = (int64_t)this->fields.sort;
  if ( !emptyListNoticeLabel )
    goto LABEL_112;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  emptyListNoticeLabel = (int64_t)ListViewSort__GetScaleKindSpriteName(
                                    (ListViewSort_o *)emptyListNoticeLabel,
                                    this->fields.scaleType,
                                    0LL);
  if ( !scaleChangeButtonSprite )
    goto LABEL_112;
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)emptyListNoticeLabel, 0LL);
  emptyListNoticeLabel = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !emptyListNoticeLabel )
    goto LABEL_112;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)emptyListNoticeLabel,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = &this->fields.userServantMaster;
  this->fields.userServantMaster = (struct UserServantMaster_o *)MasterData_object;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.userServantMaster,
    (int64_t)MasterData_object,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !SelfUserGame )
    goto LABEL_112;
  qp = SelfUserGame->fields.qp;
  this->fields.userQP = qp;
  haveQpLabel = this->fields.haveQpLabel;
  LODWORD(v155.fields.currentCryptoKey) = qp;
  v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v155, v46, v47, v48);
  emptyListNoticeLabel = (int64_t)System_String__Format((System_String_o *)StringLiteral_25393/*"{0:N0}"*/, v51, 0LL);
  if ( !haveQpLabel )
    goto LABEL_112;
  UILabel__set_text(haveQpLabel, (System_String_o *)emptyListNoticeLabel, 0LL);
  *(_OWORD *)&this->fields.selectSum = 0u;
  *(_QWORD *)&this->fields.getHpUpVal = 0LL;
  this->fields.isAllUpMax = 0;
  lateExp[0] = 0;
  nextExpLabel = this->fields.nextExpLabel;
  svtEquipKeep = 0;
  v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtEquipKeep, v53, v54, v55);
  emptyListNoticeLabel = (int64_t)System_String__Format((System_String_o *)StringLiteral_25393/*"{0:N0}"*/, v56, 0LL);
  if ( !nextExpLabel )
    goto LABEL_112;
  UILabel__set_text(nextExpLabel, (System_String_o *)emptyListNoticeLabel, 0LL);
  v148 = SelfUserGame;
  if ( type )
  {
    v145 = 0;
    ServantEquipList = 0LL;
  }
  else
  {
    emptyListNoticeLabel = (int64_t)this->fields.levelUpInfoImg;
    if ( !emptyListNoticeLabel )
      goto LABEL_112;
    emptyListNoticeLabel = (int64_t)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)emptyListNoticeLabel,
                                      0LL);
    if ( !emptyListNoticeLabel )
      goto LABEL_112;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 0, 0LL);
    emptyListNoticeLabel = (int64_t)*p_userServantMaster;
    if ( !*p_userServantMaster )
      goto LABEL_112;
    emptyListNoticeLabel = (int64_t)UserServantMaster__getServantEquipList(
                                      (UserServantMaster_o *)emptyListNoticeLabel,
                                      0LL);
    if ( !emptyListNoticeLabel )
      goto LABEL_112;
    v59 = *(_DWORD *)(emptyListNoticeLabel + 24);
    ServantEquipList = (UserServantEntity_array *)emptyListNoticeLabel;
    FriendShipSvtEquipNum = SvtEqCombineListViewManager__GetFriendShipSvtEquipNum(
                              (SvtEqCombineListViewManager_o *)emptyListNoticeLabel,
                              (UserServantEntity_array *)emptyListNoticeLabel,
                              v58);
    v145 = v59 - FriendShipSvtEquipNum;
    if ( FriendShipSvtEquipNum <= 0 && v145 <= 0 )
    {
      emptyListNoticeLabel = (int64_t)this->fields.emptyListNoticeLabel;
      if ( !emptyListNoticeLabel )
        goto LABEL_112;
      emptyListNoticeLabel = (int64_t)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)emptyListNoticeLabel,
                                        0LL);
      if ( !emptyListNoticeLabel )
        goto LABEL_112;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 1, 0LL);
    }
    v61 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_56869252(
      v61,
      (System_Collections_Generic_IEnumerable_T__o *)ServantEquipList,
      (const MethodInfo_363C184 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___77510248);
    v62 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v62,
      (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( !this->fields.baseUsrSvtData )
      goto LABEL_76;
    max_length = ServantEquipList->max_length;
    if ( max_length >= 1 )
    {
      v64 = 0LL;
      m_Items = ServantEquipList->m_Items;
      while ( 1 )
      {
        if ( (unsigned int)v64 >= max_length )
LABEL_113:
          sub_1C1AE38(emptyListNoticeLabel, *(_QWORD *)&type);
        v66 = (int64_t)m_Items[v64];
        if ( !v66 )
          break;
        v67 = *(_OWORD *)(v66 + 32);
        v68 = ServantEquipList;
        *(_OWORD *)&v155.fields.currentCryptoKey = *(_OWORD *)(v66 + 16);
        *(_OWORD *)&v155.fields.fakeValue = v67;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v154 = v155;
        emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v154, 0LL);
        baseUsrSvtData = this->fields.baseUsrSvtData;
        if ( !baseUsrSvtData )
          break;
        v70 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
        v71 = emptyListNoticeLabel;
        *(_OWORD *)&v153.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v153.fields.fakeValue = v70;
        emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v153, 0LL);
        v78 = v71 == emptyListNoticeLabel;
        ServantEquipList = v68;
        if ( v78 )
        {
          if ( !v62 )
            break;
          items = v62->fields._items;
          v80 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v62->fields._version;
          if ( !items )
            break;
          size = v62->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v62,
              (Il2CppObject *)v66,
              *(const MethodInfo_363C890 **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
          }
          else
          {
            v82 = &items->obj.klass + size;
            v62->fields._size = size + 1;
            v82[4] = (Il2CppClass *)v66;
            sub_1C1AB78((PartyOrganizationUtility_o *)(v82 + 4), v66, v72, v73, v74, v75, v76, v77);
          }
          if ( !v61 )
            break;
          emptyListNoticeLabel = System_Collections_Generic_List_object___Remove(
                                   v61,
                                   (Il2CppObject *)v66,
                                   (const MethodInfo_363DDB8 *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
        }
        max_length = v68->max_length;
        if ( (int)++v64 >= max_length )
          goto LABEL_48;
      }
LABEL_112:
      sub_1C1AE30(emptyListNoticeLabel, *(_QWORD *)&type);
    }
LABEL_48:
    if ( !v62 )
      goto LABEL_112;
    System_Collections_Generic_List_object___AddRange(
      v62,
      (System_Collections_Generic_IEnumerable_T__o *)v61,
      (const MethodInfo_363CA9C *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    emptyListNoticeLabel = (int64_t)System_Collections_Generic_List_object___ToArray(
                                      v62,
                                      (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    if ( !this->fields.baseUsrSvtData )
      goto LABEL_112;
    ServantEquipList = (UserServantEntity_array *)emptyListNoticeLabel;
    UserServantEntity__getExpInfo(this->fields.baseUsrSvtData, &lateExp[1], lateExp, &barExp, 0LL);
    v83 = this->fields.nextExpLabel;
    LODWORD(v155.fields.currentCryptoKey) = lateExp[0];
    v87 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v155, v84, v85, v86);
    emptyListNoticeLabel = (int64_t)System_String__Format((System_String_o *)StringLiteral_25393/*"{0:N0}"*/, v87, 0LL);
    if ( !v83 )
      goto LABEL_112;
    UILabel__set_text(v83, (System_String_o *)emptyListNoticeLabel, 0LL);
  }
  if ( type != 1 )
  {
    if ( !ServantEquipList )
      goto LABEL_112;
LABEL_76:
    v103 = 0;
    goto LABEL_77;
  }
  emptyListNoticeLabel = (int64_t)*p_userServantMaster;
  if ( !*p_userServantMaster )
    goto LABEL_112;
  ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)emptyListNoticeLabel, 0LL);
  v88 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_56869252(
    v88,
    (System_Collections_Generic_IEnumerable_T__o *)ServantEquipList,
    (const MethodInfo_363C184 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___77510248);
  v89 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v89,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( this->fields.baseUsrSvtData )
  {
    if ( !v88 )
      goto LABEL_112;
    if ( v88->fields._size >= 1 )
    {
      v91 = 0;
      do
      {
        emptyListNoticeLabel = (int64_t)System_Collections_Generic_List_object___get_Item(
                                          v88,
                                          v91,
                                          (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
        if ( !emptyListNoticeLabel )
          goto LABEL_112;
        v92 = *(_OWORD *)(emptyListNoticeLabel + 32);
        *(_OWORD *)&v155.fields.currentCryptoKey = *(_OWORD *)(emptyListNoticeLabel + 16);
        *(_OWORD *)&v155.fields.fakeValue = v92;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v152 = v155;
        emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v152, 0LL);
        v93 = this->fields.baseUsrSvtData;
        if ( !v93 )
          goto LABEL_112;
        v94 = *(_OWORD *)&v93->fields.id.fields.fakeValue;
        *(_OWORD *)&v151.fields.currentCryptoKey = *(_OWORD *)&v93->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v151.fields.fakeValue = v94;
        if ( emptyListNoticeLabel == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v151, 0LL) )
          System_Collections_Generic_List_object___RemoveAt(
            v88,
            v91,
            (const MethodInfo_363E064 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
      }
      while ( ++v91 < v88->fields._size );
    }
    emptyListNoticeLabel = (int64_t)System_Collections_Generic_List_object___ToArray(
                                      v88,
                                      (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    ServantEquipList = (UserServantEntity_array *)emptyListNoticeLabel;
  }
  if ( !ServantEquipList )
    goto LABEL_112;
  v95 = ServantEquipList->max_length;
  v96 = SvtEqCombineListViewManager__GetFriendShipSvtEquipNum(
          (SvtEqCombineListViewManager_o *)emptyListNoticeLabel,
          ServantEquipList,
          v90);
  v97 = v95 - v96;
  if ( v96 <= 0 && v97 <= 0 )
  {
    emptyListNoticeLabel = (int64_t)this->fields.emptyListNoticeLabel;
    if ( !emptyListNoticeLabel )
      goto LABEL_112;
    emptyListNoticeLabel = (int64_t)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)emptyListNoticeLabel,
                                      0LL);
    if ( !emptyListNoticeLabel )
      goto LABEL_112;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 1, 0LL);
  }
  emptyListNoticeLabel = (int64_t)this->fields.baseUsrSvtData;
  v145 = v97;
  if ( !emptyListNoticeLabel )
    goto LABEL_112;
  UserServantEntity__getExpInfo((UserServantEntity_o *)emptyListNoticeLabel, &lateExp[1], lateExp, &barExp, 0LL);
  v98 = this->fields.nextExpLabel;
  LODWORD(v155.fields.currentCryptoKey) = lateExp[0];
  v102 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v155, v99, v100, v101);
  emptyListNoticeLabel = (int64_t)System_String__Format((System_String_o *)StringLiteral_25393/*"{0:N0}"*/, v102, 0LL);
  if ( !v98 )
    goto LABEL_112;
  UILabel__set_text(v98, (System_String_o *)emptyListNoticeLabel, 0LL);
  v103 = 1;
LABEL_77:
  v104 = ServantEquipList->max_length;
  if ( v104 >= 1 )
  {
    v105 = 0;
    while ( 1 )
    {
      if ( v105 >= v104 )
        goto LABEL_113;
      v106 = &ServantEquipList->obj.klass + (int)v105;
      v109 = v106[4];
      v108 = (UserServantEntity_o **)(v106 + 4);
      v107 = v109;
      if ( !v109 )
        goto LABEL_112;
      byval_arg = v107->_1.byval_arg;
      *(_OWORD *)&v155.fields.currentCryptoKey = *(_OWORD *)&v107->_1.name;
      *(Il2CppType *)&v155.fields.fakeValue = byval_arg;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v150 = v155;
      emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v150, 0LL);
      v111 = emptyListNoticeLabel;
      if ( v103 )
      {
        selectedMtSvtList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._selectedMtSvtList_k__BackingField;
        if ( selectedMtSvtList_k__BackingField )
        {
          if ( selectedMtSvtList_k__BackingField->fields._size >= 1 )
            break;
        }
      }
      v114 = 0;
      v115 = 0;
LABEL_96:
      if ( v105 >= ServantEquipList->max_length )
        goto LABEL_113;
      v116 = ServantEquipList;
      v117 = *v108;
      v118 = this->fields.baseUsrSvtData;
      favoriteUserSvtId = v148->fields.favoriteUserSvtId;
      v120 = (SvtEqCombineListViewItem_o *)sub_1C1AE20(SvtEqCombineListViewItem_TypeInfo);
      SvtEqCombineListViewItem___ctor(
        v120,
        type,
        v105,
        v117,
        v111 == favoriteUserSvtId,
        v118,
        v114,
        setupInfo,
        finishSetupInfo,
        v144);
      if ( (v103 & v114) == 1 )
      {
        if ( !v120 )
          goto LABEL_112;
        v120->fields.selectNum = v115;
        v127 = this->fields._selectedMtSvtList_k__BackingField;
        ++this->fields.selectSum;
        if ( !v127 )
          goto LABEL_112;
        if ( v115 == v127->fields._size - 1 )
          v120->fields.isLastSelectMaterial = 1;
      }
      emptyListNoticeLabel = (int64_t)this->fields.itemList;
      if ( !emptyListNoticeLabel )
        goto LABEL_112;
      v128 = *(_QWORD *)(emptyListNoticeLabel + 16);
      v129 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(emptyListNoticeLabel + 28);
      if ( !v128 )
        goto LABEL_112;
      ServantEquipList = v116;
      v130 = *(int *)(emptyListNoticeLabel + 24);
      if ( (unsigned int)v130 >= *(_DWORD *)(v128 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)emptyListNoticeLabel,
          (Il2CppObject *)v120,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v129[4] + 192LL) + 112LL));
      }
      else
      {
        v131 = v128 + 8 * v130;
        *(_DWORD *)(emptyListNoticeLabel + 24) = v130 + 1;
        *(_QWORD *)(v131 + 32) = v120;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v131 + 32), (int64_t)v120, v121, v122, v123, v124, v125, v126);
      }
      v104 = v116->max_length;
      if ( (int)++v105 >= v104 )
        goto LABEL_108;
    }
    v113 = 0;
    v114 = 0;
    v115 = 0;
    while ( 1 )
    {
      emptyListNoticeLabel = (int64_t)System_Collections_Generic_List_object___get_Item(
                                        selectedMtSvtList_k__BackingField,
                                        v113,
                                        (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
      if ( !emptyListNoticeLabel )
        goto LABEL_112;
      emptyListNoticeLabel = SvtEqCombineListViewItem__get_UserSvtId(
                               (SvtEqCombineListViewItem_o *)emptyListNoticeLabel,
                               *(const MethodInfo **)&type);
      selectedMtSvtList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._selectedMtSvtList_k__BackingField;
      if ( !selectedMtSvtList_k__BackingField )
        goto LABEL_112;
      if ( emptyListNoticeLabel == v111 )
        v115 = v113;
      ++v113;
      if ( emptyListNoticeLabel == v111 )
        v114 = 1;
      if ( v113 >= selectedMtSvtList_k__BackingField->fields._size )
        goto LABEL_96;
    }
  }
LABEL_108:
  SvtEqCombineListViewManager__RefrashListDisp(this, *(const MethodInfo **)&type);
  servantInfoLabel = this->fields.servantInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v133 = LocalizationManager__Get((System_String_o *)StringLiteral_12610/*"SUM_INFO"*/, 0LL);
  LODWORD(v155.fields.currentCryptoKey) = v145;
  v137 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v155, v134, v135, v136);
  svtEquipKeep = v148->fields.svtEquipKeep;
  v141 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtEquipKeep, v138, v139, v140);
  emptyListNoticeLabel = (int64_t)System_String__Format_63054740(v133, v137, v141, 0LL);
  if ( !servantInfoLabel )
    goto LABEL_112;
  UILabel__set_text(servantInfoLabel, (System_String_o *)emptyListNoticeLabel, 0LL);
  SvtEqCombineListViewManager__SetMaterialSvtInfo(this, v142);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  SvtEqCombineListViewManager__SetFilterButtonImage(this, v143);
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
  __int64 v10; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v12; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v14; // x8
  int32_t sortKind; // w9
  System_String_o **v16; // x8
  struct ListViewSort_o *v17; // x8
  System_String_o **v18; // x9
  System_String_o **v19; // x10
  System_String_o **v20; // x8
  System_String_o **v21; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v23; // x20

  if ( (byte_4BCB883 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_17821/*"btn_sort_up"*/, v3);
    sub_1C1ABD4(&StringLiteral_17912/*"btn_txt_up"*/, v4);
    sub_1C1ABD4(&StringLiteral_17865/*"btn_txt_new"*/, v5);
    sub_1C1ABD4(&StringLiteral_17855/*"btn_txt_down"*/, v6);
    sub_1C1ABD4(&StringLiteral_17872/*"btn_txt_old"*/, v7);
    sub_1C1ABD4(&StringLiteral_17818/*"btn_sort_down"*/, v8);
    byte_4BCB883 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_43;
    v12 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v12 )
      goto LABEL_43;
    UILabel__set_text(v12, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v14 = this->fields.sort;
    if ( !v14 )
      goto LABEL_43;
    sortKind = v14->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_43;
      v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17872/*"btn_txt_old"*/ : &StringLiteral_17865/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
      v17 = this->fields.sort;
      if ( !v17 )
        goto LABEL_43;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_43;
      v18 = (System_String_o **)&StringLiteral_17818/*"btn_sort_down"*/;
      v19 = (System_String_o **)&StringLiteral_17821/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_43;
      v20 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17912/*"btn_txt_up"*/ : &StringLiteral_17855/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
      v17 = this->fields.sort;
      if ( !v17 )
        goto LABEL_43;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_43;
      v18 = (System_String_o **)&StringLiteral_17821/*"btn_sort_up"*/;
      v19 = (System_String_o **)&StringLiteral_17818/*"btn_sort_down"*/;
    }
    if ( v17->fields.isAscendingOrder )
      v21 = v18;
    else
      v21 = v19;
    UISprite__set_spriteName((UISprite_o *)sort, *v21, 0LL);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( sort )
    {
      v23 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(
                                 sort,
                                 this->fields.alignedBonusFilterInfos,
                                 0,
                                 0LL);
      if ( v23 )
      {
        UILabel__set_text(v23, (System_String_o *)sort, 0LL);
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
              UILabel__SetCondensedScale((UILabel_o *)sort, 144, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_43:
    sub_1C1AE30(sort, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__SetStatusKind(
        SvtEqCombineListViewManager_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  int32_t v3; // w20
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

  v3 = modeKind;
  if ( (byte_4BCB858 & 1) == 0 )
  {
    sub_1C1ABD4(&LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
    sub_1C1ABD4(&StringLiteral_17931/*"button_allchoice_reg"*/, v5);
    sub_1C1ABD4(&StringLiteral_17934/*"button_alllock_unreg"*/, v6);
    sub_1C1ABD4(&StringLiteral_11831/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v7);
    sub_1C1ABD4(&StringLiteral_11832/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v8);
    sub_1C1ABD4(&StringLiteral_17947/*"button_select_reg"*/, v9);
    sub_1C1ABD4(&StringLiteral_7281/*"HEADER_MSG_SVTEQ_MATERIAL"*/, v10);
    sub_1C1ABD4(&StringLiteral_7280/*"HEADER_MSG_SVTEQ_BASE"*/, v11);
    sub_1C1ABD4(&StringLiteral_17948/*"button_select_unreg"*/, v12);
    sub_1C1ABD4(&StringLiteral_17933/*"button_alllock_reg"*/, v13);
    sub_1C1ABD4(&StringLiteral_17932/*"button_allchoice_unreg"*/, v14);
    byte_4BCB858 = 1;
  }
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  this->fields.modeKind = v3;
  if ( !statusTabButton )
    goto LABEL_51;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
    statusTabButton,
    1LL,
    statusTabButton->klass[1]._1.byval_arg.data);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_51;
  UnityEngine_Behaviour__set_enabled(statusTabButton, v3 != 0, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabSprite;
  if ( !statusTabButton )
    goto LABEL_51;
  v16 = &StringLiteral_17947/*"button_select_reg"*/;
  if ( v3 )
    v16 = &StringLiteral_17948/*"button_select_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v16, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_51;
  statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                 statusTabButton,
                                                 0LL,
                                                 0LL,
                                                 statusTabButton->klass[1]._1.interfaceOffsets);
  v17 = this->fields.statusTabButton;
  if ( !v17 )
    goto LABEL_51;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0LL);
  UICommonButton__SetColliderEnable(v17, enabled, 0, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_51;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
    statusTabButton,
    1LL,
    statusTabButton->klass[1]._1.byval_arg.data);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_51;
  UnityEngine_Behaviour__set_enabled(statusTabButton, v3 != 1, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
  if ( !statusTabButton )
    goto LABEL_51;
  v19 = &StringLiteral_17933/*"button_alllock_reg"*/;
  if ( v3 != 1 )
    v19 = &StringLiteral_17934/*"button_alllock_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v19, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_51;
  statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                 statusTabButton,
                                                 0LL,
                                                 0LL,
                                                 statusTabButton->klass[1]._1.interfaceOffsets);
  lockTabButton = this->fields.lockTabButton;
  if ( !lockTabButton )
    goto LABEL_51;
  v21 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
  UICommonButton__SetColliderEnable(lockTabButton, v21, 0, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_51;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
    statusTabButton,
    1LL,
    statusTabButton->klass[1]._1.byval_arg.data);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_51;
  UnityEngine_Behaviour__set_enabled(statusTabButton, v3 != 2, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
  if ( !statusTabButton )
    goto LABEL_51;
  v22 = &StringLiteral_17931/*"button_allchoice_reg"*/;
  if ( v3 != 2 )
    v22 = &StringLiteral_17932/*"button_allchoice_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v22, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton
    || (statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                       statusTabButton,
                                                       0LL,
                                                       0LL,
                                                       statusTabButton->klass[1]._1.interfaceOffsets),
        (choiceTabButton = this->fields.choiceTabButton) == 0LL) )
  {
LABEL_51:
    sub_1C1AE30(statusTabButton, *(_QWORD *)&modeKind);
  }
  v24 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
  UICommonButton__SetColliderEnable(choiceTabButton, v24, 0, 0LL);
  currentType = this->fields.currentType;
  if ( currentType == 1 )
  {
    combineInfoMsgLb = this->fields.combineInfoMsgLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v27 = &StringLiteral_7281/*"HEADER_MSG_SVTEQ_MATERIAL"*/;
  }
  else
  {
    if ( currentType )
      goto LABEL_34;
    combineInfoMsgLb = this->fields.combineInfoMsgLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v27 = &StringLiteral_7280/*"HEADER_MSG_SVTEQ_BASE"*/;
  }
  statusTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v27, 0LL);
  if ( !combineInfoMsgLb )
    goto LABEL_51;
  UILabel__set_text(combineInfoMsgLb, (System_String_o *)statusTabButton, 0LL);
LABEL_34:
  v28 = this->fields.modeKind;
  if ( v28 == 2 )
  {
    v29 = this->fields.combineInfoMsgLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v30 = &StringLiteral_11831/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
  }
  else
  {
    if ( v28 != 1 )
      goto LABEL_44;
    v29 = this->fields.combineInfoMsgLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v30 = &StringLiteral_11832/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
  }
  statusTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v30, 0LL);
  if ( !v29 )
    goto LABEL_51;
  UILabel__set_text(v29, (System_String_o *)statusTabButton, 0LL);
LABEL_44:
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.combineInfoMsgLb;
  if ( (unsigned int)(this->fields.modeKind - 1) >= 2 )
  {
    if ( this->fields.currentType )
      *(_QWORD *)&modeKind = 12LL;
    else
      *(_QWORD *)&modeKind = 20LL;
  }
  else
  {
    *(_QWORD *)&modeKind = 14LL;
  }
  if ( !statusTabButton )
    goto LABEL_51;
  UILabel__set_fontSize((UILabel_o *)statusTabButton, modeKind, 0LL);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  NetworkManager_ResultCallbackFunc_o *v16; // x20
  Il2CppObject *Request_object; // x0
  __int64 v18; // x1
  System_Int64_array *v19; // x1
  System_Int64_array *v20; // x2
  bool v21; // w4
  bool v22; // w5
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  NetworkManager_ResultCallbackFunc_o *v29; // x20
  System_Int64_array *v30; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4BCB88B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v6);
    sub_1C1ABD4(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1C1ABD4(&Method_SvtEqCombineListViewManager_EndStatusSync__, v8);
    byte_4BCB88B = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v30 = 0LL;
  choiceList = 0LL;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    if ( SvtEqCombineListViewManager__GetSwapChoiceList(this, &choiceList, &v30, v3) )
    {
      this->fields.requestCallback = callback;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&this->fields.requestCallback,
        (int64_t)callback,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
      v29 = (NetworkManager_ResultCallbackFunc_o *)sub_1C1AE20(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v29,
        (Il2CppObject *)this,
        Method_SvtEqCombineListViewManager_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v29,
                         (const MethodInfo_3023C78 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_object )
      {
        v20 = v30;
        v19 = choiceList;
        v22 = 1;
        v21 = 0;
        goto LABEL_15;
      }
LABEL_19:
      sub_1C1AE30(Request_object, v18);
    }
  }
  else if ( modeKind == 1 && SvtEqCombineListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields.requestCallback,
      (int64_t)callback,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    v16 = (NetworkManager_ResultCallbackFunc_o *)sub_1C1AE20(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v16,
      (Il2CppObject *)this,
      Method_SvtEqCombineListViewManager_EndStatusSync__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v16,
                       (const MethodInfo_3023C78 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( Request_object )
    {
      v20 = unlockList;
      v19 = lockList;
      v21 = 1;
      v22 = 0;
LABEL_15:
      CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)Request_object, v19, v20, 0, v21, v22, 0LL);
      return;
    }
    goto LABEL_19;
  }
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      0LL,
      *(_QWORD *)&callback->fields.extra_arg);
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

  if ( (byte_4BCB84E & 1) == 0 )
  {
    sub_1C1ABD4(&SvtEqCombineListViewManager_CallbackFunc_TypeInfo, value);
    byte_4BCB84E = 1;
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
    v8 = sub_1C560C4(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C1B0F0(v7);
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

  if ( (byte_4BCB850 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, value);
    byte_4BCB850 = 1;
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
    v8 = sub_1C560C4(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C1B0F0(v7);
  SvtEqCombineListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_SvtEqCombineListViewObject__o *__fastcall SvtEqCombineListViewManager__get_ClippingObjectList(
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
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v18; // x1
  Il2CppObject *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  _BOOL8 v28; // x0
  __int64 v29; // x1
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4BCB856 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject___ctor__, v8);
    sub_1C1ABD4(&System_Collections_Generic_List_SvtEqCombineListViewObject__TypeInfo, v9);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v10);
    byte_4BCB856 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v11 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_SvtEqCombineListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C1AE30(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v36 = v35;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v36.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1C1AE30(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1C1AE30(0LL, v18);
      Item = (ListViewItem_o *)SvtEqCombineListViewObject__GetItem(
                                 (SvtEqCombineListViewObject_o *)Component_object,
                                 v18);
      if ( !Item )
        sub_1C1AE30(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v28 = ListViewManager__ClippingItem_41959744((ListViewManager_o *)this, Item, 0LL);
        if ( v28 )
        {
          if ( !v11 )
            sub_1C1AE30(v28, v29);
          items = v11->fields._items;
          v31 = Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1C1AE30(v28, v29);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1C1AE30(Item, v21);
        items = v11->fields._items;
        v31 = Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1C1AE30(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v33 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v19;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)v19, v22, v23, v24, v25, v26, v27);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SvtEqCombineListViewObject__o *)v11;
}


System_Collections_Generic_List_SvtEqCombineListViewObject__o *__fastcall SvtEqCombineListViewManager__get_ObjectList(
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
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BCB855 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject___ctor__, v8);
    sub_1C1ABD4(&System_Collections_Generic_List_SvtEqCombineListViewObject__TypeInfo, v9);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v10);
    byte_4BCB855 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  v11 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_SvtEqCombineListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C1AE30(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v31 = v30;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v31.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1C1AE30(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___);
      v24 = (int64_t)Component_object;
      if ( !v11 )
        sub_1C1AE30(Component_object, Component_object);
      items = v11->fields._items;
      v26 = Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1C1AE30(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v24;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v28 + 4), v24, v18, v19, v20, v21, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SvtEqCombineListViewObject__o *)v11;
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

  if ( (byte_4BCB84F & 1) == 0 )
  {
    sub_1C1ABD4(&SvtEqCombineListViewManager_CallbackFunc_TypeInfo, value);
    byte_4BCB84F = 1;
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
    v8 = sub_1C560C4(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C1B0F0(v7);
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

  if ( (byte_4BCB851 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, value);
    byte_4BCB851 = 1;
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
    v8 = sub_1C560C4(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C1B0F0(v7);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._selectedMtSvtList_k__BackingField = value;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields._selectedMtSvtList_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C1AC94(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C1AE4C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C1ACFC(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A60E4C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A60DF4;
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
  __int64 v11[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = kind;
  if ( (byte_4BCB895 & 1) == 0 )
  {
    sub_1C1ABD4(&SvtEqCombineListViewManager_ResultKind_TypeInfo, *(_QWORD *)&kind);
    byte_4BCB895 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(SvtEqCombineListViewManager_ResultKind_TypeInfo, &v12, list, callback, object);
  v11[1] = (__int64)list;
  return (System_IAsyncResult_o *)sub_1C1AB88(this, v11, callback, object);
}


void __fastcall SvtEqCombineListViewManager_CallbackFunc__EndInvoke(
        SvtEqCombineListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C1AB8C(result, 0LL, method);
}


void __fastcall SvtEqCombineListViewManager_CallbackFunc__Invoke(
        SvtEqCombineListViewManager_CallbackFunc_o *this,
        int32_t kind,
        System_Int32_array *list,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, System_Int32_array *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    kind,
    list,
    *(_QWORD *)&this->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager_RequestCallbackFunc___ctor(
        SvtEqCombineListViewManager_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C1AC94(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C1AE4C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C1ACFC(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A60EC4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A60E7C;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall SvtEqCombineListViewManager_RequestCallbackFunc__BeginInvoke(
        SvtEqCombineListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isRequest;
  if ( (byte_4BCB896 & 1) == 0 )
  {
    sub_1C1ABD4(&bool_TypeInfo, isRequest);
    byte_4BCB896 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C1AB88(this, v9, callback, object);
}


void __fastcall SvtEqCombineListViewManager_RequestCallbackFunc__EndInvoke(
        SvtEqCombineListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C1AB8C(result, 0LL, method);
}


void __fastcall SvtEqCombineListViewManager_RequestCallbackFunc__Invoke(
        SvtEqCombineListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isRequest,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall SvtEqCombineListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BCB897 & 1) == 0 )
  {
    sub_1C1ABD4(&SvtEqCombineListViewManager___c_TypeInfo, v1);
    byte_4BCB897 = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(SvtEqCombineListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SvtEqCombineListViewManager___c_TypeInfo->static_fields->__9 = (struct SvtEqCombineListViewManager___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)SvtEqCombineListViewManager___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall SvtEqCombineListViewManager___c___ctor(
        SvtEqCombineListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall SvtEqCombineListViewManager___c___GetSelectedMaterialList_b__138_0(
        SvtEqCombineListViewManager___c_o *this,
        SvtEqCombineListViewItem_o *a,
        SvtEqCombineListViewItem_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C1AE30(this, a);
  return a->fields.selectNum - b->fields.selectNum;
}