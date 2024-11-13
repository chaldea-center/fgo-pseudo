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
  __int64 v9; // x2
  struct SvtEqCombineListViewManager_StaticFields *static_fields; // x0
  int64_t v11; // x1

  if ( (byte_4B19F0A & 1) == 0 )
  {
    sub_1BCA7E0(&SvtEqCombineListViewManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_13258/*"SvtEqCombine"*/, v8, v9);
    byte_4B19F0A = 1;
  }
  static_fields = SvtEqCombineListViewManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->COLOR_VAL = 0x13EC00000LL;
  v11 = StringLiteral_13258/*"SvtEqCombine"*/;
  static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_13258/*"SvtEqCombine"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->SORT_SAVE_KEY, v11, v2, v3, v4, v5, v6, v7);
  SvtEqCombineListViewManager_TypeInfo->static_fields->isInitSystem = 0;
}


void __fastcall SvtEqCombineListViewManager___ctor(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B19F09 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo, v5, v6);
    byte_4B19F09 = 1;
  }
  this->fields.selectMax = 20;
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
  this->fields.tempMtSvtList = (struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.tempMtSvtList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
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
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *itemSortList; // x0
  __int64 methodPtr_low; // x9
  SvtEqCombineListViewManager_o *v9; // x0
  int32_t *v10; // x1
  System_Collections_Generic_List_ListViewItem__o *v11; // x2
  int32_t v12; // w3
  const MethodInfo *v13; // x4

  if ( (byte_4B19F07 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index, method);
    sub_1BCA7E0(&SvtEqCombineListViewItem_TypeInfo, v5, v6);
    byte_4B19F07 = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList
    || (itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      itemSortList,
                                                                      index,
                                                                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__)) == 0LL )
  {
    sub_1BCAA3C(itemSortList, *(_QWORD *)&index);
  }
  methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (SvtEqCombineListViewItem_c *)itemSortList->klass->_2.typeHierarchy[methodPtr_low - 1] == SvtEqCombineListViewItem_TypeInfo )
  {
    LODWORD(itemSortList[6].monitor) = -1;
  }
  else
  {
    sub_1BCACFC(itemSortList);
    SvtEqCombineListViewManager__GetFocusItemIndex(v9, v10, v11, v12, v13);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v11; // w21
  System_Collections_Generic_List_object__o *v12; // x22
  __int64 methodPtr_low; // x9
  SvtEqCombineListViewManager_o *v15; // x0
  int32_t *v16; // x1
  int32_t *v17; // x2
  int32_t v18; // w3
  const MethodInfo *v19; // x4

  CombineQpSvtEq = nowCombineQp;
  if ( (byte_4B19ED3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&nowCombineQp, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6);
    sub_1BCA7E0(&SvtEqCombineListViewItem_TypeInfo, v7, v8);
    byte_4B19ED3 = 1;
  }
  if ( !this->fields.selectSum )
    return CombineQpSvtEq;
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_18:
    sub_1BCAA3C(itemList, *(_QWORD *)&nowCombineQp);
  size = itemList->fields._size;
  if ( size < 1 )
    return CombineQpSvtEq;
  v11 = 0;
  while ( 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v11,
                                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_18;
    v12 = itemList;
    methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (SvtEqCombineListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0LL) && BYTE1(v12[4].klass) )
    {
      itemList = (System_Collections_Generic_List_object__o *)v12[3].klass;
      if ( !itemList )
        goto LABEL_18;
      if ( CombineQpSvtEq < UserServantEntity__getCombineQpSvtEq((UserServantEntity_o *)itemList, 0LL) )
      {
        itemList = (System_Collections_Generic_List_object__o *)v12[3].klass;
        if ( !itemList )
          goto LABEL_18;
        CombineQpSvtEq = UserServantEntity__getCombineQpSvtEq((UserServantEntity_o *)itemList, 0LL);
      }
    }
    if ( size == ++v11 )
      return CombineQpSvtEq;
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_18;
  }
  sub_1BCACFC(itemList);
  return SvtEqCombineListViewManager__CheckIncrementLv(v15, v16, v17, v18, v19);
}


void __fastcall SvtEqCombineListViewManager__CheckDragMax(
        SvtEqCombineListViewManager_o *this,
        bool *isMaxLvSelected,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  void *itemList; // x0
  int v32; // w24
  int v33; // w25
  _BOOL8 v34; // x0
  __int64 v35; // x1
  SvtEqCombineListViewItem_o *current; // x21
  __int64 methodPtr_low; // x9
  __int64 v38; // x1
  UserServantEntity_o *baseUsrSvtData; // x0
  const MethodInfo *v40; // x1
  UserServantEntity_o *v41; // x0
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_object__o *combineEventList; // x0
  _BOOL8 v44; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  float v47; // s8
  float v48; // s0
  unsigned int v49; // w8
  struct UserServantEntity_o *v50; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v51; // x21
  __int64 v52; // x22
  __int64 v53; // x23
  int32_t v54; // w8
  int v55; // w23
  int v56; // w22
  const MethodInfo *v57; // x4
  int32_t LevelMax; // w21
  int32_t v59; // w8
  int32_t v60; // w22
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+40h] [xbp-80h] BYREF
  __int64 checkLv; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  if ( (byte_4B19ED5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, isMaxLvSelected, method);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v23, v24);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28);
    sub_1BCA7E0(&SvtEqCombineListViewItem_TypeInfo, v29, v30);
    byte_4B19ED5 = 1;
  }
  memset(&v63, 0, sizeof(v63));
  checkLv = 0LL;
  memset(&v62, 0, sizeof(v62));
  *isMaxLvSelected = 0;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_53;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v61,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v32 = 0;
  v33 = 0;
  v63 = v61;
  while ( 1 )
  {
    v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v63,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v34 )
      break;
    current = (SvtEqCombineListViewItem_o *)v63.fields._current;
    if ( !v63.fields._current )
      goto LABEL_49;
    methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v63.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (SvtEqCombineListViewItem_c *)v63.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      sub_1BCACFC(v63.fields._current);
LABEL_49:
      sub_1BCAA3C(v34, v35);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v63.fields._current, 0LL) || current->fields.dragSelectNum >= 1 )
    {
      baseUsrSvtData = this->fields.baseUsrSvtData;
      if ( !baseUsrSvtData )
        sub_1BCAA3C(0LL, v38);
      if ( !UserServantEntity__isLevelMax(baseUsrSvtData, 0LL) )
        goto LABEL_16;
      v41 = this->fields.baseUsrSvtData;
      if ( !v41 )
        sub_1BCAA3C(0LL, v40);
      if ( UserServantEntity__isLevelMax(v41, 0LL) && current->fields.isLimitCntTarget )
      {
LABEL_16:
        v33 += current->fields.materialExp;
        v32 += SvtEqCombineListViewItem__get_GetAddTotalExp(current, v40);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v63,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_53;
  combineEventList = (System_Collections_Generic_List_object__o *)menuListCtr->fields.combineEventList;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v61,
      combineEventList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v62 = v61;
    while ( 1 )
    {
      v44 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v62,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v44 )
        break;
      if ( !v62.fields._current )
        sub_1BCAA3C(v44, v45);
      if ( HIDWORD(v62.fields._current[1].klass) == 17 )
      {
        v47 = *(float *)&v62.fields._current[3].monitor;
        if ( !byte_4B1103A )
        {
          sub_1BCA7E0(&System_Math_TypeInfo, v45, v46);
          byte_4B1103A = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v45);
        v48 = v47 * (float)v33;
        v49 = vcvtps_s32_f32(v48);
        if ( ceilf(v48) == INFINITY )
          v33 = 0x80000000;
        else
          v33 = v49;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v62,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  if ( this->fields.baseUsrSvtData && this->fields.itemType == 1 )
  {
    itemList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( itemList )
    {
      itemList = DataManager__GetMasterData_object_(
                   (DataManager_o *)itemList,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
      v50 = this->fields.baseUsrSvtData;
      if ( v50 )
      {
        v51 = (DataMasterBase_TMaster__TEntity__PKType__o *)itemList;
        v53 = *(_QWORD *)&v50->fields.svtId.fields.currentCryptoKey;
        v52 = *(_QWORD *)&v50->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, isMaxLvSelected);
        *(_QWORD *)&v65.fields.currentCryptoKey = v53;
        *(_QWORD *)&v65.fields.fakeValue = v52;
        itemList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v65, 0LL);
        if ( v51 )
        {
          itemList = DataMasterBase_object__object__int___GetEntity(
                       v51,
                       (int32_t)itemList,
                       (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( itemList )
          {
            v54 = *((_DWORD *)itemList + 33);
            itemList = this->fields.baseUsrSvtData;
            this->fields.expType = v54;
            if ( itemList )
            {
              v56 = *((_DWORD *)itemList + 65);
              LODWORD(checkLv) = *((_DWORD *)itemList + 64);
              v55 = checkLv;
              LevelMax = UserServantEntity__getLevelMax((UserServantEntity_o *)itemList, 0LL);
              if ( v55 == LevelMax )
              {
                v59 = 0;
              }
              else
              {
                v60 = v33 + v32 + v56;
                while ( !SvtEqCombineListViewManager__CheckIncrementLv(
                           this,
                           (int32_t *)&checkLv,
                           (int32_t *)&checkLv + 1,
                           v60,
                           v57) )
                  ;
                v59 = HIDWORD(checkLv);
              }
              *isMaxLvSelected = v59 >= LevelMax;
              return;
            }
          }
        }
      }
    }
LABEL_53:
    sub_1BCAA3C(itemList, isMaxLvSelected);
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
  __int64 v10; // x2
  void *baseUsrSvtData; // x0
  int32_t LevelMax; // w0
  int32_t v13; // w8
  int32_t v14; // w8
  bool result; // w0

  if ( (byte_4B19ED6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantExpMaster___, checkLv, increLv);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B19ED6 = 1;
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
  baseUsrSvtData = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUsrSvtData
    || (baseUsrSvtData = DataManager__GetMasterData_object_(
                           (DataManager_o *)baseUsrSvtData,
                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
    || (baseUsrSvtData = ServantExpMaster__GetEntity(
                           (ServantExpMaster_o *)baseUsrSvtData,
                           this->fields.expType,
                           *checkLv,
                           0LL)) == 0LL )
  {
LABEL_16:
    sub_1BCAA3C(baseUsrSvtData, checkLv);
  }
  v13 = *((_DWORD *)baseUsrSvtData + 6);
  if ( v13 <= totalExp )
  {
    if ( v13 != totalExp )
    {
      result = 0;
      ++*checkLv;
      return result;
    }
    v14 = *((_DWORD *)baseUsrSvtData + 5) + 1;
  }
  else
  {
    v14 = *((_DWORD *)baseUsrSvtData + 5);
  }
  *increLv = v14;
  return 1;
}


bool __fastcall SvtEqCombineListViewManager__CheckIsMaterialSelectSvt(
        SvtEqCombineListViewManager_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *selectedMtSvtList_k__BackingField; // x0
  const MethodInfo *v14; // x1
  bool v15; // w20
  int v16; // w19
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B19EF0 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__,
      usrSvtId,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v11, v12);
    byte_4B19EF0 = 1;
  }
  memset(&v18, 0, sizeof(v18));
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v18,
        selectedMtSvtList_k__BackingField,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__);
      while ( 1 )
      {
        v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v18,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__);
        if ( !v15 )
          break;
        if ( !v18.fields._current )
          sub_1BCAA3C(0LL, v14);
        if ( SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)v18.fields._current, v14) == usrSvtId )
        {
          v16 = 5;
          goto LABEL_12;
        }
      }
      v16 = 2;
LABEL_12:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v18,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
      LOBYTE(selectedMtSvtList_k__BackingField) = v15 && v16 == 5;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w22
  int32_t v10; // w20
  System_Collections_Generic_List_object__o *v11; // x21
  __int64 methodPtr_low; // x9
  SvtEqCombineListViewManager_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_4B19EE4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v4, v5);
    sub_1BCA7E0(&SvtEqCombineListViewItem_TypeInfo, v6, v7);
    byte_4B19EE4 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_1BCAA3C(itemList, method);
  size = itemList->fields._size;
  if ( size < 1 )
    return 0;
  v10 = 0;
  while ( 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v10,
                                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_15;
    v11 = itemList;
    methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (SvtEqCombineListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0LL)
      && (BYTE4(v11[5].klass) || BYTE4(v11[6].klass) || BYTE5(v11[6].klass)) )
    {
      return 1;
    }
    if ( size == ++v10 )
      return 0;
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_15;
  }
  sub_1BCACFC(itemList);
  return (unsigned __int8)SvtEqCombineListViewManager__GetSelectedMaterialList(v14, v15);
}


void __fastcall SvtEqCombineListViewManager__ClearSelectedSvtList(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *selectedMtSvtList_k__BackingField; // x8
  int32_t size; // w2
  int v6; // w9

  if ( (byte_4B19EE8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__, method, v2);
    byte_4B19EE8 = 1;
  }
  selectedMtSvtList_k__BackingField = this->fields._selectedMtSvtList_k__BackingField;
  if ( selectedMtSvtList_k__BackingField )
  {
    size = selectedMtSvtList_k__BackingField->fields._size;
    v6 = selectedMtSvtList_k__BackingField->fields._version + 1;
    selectedMtSvtList_k__BackingField->fields._size = 0;
    selectedMtSvtList_k__BackingField->fields._version = v6;
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
    sub_1BCAA3C(servantEquipCheckDialog, isDecide);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  SvtEqCombineListViewManager_c *v17; // x0
  ListViewSort_o *sort; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct ListViewSort_array *sortStatusList; // x8
  struct ListViewSort_o *v27; // x1
  struct ListViewSort_o **p_sort; // x22
  UnityEngine_GameObject_o *gameObject; // x25
  System_Collections_ICollection_o **p_alignedBonusFilterInfos; // x25
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_Int32_array *servantEquipFilterEventCampaignIds; // x2
  System_Int32_array *servantEquipFilterEventIds; // x3
  System_Int32_array *v39; // x4
  ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct ListViewSort_o *v47; // x26
  const MethodInfo *v48; // x2
  const MethodInfo *v49; // x2
  const MethodInfo *v50; // x4
  __int64 v51; // x1
  UILabel_o *spendQpInfoLabel; // x23
  UILabel_o *getExpInfoLabel; // x23
  const MethodInfo *v54; // x2
  const MethodInfo *v55; // x4
  const MethodInfo *v56; // x2

  if ( (byte_4B19ECD & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&type, *(_QWORD *)&modeKind);
    sub_1BCA7E0(&SvtEqCombineListViewManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_7023/*"GET_EXP_INFO"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_9343/*"NEED_QP_INFO"*/, v15, v16);
    byte_4B19ECD = 1;
  }
  this->fields.currentType = type;
  v17 = SvtEqCombineListViewManager_TypeInfo;
  if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo, *(_QWORD *)&type);
  SvtEqCombineListViewManager__CreateSorteData((const MethodInfo *)v17);
  sortStatusList = SvtEqCombineListViewManager_TypeInfo->static_fields->sortStatusList;
  if ( !sortStatusList )
    goto LABEL_37;
  if ( sortStatusList->max_length <= type )
    sub_1BCAA44(sort, v19);
  v27 = sortStatusList->m_Items[type];
  this->fields.sort = v27;
  p_sort = &this->fields.sort;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.sort, (int64_t)v27, v20, v21, v22, v23, v24, v25);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.alignedBonusFilterInfos, 0LL, v31, v32, v33, v34, v35, v36);
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
    v39 = 0LL;
    goto LABEL_16;
  }
  servantEquipFilterEventCampaignIds = setupInfo->fields.servantEquipFilterEventCampaignIds;
  servantEquipFilterEventIds = setupInfo->fields.servantEquipFilterEventIds;
  if ( !finishSetupInfo )
    goto LABEL_15;
LABEL_13:
  v39 = finishSetupInfo->fields.servantEquipFilterEventIds;
LABEL_16:
  AlignedBonusFilter = ListViewSort__GetAlignedBonusFilter(
                         sort,
                         0LL,
                         servantEquipFilterEventCampaignIds,
                         servantEquipFilterEventIds,
                         v39,
                         0LL,
                         0,
                         0LL);
  *p_alignedBonusFilterInfos = (System_Collections_ICollection_o *)AlignedBonusFilter;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.alignedBonusFilterInfos,
    (int64_t)AlignedBonusFilter,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v47 = *p_sort;
  sort = (ListViewSort_o *)BasicHelper__IsNullOrEmpty(*p_alignedBonusFilterInfos, 0LL);
  if ( !v47 )
    goto LABEL_37;
  v47->fields.isBonusKind = ((unsigned __int8)sort & 1) == 0;
  sort = (ListViewSort_o *)this->fields.scaleChangeButton;
  if ( !sort )
    goto LABEL_37;
  sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
  if ( !sort )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0LL);
  if ( !type )
  {
    SvtEqCombineListViewManager__SetDispActive(this, 0, v48);
    SvtEqCombineListViewManager__SetBtnEnable(this, 0, v54);
    SvtEqCombineListViewManager__SetServantList(this, 0, setupInfo, finishSetupInfo, v55);
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
    SvtEqCombineListViewManager__SetDispActive(this, 1, v48);
    SvtEqCombineListViewManager__SetBtnEnable(this, 0, v49);
    this->fields.selectMax = 20;
    SvtEqCombineListViewManager__SetServantList(this, 1, setupInfo, finishSetupInfo, v50);
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
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v51);
          sort = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9343/*"NEED_QP_INFO"*/, 0LL);
          if ( spendQpInfoLabel )
          {
            UILabel__set_text(spendQpInfoLabel, (System_String_o *)sort, 0LL);
            getExpInfoLabel = this->fields.getExpInfoLabel;
            sort = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7023/*"GET_EXP_INFO"*/, 0LL);
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
    sub_1BCAA3C(sort, v19);
  }
LABEL_32:
  sort = (ListViewSort_o *)this->fields.bonusFilterKindButton;
  if ( !sort )
    goto LABEL_37;
  sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
  if ( !*p_sort || !sort )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, (*p_sort)->fields.isBonusKind, 0LL);
  SvtEqCombineListViewManager__SetStatusKind(this, modeKind, v56);
  if ( !type )
    EventTutorialMaster__CheckTutorial(-1, 57, 0LL, 0, 0, 0, 0, 0LL);
}


void __fastcall SvtEqCombineListViewManager__CreateSorteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  SvtEqCombineListViewManager_c *v7; // x0
  __int64 v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  SvtEqCombineListViewManager_c *v16; // x8
  int64_t v17; // x19
  struct SvtEqCombineListViewManager_StaticFields *static_fields; // x0
  __int64 v19; // x1
  unsigned __int64 v20; // x24
  __int64 i; // x22
  SvtEqCombineListViewManager_c *v22; // x0
  struct SvtEqCombineListViewManager_StaticFields *v23; // x8
  unsigned int *sortStatusList; // x26
  System_String_o *SORT_SAVE_KEY; // x19
  System_String_o *v26; // x0
  System_String_o *v27; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  ListViewSort_o *v31; // x19
  __int64 v32; // x0
  __int64 v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x0
  int v41; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B19EC8 & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewSort___TypeInfo, v1, v2);
    sub_1BCA7E0(&ListViewSort_TypeInfo, v3, v4);
    sub_1BCA7E0(&SvtEqCombineListViewManager_TypeInfo, v5, v6);
    byte_4B19EC8 = 1;
  }
  v7 = SvtEqCombineListViewManager_TypeInfo;
  v41 = 0;
  if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo, v1);
    v7 = SvtEqCombineListViewManager_TypeInfo;
  }
  if ( !v7->static_fields->isInitSystem )
  {
    v8 = sub_1BCA888(ListViewSort___TypeInfo, 2LL);
    v16 = SvtEqCombineListViewManager_TypeInfo;
    v17 = v8;
    if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo, v9);
      v16 = SvtEqCombineListViewManager_TypeInfo;
    }
    static_fields = v16->static_fields;
    static_fields->sortStatusList = (struct ListViewSort_array *)v17;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->sortStatusList, v17, v10, v11, v12, v13, v14, v15);
    v20 = 0LL;
    for ( i = 8LL; ; i += 2LL )
    {
      v22 = SvtEqCombineListViewManager_TypeInfo;
      if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo, v19);
        v22 = SvtEqCombineListViewManager_TypeInfo;
      }
      v23 = v22->static_fields;
      if ( i == 12 )
        break;
      sortStatusList = (unsigned int *)v23->sortStatusList;
      SORT_SAVE_KEY = v23->SORT_SAVE_KEY;
      v41 = v20 + 1;
      v26 = System_Int32__ToString((int32_t)&v41, 0LL);
      v27 = System_String__Concat_62401220(SORT_SAVE_KEY, v26, 0LL);
      v31 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v28, v29, v30);
      ListViewSort___ctor_41480716(v31, v27, 3, 0, 0LL);
      if ( !sortStatusList )
        sub_1BCAA3C(v32, v33);
      if ( v31 )
      {
        v32 = sub_1BCA91C(v31, *(_QWORD *)(*(_QWORD *)sortStatusList + 64LL));
        if ( !v32 )
        {
          v40 = sub_1BCAA60(0LL);
          sub_1BCA908(v40, 0LL);
        }
      }
      if ( v20 >= sortStatusList[6] )
        sub_1BCAA44(v32, v33);
      *(_QWORD *)&sortStatusList[i] = v31;
      sub_1BCA784((PartyOrganizationUtility_o *)&sortStatusList[i], (int64_t)v31, v34, v35, v36, v37, v38, v39);
      ++v20;
    }
    v23->isInitSystem = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__DecideDragSelect(
        SvtEqCombineListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *itemSortList; // x0
  System_Collections_Generic_List_object__o *v16; // x19
  __int64 methodPtr_low; // x9
  _BOOL4 isDragSelect; // w21
  bool IsSelect; // w0
  int32_t selectSum; // w8
  int items; // w21
  _BOOL8 v22; // x0
  __int64 v23; // x1
  int klass; // w9
  void *v25; // x0
  int v26; // w1
  __int64 v27; // x20
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B19F06 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11, v12);
    sub_1BCA7E0(&SvtEqCombineListViewItem_TypeInfo, v13, v14);
    byte_4B19F06 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_22;
  itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemSortList,
                                                                index,
                                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !itemSortList )
    goto LABEL_22;
  v16 = itemSortList;
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
          LODWORD(v16->fields._items) = selectSum;
          this->fields.selectSum = selectSum + 1;
        }
      }
      goto LABEL_20;
    }
    if ( !IsSelect )
      goto LABEL_20;
    items = (int)v16->fields._items;
    ListViewItem__set_IsSelect((ListViewItem_o *)v16, 0, 0LL);
    BYTE2(v16[4].monitor) = 0;
    itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    --this->fields.selectSum;
    if ( itemSortList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v28,
        itemSortList,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( 1 )
      {
        v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v28,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v22 )
          break;
        if ( !v28.fields._current )
          sub_1BCAA3C(v22, v23);
        klass = (int)v28.fields._current[1].klass;
        if ( klass > items )
          LODWORD(v28.fields._current[1].klass) = klass - 1;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v28,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      goto LABEL_20;
    }
LABEL_22:
    sub_1BCAA3C(itemSortList, *(_QWORD *)&index);
  }
  sub_1BCACFC(itemSortList);
  if ( v26 != 1 )
  {
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v28,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1CB5270();
  }
  v27 = *(_QWORD *)__cxa_begin_catch(v25);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( v27 )
    sub_1BCAA34(v27);
LABEL_20:
  LODWORD(v16[6].monitor) = -1;
}


void __fastcall SvtEqCombineListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  SvtEqCombineListViewManager_c *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x20
  SvtEqCombineListViewManager_c *v6; // x0
  struct ListViewSort_array *sortStatusList; // x8

  if ( (byte_4B19EC9 & 1) == 0 )
  {
    sub_1BCA7E0(&SvtEqCombineListViewManager_TypeInfo, v1, v2);
    byte_4B19EC9 = 1;
  }
  v3 = SvtEqCombineListViewManager_TypeInfo;
  if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo, v1);
  SvtEqCombineListViewManager__CreateSorteData((const MethodInfo *)v3);
  v5 = 0LL;
  do
  {
    v6 = SvtEqCombineListViewManager_TypeInfo;
    if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo, v4);
      v6 = SvtEqCombineListViewManager_TypeInfo;
    }
    sortStatusList = v6->static_fields->sortStatusList;
    if ( !sortStatusList )
      goto LABEL_13;
    if ( (unsigned int)v5 >= sortStatusList->max_length )
      sub_1BCAA44(v6, v4);
    v6 = (SvtEqCombineListViewManager_c *)sortStatusList->m_Items[v5];
    if ( !v6 )
LABEL_13:
      sub_1BCAA3C(v6, v4);
    ListViewSort__DeleteContinueData((ListViewSort_o *)v6, 0LL);
    ++v5;
  }
  while ( (_DWORD)v5 != 2 );
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
    sub_1BCAA3C(0LL, v3);
  ListViewSort__Save(sort, 0LL);
  this->fields.alignedBonusFilterInfos = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.alignedBonusFilterInfos, 0LL, v5, v6, v7, v8, v9, v10);
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
  SvtEqCombineListViewManager__SetMode_46250000(this, 2, v6);
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
  SvtEqCombineListViewManager__SetMode_46250000(this, 2, v6);
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
  SvtEqCombineListViewManager__SetMode_46250000(this, 2, v5);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x1
  Il2CppObject *Instance; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Action_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_4B19EF2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_SvtEqCombineListViewManager_EndCloseSelectFilterKind__, v7, v8);
    byte_4B19EF2 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    SvtEqCombineListViewManager__SetFilterButtonImage(this, v9);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_SvtEqCombineListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_1BCAA3C(v15, v16);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v14, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__EndSelectSortKind(
        SvtEqCombineListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B19EF7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    byte_4B19EF7 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
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
    sub_1BCA784(p_requestCallback, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v11; // w22
  int64_t v12; // x21
  __int64 methodPtr_low; // x9
  SvtEqCombineListViewItem_o *v15; // x0
  ListViewSort_o *v16; // x1
  const MethodInfo *v17; // x2

  v3 = svtId;
  if ( (byte_4B19EFA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6);
    sub_1BCA7E0(&SvtEqCombineListViewItem_TypeInfo, v7, v8);
    byte_4B19EFA = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_13:
    sub_1BCAA3C(itemList, *(_QWORD *)&svtId);
  size = itemList->fields._size;
  if ( size < 1 )
  {
    return 0LL;
  }
  else
  {
    v11 = 0;
    v12 = 0LL;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v11,
                                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_13;
      *(_QWORD *)&svtId = SvtEqCombineListViewItem_TypeInfo;
      methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (SvtEqCombineListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        break;
      }
      ++v11;
      if ( LODWORD(itemList[3].fields._syncRoot) == v3 )
        ++v12;
      if ( size == v11 )
        return v12;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        goto LABEL_13;
    }
    sub_1BCACFC(itemList);
    return SvtEqCombineListViewItem__IsMatchFilter(v15, v16, v17);
  }
}


int32_t __fastcall SvtEqCombineListViewManager__GetBaseCollectionLv(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int64_t Instance; // x0
  __int64 v11; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v13; // q1
  UserServantCollectionMaster_o *v14; // x20
  struct UserServantEntity_o *v15; // x8
  int64_t v16; // x19
  __int64 v17; // x21
  __int64 v18; // x22
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4B19ED8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B19ED8 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_14;
  v13 = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.fakeValue;
  v14 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v22.fields.fakeValue = v13;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
  v21 = v22;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v21, 0LL);
  v15 = this->fields.baseUsrSvtData;
  if ( !v15 )
    goto LABEL_14;
  v16 = Instance;
  v18 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
  *(_QWORD *)&v23.fields.currentCryptoKey = v18;
  *(_QWORD *)&v23.fields.fakeValue = v17;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v23, 0LL);
  if ( !v14 )
LABEL_14:
    sub_1BCAA3C(Instance, v11);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v14, v16, Instance, 0LL);
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
  __int64 v9; // x2
  int32_t v10; // w22
  __int64 methodPtr_low; // x10

  if ( (byte_4B19F08 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, index, list);
    this = (SvtEqCombineListViewManager_o *)sub_1BCA7E0(&SvtEqCombineListViewItem_TypeInfo, v8, v9);
    byte_4B19F08 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_15:
      sub_1BCAA3C(this, index);
    v10 = 0;
    while ( 1 )
    {
      this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)list,
                                                v10,
                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
      if ( sum == ++v10 )
        return 1;
    }
    *index = v10;
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
        sub_1BCAA44(this, list);
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
    sub_1BCAA3C(this, list);
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
  __int64 v6; // x2
  SvtEqCombineListViewItem_o *result; // x0
  __int64 methodPtr_low; // x9
  SvtEqCombineListViewManager_o *v9; // x0
  int64_t v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_4B19ED9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index, method);
    sub_1BCA7E0(&SvtEqCombineListViewItem_TypeInfo, v5, v6);
    byte_4B19ED9 = 1;
  }
  result = (SvtEqCombineListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (SvtEqCombineListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (SvtEqCombineListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        sub_1BCACFC(result);
        SvtEqCombineListViewManager__ModifyItem(v9, v10, v11);
      }
    }
  }
  return result;
}


UserServantEntity_o *__fastcall SvtEqCombineListViewManager__GetSelectBaseSvtData(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  PartyOrganizationUtility_o *p_baseUsrSvtData; // x19
  PartyOrganizationUtility_c *klass; // x8
  Il2CppType byval_arg; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x20
  Il2CppObject *Entity; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-40h]

  if ( (byte_4B19ED7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B19ED7 = 1;
  }
  if ( !this->fields.baseUsrSvtData )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  p_baseUsrSvtData = (PartyOrganizationUtility_o *)&this->fields.baseUsrSvtData;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  klass = p_baseUsrSvtData->klass;
  if ( !p_baseUsrSvtData->klass )
    goto LABEL_12;
  byval_arg = klass->_1.byval_arg;
  v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
  *(Il2CppType *)&v25.fields.fakeValue = byval_arg;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
  v24 = v25;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v24, 0LL);
  if ( !v15 )
LABEL_12:
    sub_1BCAA3C(Instance, v11);
  Entity = DataMasterBase_object__object__long___GetEntity(
             v15,
             (int64_t)Instance,
             (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_baseUsrSvtData->klass = (PartyOrganizationUtility_c *)Entity;
  sub_1BCA784(p_baseUsrSvtData, (int64_t)Entity, v17, v18, v19, v20, v21, v22);
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_object__o *v27; // x20
  __int64 v28; // x1
  int64_t v29; // x2
  __int64 v30; // x3
  void *itemList; // x0
  int v32; // w23
  int32_t v33; // w21
  Il2CppObject *v34; // x22
  __int64 methodPtr_low; // x9
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  System_Comparison_T__o *v44; // x21
  Il2CppObject *v45; // x22
  struct SvtEqCombineListViewManager___c_StaticFields *static_fields; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int v53; // w23
  int32_t v54; // w21
  System_Collections_Generic_List_SvtEqCombineListViewItem__o *result; // x0
  SvtEqCombineListViewManager_o *v56; // x0
  const MethodInfo *v57; // x1

  if ( (byte_4B19EE5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_SvtEqCombineListViewItem__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Sort__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo, v19, v20);
    sub_1BCA7E0(&SvtEqCombineListViewItem_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SvtEqCombineListViewManager___c__GetSelectedMaterialList_b__138_0__, v23, v24);
    sub_1BCA7E0(&SvtEqCombineListViewManager___c_TypeInfo, v25, v26);
    byte_4B19EE5 = 1;
  }
  v27 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_34;
  v32 = *((_DWORD *)itemList + 6);
  if ( v32 < 1 )
  {
LABEL_18:
    itemList = SvtEqCombineListViewManager___c_TypeInfo;
    if ( !SvtEqCombineListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager___c_TypeInfo, v28);
      itemList = SvtEqCombineListViewManager___c_TypeInfo;
    }
    v44 = *(System_Comparison_T__o **)(*((_QWORD *)itemList + 23) + 8LL);
    if ( !v44 )
    {
      if ( !*((_DWORD *)itemList + 56) )
      {
        j_il2cpp_runtime_class_init_0(itemList, v28);
        itemList = SvtEqCombineListViewManager___c_TypeInfo;
      }
      v45 = (Il2CppObject *)**((_QWORD **)itemList + 23);
      v44 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_SvtEqCombineListViewItem__TypeInfo, v28, v29, v30);
      System_Comparison_object____ctor(
        v44,
        v45,
        Method_SvtEqCombineListViewManager___c__GetSelectedMaterialList_b__138_0__,
        0LL);
      static_fields = SvtEqCombineListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__138_0 = (struct System_Comparison_SvtEqCombineListViewItem__o *)v44;
      sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__138_0, (int64_t)v44, v47, v48, v49, v50, v51, v52);
    }
    if ( v27 )
    {
      System_Collections_Generic_List_object___Sort_56244000(
        v27,
        v44,
        (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Sort__);
      if ( v27->fields._size < 1 )
        return (System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v27;
      v53 = 0;
      v54 = 0;
      while ( 1 )
      {
        itemList = System_Collections_Generic_List_object___get_Item(
                     v27,
                     v54,
                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
        if ( !itemList )
          break;
        if ( *((_DWORD *)itemList + 39) > v53 )
        {
          itemList = System_Collections_Generic_List_object___get_Item(
                       v27,
                       v54,
                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
          if ( !itemList )
            break;
          v53 = *((_DWORD *)itemList + 39);
          itemList = System_Collections_Generic_List_object___get_Item(
                       v27,
                       v54,
                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
          if ( !itemList )
            break;
          this->fields.lastSelectIndex = *((_DWORD *)itemList + 6);
        }
        if ( ++v54 >= v27->fields._size )
          return (System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v27;
      }
    }
LABEL_34:
    sub_1BCAA3C(itemList, v28);
  }
  v33 = 0;
  while ( 1 )
  {
    itemList = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)itemList,
                 v33,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_34;
    v34 = (Il2CppObject *)itemList;
    methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
      || *(SvtEqCombineListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    itemList = (void *)ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0LL);
    if ( ((unsigned __int8)itemList & 1) != 0 )
    {
      if ( !v27 )
        goto LABEL_34;
      items = v27->fields._items;
      v41 = Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Add__;
      ++v27->fields._version;
      if ( !items )
        goto LABEL_34;
      size = v27->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v27,
          v34,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
      }
      else
      {
        v43 = &items->obj.klass + size;
        v27->fields._size = size + 1;
        v43[4] = (Il2CppClass *)v34;
        sub_1BCA784((PartyOrganizationUtility_o *)(v43 + 4), (int64_t)v34, v29, v30, v36, v37, v38, v39);
      }
    }
    if ( v32 == ++v33 )
      goto LABEL_18;
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_34;
  }
  sub_1BCACFC(itemList);
  SvtEqCombineListViewManager__SetSelectedMaterialInfo(v56, v57);
  return result;
}


bool __fastcall SvtEqCombineListViewManager__GetSwapChoiceList(
        SvtEqCombineListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_long__o *v23; // x23
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Collections_Generic_List_long__o *v27; // x22
  SvtEqCombineListViewItem_c *v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t itemList; // x0
  int v36; // w25
  int32_t v37; // w24
  __int64 methodPtr_low; // x9
  __int64 v39; // x8
  __int128 v40; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x8
  __int128 v45; // q0
  struct System_Int64_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  __int64 v49; // x8
  System_Collections_Generic_List_long__o *v50; // x0
  int v51; // w21
  System_Int64_array *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_Int64_array *v59; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  System_Int64_array **v66; // x0
  bool result; // w0
  SvtEqCombineListViewManager_o *v68; // x0
  const MethodInfo *v69; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+40h] [xbp-80h]

  if ( (byte_4B19EFD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, choiceList, unchoiceList);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19, v20);
    sub_1BCA7E0(&SvtEqCombineListViewItem_TypeInfo, v21, v22);
    byte_4B19EFD = 1;
  }
  v23 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     choiceList,
                                                     unchoiceList,
                                                     method);
  System_Collections_Generic_List_long____ctor(
    v23,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  v27 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v24,
                                                     v25,
                                                     v26);
  System_Collections_Generic_List_long____ctor(
    v27,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v36 = *(_DWORD *)(itemList + 24);
  if ( v36 >= 1 )
  {
    v37 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v37,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      v28 = SvtEqCombineListViewItem_TypeInfo;
      methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(SvtEqCombineListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != SvtEqCombineListViewItem_TypeInfo )
      {
        sub_1BCACFC(itemList);
        SvtEqCombineListViewManager__OnClickNormalStatus(v68, v69);
        return result;
      }
      v39 = *(_QWORD *)(itemList + 120);
      if ( v39 && *(_BYTE *)(itemList + 247) )
      {
        if ( *(_BYTE *)(itemList + 165) )
        {
          v40 = *(_OWORD *)(v39 + 32);
          *(_OWORD *)&v72.fields.currentCryptoKey = *(_OWORD *)(v39 + 16);
          *(_OWORD *)&v72.fields.fakeValue = v40;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(
              CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
              SvtEqCombineListViewItem_TypeInfo);
          v71 = v72;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v71, 0LL);
          if ( !v27 )
            goto LABEL_37;
          items = v27->fields._items;
          v42 = Method_System_Collections_Generic_List_long__Add__;
          ++v27->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v27->fields._size;
          v28 = (SvtEqCombineListViewItem_c *)itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v49 = v42[4];
            v50 = v27;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v50,
              (int64_t)v28,
              *(const MethodInfo_3589C90 **)(*(_QWORD *)(v49 + 192) + 112LL));
            goto LABEL_28;
          }
          v44 = &items->obj.klass + size;
          v27->fields._size = size + 1;
        }
        else
        {
          v45 = *(_OWORD *)(v39 + 32);
          *(_OWORD *)&v72.fields.currentCryptoKey = *(_OWORD *)(v39 + 16);
          *(_OWORD *)&v72.fields.fakeValue = v45;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(
              CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
              SvtEqCombineListViewItem_TypeInfo);
          v70 = v72;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v70, 0LL);
          if ( !v23 )
            goto LABEL_37;
          v46 = v23->fields._items;
          v47 = Method_System_Collections_Generic_List_long__Add__;
          ++v23->fields._version;
          if ( !v46 )
            goto LABEL_37;
          v48 = v23->fields._size;
          v28 = (SvtEqCombineListViewItem_c *)itemList;
          if ( (unsigned int)v48 >= v46->max_length )
          {
            v49 = v47[4];
            v50 = v23;
            goto LABEL_27;
          }
          v44 = &v46->obj.klass + v48;
          v23->fields._size = v48 + 1;
        }
        v44[4] = (Il2CppClass *)v28;
      }
LABEL_28:
      if ( v36 == ++v37 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v23 || !v27 )
LABEL_37:
    sub_1BCAA3C(itemList, v28);
  v51 = v27->fields._size + v23->fields._size;
  if ( v51 < 1 )
  {
    *choiceList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)choiceList, 0LL, v29, v30, v31, v32, v33, v34);
    v66 = unchoiceList;
    v59 = 0LL;
    *unchoiceList = 0LL;
  }
  else
  {
    v52 = System_Collections_Generic_List_long___ToArray(
            v23,
            (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v52;
    sub_1BCA784((PartyOrganizationUtility_o *)choiceList, (int64_t)v52, v53, v54, v55, v56, v57, v58);
    v59 = System_Collections_Generic_List_long___ToArray(
            v27,
            (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v59;
    v66 = unchoiceList;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)v66, (int64_t)v59, v60, v61, v62, v63, v64, v65);
  return v51 > 0;
}


bool __fastcall SvtEqCombineListViewManager__GetSwapLockList(
        SvtEqCombineListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_long__o *v23; // x23
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Collections_Generic_List_long__o *v27; // x22
  SvtEqCombineListViewItem_c *v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t itemList; // x0
  int v36; // w25
  int32_t v37; // w24
  __int64 methodPtr_low; // x9
  __int64 v39; // x8
  __int128 v40; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x8
  __int128 v45; // q0
  struct System_Int64_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  __int64 v49; // x8
  System_Collections_Generic_List_long__o *v50; // x0
  int v51; // w21
  System_Int64_array *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_Int64_array *v59; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  System_Int64_array **v66; // x0
  SvtEqCombineListViewManager_o *v68; // x0
  System_Int64_array **v69; // x1
  System_Int64_array **v70; // x2
  const MethodInfo *v71; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+40h] [xbp-80h]

  if ( (byte_4B19EFC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, lockList, unlockList);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19, v20);
    sub_1BCA7E0(&SvtEqCombineListViewItem_TypeInfo, v21, v22);
    byte_4B19EFC = 1;
  }
  v23 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     lockList,
                                                     unlockList,
                                                     method);
  System_Collections_Generic_List_long____ctor(
    v23,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  v27 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v24,
                                                     v25,
                                                     v26);
  System_Collections_Generic_List_long____ctor(
    v27,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v36 = *(_DWORD *)(itemList + 24);
  if ( v36 >= 1 )
  {
    v37 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v37,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      v28 = SvtEqCombineListViewItem_TypeInfo;
      methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(SvtEqCombineListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != SvtEqCombineListViewItem_TypeInfo )
      {
        sub_1BCACFC(itemList);
        return SvtEqCombineListViewManager__GetSwapChoiceList(v68, v69, v70, v71);
      }
      v39 = *(_QWORD *)(itemList + 120);
      if ( v39 && *(_BYTE *)(itemList + 246) )
      {
        if ( *(_BYTE *)(itemList + 160) )
        {
          v40 = *(_OWORD *)(v39 + 32);
          *(_OWORD *)&v74.fields.currentCryptoKey = *(_OWORD *)(v39 + 16);
          *(_OWORD *)&v74.fields.fakeValue = v40;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(
              CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
              SvtEqCombineListViewItem_TypeInfo);
          v73 = v74;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v73, 0LL);
          if ( !v27 )
            goto LABEL_37;
          items = v27->fields._items;
          v42 = Method_System_Collections_Generic_List_long__Add__;
          ++v27->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v27->fields._size;
          v28 = (SvtEqCombineListViewItem_c *)itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v49 = v42[4];
            v50 = v27;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v50,
              (int64_t)v28,
              *(const MethodInfo_3589C90 **)(*(_QWORD *)(v49 + 192) + 112LL));
            goto LABEL_28;
          }
          v44 = &items->obj.klass + size;
          v27->fields._size = size + 1;
        }
        else
        {
          v45 = *(_OWORD *)(v39 + 32);
          *(_OWORD *)&v74.fields.currentCryptoKey = *(_OWORD *)(v39 + 16);
          *(_OWORD *)&v74.fields.fakeValue = v45;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(
              CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
              SvtEqCombineListViewItem_TypeInfo);
          v72 = v74;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v72, 0LL);
          if ( !v23 )
            goto LABEL_37;
          v46 = v23->fields._items;
          v47 = Method_System_Collections_Generic_List_long__Add__;
          ++v23->fields._version;
          if ( !v46 )
            goto LABEL_37;
          v48 = v23->fields._size;
          v28 = (SvtEqCombineListViewItem_c *)itemList;
          if ( (unsigned int)v48 >= v46->max_length )
          {
            v49 = v47[4];
            v50 = v23;
            goto LABEL_27;
          }
          v44 = &v46->obj.klass + v48;
          v23->fields._size = v48 + 1;
        }
        v44[4] = (Il2CppClass *)v28;
      }
LABEL_28:
      if ( v36 == ++v37 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v23 || !v27 )
LABEL_37:
    sub_1BCAA3C(itemList, v28);
  v51 = v27->fields._size + v23->fields._size;
  if ( v51 < 1 )
  {
    *lockList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)lockList, 0LL, v29, v30, v31, v32, v33, v34);
    v66 = unlockList;
    v59 = 0LL;
    *unlockList = 0LL;
  }
  else
  {
    v52 = System_Collections_Generic_List_long___ToArray(
            v23,
            (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v52;
    sub_1BCA784((PartyOrganizationUtility_o *)lockList, (int64_t)v52, v53, v54, v55, v56, v57, v58);
    v59 = System_Collections_Generic_List_long___ToArray(
            v27,
            (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v59;
    v66 = unlockList;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)v66, (int64_t)v59, v60, v61, v62, v63, v64, v65);
  return v51 > 0;
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
  __int64 i; // x20
  struct ListViewSort_array *sortStatusList; // x8

  if ( (byte_4B19ECA & 1) == 0 )
  {
    sub_1BCA7E0(&SvtEqCombineListViewManager_TypeInfo, v1, v2);
    byte_4B19ECA = 1;
  }
  v3 = SvtEqCombineListViewManager_TypeInfo;
  if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo, v1);
    v3 = SvtEqCombineListViewManager_TypeInfo;
  }
  if ( v3->static_fields->isInitSystem )
  {
    for ( i = 0LL; ; ++i )
    {
      if ( !v3->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v3, v1);
        v3 = SvtEqCombineListViewManager_TypeInfo;
      }
      sortStatusList = v3->static_fields->sortStatusList;
      if ( !sortStatusList )
        goto LABEL_15;
      if ( (unsigned int)i >= sortStatusList->max_length )
        sub_1BCAA44(v3, v1);
      v3 = (SvtEqCombineListViewManager_c *)sortStatusList->m_Items[i];
      if ( !v3 )
LABEL_15:
        sub_1BCAA3C(v3, v1);
      ListViewSort__InitLoad((ListViewSort_o *)v3, 0LL);
      if ( (_DWORD)i == 1 )
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  UserGameEntity_o *SelfUserGame; // x19
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x20
  _BOOL8 v27; // x0
  __int64 v28; // x1
  Il2CppObject *current; // x21
  SvtEqCombineListViewItem_c *v30; // x1
  __int64 methodPtr_low; // x9
  _OWORD *monitor; // x8
  _QWORD *p_monitor; // x22
  __int128 v34; // q0
  int64_t v35; // x0
  Il2CppObject v36; // q0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t UserSvtId; // x0
  const MethodInfo *v44; // x1
  const MethodInfo *v45; // x1
  __int64 v46; // x1
  UnityEngine_Object_o *v47; // x22
  __int64 v48; // x1
  void *v49; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4B19EDA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId, method);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    sub_1BCA7E0(&SvtEqCombineListViewItem_TypeInfo, v21, v22);
    byte_4B19EDA = 1;
  }
  memset(&v53, 0, sizeof(v53));
  if ( !this->fields.itemList )
    return;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( usrSvtId < 1 )
  {
    Entity = 0LL;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
LABEL_36:
      sub_1BCAA3C(Instance, v23);
    }
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               usrSvtId,
               (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_36;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v52,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v53.fields._list = *(_OWORD *)&v52.fields.currentCryptoKey;
  v53.fields._current = (Il2CppObject *)v52.fields.fakeValue;
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v53,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v27 )
      break;
    current = v53.fields._current;
    if ( !v53.fields._current )
      goto LABEL_30;
    v30 = SvtEqCombineListViewItem_TypeInfo;
    methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v53.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (SvtEqCombineListViewItem_c *)v53.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      sub_1BCACFC(v53.fields._current);
LABEL_30:
      if ( !Entity )
        sub_1BCAA3C(v27, v28);
      sub_1BCAA3C(v27, v28);
    }
    if ( Entity )
    {
      p_monitor = &v53.fields._current[7].monitor;
      monitor = v53.fields._current[7].monitor;
      if ( !monitor )
        sub_1BCAA3C(v27, SvtEqCombineListViewItem_TypeInfo);
      v34 = monitor[2];
      *(_OWORD *)&v52.fields.currentCryptoKey = monitor[1];
      *(_OWORD *)&v52.fields.fakeValue = v34;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(
          CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
          SvtEqCombineListViewItem_TypeInfo);
      v51 = v52;
      v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v51, 0LL);
      v36 = Entity[2];
      *(Il2CppObject *)&v50.fields.currentCryptoKey = Entity[1];
      *(Il2CppObject *)&v50.fields.fakeValue = v36;
      if ( v35 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v50, 0LL) )
      {
        *p_monitor = Entity;
        sub_1BCA784((PartyOrganizationUtility_o *)&current[7].monitor, (int64_t)Entity, v37, v38, v39, v40, v41, v42);
      }
    }
    UserSvtId = SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)current, (const MethodInfo *)v30);
    if ( !SelfUserGame )
      sub_1BCAA3C(UserSvtId, v44);
    BYTE4(current[10].klass) = UserSvtId == SelfUserGame->fields.favoriteUserSvtId;
    SvtEqCombineListViewItem__ModifyLockItem((SvtEqCombineListViewItem_o *)current, v44);
    SvtEqCombineListViewItem__ModifyChoiceItem((SvtEqCombineListViewItem_o *)current, v45);
    v47 = (UnityEngine_Object_o *)current[6].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v46);
    if ( UnityEngine_Object__op_Inequality(v47, 0LL, 0LL) )
    {
      v49 = current[6].monitor;
      if ( !v49 )
        sub_1BCAA3C(0LL, v48);
      (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v49 + 392LL))(
        v49,
        current,
        *(_QWORD *)(*(_QWORD *)v49 + 400LL));
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v53,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  int32_t currentType; // w8
  __int64 v36; // x2
  __int64 v37; // x3
  void *ServantEquipList; // x21
  System_Collections_Generic_List_object__o *v39; // x22
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  System_Collections_Generic_List_object__o *v43; // x23
  int v44; // w8
  __int64 v45; // x20
  int64_t v46; // x24
  __int128 v47; // q0
  struct UserServantEntity_o *v48; // x8
  __int128 v49; // q0
  SvtEqCombineListViewManager_o *v50; // x25
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct System_Object_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  Il2CppClass **v60; // x0
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  System_Collections_Generic_List_object__o *v64; // x22
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  System_Collections_Generic_List_object__o *v68; // x23
  int32_t v69; // w21
  __int128 v70; // q0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v72; // q0
  int32_t v73; // w24
  SvtEqCombineListViewManager_o *v74; // x25
  unsigned int v75; // w20
  struct UnityEngine_GameObject_o *dragParentObject; // x8
  __int128 v77; // q1
  __int64 v78; // x28
  __int128 v79; // q0
  SvtEqCombineListViewManager_o *v80; // x26
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  struct System_Object_array *items; // x8
  _QWORD *v88; // x9
  __int64 size; // x10
  Il2CppClass **v90; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 v92; // x25
  int v93; // w28
  unsigned int v94; // w26
  __int64 v95; // x8
  __int128 v96; // q0
  SvtEqCombineListViewManager_o *v97; // x23
  int32_t v98; // w24
  SvtEqCombineListViewItem_o *v99; // x22
  __int64 methodPtr_low; // x9
  struct UnityEngine_GameObject_o *v101; // x8
  __int128 v102; // q0
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v104; // q0
  int64_t v105; // x0
  const MethodInfo *v106; // x5
  SvtEqCombineListViewManager_o *v107; // x0
  ListViewObject_o *v108; // x1
  ListViewItem_o *v109; // x2
  const MethodInfo *v110; // x3
  bool isIconSizeChangea; // [xsp+Ch] [xbp-1A4h]
  bool isIconSizeChangeb; // [xsp+Ch] [xbp-1A4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v113; // [xsp+10h] [xbp-1A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v114; // [xsp+30h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v115; // [xsp+50h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v116; // [xsp+70h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v117; // [xsp+90h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v118; // [xsp+B0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v119; // [xsp+D0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v120; // [xsp+F0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v121; // [xsp+110h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v122; // [xsp+130h] [xbp-80h]

  v3 = isIconSizeChange;
  v4 = this;
  if ( (byte_4B19EDD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, isIconSizeChange, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__Remove__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity___ctor___76803536, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__, v27, v28);
    sub_1BCA7E0(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v29, v30);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v31, v32);
    this = (SvtEqCombineListViewManager_o *)sub_1BCA7E0(&SvtEqCombineListViewItem_TypeInfo, v33, v34);
    byte_4B19EDD = 1;
  }
  currentType = v4->fields.currentType;
  isIconSizeChangea = v3;
  if ( currentType == 1 )
  {
    this = (SvtEqCombineListViewManager_o *)v4->fields.userServantMaster;
    if ( !this )
      goto LABEL_102;
    ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)this, 0LL);
    v64 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                         v61,
                                                         v62,
                                                         v63);
    System_Collections_Generic_List_object____ctor_56235344(
      v64,
      (System_Collections_Generic_IEnumerable_T__o *)ServantEquipList,
      (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___76803536);
    v68 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                         v65,
                                                         v66,
                                                         v67);
    System_Collections_Generic_List_object____ctor(
      v68,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( v4->fields.baseUsrSvtData )
    {
      if ( !v64 )
        goto LABEL_102;
      if ( v64->fields._size >= 1 )
      {
        v69 = 0;
        do
        {
          this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                    v64,
                                                    v69,
                                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
          if ( !this )
            goto LABEL_102;
          v70 = *(_OWORD *)&this->fields.dropObjectList;
          *(UnityEngine_MonoBehaviour_Fields *)&v122.fields.currentCryptoKey = this->fields.UnityEngine_MonoBehaviour_Fields;
          *(_OWORD *)&v122.fields.fakeValue = v70;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, isIconSizeChange);
          v119 = v122;
          this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                    &v119,
                                                    0LL);
          baseUsrSvtData = v4->fields.baseUsrSvtData;
          if ( !baseUsrSvtData )
            goto LABEL_102;
          v72 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
          *(_OWORD *)&v118.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v118.fields.fakeValue = v72;
          if ( this == (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                          &v118,
                                                          0LL) )
            System_Collections_Generic_List_object___RemoveAt(
              v64,
              v69,
              (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
          ++v69;
        }
        while ( v69 < v64->fields._size );
      }
      ServantEquipList = System_Collections_Generic_List_object___ToArray(
                           v64,
                           (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    }
    this = (SvtEqCombineListViewManager_o *)v4->fields._selectedMtSvtList_k__BackingField;
    if ( this && SLODWORD(this->fields.m_CancellationTokenSource) >= 1 )
    {
      v73 = 0;
      while ( 1 )
      {
        this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)this,
                                                  v73,
                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
        if ( !v64 )
          goto LABEL_102;
        if ( v64->fields._size >= 1 )
          break;
LABEL_67:
        this = (SvtEqCombineListViewManager_o *)v4->fields._selectedMtSvtList_k__BackingField;
        if ( !this )
          goto LABEL_102;
        if ( ++v73 >= SLODWORD(this->fields.m_CancellationTokenSource) )
        {
          if ( !v68 )
            goto LABEL_102;
          System_Collections_Generic_List_object___AddRange(
            v68,
            (System_Collections_Generic_IEnumerable_T__o *)v64,
            (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
          this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___ToArray(
                                                    v68,
                                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
          ServantEquipList = this;
          goto LABEL_71;
        }
      }
      v74 = this;
      v75 = 0;
      while ( 1 )
      {
        if ( !ServantEquipList )
          goto LABEL_102;
        if ( v75 >= *((_DWORD *)ServantEquipList + 6) )
          break;
        if ( !v74 )
          goto LABEL_102;
        dragParentObject = v74->fields.dragParentObject;
        if ( !dragParentObject )
          goto LABEL_102;
        v77 = *(_OWORD *)&dragParentObject[1].monitor;
        v78 = *((_QWORD *)ServantEquipList + (int)v75 + 4);
        *(_OWORD *)&v122.fields.currentCryptoKey = *(_OWORD *)&dragParentObject->fields.m_CachedPtr;
        *(_OWORD *)&v122.fields.fakeValue = v77;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, isIconSizeChange);
        v117 = v122;
        this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                  &v117,
                                                  0LL);
        if ( !v78 )
          goto LABEL_102;
        v79 = *(_OWORD *)(v78 + 32);
        v80 = this;
        *(_OWORD *)&v116.fields.currentCryptoKey = *(_OWORD *)(v78 + 16);
        *(_OWORD *)&v116.fields.fakeValue = v79;
        this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                  &v116,
                                                  0LL);
        if ( v80 == this )
        {
          if ( !v68 )
            goto LABEL_102;
          *(_QWORD *)&isIconSizeChange = v74->fields.dragParentObject;
          items = v68->fields._items;
          v88 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v68->fields._version;
          if ( !items )
            goto LABEL_102;
          size = v68->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v68,
              (Il2CppObject *)isIconSizeChange,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
          }
          else
          {
            v90 = &items->obj.klass + size;
            v68->fields._size = size + 1;
            v90[4] = (Il2CppClass *)isIconSizeChange;
            sub_1BCA784((PartyOrganizationUtility_o *)(v90 + 4), isIconSizeChange, v81, v82, v83, v84, v85, v86);
          }
          this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___Remove(
                                                    v64,
                                                    (Il2CppObject *)v74->fields.dragParentObject,
                                                    (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
        }
        if ( (signed int)++v75 >= v64->fields._size )
          goto LABEL_67;
      }
LABEL_100:
      sub_1BCAA44(this, isIconSizeChange);
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
    v39 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                         isIconSizeChange,
                                                         v36,
                                                         v37);
    System_Collections_Generic_List_object____ctor_56235344(
      v39,
      (System_Collections_Generic_IEnumerable_T__o *)ServantEquipList,
      (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___76803536);
    v43 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                         v40,
                                                         v41,
                                                         v42);
    System_Collections_Generic_List_object____ctor(
      v43,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( v4->fields.baseUsrSvtData )
    {
      v44 = *((_DWORD *)ServantEquipList + 6);
      if ( v44 >= 1 )
      {
        v45 = 0LL;
        while ( (unsigned int)v45 < v44 )
        {
          v46 = *((_QWORD *)ServantEquipList + v45 + 4);
          if ( !v46 )
            goto LABEL_102;
          v47 = *(_OWORD *)(v46 + 32);
          *(_OWORD *)&v122.fields.currentCryptoKey = *(_OWORD *)(v46 + 16);
          *(_OWORD *)&v122.fields.fakeValue = v47;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, isIconSizeChange);
          v121 = v122;
          this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                    &v121,
                                                    0LL);
          v48 = v4->fields.baseUsrSvtData;
          if ( !v48 )
            goto LABEL_102;
          v49 = *(_OWORD *)&v48->fields.id.fields.fakeValue;
          v50 = this;
          *(_OWORD *)&v120.fields.currentCryptoKey = *(_OWORD *)&v48->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v120.fields.fakeValue = v49;
          this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                    &v120,
                                                    0LL);
          if ( v50 == this )
          {
            if ( !v43 )
              goto LABEL_102;
            v57 = v43->fields._items;
            v58 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v43->fields._version;
            if ( !v57 )
              goto LABEL_102;
            v59 = v43->fields._size;
            if ( (unsigned int)v59 >= v57->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v43,
                (Il2CppObject *)v46,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
            }
            else
            {
              v60 = &v57->obj.klass + v59;
              v43->fields._size = v59 + 1;
              v60[4] = (Il2CppClass *)v46;
              sub_1BCA784((PartyOrganizationUtility_o *)(v60 + 4), v46, v51, v52, v53, v54, v55, v56);
            }
            if ( !v39 )
              goto LABEL_102;
            this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___Remove(
                                                      v39,
                                                      (Il2CppObject *)v46,
                                                      (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
          }
          v44 = *((_DWORD *)ServantEquipList + 6);
          if ( (int)++v45 >= v44 )
            goto LABEL_30;
        }
        goto LABEL_100;
      }
LABEL_30:
      if ( !v43 )
        goto LABEL_102;
      System_Collections_Generic_List_object___AddRange(
        v43,
        (System_Collections_Generic_IEnumerable_T__o *)v39,
        (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___ToArray(
                                                v43,
                                                (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      ServantEquipList = this;
      if ( !this )
        goto LABEL_102;
    }
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_102;
  v92 = *((_QWORD *)ServantEquipList + 3);
  if ( (int)v92 >= 1 )
  {
    v93 = itemList->fields._size;
    v94 = 0;
    isIconSizeChangeb = isIconSizeChangea;
    while ( 1 )
    {
      v95 = *((_QWORD *)ServantEquipList + (int)v94 + 4);
      if ( !v95 )
        goto LABEL_102;
      v96 = *(_OWORD *)(v95 + 32);
      *(_OWORD *)&v122.fields.currentCryptoKey = *(_OWORD *)(v95 + 16);
      *(_OWORD *)&v122.fields.fakeValue = v96;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, isIconSizeChange);
      v115 = v122;
      this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                &v115,
                                                0LL);
      if ( v93 >= 1 )
        break;
LABEL_98:
      if ( ++v94 == (_DWORD)v92 )
        return;
      if ( v94 >= *((_DWORD *)ServantEquipList + 6) )
        goto LABEL_100;
    }
    v97 = this;
    v98 = 0;
    while ( 1 )
    {
      this = (SvtEqCombineListViewManager_o *)v4->fields.itemList;
      if ( !this )
        goto LABEL_102;
      this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)this,
                                                v98,
                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        goto LABEL_102;
      *(_QWORD *)&isIconSizeChange = SvtEqCombineListViewItem_TypeInfo;
      v99 = (SvtEqCombineListViewItem_o *)this;
      methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (SvtEqCombineListViewItem_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        break;
      }
      v101 = this->fields.dragParentObject;
      if ( v101 )
      {
        v102 = *(_OWORD *)&v101[1].monitor;
        *(_OWORD *)&v122.fields.currentCryptoKey = *(_OWORD *)&v101->fields.m_CachedPtr;
        *(_OWORD *)&v122.fields.fakeValue = v102;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(
            CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
            SvtEqCombineListViewItem_TypeInfo);
        v114 = v122;
        this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                  &v114,
                                                  0LL);
        if ( this == v97 )
        {
          userSvtEntity = v99->fields.userSvtEntity;
          if ( userSvtEntity )
          {
            v104 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v122.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v122.fields.fakeValue = v104;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, isIconSizeChange);
            v113 = v122;
            v105 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v113, 0LL);
            SvtEqCombineListViewManager__ModifyLockItem_46247304(v4, v99, v105, 1, isIconSizeChangeb, v106);
            goto LABEL_98;
          }
LABEL_102:
          sub_1BCAA3C(this, isIconSizeChange);
        }
      }
      if ( v93 == ++v98 )
        goto LABEL_98;
    }
    sub_1BCACFC(this);
    SvtEqCombineListViewManager__SetObjectItem(v107, v108, v109, v110);
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x21
  bool v30; // w29
  int64_t v31; // x0
  SvtEqCombineListViewItem_c *v32; // x1
  Il2CppObject *current; // x22
  __int64 methodPtr_low; // x9
  _OWORD *monitor; // x8
  _QWORD *p_monitor; // x23
  __int128 v37; // q0
  int64_t v38; // x0
  Il2CppObject v39; // q0
  int64_t v40; // x24
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  const MethodInfo *v47; // x1
  UnityEngine_Object_o *v48; // x23
  __int64 v49; // x1
  void *v50; // x0
  __int64 v51; // x1
  ListViewObject_o *v52; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4B19EDB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId, isInit);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    sub_1BCA7E0(&SvtEqCombineListViewItem_TypeInfo, v25, v26);
    byte_4B19EDB = 1;
  }
  memset(&v56, 0, sizeof(v56));
  if ( !this->fields.itemList )
    return;
  UserGameMaster__getSelfUserGame(0LL);
  if ( usrSvtId < 1 )
  {
    Entity = 0LL;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
LABEL_42:
      sub_1BCAA3C(Instance, v27);
    }
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               usrSvtId,
               (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_42;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v55,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v56.fields._list = *(_OWORD *)&v55.fields.currentCryptoKey;
  v56.fields._current = (Il2CppObject *)v55.fields.fakeValue;
  v30 = !isIconSizeChange && isInit;
  while ( 1 )
  {
    v31 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v56,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v31 & 1) == 0 )
      break;
    current = v56.fields._current;
    if ( v56.fields._current )
    {
      v32 = SvtEqCombineListViewItem_TypeInfo;
      methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v56.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (SvtEqCombineListViewItem_c *)v56.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        sub_1BCACFC(v56.fields._current);
LABEL_36:
        sub_1BCAA3C(v31, v32);
      }
      if ( Entity )
      {
        p_monitor = &v56.fields._current[7].monitor;
        monitor = v56.fields._current[7].monitor;
        if ( !monitor )
          sub_1BCAA3C(v31, SvtEqCombineListViewItem_TypeInfo);
        v37 = monitor[2];
        *(_OWORD *)&v55.fields.currentCryptoKey = monitor[1];
        *(_OWORD *)&v55.fields.fakeValue = v37;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(
            CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
            SvtEqCombineListViewItem_TypeInfo);
        v54 = v55;
        v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v54, 0LL);
        v39 = Entity[2];
        v40 = v38;
        *(Il2CppObject *)&v53.fields.currentCryptoKey = Entity[1];
        *(Il2CppObject *)&v53.fields.fakeValue = v39;
        v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v53, 0LL);
        if ( v40 == v31 )
        {
          *p_monitor = Entity;
          sub_1BCA784((PartyOrganizationUtility_o *)&current[7].monitor, (int64_t)Entity, v41, v42, v43, v44, v45, v46);
        }
      }
    }
    else if ( Entity )
    {
      sub_1BCAA3C(v31, v32);
    }
    if ( v30 )
    {
      if ( !current )
        goto LABEL_36;
      SvtEqCombineListViewItem__ModifyLockItem((SvtEqCombineListViewItem_o *)current, (const MethodInfo *)v32);
      SvtEqCombineListViewItem__ModifyChoiceItem((SvtEqCombineListViewItem_o *)current, v47);
    }
    else if ( !current )
    {
      sub_1BCAA3C(v31, v32);
    }
    v48 = (UnityEngine_Object_o *)current[6].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
    if ( UnityEngine_Object__op_Inequality(v48, 0LL, 0LL) )
    {
      v50 = current[6].monitor;
      if ( !v50 )
        sub_1BCAA3C(0LL, v49);
      (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v50 + 392LL))(
        v50,
        current,
        *(_QWORD *)(*(_QWORD *)v50 + 400LL));
      if ( isIconSizeChange )
      {
        v52 = (ListViewObject_o *)current[6].monitor;
        if ( !v52 )
          sub_1BCAA3C(0LL, v51);
        ListViewObject__SetItemSeed(v52, (ListViewItem_o *)current, this->fields.seed, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v56,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall SvtEqCombineListViewManager__ModifyLockItem_46247304(
        SvtEqCombineListViewManager_o *this,
        SvtEqCombineListViewItem_o *servantItem,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  SvtEqCombineListViewManager_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v20; // q1
  SvtEqCombineListViewManager_o *v21; // x23
  int64_t v22; // x0
  __int128 v23; // q1
  SvtEqCombineListViewManager_o *v24; // x25
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  const MethodInfo *v31; // x1
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+40h] [xbp-60h]

  v10 = this;
  if ( (byte_4B19EDC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, servantItem, usrSvtId);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15, v16);
    this = (SvtEqCombineListViewManager_o *)sub_1BCA7E0(
                                              &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                              v17,
                                              v18);
    byte_4B19EDC = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (SvtEqCombineListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_26;
    this = (SvtEqCombineListViewManager_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_26;
    this = (SvtEqCombineListViewManager_o *)DataMasterBase_object__object__long___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              usrSvtId,
                                              (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( this )
    {
      if ( !servantItem )
        goto LABEL_26;
      userSvtEntity = servantItem->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_26;
      v20 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      v21 = this;
      *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v35.fields.fakeValue = v20;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, servantItem);
      v34 = v35;
      v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v34, 0LL);
      v23 = *(_OWORD *)&v21->fields.dropObjectList;
      v24 = (SvtEqCombineListViewManager_o *)v22;
      *(UnityEngine_MonoBehaviour_Fields *)&v33.fields.currentCryptoKey = v21->fields.UnityEngine_MonoBehaviour_Fields;
      *(_OWORD *)&v33.fields.fakeValue = v23;
      this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                &v33,
                                                0LL);
      if ( v24 == this )
      {
        servantItem->fields.userSvtEntity = (struct UserServantEntity_o *)v21;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&servantItem->fields.userSvtEntity,
          (int64_t)v21,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30);
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
    SvtEqCombineListViewItem__ModifyChoiceItem(servantItem, v31);
  }
  viewObject = (UnityEngine_Object_o *)servantItem->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, servantItem);
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
    sub_1BCAA3C(this, servantItem);
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickBonusFilterKind(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_4B19EF4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SvtEqCombineListViewManager_OnClickBonusFilterKind__, method, v2);
    byte_4B19EF4 = 1;
  }
  if ( this->fields.isInput )
  {
    v4 = Method_SvtEqCombineListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_SvtEqCombineListViewManager_OnClickBonusFilterKind__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BCAA3C(0LL, v6);
    ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, 0, 0LL, 0LL);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickChoiceTab(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x3
  SvtEqCombineListViewManager_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2

  if ( (byte_4B19F00 & 1) == 0 )
  {
    sub_1BCA7E0(&SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SvtEqCombineListViewManager_EndClickTabChoice__, v4, v5);
    sub_1BCA7E0(&Method_SvtEqCombineListViewManager_OnClickChoiceTab__, v6, v7);
    byte_4B19F00 = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    v8 = Method_SvtEqCombineListViewManager_OnClickChoiceTab__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickChoiceTab__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_SvtEqCombineListViewManager_OnClickChoiceTab__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v13 = (SvtEqCombineListViewManager_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                   SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo,
                                                                   v10,
                                                                   v11,
                                                                   v12);
      SvtEqCombineListViewManager_RequestCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_SvtEqCombineListViewManager_EndClickTabChoice__,
        v14);
      SvtEqCombineListViewManager__StatusRequest(this, v13, v15);
    }
    else
    {
      SvtEqCombineListViewManager__SetStatusKind(this, 2, v11);
      SvtEqCombineListViewManager__ReleaseAll(this, v16);
      SvtEqCombineListViewManager__ModifyList(this, 0, v17);
      SvtEqCombineListViewManager__SetMode_46250000(this, 2, v18);
    }
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickCollectLock(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x3
  SvtEqCombineListViewManager_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2

  if ( (byte_4B19EFF & 1) == 0 )
  {
    sub_1BCA7E0(&SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SvtEqCombineListViewManager_EndClickTabLock__, v4, v5);
    sub_1BCA7E0(&Method_SvtEqCombineListViewManager_OnClickCollectLock__, v6, v7);
    byte_4B19EFF = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    v8 = Method_SvtEqCombineListViewManager_OnClickCollectLock__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickCollectLock__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_SvtEqCombineListViewManager_OnClickCollectLock__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v13 = (SvtEqCombineListViewManager_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                   SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo,
                                                                   v10,
                                                                   v11,
                                                                   v12);
      SvtEqCombineListViewManager_RequestCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_SvtEqCombineListViewManager_EndClickTabLock__,
        v14);
      SvtEqCombineListViewManager__StatusRequest(this, v13, v15);
    }
    else
    {
      SvtEqCombineListViewManager__SetStatusKind(this, 1, v11);
      SvtEqCombineListViewManager__ReleaseAll(this, v16);
      SvtEqCombineListViewManager__ModifyList(this, 0, v17);
      SvtEqCombineListViewManager__SetMode_46250000(this, 2, v18);
    }
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickDecide(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  _BOOL4 isDecideFlg; // w20
  System_Reflection_MethodBase_o *v10; // x0
  const MethodInfo *v11; // x1
  struct CombineRootComponent_o *v12; // x0
  __int64 v13; // x1
  CombineRootComponent_o *combineRootComponent; // x8
  const MethodInfo *v15; // x1
  ServantCheckEquipDialog_o *servantEquipCheckDialog; // x20
  System_Collections_Generic_List_SvtEqCombineListViewItem__o *SelectedMaterialList; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  ServantCheckEquipDialog_ClickDelegate_o *v21; // x22

  if ( (byte_4B19EE3 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCheckEquipDialog_ClickDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SvtEqCombineListViewManager_CloseServantCheckEquipDialog__, v4, v5);
    sub_1BCA7E0(&Method_SvtEqCombineListViewManager_OnClickDecide__, v6, v7);
    byte_4B19EE3 = 1;
  }
  v8 = Method_SvtEqCombineListViewManager_OnClickDecide__;
  isDecideFlg = this->fields.isDecideFlg;
  if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickDecide__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_SvtEqCombineListViewManager_OnClickDecide__);
  v10 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  if ( isDecideFlg )
  {
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
    v12 = (struct CombineRootComponent_o *)SvtEqCombineListViewManager__CheckMaterialEquipped(this, v11);
    combineRootComponent = this->fields.combineRootComponent;
    this->fields._isOpenCheckEquipDialog_k__BackingField = (unsigned __int8)v12 & 1;
    if ( !combineRootComponent )
      goto LABEL_15;
    CombineRootComponent__SetBackSelect(combineRootComponent, 1, 0LL);
    if ( this->fields._isOpenCheckEquipDialog_k__BackingField )
    {
      servantEquipCheckDialog = this->fields.servantEquipCheckDialog;
      SelectedMaterialList = SvtEqCombineListViewManager__GetSelectedMaterialList(this, v15);
      v21 = (ServantCheckEquipDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                         ServantCheckEquipDialog_ClickDelegate_TypeInfo,
                                                         v18,
                                                         v19,
                                                         v20);
      ServantCheckEquipDialog_ClickDelegate___ctor(
        v21,
        (Il2CppObject *)this,
        Method_SvtEqCombineListViewManager_CloseServantCheckEquipDialog__,
        0LL);
      if ( servantEquipCheckDialog )
      {
        ServantCheckEquipDialog__Open(servantEquipCheckDialog, SelectedMaterialList, 0, v21, 0LL);
        return;
      }
LABEL_15:
      sub_1BCAA3C(v12, v13);
    }
    SvtEqCombineListViewManager__SetSelectedMaterialInfo(this, v15);
    v12 = this->fields.combineRootComponent;
    if ( !v12 )
      goto LABEL_15;
    if ( v12->fields.state == 4 )
      CombineRootComponent__SetSelectSvtEqMaterialList(v12, 0LL);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v10, 2, 0LL);
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickFilter2Kind(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x0
  __int64 v9; // x1
  struct ListViewSort_o *sort; // x8
  int32_t filter2Kind; // w21
  int32_t v12; // w9

  if ( (byte_4B19EF5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SvtEqCombineListViewManager_OnClickFilter2Kind__, method, v2);
    sub_1BCA7E0(&SvtEqCombineListViewManager_TypeInfo, v4, v5);
    byte_4B19EF5 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_SvtEqCombineListViewManager_OnClickFilter2Kind__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickFilter2Kind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BCA7F8(Method_SvtEqCombineListViewManager_OnClickFilter2Kind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort
      || (filter2Kind = sort->fields.filter2Kind, !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished)
      && (j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo, v9), (sort = this->fields.sort) == 0LL) )
    {
      sub_1BCAA3C(v8, v9);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  ServantFilterSelectMenu_CallbackFunc_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1

  if ( (byte_4B19EF1 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_SvtEqCombineListViewManager_EndSelectFilterKind__, v6, v7);
    sub_1BCA7E0(&Method_SvtEqCombineListViewManager_OnClickFilterKind__, v8, v9);
    byte_4B19EF1 = 1;
  }
  if ( this->fields.isInput )
  {
    v10 = Method_SvtEqCombineListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCA7F8(Method_SvtEqCombineListViewManager_OnClickFilterKind__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v14 = (CommonUI_o *)Instance;
    v18 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                      ServantFilterSelectMenu_CallbackFunc_TypeInfo,
                                                      v15,
                                                      v16,
                                                      v17);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v18,
      (Il2CppObject *)this,
      Method_SvtEqCombineListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v14 )
      sub_1BCAA3C(v19, v20);
    CommonUI__OpenServantFilterSelectMenu_30773292(v14, 5, sort, (ListViewManager_o *)this, v18, -1, 0LL);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 methodPtr_low; // x9
  SvtEqCombineListViewItem_o *Item; // x0
  _QWORD *v11; // x8
  SvtEqCombineListViewItem_o *v12; // x20
  System_Reflection_MethodBase_o *v13; // x0
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

  v4 = this;
  if ( (byte_4B19EEE & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, obj, method);
    sub_1BCA7E0(&Method_SvtEqCombineListViewManager_OnClickLockModeItem__, v5, v6);
    this = (SvtEqCombineListViewManager_o *)sub_1BCA7E0(&SvtEqCombineListViewObject_TypeInfo, v7, v8);
    byte_4B19EEE = 1;
  }
  if ( !obj )
    goto LABEL_13;
  methodPtr_low = LOBYTE(SvtEqCombineListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (SvtEqCombineListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    sub_1BCACFC(obj);
    SvtEqCombineListViewManager__IsDragEnable(v19, v20, v21);
    return;
  }
  Item = SvtEqCombineListViewObject__GetItem(
           (SvtEqCombineListViewObject_o *)obj,
           (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo);
  v11 = Method_SvtEqCombineListViewManager_OnClickLockModeItem__;
  v12 = Item;
  if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickLockModeItem__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1BCA7F8(Method_SvtEqCombineListViewManager_OnClickLockModeItem__);
  v13 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v11, v11[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 11, 0LL);
  if ( !v12 || (userSvtEntity = v12->fields.userSvtEntity, v12->fields.isSwapLock ^= 1u, !userSvtEntity) )
LABEL_13:
    sub_1BCAA3C(this, obj);
  v15 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v23.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v23.fields.fakeValue = v15;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, obj);
  v22 = v23;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v22, 0LL);
  SvtEqCombineListViewManager__ModifyLockItem(v4, v16, 0, 0, v17);
  SvtEqCombineListViewManager__SetMode_46250000(v4, 3, v18);
}


void __fastcall SvtEqCombineListViewManager__OnClickNormalStatus(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  SvtEqCombineListViewManager_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2

  if ( (byte_4B19EFE & 1) == 0 )
  {
    sub_1BCA7E0(&SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SvtEqCombineListViewManager_EndClickTabStatus__, v4, v5);
    sub_1BCA7E0(&Method_SvtEqCombineListViewManager_OnClickNormalStatus__, v6, v7);
    byte_4B19EFE = 1;
  }
  if ( this->fields.modeKind )
  {
    v8 = Method_SvtEqCombineListViewManager_OnClickNormalStatus__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickNormalStatus__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_SvtEqCombineListViewManager_OnClickNormalStatus__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    v13 = (SvtEqCombineListViewManager_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                 SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo,
                                                                 v10,
                                                                 v11,
                                                                 v12);
    SvtEqCombineListViewManager_RequestCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_SvtEqCombineListViewManager_EndClickTabStatus__,
      v14);
    SvtEqCombineListViewManager__StatusRequest(this, v13, v15);
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickReleaseAll(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B19EE9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SvtEqCombineListViewManager_OnClickReleaseAll__, method, v2);
    byte_4B19EE9 = 1;
  }
  v4 = Method_SvtEqCombineListViewManager_OnClickReleaseAll__;
  if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickReleaseAll__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_SvtEqCombineListViewManager_OnClickReleaseAll__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
  SvtEqCombineListViewManager__ReleaseAll(this, v6);
}


void __fastcall SvtEqCombineListViewManager__OnClickScaleChange(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  SvtEqCombineListViewManager_o *v15; // x0
  int v16; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  ListViewSort_o *sort; // x0
  int32_t v19; // w1
  UISprite_o *scaleChangeButtonSprite; // x20
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x2

  if ( (byte_4B19EFB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SvtEqCombineListViewManager_OnClickScaleChange__, method, v2);
    byte_4B19EFB = 1;
  }
  v4 = Method_SvtEqCombineListViewManager_OnClickScaleChange__;
  if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_SvtEqCombineListViewManager_OnClickScaleChange__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v15 = this;
    v16 = 2;
    goto LABEL_11;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v15 = this;
    v16 = 3;
    goto LABEL_11;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v15 = this;
    v16 = 1;
LABEL_11:
    v15->fields.seed = smallSizeSeed;
    p_seed = &v15->fields.seed;
    *((_DWORD *)p_seed + 159) = v16;
    sub_1BCA784((PartyOrganizationUtility_o *)p_seed, (int64_t)smallSizeSeed, v7, v8, v9, v10, v11, v12);
  }
  sort = this->fields.sort;
  if ( !sort
    || (v19 = this->fields.scaleType,
        sort->fields.iconScaleKind = v19,
        scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, v19, 0LL),
        !scaleChangeButtonSprite) )
  {
    sub_1BCAA3C(sort, v6);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL);
  SvtEqCombineListViewManager__ModifyList(this, 1, v21);
  SvtEqCombineListViewManager__SetMode_46250000(this, 2, v22);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall SvtEqCombineListViewManager__OnClickSelectBase(
        SvtEqCombineListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  SvtEqCombineListViewManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 methodPtr_low; // x9
  struct UserServantEntity_o *baseUsrSvtData; // x8
  SvtEqCombineListViewItem_o *v13; // x21
  __int128 v14; // q1
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *tempMtSvtList; // x8
  int32_t size; // w2
  int v25; // w9
  int32_t v26; // w22
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  int64_t userSvtEntity; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  SvtEqCombineListViewManager_o *v36; // x0
  ListViewObject_o *v37; // x1
  const MethodInfo *v38; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+20h] [xbp-50h]

  v4 = this;
  if ( (byte_4B19EEC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__, obj, method);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SvtEqCombineListViewManager_OnClickSelectBase__, v7, v8);
    this = (SvtEqCombineListViewManager_o *)sub_1BCA7E0(&SvtEqCombineListViewObject_TypeInfo, v9, v10);
    byte_4B19EEC = 1;
  }
  if ( !obj )
    goto LABEL_31;
  methodPtr_low = LOBYTE(SvtEqCombineListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (SvtEqCombineListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    sub_1BCACFC(obj);
    SvtEqCombineListViewManager__OnClickListView(v36, v37, v38);
    return;
  }
  this = (SvtEqCombineListViewManager_o *)SvtEqCombineListViewObject__GetItem(
                                            (SvtEqCombineListViewObject_o *)obj,
                                            (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo);
  baseUsrSvtData = v4->fields.baseUsrSvtData;
  v13 = (SvtEqCombineListViewItem_o *)this;
  if ( baseUsrSvtData )
  {
    v14 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v40.fields.fakeValue = v14;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, obj);
    v39 = v40;
    this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                              &v39,
                                              0LL);
    if ( !v13 )
      goto LABEL_31;
    if ( this == (SvtEqCombineListViewManager_o *)SvtEqCombineListViewItem__get_UserSvtId(v13, (const MethodInfo *)obj) )
    {
      v15 = Method_SvtEqCombineListViewManager_OnClickSelectBase__;
      if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickSelectBase__ + 83) & 2) != 0 )
        v15 = (_QWORD *)sub_1BCA7F8(Method_SvtEqCombineListViewManager_OnClickSelectBase__);
      v16 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v15, v15[4]);
      OverwriteAssetSoundName__PlaySystemSe(v16, 1, 0LL);
      v4->fields.baseUsrSvtData = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.baseUsrSvtData, 0LL, v17, v18, v19, v20, v21, v22);
      tempMtSvtList = v4->fields.tempMtSvtList;
      if ( tempMtSvtList )
      {
        size = tempMtSvtList->fields._size;
        v25 = tempMtSvtList->fields._version + 1;
        tempMtSvtList->fields._size = 0;
        tempMtSvtList->fields._version = v25;
        if ( size >= 1 )
          System_Array__Clear((System_Array_o *)tempMtSvtList->fields._items, 0, size, 0LL);
        goto LABEL_26;
      }
LABEL_31:
      sub_1BCAA3C(this, obj);
    }
  }
  else if ( !this )
  {
    goto LABEL_31;
  }
  if ( v13->fields.type )
  {
    v26 = 0;
  }
  else if ( v13->fields.isLvMax && v13->fields.isLimitCntMax )
  {
    v26 = 2;
  }
  else
  {
    v26 = 2 * v13->fields.isSvtEqMaterial;
  }
  v27 = Method_SvtEqCombineListViewManager_OnClickSelectBase__;
  if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickSelectBase__ + 83) & 2) != 0 )
    v27 = (_QWORD *)sub_1BCA7F8(Method_SvtEqCombineListViewManager_OnClickSelectBase__);
  v28 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v27, v27[4]);
  OverwriteAssetSoundName__PlaySystemSe(v28, v26, 0LL);
  userSvtEntity = (int64_t)v13->fields.userSvtEntity;
  v4->fields.baseUsrSvtData = (struct UserServantEntity_o *)userSvtEntity;
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.baseUsrSvtData, userSvtEntity, v30, v31, v32, v33, v34, v35);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 methodPtr_low; // x9
  ListViewItem_o *v14; // x20
  const MethodInfo *v15; // x1
  int32_t selectNum; // w21
  _BOOL8 v17; // x0
  __int64 v18; // x1
  int32_t klass; // w9
  int32_t selectSum; // w8
  void *v21; // x0
  int v22; // w1
  __int64 v23; // x20
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4B19EED & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, obj, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v9, v10);
    this = (SvtEqCombineListViewManager_o *)sub_1BCA7E0(&SvtEqCombineListViewObject_TypeInfo, v11, v12);
    byte_4B19EED = 1;
  }
  memset(&v24, 0, sizeof(v24));
  if ( !obj )
    goto LABEL_21;
  methodPtr_low = LOBYTE(SvtEqCombineListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (SvtEqCombineListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    sub_1BCACFC(obj);
    if ( v22 != 1 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v24,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      sub_1CB5270();
    }
    v23 = *(_QWORD *)__cxa_begin_catch(v21);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v24,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( v23 )
      sub_1BCAA34(v23);
    goto LABEL_18;
  }
  this = (SvtEqCombineListViewManager_o *)SvtEqCombineListViewObject__GetItem(
                                            (SvtEqCombineListViewObject_o *)obj,
                                            (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo);
  if ( !this )
    goto LABEL_21;
  v14 = (ListViewItem_o *)this;
  if ( ListViewItem__get_IsSelect((ListViewItem_o *)this, 0LL) )
  {
    selectNum = v14->fields.selectNum;
    ListViewItem__set_IsSelect(v14, 0, 0LL);
    this = (SvtEqCombineListViewManager_o *)v4->fields.itemList;
    --v4->fields.selectSum;
    if ( this )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v24,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( 1 )
      {
        v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v24,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v17 )
          break;
        if ( !v24.fields._current )
          sub_1BCAA3C(v17, v18);
        klass = (int32_t)v24.fields._current[1].klass;
        if ( klass > selectNum )
          LODWORD(v24.fields._current[1].klass) = klass - 1;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v24,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      goto LABEL_18;
    }
LABEL_21:
    sub_1BCAA3C(this, obj);
  }
  selectSum = v4->fields.selectSum;
  if ( v4->fields.modeKind || selectSum < v4->fields.selectMax )
  {
    v14->fields.selectNum = selectSum;
    v4->fields.selectSum = selectSum + 1;
LABEL_18:
    SvtEqCombineListViewManager__RefrashListDisp(v4, v15);
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickSortAscendingOrder(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4B19EF8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SvtEqCombineListViewManager_OnClickSortAscendingOrder__, method, v2);
    byte_4B19EF8 = 1;
  }
  if ( this->fields.isInput )
  {
    v4 = Method_SvtEqCombineListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_SvtEqCombineListViewManager_OnClickSortAscendingOrder__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BCAA3C(v6, v7);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickSortKind(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  int32_t itemType; // w23
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v15; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  ServantSortSelectMenu_CallbackFunc_o *v19; // x22
  __int64 v20; // x0
  __int64 v21; // x1

  if ( (byte_4B19EF6 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_SvtEqCombineListViewManager_EndSelectSortKind__, v6, v7);
    sub_1BCA7E0(&Method_SvtEqCombineListViewManager_OnClickSortKind__, v8, v9);
    byte_4B19EF6 = 1;
  }
  if ( this->fields.isInput )
  {
    v10 = Method_SvtEqCombineListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCA7F8(Method_SvtEqCombineListViewManager_OnClickSortKind__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    itemType = this->fields.itemType;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v15 = (CommonUI_o *)Instance;
    v19 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                    ServantSortSelectMenu_CallbackFunc_TypeInfo,
                                                    v16,
                                                    v17,
                                                    v18);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v19,
      (Il2CppObject *)this,
      Method_SvtEqCombineListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v15 )
      sub_1BCAA3C(v20, v21);
    CommonUI__OpenServantSortSelectMenu(v15, 2, sort, itemType == 1, v19, 0LL);
  }
}


void __fastcall SvtEqCombineListViewManager__OnLongPushListView(
        SvtEqCombineListViewManager_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  SvtEqCombineListViewItem_c *v19; // x1
  __int64 methodPtr_low; // x9
  System_Collections_Generic_List_object__o *selectedMtSvtList_k__BackingField; // x0
  const MethodInfo *v22; // x1
  int64_t UserSvtId; // x0
  const MethodInfo *v24; // x1
  UnityEngine_Behaviour_o *scrollView; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct UserServantEntity_o *monitor; // x1
  void *v33; // x0
  int v34; // w1
  __int64 v35; // x22
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B19EEF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__, item, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v11, v12);
    sub_1BCA7E0(&SvtEqCombineListViewItem_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SvtEqCombineListViewManager_OnLongPushListView__, v15, v16);
    byte_4B19EEF = 1;
  }
  memset(&v37, 0, sizeof(v37));
  if ( (unsigned int)(this->fields.modeKind - 1) >= 2 )
  {
    v17 = Method_SvtEqCombineListViewManager_OnLongPushListView__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
      v17 = (_QWORD *)sub_1BCA7F8(Method_SvtEqCombineListViewManager_OnLongPushListView__);
    v18 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v17, v17[4]);
    OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0LL);
    if ( item
      && ((v19 = SvtEqCombineListViewItem_TypeInfo,
           methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
           LOBYTE(item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
       || (SvtEqCombineListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo) )
    {
      sub_1BCACFC(item);
      if ( v34 != 1 )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v37,
          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
        sub_1CB5270();
      }
      v35 = *(_QWORD *)__cxa_begin_catch(v33);
      __cxa_end_catch();
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v37,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
      if ( v35 )
        sub_1BCAA34(v35);
    }
    else
    {
      selectedMtSvtList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._selectedMtSvtList_k__BackingField;
      this->fields.isSelectMaterial = 0;
      if ( selectedMtSvtList_k__BackingField && selectedMtSvtList_k__BackingField->fields._size >= 1 )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v36,
          selectedMtSvtList_k__BackingField,
          (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__);
        v37 = v36;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v37,
                  (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__) )
        {
          if ( !v37.fields._current )
            sub_1BCAA3C(0LL, v22);
          UserSvtId = SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)v37.fields._current, v22);
          if ( !item )
            sub_1BCAA3C(UserSvtId, v24);
          if ( UserSvtId == SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)item, v24) )
            this->fields.isSelectMaterial = 1;
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v37,
          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
      }
    }
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !scrollView
      || (UnityEngine_Behaviour__set_enabled(scrollView, 0, 0LL), !item)
      || (monitor = (struct UserServantEntity_o *)item[1].monitor,
          this->fields.selectUsrSvtEntity = monitor,
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.selectUsrSvtEntity,
            (int64_t)monitor,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31),
          (scrollView = (UnityEngine_Behaviour_o *)this->fields.combineRootComponent) == 0LL) )
    {
      sub_1BCAA3C(scrollView, v19);
    }
    if ( *((_DWORD *)&scrollView[18].fields + 1) == 4 )
      CombineRootComponent__SelectShowServant((CombineRootComponent_o *)scrollView, 0LL);
  }
}


void __fastcall SvtEqCombineListViewManager__OnMoveEnd(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  UIScrollView_o *v15; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4B19EE2 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19EE2 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.callbackCount = v6;
    if ( !v6 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v15 = this->fields.scrollView;
        if ( !v15
          || (((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v15->klass->vtable._8_UpdateScrollbars.method)(
                v15,
                1LL,
                v15->klass->vtable._9_SetDragAmount.methodPtr),
              (v15 = this->fields.scrollView) == 0LL) )
        {
          sub_1BCAA3C(v15, v8);
        }
        UIScrollView__UpdatePosition(v15, 0LL);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc2, 0LL, v9, v10, v11, v12, v13, v14);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x20
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t CombineQpSvtEq; // w0
  const MethodInfo *v48; // x2
  int32_t v49; // w21
  __int64 itemList; // x0
  _BOOL8 v51; // x0
  __int64 v52; // x1
  SvtEqCombineListViewItem_o *current; // x22
  __int64 methodPtr_low; // x9
  __int64 v55; // x1
  UserServantEntity_o *v56; // x0
  const MethodInfo *v57; // x1
  UserServantEntity_o *v58; // x0
  int32_t addTotalExp; // w24
  __int64 v60; // x1
  UILabel_o *selectInfoLabel; // x21
  System_String_o *v62; // x22
  Il2CppObject *v63; // x23
  Il2CppObject *v64; // x0
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_object__o *combineEventList; // x0
  _BOOL8 v67; // x0
  __int64 v68; // x1
  __int64 v69; // x2
  Il2CppObject *v70; // x24
  int klass_high; // w8
  float v72; // s8
  int32_t selectExp; // s9
  float v74; // s0
  int32_t v75; // w8
  float v76; // s8
  int32_t selectQp; // s9
  float v78; // s0
  int32_t v79; // w8
  UILabel_o *spendQpLabel; // x21
  Il2CppObject *v81; // x0
  float v82; // s1
  float v83; // s0
  float v84; // s3
  float v85; // s2
  UILabel_o *getBasicExpLabel; // x21
  Il2CppObject *v87; // x0
  UILabel_o *getAccExpLabel; // x21
  Il2CppObject *v89; // x0
  const MethodInfo *v90; // x2
  struct UserServantEntity_o *v91; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v92; // x21
  __int64 v93; // x22
  __int64 v94; // x23
  int32_t v95; // w8
  const MethodInfo *v96; // x4
  int32_t LevelMax; // w21
  struct UserServantEntity_o *v98; // x8
  int32_t increLv; // w22
  int32_t lv; // w23
  bool v101; // w22
  _BOOL8 v102; // x0
  __int64 v103; // x1
  Il2CppObject *v104; // x21
  __int64 v105; // x9
  bool v106; // w1
  SvtEqCombineListViewManager_o *v107; // x0
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *tempMtSvtList; // x8
  int32_t size; // w8
  int32_t v110; // w21
  int32_t selectMax; // [xsp+4h] [xbp-CCh] BYREF
  System_Collections_Generic_List_Enumerator_object__o v112; // [xsp+8h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v113; // [xsp+20h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v114; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v115; // 0:x0.16

  if ( (byte_4B19ED4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v16, v17);
    sub_1BCA7E0(&int_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Count__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Item__, v30, v31);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v32, v33);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v34, v35);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v36, v37);
    sub_1BCA7E0(&SvtEqCombineListViewItem_TypeInfo, v38, v39);
    sub_1BCA7E0(&StringLiteral_25226/*"{0:N0}"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_12532/*"SUM_INFO"*/, v42, v43);
    byte_4B19ED4 = 1;
  }
  memset(&v114, 0, sizeof(v114));
  memset(&v113, 0, sizeof(v113));
  ObjectList = (System_Collections_Generic_List_object__o *)SvtEqCombineListViewManager__get_ObjectList(this, method);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  *(_QWORD *)&this->fields.selectQp = 0LL;
  this->fields.addTotalExp = 0;
  this->fields.isAllUpMax = 0;
  if ( baseUsrSvtData && this->fields.itemType == 1 )
  {
    CombineQpSvtEq = UserServantEntity__getCombineQpSvtEq(baseUsrSvtData, 0LL);
    v49 = SvtEqCombineListViewManager__CheckCompareQp(this, CombineQpSvtEq, v48);
  }
  else
  {
    v49 = 0;
  }
  itemList = (__int64)this->fields.itemList;
  if ( !itemList )
    goto LABEL_95;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v112,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v114 = v112;
  while ( 1 )
  {
    v51 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v114,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v51 )
      break;
    current = (SvtEqCombineListViewItem_o *)v114.fields._current;
    if ( !v114.fields._current )
      goto LABEL_94;
    methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v114.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (SvtEqCombineListViewItem_c *)v114.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      sub_1BCACFC(v114.fields._current);
LABEL_94:
      sub_1BCAA3C(v51, v52);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v114.fields._current, 0LL) )
    {
      v56 = this->fields.baseUsrSvtData;
      this->fields.selectQp += v49;
      if ( !v56 )
        goto LABEL_97;
      if ( !UserServantEntity__isLevelMax(v56, 0LL) )
        goto LABEL_19;
      v58 = this->fields.baseUsrSvtData;
      if ( !v58 )
        sub_1BCAA3C(0LL, v57);
      if ( UserServantEntity__isLevelMax(v58, 0LL) && current->fields.isLimitCntTarget )
      {
LABEL_19:
        addTotalExp = this->fields.addTotalExp;
        this->fields.selectExp += current->fields.materialExp;
        this->fields.addTotalExp = SvtEqCombineListViewItem__get_GetAddTotalExp(current, v57) + addTotalExp;
      }
    }
    else
    {
      current->fields.isMaxSelect = this->fields.selectSum >= this->fields.selectMax;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v114,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  selectInfoLabel = this->fields.selectInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v60);
  v62 = LocalizationManager__Get((System_String_o *)StringLiteral_12532/*"SUM_INFO"*/, 0LL);
  LODWORD(v112.fields._list) = this->fields.selectSum;
  v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v112);
  selectMax = this->fields.selectMax;
  v64 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &selectMax);
  itemList = (__int64)System_String__Format_62415592(v62, v63, v64, 0LL);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v112,
      combineEventList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v113 = v112;
    while ( 1 )
    {
      v67 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v113,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v67 )
        break;
      v70 = v113.fields._current;
      if ( !v113.fields._current )
        sub_1BCAA3C(v67, v68);
      klass_high = HIDWORD(v113.fields._current[1].klass);
      if ( klass_high == 17 )
      {
        v72 = *(float *)&v113.fields._current[3].monitor;
        selectExp = this->fields.selectExp;
        if ( !byte_4B1103A )
        {
          sub_1BCA7E0(&System_Math_TypeInfo, v68, v69);
          byte_4B1103A = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v68);
        v74 = v72 * (float)selectExp;
        v75 = vcvtps_s32_f32(v74);
        if ( ceilf(v74) == INFINITY )
          v75 = 0x80000000;
        this->fields.selectExp = v75;
        klass_high = HIDWORD(v70[1].klass);
      }
      if ( klass_high == 16 )
      {
        v76 = *(float *)&v70[3].monitor;
        selectQp = this->fields.selectQp;
        if ( !byte_4B1103A )
        {
          sub_1BCA7E0(&System_Math_TypeInfo, v68, v69);
          byte_4B1103A = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v68);
        v78 = v76 * (float)selectQp;
        v79 = vcvtps_s32_f32(v78);
        if ( ceilf(v78) == INFINITY )
          v79 = 0x80000000;
        this->fields.selectQp = v79;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v113,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  spendQpLabel = this->fields.spendQpLabel;
  LODWORD(v112.fields._list) = this->fields.selectQp;
  v81 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v112);
  itemList = (__int64)System_String__Format((System_String_o *)StringLiteral_25226/*"{0:N0}"*/, v81, 0LL);
  if ( !spendQpLabel )
LABEL_95:
    sub_1BCAA3C(itemList, v44);
  UILabel__set_text(spendQpLabel, (System_String_o *)itemList, 0LL);
  if ( this->fields.itemType == 1 )
  {
    itemList = (__int64)this->fields.spendQpLabel;
    v82 = 0.0;
    if ( this->fields.selectQp <= this->fields.userQP )
      v82 = 1.0;
    if ( !itemList )
      goto LABEL_95;
    v83 = 1.0;
    v84 = 1.0;
    v85 = v82;
    UIWidget__set_color((UIWidget_o *)itemList, *(UnityEngine_Color_o *)(&v82 - 1), 0LL);
  }
  getBasicExpLabel = this->fields.getBasicExpLabel;
  LODWORD(v112.fields._list) = this->fields.selectExp;
  v87 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v112);
  itemList = (__int64)System_String__Format((System_String_o *)StringLiteral_25226/*"{0:N0}"*/, v87, 0LL);
  if ( !getBasicExpLabel )
    goto LABEL_95;
  UILabel__set_text(getBasicExpLabel, (System_String_o *)itemList, 0LL);
  getAccExpLabel = this->fields.getAccExpLabel;
  selectMax = this->fields.addTotalExp;
  v89 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &selectMax);
  itemList = (__int64)System_String__Format((System_String_o *)StringLiteral_25226/*"{0:N0}"*/, v89, 0LL);
  if ( !getAccExpLabel )
    goto LABEL_95;
  UILabel__set_text(getAccExpLabel, (System_String_o *)itemList, 0LL);
  if ( this->fields.baseUsrSvtData && this->fields.itemType == 1 )
  {
    itemList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !itemList )
      goto LABEL_95;
    itemList = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)itemList,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
    v91 = this->fields.baseUsrSvtData;
    if ( !v91 )
      goto LABEL_95;
    v92 = (DataMasterBase_TMaster__TEntity__PKType__o *)itemList;
    v94 = *(_QWORD *)&v91->fields.svtId.fields.currentCryptoKey;
    v93 = *(_QWORD *)&v91->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v44);
    *(_QWORD *)&v115.fields.currentCryptoKey = v94;
    *(_QWORD *)&v115.fields.fakeValue = v93;
    itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v115, 0LL);
    if ( !v92 )
      goto LABEL_95;
    itemList = (__int64)DataMasterBase_object__object__int___GetEntity(
                          v92,
                          itemList,
                          (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !itemList )
      goto LABEL_95;
    v95 = *(_DWORD *)(itemList + 132);
    itemList = (__int64)this->fields.baseUsrSvtData;
    this->fields.expType = v95;
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
                     v96);
      while ( (itemList & 1) == 0 );
      v98 = this->fields.baseUsrSvtData;
      if ( !v98 )
        goto LABEL_95;
      itemList = (__int64)this->fields.levelUpInfoImg;
      if ( !itemList )
        goto LABEL_95;
      increLv = this->fields.increLv;
      lv = v98->fields.lv;
      itemList = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemList, 0LL);
      if ( !itemList )
        goto LABEL_95;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, increLv - lv > 0, 0LL);
    }
    itemList = (__int64)this->fields.itemList;
    if ( !itemList )
      goto LABEL_95;
    v101 = this->fields.increLv >= LevelMax;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v112,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v114 = v112;
    while ( 1 )
    {
      v102 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v114,
               (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v102 )
        break;
      v104 = v114.fields._current;
      if ( !v114.fields._current )
        sub_1BCAA3C(v102, v103);
      v105 = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v114.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v105
        || (SvtEqCombineListViewItem_c *)v114.fields._current->klass->_2.typeHierarchy[v105 - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        sub_1BCACFC(v114.fields._current);
LABEL_97:
        sub_1BCAA3C(v56, v55);
      }
      if ( !ListViewItem__get_IsSelect((ListViewItem_o *)v114.fields._current, 0LL) )
        BYTE2(v104[15].klass) = v101;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v114,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  if ( this->fields.selectSum >= 1 )
  {
    v106 = 1;
    v107 = this;
    goto LABEL_81;
  }
  tempMtSvtList = this->fields.tempMtSvtList;
  if ( !tempMtSvtList )
    goto LABEL_95;
  if ( tempMtSvtList->fields._size <= 0 )
  {
    v107 = this;
    v106 = 0;
LABEL_81:
    SvtEqCombineListViewManager__SetBtnEnable(v107, v106, v90);
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
    v110 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      itemList = (__int64)System_Collections_Generic_List_object___get_Item(
                            ObjectList,
                            v110,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Item__);
      if ( !itemList )
        break;
      (*(void (__fastcall **)(__int64, bool, _QWORD))(*(_QWORD *)itemList + 456LL))(
        itemList,
        this->fields.isInput,
        *(_QWORD *)(*(_QWORD *)itemList + 464LL));
      if ( ++v110 >= ObjectList->fields._size )
        return;
    }
    goto LABEL_95;
  }
}


void __fastcall SvtEqCombineListViewManager__ReleaseAll(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  _BOOL8 v13; // x0
  __int64 v14; // x1
  Il2CppObject *current; // x20
  __int64 methodPtr_low; // x9
  const MethodInfo *v17; // x1
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B19EEA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&SvtEqCombineListViewItem_TypeInfo, v10, v11);
    byte_4B19EEA = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( this->fields.selectSum >= 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_17;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      itemList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v19 = v18;
    while ( 1 )
    {
      v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v13 )
        break;
      current = v19.fields._current;
      if ( !v19.fields._current )
        goto LABEL_16;
      ListViewItem__set_IsSelect((ListViewItem_o *)v19.fields._current, 0, 0LL);
      methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (SvtEqCombineListViewItem_c *)current->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        sub_1BCACFC(current);
LABEL_16:
        sub_1BCAA3C(v13, v14);
      }
      BYTE2(current[10].monitor) = 0;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    itemList = (System_Collections_Generic_List_object__o *)this->fields.levelUpInfoImg;
    this->fields.selectSum = 0;
    if ( !itemList
      || (itemList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)itemList,
                                                                    0LL)) == 0LL )
    {
LABEL_17:
      sub_1BCAA3C(itemList, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, 0, 0LL);
    *(_QWORD *)&this->fields.totalExp = 0LL;
    this->fields.checkLv = 0;
    SvtEqCombineListViewManager__RefrashListDisp(this, v17);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v22; // x1
  int32_t size; // w8
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  Il2CppObject *current; // x21
  System_Action_o *v28; // x22
  __int64 v29; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x3
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B19EE0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_SvtEqCombineListViewManager_OnMoveEnd__, v17, v18);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v19, v20);
    byte_4B19EE0 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  ObjectList = (System_Collections_Generic_List_object__o *)SvtEqCombineListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v22);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      ObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v32,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__MoveNext__) )
    {
      current = v32.fields._current;
      v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v25, v26);
      System_Action___ctor(v28, (Il2CppObject *)this, Method_SvtEqCombineListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v29, v30);
      SvtEqCombineListViewObject__Init_46252112((SvtEqCombineListViewObject_o *)current, mode, v28, delay, v31);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v32,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__RequestListObject_46251084(
        SvtEqCombineListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v20; // x1
  int32_t size; // w8
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  Il2CppObject *current; // x21
  System_Action_o *v26; // x22
  __int64 v27; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x3
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B19EE1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_SvtEqCombineListViewManager_OnMoveEnd__, v15, v16);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v17, v18);
    byte_4B19EE1 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  ObjectList = (System_Collections_Generic_List_object__o *)SvtEqCombineListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v20);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v30,
      ObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v30,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__MoveNext__) )
    {
      current = v30.fields._current;
      v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24);
      System_Action___ctor(v26, (Il2CppObject *)this, Method_SvtEqCombineListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v27, v28);
      SvtEqCombineListViewObject__Init_46252196((SvtEqCombineListViewObject_o *)current, mode, v26, v29);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v30,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__Dispose__);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Component_o *levelUpInfoImg; // x0
  __int64 v18; // x1
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *selectedMtSvtList_k__BackingField; // x8
  int32_t size; // w2
  int v21; // w9
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *tempMtSvtList; // x8
  int32_t v23; // w2
  int v24; // w9
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v26; // x1
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B19EEB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v15, v16);
    byte_4B19EEB = 1;
  }
  memset(&v27, 0, sizeof(v27));
  this->fields.baseUsrSvtData = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseUsrSvtData, 0LL, v2, v3, v4, v5, v6, v7);
  selectedMtSvtList_k__BackingField = this->fields._selectedMtSvtList_k__BackingField;
  if ( selectedMtSvtList_k__BackingField )
  {
    size = selectedMtSvtList_k__BackingField->fields._size;
    v21 = selectedMtSvtList_k__BackingField->fields._version + 1;
    selectedMtSvtList_k__BackingField->fields._size = 0;
    selectedMtSvtList_k__BackingField->fields._version = v21;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)selectedMtSvtList_k__BackingField->fields._items, 0, size, 0LL);
  }
  tempMtSvtList = this->fields.tempMtSvtList;
  if ( !tempMtSvtList )
    goto LABEL_19;
  v23 = tempMtSvtList->fields._size;
  v24 = tempMtSvtList->fields._version + 1;
  tempMtSvtList->fields._size = 0;
  tempMtSvtList->fields._version = v24;
  if ( v23 >= 1 )
    System_Array__Clear((System_Array_o *)tempMtSvtList->fields._items, 0, v23, 0LL);
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v27,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v27,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( !v27.fields._current )
        sub_1BCAA3C(0LL, v26);
      ListViewItem__set_IsSelect((ListViewItem_o *)v27.fields._current, 0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v27,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  levelUpInfoImg = (UnityEngine_Component_o *)this->fields.levelUpInfoImg;
  this->fields.selectSum = 0;
  if ( !levelUpInfoImg
    || (levelUpInfoImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(levelUpInfoImg, 0LL)) == 0LL )
  {
LABEL_19:
    sub_1BCAA3C(levelUpInfoImg, v18);
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
  if ( (byte_4B19ED0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, isEnable, method);
    byte_4B19ED0 = 1;
  }
  decideBtnBg = (UnityEngine_Component_o *)this->fields.decideBtnBg;
  this->fields.isDecideFlg = v5;
  if ( !decideBtnBg )
    goto LABEL_12;
  decideBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                             decideBtnBg,
                                             (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
    sub_1BCAA3C(decideBtnBg, isEnable);
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
  __int64 v6; // x2
  void *allReleaseButton; // x0
  float v8; // s8
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
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19ECF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, isShow, method);
    sub_1BCA7E0(&SvtEqCombineListViewManager_TypeInfo, v5, v6);
    byte_4B19ECF = 1;
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
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo, isShow);
    allReleaseButton = SvtEqCombineListViewManager_TypeInfo;
  }
  if ( !this->fields.spendQpBg )
    goto LABEL_40;
  v8 = **((float **)allReleaseButton + 23);
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this->fields.spendQpBg,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( isShow )
    v8 = 1.0;
  if ( !allReleaseButton )
    goto LABEL_40;
  v9.fields.a = 1.0;
  v9.fields.r = v8;
  v9.fields.g = v8;
  v9.fields.b = v8;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v9, 0LL);
  allReleaseButton = this->fields.spendQpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v10.fields.a = 1.0;
  v10.fields.r = v8;
  v10.fields.g = v8;
  v10.fields.b = v8;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v10, 0LL);
  allReleaseButton = this->fields.spendQpLabel;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v11.fields.a = 1.0;
  v11.fields.r = v8;
  v11.fields.g = v8;
  v11.fields.b = v8;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v11, 0LL);
  allReleaseButton = this->fields.getExpBg;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v12.fields.a = 1.0;
  v12.fields.r = v8;
  v12.fields.g = v8;
  v12.fields.b = v8;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v12, 0LL);
  allReleaseButton = this->fields.getExpBgImg;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v13.fields.a = 1.0;
  v13.fields.r = v8;
  v13.fields.g = v8;
  v13.fields.b = v8;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v13, 0LL);
  allReleaseButton = this->fields.getExpLabel;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v14.fields.a = 1.0;
  v14.fields.r = v8;
  v14.fields.g = v8;
  v14.fields.b = v8;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v14, 0LL);
  allReleaseButton = this->fields.getBasicExpLabel;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v15.fields.a = 1.0;
  v15.fields.r = v8;
  v15.fields.g = v8;
  v15.fields.b = v8;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v15, 0LL);
  allReleaseButton = this->fields.getAccExpLabel;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v16.fields.a = 1.0;
  v16.fields.r = v8;
  v16.fields.g = v8;
  v16.fields.b = v8;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v16, 0LL);
  allReleaseButton = this->fields.haveQpBg;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v17.fields.a = 1.0;
  v17.fields.r = v8;
  v17.fields.g = v8;
  v17.fields.b = v8;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v17, 0LL);
  allReleaseButton = this->fields.haveQpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v18.fields.a = 1.0;
  v18.fields.r = v8;
  v18.fields.g = v8;
  v18.fields.b = v8;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v18, 0LL);
  allReleaseButton = this->fields.haveQpLabel;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v19.fields.a = 1.0;
  v19.fields.r = v8;
  v19.fields.g = v8;
  v19.fields.b = v8;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v19, 0LL);
  allReleaseButton = this->fields.nextExpBg;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v20.fields.a = 1.0;
  v20.fields.r = v8;
  v20.fields.g = v8;
  v20.fields.b = v8;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v20, 0LL);
  allReleaseButton = this->fields.nextExpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton
    || (v21.fields.a = 1.0,
        v21.fields.r = v8,
        v21.fields.g = v8,
        v21.fields.b = v8,
        UIWidget__set_color((UIWidget_o *)allReleaseButton, v21, 0LL),
        (allReleaseButton = this->fields.nextExpLabel) == 0LL)
    || (allReleaseButton = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)allReleaseButton,
                             (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0LL )
  {
LABEL_40:
    sub_1BCAA3C(allReleaseButton, isShow);
  }
  v22.fields.a = 1.0;
  v22.fields.r = v8;
  v22.fields.g = v8;
  v22.fields.b = v8;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v22, 0LL);
}


void __fastcall SvtEqCombineListViewManager__SetDragEnd(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  int32_t dragStartIndex; // w20
  int32_t dragEndIndex; // w21

  if ( (byte_4B19F05 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SvtEqCombineListViewManager_SetDragEnd__, method, v2);
    byte_4B19F05 = 1;
  }
  v4 = Method_SvtEqCombineListViewManager_SetDragEnd__;
  if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_SetDragEnd__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_SvtEqCombineListViewManager_SetDragEnd__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  dragStartIndex = this->fields.dragStartIndex;
  if ( (dragStartIndex & 0x80000000) == 0 )
  {
    dragEndIndex = this->fields.dragEndIndex;
    if ( dragStartIndex <= dragEndIndex )
    {
      do
        SvtEqCombineListViewManager__DecideDragSelect(this, dragStartIndex++, v7);
      while ( dragStartIndex <= this->fields.dragEndIndex );
    }
    else
    {
      do
        SvtEqCombineListViewManager__DecideDragSelect(this, dragEndIndex++, v7);
      while ( dragEndIndex <= this->fields.dragStartIndex );
    }
  }
  SvtEqCombineListViewManager__RefrashListDisp(this, v6);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *itemSortList; // x0
  ListViewItem_o *v14; // x19
  SvtEqCombineListViewItem_c *v15; // x1
  __int64 methodPtr_low; // x9
  int monitor; // w8
  bool v18; // w21
  _BOOL4 v19; // w21
  bool IsSelect; // w0
  const MethodInfo *v21; // x4
  int v22; // w8
  UnityEngine_Object_o *viewObject; // x20
  __int64 v24; // x9
  bool result; // w0
  SvtEqCombineListViewObject_o *v26; // x0
  const MethodInfo *v27; // x1

  if ( (byte_4B19F03 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index, isDragSelect);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&SvtEqCombineListViewItem_TypeInfo, v9, v10);
    sub_1BCA7E0(&SvtEqCombineListViewObject_TypeInfo, v11, v12);
    byte_4B19F03 = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_31;
  itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemSortList,
                                                                index,
                                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !itemSortList )
    goto LABEL_31;
  v14 = (ListViewItem_o *)itemSortList;
  v15 = SvtEqCombineListViewItem_TypeInfo;
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
      v18 = 0;
      if ( SvtEqCombineListViewItem__get_IsCanNotSelect(
             (SvtEqCombineListViewItem_o *)itemSortList,
             (const MethodInfo *)v15) )
      {
        goto LABEL_23;
      }
      v19 = this->fields.isDragSelect;
      IsSelect = ListViewItem__get_IsSelect(v14, 0LL);
      if ( v19 )
      {
        if ( !IsSelect )
        {
          v18 = 1;
          if ( !SvtEqCombineListViewManager__IsSelectEnable(
                  this,
                  (SvtEqCombineListViewItem_o *)v14,
                  this->fields.dragSelectSum,
                  1,
                  v21) )
            goto LABEL_23;
          ++this->fields.dragSelectSum;
          v14[2].fields.sortIndex = 1;
        }
        goto LABEL_22;
      }
      if ( IsSelect )
      {
        v18 = 0;
        v22 = 1;
LABEL_19:
        v14[2].fields.sortIndex = v22;
        goto LABEL_23;
      }
    }
  }
  else if ( (monitor & 0x80000000) == 0 )
  {
    if ( !ListViewItem__get_IsSelect((ListViewItem_o *)itemSortList, 0LL) && v14[2].fields.sortIndex >= 1 )
      --this->fields.dragSelectSum;
    v18 = 0;
    v22 = -1;
    goto LABEL_19;
  }
LABEL_22:
  v18 = 0;
LABEL_23:
  viewObject = (UnityEngine_Object_o *)v14->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  if ( !UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
    return v18;
  itemSortList = (System_Collections_Generic_List_object__o *)v14->fields.viewObject;
  if ( !itemSortList )
LABEL_31:
    sub_1BCAA3C(itemSortList, *(_QWORD *)&index);
  v24 = LOBYTE(SvtEqCombineListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v24
    && (SvtEqCombineListViewObject_c *)itemSortList->klass->_2.typeHierarchy[v24 - 1] == SvtEqCombineListViewObject_TypeInfo )
  {
    SvtEqCombineListViewObject__SetupDisp(
      (SvtEqCombineListViewObject_o *)itemSortList,
      (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo);
    return v18;
  }
LABEL_32:
  sub_1BCACFC(itemSortList);
  SvtEqCombineListViewObject__SetupDisp(v26, v27);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t dragStartIndex; // w8
  int32_t dragEndIndex; // w9
  int32_t v15; // w25
  int32_t v16; // w26
  int32_t v17; // w8
  int32_t v18; // w9
  int v19; // w24
  int32_t v20; // w20
  int32_t v21; // w23
  int v22; // w27
  void *itemSortList; // x0
  _QWORD *v24; // x21
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *v26; // x22
  __int64 v27; // x9
  SvtEqCombineListViewManager_o *v28; // x0
  int32_t v29; // w1
  bool v30; // w2
  const MethodInfo *v31; // x3

  v5 = startIndex;
  if ( (byte_4B19F02 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
      *(_QWORD *)&startIndex,
      *(_QWORD *)&endIndex);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&SvtEqCombineListViewItem_TypeInfo, v9, v10);
    sub_1BCA7E0(&SvtEqCombineListViewObject_TypeInfo, v11, v12);
    byte_4B19F02 = 1;
  }
  dragStartIndex = this->fields.dragStartIndex;
  if ( (dragStartIndex & 0x80000000) != 0 )
  {
    v15 = -1;
    v16 = -1;
  }
  else
  {
    dragEndIndex = this->fields.dragEndIndex;
    if ( dragStartIndex <= dragEndIndex )
      v15 = this->fields.dragEndIndex;
    else
      v15 = this->fields.dragStartIndex;
    if ( dragStartIndex <= dragEndIndex )
      v16 = this->fields.dragStartIndex;
    else
      v16 = this->fields.dragEndIndex;
  }
  if ( v5 <= endIndex )
    v17 = endIndex;
  else
    v17 = v5;
  if ( v5 <= endIndex )
    v18 = v5;
  else
    v18 = endIndex;
  if ( v5 < 0 )
    v19 = -1;
  else
    v19 = v17;
  if ( v5 < 0 )
    v20 = -1;
  else
    v20 = v18;
  this->fields.dragStartIndex = v5;
  this->fields.dragEndIndex = endIndex;
  if ( (v16 & 0x80000000) == 0 && v16 <= v15 )
  {
    v21 = v16;
    do
    {
      if ( v21 > v19 || (v20 & 0x80000000) != 0 || v21 < v20 )
        SvtEqCombineListViewManager__SetDragSelect(this, v21, 0, method);
      ++v21;
    }
    while ( v21 <= v15 );
  }
  if ( (v5 & 0x80000000) == 0 )
  {
    if ( v5 <= endIndex )
    {
      do
      {
        if ( v5 > v15 || (v16 & 0x80000000) != 0 || v5 < v16 )
          SvtEqCombineListViewManager__SetDragSelect(this, v5, 1, method);
        ++v5;
      }
      while ( v5 <= endIndex );
    }
    else
    {
      do
      {
        if ( v5 > v15 || (v16 & 0x80000000) != 0 || v5 < v16 )
          SvtEqCombineListViewManager__SetDragSelect(this, v5, 1, method);
        --v5;
      }
      while ( v5 >= endIndex );
    }
    if ( (v20 & 0x80000000) == 0 && this->fields.isDragSelect && v20 <= v19 )
    {
      v22 = this->fields.selectSum + 1;
      while ( 1 )
      {
        itemSortList = this->fields.itemSortList;
        if ( !itemSortList
          || (itemSortList = System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)itemSortList,
                               v20,
                               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__)) == 0LL )
        {
LABEL_62:
          sub_1BCAA3C(itemSortList, *(_QWORD *)&startIndex);
        }
        *(_QWORD *)&startIndex = SvtEqCombineListViewItem_TypeInfo;
        v24 = itemSortList;
        methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)itemSortList + 304LL) < (unsigned int)methodPtr_low
          || *(SvtEqCombineListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemSortList + 200LL) + 8 * methodPtr_low - 8) != SvtEqCombineListViewItem_TypeInfo )
        {
          break;
        }
        if ( *((int *)itemSortList + 62) >= 1 )
        {
          *((_DWORD *)itemSortList + 62) = v22;
          v26 = (UnityEngine_Object_o *)*((_QWORD *)itemSortList + 13);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&startIndex);
          ++v22;
          if ( UnityEngine_Object__op_Inequality(v26, 0LL, 0LL) )
          {
            itemSortList = (void *)v24[13];
            if ( !itemSortList )
              goto LABEL_62;
            v27 = LOBYTE(SvtEqCombineListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)itemSortList + 304LL) < (unsigned int)v27
              || *(SvtEqCombineListViewObject_c **)(*(_QWORD *)(*(_QWORD *)itemSortList + 200LL) + 8 * v27 - 8) != SvtEqCombineListViewObject_TypeInfo )
            {
              break;
            }
            SvtEqCombineListViewObject__SetupDisp(
              (SvtEqCombineListViewObject_o *)itemSortList,
              (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo);
          }
        }
        if ( ++v20 > v19 )
          return;
      }
      sub_1BCACFC(itemSortList);
      SvtEqCombineListViewManager__SetDragSelect(v28, v29, v30, v31);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *itemSortList; // x0
  int size; // w22
  int32_t v15; // w21
  __int64 methodPtr_low; // x9
  __int64 v17; // x1
  UnityEngine_Object_o *scrollView; // x20

  v4 = startIndex;
  v6 = isDragSelect;
  if ( (byte_4B19F04 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&startIndex, isDragSelect);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&SvtEqCombineListViewItem_TypeInfo, v11, v12);
    byte_4B19F04 = 1;
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
    v15 = 0;
    while ( 1 )
    {
      itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    itemSortList,
                                                                    v15,
                                                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemSortList )
        goto LABEL_19;
      *(_QWORD *)&startIndex = SvtEqCombineListViewItem_TypeInfo;
      methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (SvtEqCombineListViewItem_c *)itemSortList->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        break;
      }
      ++v15;
      LODWORD(itemSortList[6].monitor) = -1;
      if ( size == v15 )
        goto LABEL_12;
      itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
      if ( !itemSortList )
        goto LABEL_19;
    }
    sub_1BCACFC(itemSortList);
LABEL_19:
    sub_1BCAA3C(itemSortList, *(_QWORD *)&startIndex);
  }
LABEL_12:
  SvtEqCombineListViewManager__SetDragSelectItem(this, v4, v4, method);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v8; // x8

  if ( (byte_4B19EF3 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17688/*"btn_filter_on"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_17687/*"btn_filter"*/, v4, v5);
    byte_4B19EF3 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1BCAA3C(sort, method);
  }
  v8 = (System_String_o **)&StringLiteral_17687/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v8 = (System_String_o **)&StringLiteral_17688/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v8, 0LL);
}


void __fastcall SvtEqCombineListViewManager__SetMaterialSvtInfo(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  SvtEqCombineListViewManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  System_Collections_Generic_List_object__o *selectedMtSvtList_k__BackingField; // x0
  int64_t v20; // x0
  __int64 v21; // x1
  System_Collections_Generic_List_object__o *v22; // x8
  Il2CppObject *current; // x20
  int32_t v24; // w21
  Il2CppObject *Item; // x0
  __int64 v26; // x1
  Il2CppObject *v27; // x22
  __int64 methodPtr_low; // x9
  int64_t UserSvtId; // x0
  const MethodInfo *v30; // x1
  int64_t v31; // x23
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-70h] BYREF

  v3 = this;
  if ( (byte_4B19ED2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v14, v15);
    this = (SvtEqCombineListViewManager_o *)sub_1BCA7E0(&SvtEqCombineListViewItem_TypeInfo, v16, v17);
    byte_4B19ED2 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  itemList = v3->fields.itemList;
  if ( !itemList )
    sub_1BCAA3C(this, method);
  if ( itemList->fields._size >= 1 )
  {
    selectedMtSvtList_k__BackingField = (System_Collections_Generic_List_object__o *)v3->fields._selectedMtSvtList_k__BackingField;
    if ( selectedMtSvtList_k__BackingField )
    {
      if ( selectedMtSvtList_k__BackingField->fields._size >= 1 )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v32,
          selectedMtSvtList_k__BackingField,
          (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__);
        v33 = v32;
LABEL_8:
        while ( 1 )
        {
          v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v33,
                  (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__);
          if ( (v20 & 1) == 0 )
            break;
          v22 = (System_Collections_Generic_List_object__o *)v3->fields.itemList;
          if ( !v22 )
            goto LABEL_23;
          current = v33.fields._current;
          v24 = 0;
          while ( 1 )
          {
            if ( v24 >= v22->fields._size )
              goto LABEL_8;
            Item = System_Collections_Generic_List_object___get_Item(
                     v22,
                     v24,
                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
            v27 = Item;
            if ( !Item )
              sub_1BCAA3C(0LL, v26);
            methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
              || (SvtEqCombineListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
            {
              sub_1BCACFC(Item);
LABEL_23:
              sub_1BCAA3C(v20, v21);
            }
            UserSvtId = SvtEqCombineListViewItem__get_UserSvtId(
                          (SvtEqCombineListViewItem_o *)Item,
                          (const MethodInfo *)SvtEqCombineListViewItem_TypeInfo);
            if ( !current )
              sub_1BCAA3C(UserSvtId, v30);
            v31 = UserSvtId;
            v20 = SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)current, v30);
            if ( v31 == v20 )
              break;
            v22 = (System_Collections_Generic_List_object__o *)v3->fields.itemList;
            ++v24;
            if ( !v22 )
              goto LABEL_23;
          }
          BYTE4(v27[15].monitor) = 1;
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v33,
          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  SvtEqCombineListViewManager__SetMode_46250000(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__SetMode_46250000(
        SvtEqCombineListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  UnityEngine_Object_o *scrollView; // x21
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  UnityEngine_Behaviour_o *itemList; // x0
  int32_t v20; // w1
  char v21; // w22
  _BOOL8 v22; // x0
  __int64 v23; // x1
  ListViewItem_o *current; // x21
  __int64 methodPtr_low; // x9
  const MethodInfo *v26; // x1
  int32_t selectNum; // w27
  __int64 v28; // x1
  struct System_Collections_Generic_List_ListViewItem__o *v29; // x0
  _BOOL8 v30; // x0
  __int64 v31; // x1
  int32_t klass; // w9
  const MethodInfo *v33; // x1
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4B19EDF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&SvtEqCombineListViewItem_TypeInfo, v13, v14);
    byte_4B19EDF = 1;
  }
  memset(&v36, 0, sizeof(v36));
  memset(&v35, 0, sizeof(v35));
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, (mode & 0xFFFFFFFE) == 2, 0LL);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v34,
        (System_Collections_Generic_List_object__o *)itemList,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v36 = v34;
      v21 = 0;
      while ( 1 )
      {
        v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v36,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v22 )
          break;
        current = (ListViewItem_o *)v36.fields._current;
        if ( !v36.fields._current )
          goto LABEL_38;
        methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v36.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (SvtEqCombineListViewItem_c *)v36.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
        {
          sub_1BCACFC(v36.fields._current);
LABEL_38:
          sub_1BCAA3C(v22, v23);
        }
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v36.fields._current, 0LL)
          && SvtEqCombineListViewItem__get_IsCanNotSelect((SvtEqCombineListViewItem_o *)current, v26) )
        {
          selectNum = current->fields.selectNum;
          ListViewItem__set_IsSelect(current, 0, 0LL);
          v29 = this->fields.itemList;
          --this->fields.selectSum;
          if ( !v29 )
            sub_1BCAA3C(0LL, v28);
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v34,
            (System_Collections_Generic_List_object__o *)v29,
            (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v35 = v34;
          while ( 1 )
          {
            v30 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v35,
                    (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v30 )
              break;
            if ( !v35.fields._current )
              sub_1BCAA3C(v30, v31);
            klass = (int32_t)v35.fields._current[1].klass;
            if ( klass > selectNum )
              LODWORD(v35.fields._current[1].klass) = klass - 1;
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v35,
            (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          v21 = 1;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v36,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( (v21 & 1) != 0 )
        SvtEqCombineListViewManager__RefrashListDisp(this, v33);
      if ( mode == 2 )
        v20 = 4;
      else
        v20 = 2;
      goto LABEL_35;
    }
LABEL_39:
    sub_1BCAA3C(itemList, v17);
  }
  if ( mode != 3 )
    return;
  v20 = 5;
LABEL_35:
  SvtEqCombineListViewManager__RequestListObject_46251084(this, v20, v18);
}


void __fastcall SvtEqCombineListViewManager__SetMode_46251032(
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc2,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  SvtEqCombineListViewManager__SetMode_46250000(this, mode, v10);
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
  if ( (byte_4B19EDE & 1) == 0 )
  {
    this = (SvtEqCombineListViewManager_o *)sub_1BCA7E0(&SvtEqCombineListViewObject_TypeInfo, obj, item);
    byte_4B19EDE = 1;
  }
  if ( !obj )
LABEL_11:
    sub_1BCAA3C(this, obj);
  methodPtr_low = LOBYTE(SvtEqCombineListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (SvtEqCombineListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    sub_1BCACFC(obj);
    goto LABEL_11;
  }
  if ( v5->fields.initMode == 2 )
    v7 = 4;
  else
    v7 = 2;
  SvtEqCombineListViewObject__Init_46249876((SvtEqCombineListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__SetReleaseBtnEnable(
        SvtEqCombineListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct UICommonButton_o *allReleaseButton; // x0
  __int64 v4; // x1

  allReleaseButton = this->fields.allReleaseButton;
  if ( !allReleaseButton )
    sub_1BCAA3C(0LL, isEnable);
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
  sub_1BCA784(
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  SetCombineData_o *v26; // x22
  struct SetCombineData_o **p_combineData; // x19
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  char *combineData; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  struct SetCombineData_o *v45; // x8
  System_Collections_Generic_Dictionary_long__bool__o *v46; // x20
  _BOOL8 v47; // x0
  const MethodInfo *v48; // x1
  SvtEqCombineListViewItem_o *current; // x21
  const MethodInfo *v50; // x1
  int64_t UserSvtId; // x0
  int isUseRecommendSupportEquip; // w8
  struct SetCombineData_o *v53; // x21
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  System_Collections_Generic_List_Enumerator_object__o v67; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v68; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B19EE7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_long__bool__Add__, selectedItems, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_long__bool___ctor__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_long__bool__get_Count__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_long__bool__get_Keys__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_long__bool__TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_long___, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__get_Current__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__, v22, v23);
    sub_1BCA7E0(&SetCombineData_TypeInfo, v24, v25);
    byte_4B19EE7 = 1;
  }
  memset(&v68, 0, sizeof(v68));
  v26 = (SetCombineData_o *)sub_1BCAA2C(SetCombineData_TypeInfo, selectedItems, method, v3);
  SetCombineData___ctor(v26, 0LL);
  p_combineData = &this->fields.combineData;
  this->fields.combineData = v26;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.combineData, (int64_t)v26, v28, v29, v30, v31, v32, v33);
  combineData = (char *)this->fields.combineData;
  if ( !combineData )
    goto LABEL_23;
  baseUsrSvtData = this->fields.baseUsrSvtData;
  *((_QWORD *)combineData + 2) = baseUsrSvtData;
  sub_1BCA784((PartyOrganizationUtility_o *)(combineData + 16), (int64_t)baseUsrSvtData, v35, v36, v37, v38, v39, v40);
  v45 = *p_combineData;
  if ( !*p_combineData )
    goto LABEL_23;
  *(_OWORD *)&v45->fields.selectSum = *(_OWORD *)&this->fields.selectSum;
  *(_QWORD *)&v45->fields.getHpAdjustVal = *(_QWORD *)&this->fields.getHpUpVal;
  v45->fields.isAdjustMax = this->fields.isAllUpMax;
  v46 = (System_Collections_Generic_Dictionary_long__bool__o *)sub_1BCAA2C(
                                                                 System_Collections_Generic_Dictionary_long__bool__TypeInfo,
                                                                 v34,
                                                                 v43,
                                                                 v44);
  System_Collections_Generic_Dictionary_long__bool____ctor(
    v46,
    (const MethodInfo_3237508 *)Method_System_Collections_Generic_Dictionary_long__bool___ctor__);
  if ( !selectedItems )
    goto LABEL_23;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v67,
    (System_Collections_Generic_List_object__o *)selectedItems,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__);
  v68 = v67;
  while ( 1 )
  {
    v47 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v68,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__);
    if ( !v47 )
      break;
    current = (SvtEqCombineListViewItem_o *)v68.fields._current;
    if ( !v68.fields._current )
      sub_1BCAA3C(v47, v48);
    if ( SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)v68.fields._current, v48) >= 1 )
    {
      UserSvtId = SvtEqCombineListViewItem__get_UserSvtId(current, v50);
      if ( current->fields.isEquiped || current->fields.isUseSupportEquip )
      {
        isUseRecommendSupportEquip = 1;
        if ( !v46 )
          goto LABEL_15;
      }
      else
      {
        isUseRecommendSupportEquip = current->fields.isUseRecommendSupportEquip;
        if ( !v46 )
LABEL_15:
          sub_1BCAA3C(UserSvtId, UserSvtId);
      }
      System_Collections_Generic_Dictionary_long__bool___Add(
        v46,
        UserSvtId,
        isUseRecommendSupportEquip != 0,
        (const MethodInfo_3237EE8 *)Method_System_Collections_Generic_Dictionary_long__bool__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v68,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
  if ( !v46 )
    goto LABEL_23;
  if ( System_Collections_Generic_Dictionary_long__bool___get_Count(
         v46,
         (const MethodInfo_3237B8C *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__) <= 0 )
    return;
  v53 = *p_combineData;
  Keys = System_Collections_Generic_Dictionary_long__bool___get_Keys(
           v46,
           (const MethodInfo_3237B9C *)Method_System_Collections_Generic_Dictionary_long__bool__get_Keys__);
  combineData = (char *)System_Linq_Enumerable__ToArray_long_(
                          (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                          (const MethodInfo_2F4B980 *)Method_System_Linq_Enumerable_ToArray_long___);
  if ( !v53
    || (v53->fields.materialUsrSvtIdList = (struct System_Int64_array *)combineData,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v53->fields.materialUsrSvtIdList,
          (int64_t)combineData,
          v55,
          v56,
          v57,
          v58,
          v59,
          v60),
        (combineData = (char *)*p_combineData) == 0LL) )
  {
LABEL_23:
    sub_1BCAA3C(combineData, v34);
  }
  *((_QWORD *)combineData + 8) = v46;
  sub_1BCA784((PartyOrganizationUtility_o *)(combineData + 64), (int64_t)v46, v61, v62, v63, v64, v65, v66);
}


void __fastcall SvtEqCombineListViewManager__SetSelectedMaterialInfo(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_object__o *v25; // x21
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o **p_selectedMtSvtList_k__BackingField; // x20
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t itemList; // x0
  SvtEqCombineListViewItem_c *v34; // x1
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *tempMtSvtList; // x8
  int32_t size; // w2
  int v37; // w9
  System_Collections_Generic_List_SvtEqCombineListViewItem__o *SelectedMaterialList; // x21
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_Collections_Generic_List_long__o *v42; // x22
  int v43; // w24
  int32_t v44; // w23
  __int64 methodPtr_low; // x9
  struct System_Int64_array *items; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  struct System_Int64_array *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  const MethodInfo *v56; // x2
  SvtEqCombineListViewManager_o *v57; // x0
  System_Collections_Generic_List_SvtEqCombineListViewItem__o *v58; // x1

  if ( (byte_4B19EE6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__AddRange__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v21, v22);
    sub_1BCA7E0(&SvtEqCombineListViewItem_TypeInfo, v23, v24);
    byte_4B19EE6 = 1;
  }
  v25 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
  p_selectedMtSvtList_k__BackingField = &this->fields._selectedMtSvtList_k__BackingField;
  this->fields._selectedMtSvtList_k__BackingField = (struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v25;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._selectedMtSvtList_k__BackingField,
    (int64_t)v25,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  tempMtSvtList = this->fields.tempMtSvtList;
  if ( !tempMtSvtList )
    goto LABEL_25;
  size = tempMtSvtList->fields._size;
  v37 = tempMtSvtList->fields._version + 1;
  tempMtSvtList->fields._size = 0;
  tempMtSvtList->fields._version = v37;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)tempMtSvtList->fields._items, 0, size, 0LL);
  SelectedMaterialList = SvtEqCombineListViewManager__GetSelectedMaterialList(this, (const MethodInfo *)v34);
  v42 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v39,
                                                     v40,
                                                     v41);
  System_Collections_Generic_List_long____ctor(
    v42,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  if ( !SelectedMaterialList )
    goto LABEL_25;
  v43 = SelectedMaterialList->fields._size;
  if ( v43 < 1 )
  {
LABEL_20:
    itemList = (int64_t)this->fields.tempMtSvtList;
    if ( itemList )
    {
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)itemList,
        (System_Collections_Generic_IEnumerable_T__o *)SelectedMaterialList,
        (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__AddRange__);
      itemList = (int64_t)*p_selectedMtSvtList_k__BackingField;
      if ( *p_selectedMtSvtList_k__BackingField )
      {
        System_Collections_Generic_List_object___AddRange(
          (System_Collections_Generic_List_object__o *)itemList,
          (System_Collections_Generic_IEnumerable_T__o *)SelectedMaterialList,
          (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__AddRange__);
        if ( v42 )
        {
          v49 = System_Collections_Generic_List_long___ToArray(
                  v42,
                  (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
          this->fields.highRarityList = v49;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.highRarityList,
            (int64_t)v49,
            v50,
            v51,
            v52,
            v53,
            v54,
            v55);
          v57 = this;
          v58 = SelectedMaterialList;
          goto LABEL_24;
        }
      }
    }
LABEL_25:
    sub_1BCAA3C(itemList, v34);
  }
  v44 = 0;
  while ( 1 )
  {
    itemList = (int64_t)this->fields.itemList;
    if ( !itemList )
      goto LABEL_25;
    itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)itemList,
                          v44,
                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_25;
    v34 = SvtEqCombineListViewItem_TypeInfo;
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
      if ( !v42 )
        goto LABEL_25;
      items = v42->fields._items;
      v47 = Method_System_Collections_Generic_List_long__Add__;
      ++v42->fields._version;
      if ( !items )
        goto LABEL_25;
      v48 = v42->fields._size;
      v34 = (SvtEqCombineListViewItem_c *)itemList;
      if ( (unsigned int)v48 >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v42,
          itemList,
          *(const MethodInfo_3589C90 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
      }
      else
      {
        v42->fields._size = v48 + 1;
        items->m_Items[v48] = itemList;
      }
    }
    if ( v43 == ++v44 )
      goto LABEL_20;
  }
  sub_1BCACFC(itemList);
LABEL_24:
  SvtEqCombineListViewManager__SetSelectMaterialList(v57, v58, v56);
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
    sub_1BCA784(
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  int64_t emptyListNoticeLabel; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct ListViewSort_o *sort; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeButtonSprite; // x23
  Il2CppObject *MasterData_object; // x0
  struct UserServantMaster_o **p_userServantMaster; // x25
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  UserGameEntity_o *SelfUserGame; // x22
  int32_t qp; // w8
  UILabel_o *haveQpLabel; // x24
  Il2CppObject *v68; // x0
  UILabel_o *nextExpLabel; // x24
  Il2CppObject *v70; // x0
  UserServantEntity_array *ServantEquipList; // x29
  const MethodInfo *v72; // x2
  int v73; // w20
  int32_t FriendShipSvtEquipNum; // w0
  __int64 v75; // x2
  __int64 v76; // x3
  System_Collections_Generic_List_object__o *v77; // x26
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  System_Collections_Generic_List_object__o *v81; // x27
  int max_length; // w8
  __int64 v83; // x21
  UserServantEntity_o **m_Items; // x22
  int64_t v85; // x28
  __int128 v86; // q0
  UserServantEntity_array *v87; // x24
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v89; // q0
  int64_t v90; // x29
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  bool v97; // zf
  struct System_Object_array *items; // x8
  _QWORD *v99; // x9
  __int64 size; // x10
  Il2CppClass **v101; // x0
  UILabel_o *v102; // x26
  Il2CppObject *v103; // x0
  __int64 v104; // x1
  __int64 v105; // x2
  __int64 v106; // x3
  System_Collections_Generic_List_object__o *v107; // x25
  __int64 v108; // x1
  __int64 v109; // x2
  __int64 v110; // x3
  System_Collections_Generic_List_object__o *v111; // x0
  const MethodInfo *v112; // x2
  int32_t v113; // w24
  __int128 v114; // q0
  struct UserServantEntity_o *v115; // x8
  __int128 v116; // q0
  il2cpp_array_size_t v117; // w20
  int32_t v118; // w0
  int v119; // w20
  UILabel_o *v120; // x25
  Il2CppObject *v121; // x0
  int v122; // w24
  int v123; // w8
  unsigned int v124; // w25
  Il2CppClass **v125; // x20
  Il2CppClass *v126; // x8
  UserServantEntity_o **v127; // x20
  Il2CppClass *v128; // t1
  Il2CppType byval_arg; // q0
  __int64 v130; // x2
  __int64 v131; // x3
  int64_t v132; // x26
  System_Collections_Generic_List_object__o *selectedMtSvtList_k__BackingField; // x8
  int32_t v134; // w27
  _BOOL4 v135; // w28
  int32_t v136; // w23
  UserServantEntity_array *v137; // x21
  UserServantEntity_o *v138; // x29
  UserServantEntity_o *v139; // x20
  int64_t favoriteUserSvtId; // x22
  SvtEqCombineListViewItem_o *v141; // x27
  int64_t v142; // x2
  int32_t v143; // w3
  System_String_o *v144; // x4
  BattleSetupInfo_o *v145; // x5
  FollowerInfo_o *v146; // x6
  PartyListViewItem_o *v147; // x7
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *v148; // x8
  __int64 v149; // x8
  _QWORD *v150; // x9
  __int64 v151; // x10
  __int64 v152; // x8
  __int64 v153; // x1
  UILabel_o *servantInfoLabel; // x20
  System_String_o *v155; // x21
  Il2CppObject *v156; // x22
  Il2CppObject *v157; // x0
  const MethodInfo *v158; // x1
  const MethodInfo *v159; // x1
  const MethodInfo *v160; // [xsp+8h] [xbp-168h]
  int v161; // [xsp+1Ch] [xbp-154h]
  UserGameEntity_o *v164; // [xsp+30h] [xbp-140h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v166; // [xsp+40h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v167; // [xsp+60h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v168; // [xsp+80h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v169; // [xsp+A0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v170; // [xsp+C0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v171; // [xsp+E0h] [xbp-90h] BYREF
  int32_t svtEquipKeep; // [xsp+100h] [xbp-70h] BYREF
  float barExp; // [xsp+104h] [xbp-6Ch] BYREF
  int32_t lateExp[2]; // [xsp+108h] [xbp-68h] BYREF

  if ( (byte_4B19ED1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&type, setupInfo);
    sub_1BCA7E0(&int_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__Remove__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity___ctor___76803536, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__, v30, v31);
    sub_1BCA7E0(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v32, v33);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v34, v35);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v36, v37);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v38, v39);
    sub_1BCA7E0(&SvtEqCombineListViewItem_TypeInfo, v40, v41);
    sub_1BCA7E0(&StringLiteral_25226/*"{0:N0}"*/, v42, v43);
    sub_1BCA7E0(&StringLiteral_12532/*"SUM_INFO"*/, v44, v45);
    byte_4B19ED1 = 1;
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
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.seed, (int64_t)normalSizeSeed, v47, v48, v49, v50, v51, v52);
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
  emptyListNoticeLabel = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !emptyListNoticeLabel )
    goto LABEL_112;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)emptyListNoticeLabel,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = &this->fields.userServantMaster;
  this->fields.userServantMaster = (struct UserServantMaster_o *)MasterData_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.userServantMaster,
    (int64_t)MasterData_object,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !SelfUserGame )
    goto LABEL_112;
  qp = SelfUserGame->fields.qp;
  this->fields.userQP = qp;
  haveQpLabel = this->fields.haveQpLabel;
  LODWORD(v171.fields.currentCryptoKey) = qp;
  v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v171);
  emptyListNoticeLabel = (int64_t)System_String__Format((System_String_o *)StringLiteral_25226/*"{0:N0}"*/, v68, 0LL);
  if ( !haveQpLabel )
    goto LABEL_112;
  UILabel__set_text(haveQpLabel, (System_String_o *)emptyListNoticeLabel, 0LL);
  *(_OWORD *)&this->fields.selectSum = 0u;
  *(_QWORD *)&this->fields.getHpUpVal = 0LL;
  this->fields.isAllUpMax = 0;
  lateExp[0] = 0;
  nextExpLabel = this->fields.nextExpLabel;
  svtEquipKeep = 0;
  v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtEquipKeep);
  emptyListNoticeLabel = (int64_t)System_String__Format((System_String_o *)StringLiteral_25226/*"{0:N0}"*/, v70, 0LL);
  if ( !nextExpLabel )
    goto LABEL_112;
  UILabel__set_text(nextExpLabel, (System_String_o *)emptyListNoticeLabel, 0LL);
  v164 = SelfUserGame;
  if ( type )
  {
    v161 = 0;
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
    v73 = *(_DWORD *)(emptyListNoticeLabel + 24);
    ServantEquipList = (UserServantEntity_array *)emptyListNoticeLabel;
    FriendShipSvtEquipNum = SvtEqCombineListViewManager__GetFriendShipSvtEquipNum(
                              (SvtEqCombineListViewManager_o *)emptyListNoticeLabel,
                              (UserServantEntity_array *)emptyListNoticeLabel,
                              v72);
    v161 = v73 - FriendShipSvtEquipNum;
    if ( FriendShipSvtEquipNum <= 0 && v161 <= 0 )
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
    v77 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                         *(_QWORD *)&type,
                                                         v75,
                                                         v76);
    System_Collections_Generic_List_object____ctor_56235344(
      v77,
      (System_Collections_Generic_IEnumerable_T__o *)ServantEquipList,
      (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___76803536);
    v81 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                         v78,
                                                         v79,
                                                         v80);
    System_Collections_Generic_List_object____ctor(
      v81,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( !this->fields.baseUsrSvtData )
      goto LABEL_76;
    max_length = ServantEquipList->max_length;
    if ( max_length >= 1 )
    {
      v83 = 0LL;
      m_Items = ServantEquipList->m_Items;
      while ( 1 )
      {
        if ( (unsigned int)v83 >= max_length )
LABEL_113:
          sub_1BCAA44(emptyListNoticeLabel, *(_QWORD *)&type);
        v85 = (int64_t)m_Items[v83];
        if ( !v85 )
          break;
        v86 = *(_OWORD *)(v85 + 32);
        v87 = ServantEquipList;
        *(_OWORD *)&v171.fields.currentCryptoKey = *(_OWORD *)(v85 + 16);
        *(_OWORD *)&v171.fields.fakeValue = v86;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&type);
        v170 = v171;
        emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v170, 0LL);
        baseUsrSvtData = this->fields.baseUsrSvtData;
        if ( !baseUsrSvtData )
          break;
        v89 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
        v90 = emptyListNoticeLabel;
        *(_OWORD *)&v169.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v169.fields.fakeValue = v89;
        emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v169, 0LL);
        v97 = v90 == emptyListNoticeLabel;
        ServantEquipList = v87;
        if ( v97 )
        {
          if ( !v81 )
            break;
          items = v81->fields._items;
          v99 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v81->fields._version;
          if ( !items )
            break;
          size = v81->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v81,
              (Il2CppObject *)v85,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
          }
          else
          {
            v101 = &items->obj.klass + size;
            v81->fields._size = size + 1;
            v101[4] = (Il2CppClass *)v85;
            sub_1BCA784((PartyOrganizationUtility_o *)(v101 + 4), v85, v91, v92, v93, v94, v95, v96);
          }
          if ( !v77 )
            break;
          emptyListNoticeLabel = System_Collections_Generic_List_object___Remove(
                                   v77,
                                   (Il2CppObject *)v85,
                                   (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
        }
        max_length = v87->max_length;
        if ( (int)++v83 >= max_length )
          goto LABEL_48;
      }
LABEL_112:
      sub_1BCAA3C(emptyListNoticeLabel, *(_QWORD *)&type);
    }
LABEL_48:
    if ( !v81 )
      goto LABEL_112;
    System_Collections_Generic_List_object___AddRange(
      v81,
      (System_Collections_Generic_IEnumerable_T__o *)v77,
      (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    emptyListNoticeLabel = (int64_t)System_Collections_Generic_List_object___ToArray(
                                      v81,
                                      (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    if ( !this->fields.baseUsrSvtData )
      goto LABEL_112;
    ServantEquipList = (UserServantEntity_array *)emptyListNoticeLabel;
    UserServantEntity__getExpInfo(this->fields.baseUsrSvtData, &lateExp[1], lateExp, &barExp, 0LL);
    v102 = this->fields.nextExpLabel;
    LODWORD(v171.fields.currentCryptoKey) = lateExp[0];
    v103 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v171);
    emptyListNoticeLabel = (int64_t)System_String__Format((System_String_o *)StringLiteral_25226/*"{0:N0}"*/, v103, 0LL);
    if ( !v102 )
      goto LABEL_112;
    UILabel__set_text(v102, (System_String_o *)emptyListNoticeLabel, 0LL);
  }
  if ( type != 1 )
  {
    if ( !ServantEquipList )
      goto LABEL_112;
LABEL_76:
    v122 = 0;
    goto LABEL_77;
  }
  emptyListNoticeLabel = (int64_t)*p_userServantMaster;
  if ( !*p_userServantMaster )
    goto LABEL_112;
  ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)emptyListNoticeLabel, 0LL);
  v107 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                        v104,
                                                        v105,
                                                        v106);
  System_Collections_Generic_List_object____ctor_56235344(
    v107,
    (System_Collections_Generic_IEnumerable_T__o *)ServantEquipList,
    (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___76803536);
  v111 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                        v108,
                                                        v109,
                                                        v110);
  System_Collections_Generic_List_object____ctor(
    v111,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( this->fields.baseUsrSvtData )
  {
    if ( !v107 )
      goto LABEL_112;
    if ( v107->fields._size >= 1 )
    {
      v113 = 0;
      do
      {
        emptyListNoticeLabel = (int64_t)System_Collections_Generic_List_object___get_Item(
                                          v107,
                                          v113,
                                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
        if ( !emptyListNoticeLabel )
          goto LABEL_112;
        v114 = *(_OWORD *)(emptyListNoticeLabel + 32);
        *(_OWORD *)&v171.fields.currentCryptoKey = *(_OWORD *)(emptyListNoticeLabel + 16);
        *(_OWORD *)&v171.fields.fakeValue = v114;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&type);
        v168 = v171;
        emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v168, 0LL);
        v115 = this->fields.baseUsrSvtData;
        if ( !v115 )
          goto LABEL_112;
        v116 = *(_OWORD *)&v115->fields.id.fields.fakeValue;
        *(_OWORD *)&v167.fields.currentCryptoKey = *(_OWORD *)&v115->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v167.fields.fakeValue = v116;
        if ( emptyListNoticeLabel == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v167, 0LL) )
          System_Collections_Generic_List_object___RemoveAt(
            v107,
            v113,
            (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
      }
      while ( ++v113 < v107->fields._size );
    }
    emptyListNoticeLabel = (int64_t)System_Collections_Generic_List_object___ToArray(
                                      v107,
                                      (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    ServantEquipList = (UserServantEntity_array *)emptyListNoticeLabel;
  }
  if ( !ServantEquipList )
    goto LABEL_112;
  v117 = ServantEquipList->max_length;
  v118 = SvtEqCombineListViewManager__GetFriendShipSvtEquipNum(
           (SvtEqCombineListViewManager_o *)emptyListNoticeLabel,
           ServantEquipList,
           v112);
  v119 = v117 - v118;
  if ( v118 <= 0 && v119 <= 0 )
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
  v161 = v119;
  if ( !emptyListNoticeLabel )
    goto LABEL_112;
  UserServantEntity__getExpInfo((UserServantEntity_o *)emptyListNoticeLabel, &lateExp[1], lateExp, &barExp, 0LL);
  v120 = this->fields.nextExpLabel;
  LODWORD(v171.fields.currentCryptoKey) = lateExp[0];
  v121 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v171);
  emptyListNoticeLabel = (int64_t)System_String__Format((System_String_o *)StringLiteral_25226/*"{0:N0}"*/, v121, 0LL);
  if ( !v120 )
    goto LABEL_112;
  UILabel__set_text(v120, (System_String_o *)emptyListNoticeLabel, 0LL);
  v122 = 1;
LABEL_77:
  v123 = ServantEquipList->max_length;
  if ( v123 >= 1 )
  {
    v124 = 0;
    while ( 1 )
    {
      if ( v124 >= v123 )
        goto LABEL_113;
      v125 = &ServantEquipList->obj.klass + (int)v124;
      v128 = v125[4];
      v127 = (UserServantEntity_o **)(v125 + 4);
      v126 = v128;
      if ( !v128 )
        goto LABEL_112;
      byval_arg = v126->_1.byval_arg;
      *(_OWORD *)&v171.fields.currentCryptoKey = *(_OWORD *)&v126->_1.name;
      *(Il2CppType *)&v171.fields.fakeValue = byval_arg;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&type);
      v166 = v171;
      emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v166, 0LL);
      v132 = emptyListNoticeLabel;
      if ( v122 )
      {
        selectedMtSvtList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._selectedMtSvtList_k__BackingField;
        if ( selectedMtSvtList_k__BackingField )
        {
          if ( selectedMtSvtList_k__BackingField->fields._size >= 1 )
            break;
        }
      }
      v135 = 0;
      v136 = 0;
LABEL_96:
      if ( v124 >= ServantEquipList->max_length )
        goto LABEL_113;
      v137 = ServantEquipList;
      v138 = *v127;
      v139 = this->fields.baseUsrSvtData;
      favoriteUserSvtId = v164->fields.favoriteUserSvtId;
      v141 = (SvtEqCombineListViewItem_o *)sub_1BCAA2C(SvtEqCombineListViewItem_TypeInfo, *(_QWORD *)&type, v130, v131);
      SvtEqCombineListViewItem___ctor(
        v141,
        type,
        v124,
        v138,
        v132 == favoriteUserSvtId,
        v139,
        v135,
        setupInfo,
        finishSetupInfo,
        v160);
      if ( (v122 & v135) == 1 )
      {
        if ( !v141 )
          goto LABEL_112;
        v141->fields.selectNum = v136;
        v148 = this->fields._selectedMtSvtList_k__BackingField;
        ++this->fields.selectSum;
        if ( !v148 )
          goto LABEL_112;
        if ( v136 == v148->fields._size - 1 )
          v141->fields.isLastSelectMaterial = 1;
      }
      emptyListNoticeLabel = (int64_t)this->fields.itemList;
      if ( !emptyListNoticeLabel )
        goto LABEL_112;
      v149 = *(_QWORD *)(emptyListNoticeLabel + 16);
      v150 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(emptyListNoticeLabel + 28);
      if ( !v149 )
        goto LABEL_112;
      ServantEquipList = v137;
      v151 = *(int *)(emptyListNoticeLabel + 24);
      if ( (unsigned int)v151 >= *(_DWORD *)(v149 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)emptyListNoticeLabel,
          (Il2CppObject *)v141,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v150[4] + 192LL) + 112LL));
      }
      else
      {
        v152 = v149 + 8 * v151;
        *(_DWORD *)(emptyListNoticeLabel + 24) = v151 + 1;
        *(_QWORD *)(v152 + 32) = v141;
        sub_1BCA784((PartyOrganizationUtility_o *)(v152 + 32), (int64_t)v141, v142, v143, v144, v145, v146, v147);
      }
      v123 = v137->max_length;
      if ( (int)++v124 >= v123 )
        goto LABEL_108;
    }
    v134 = 0;
    v135 = 0;
    v136 = 0;
    while ( 1 )
    {
      emptyListNoticeLabel = (int64_t)System_Collections_Generic_List_object___get_Item(
                                        selectedMtSvtList_k__BackingField,
                                        v134,
                                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
      if ( !emptyListNoticeLabel )
        goto LABEL_112;
      emptyListNoticeLabel = SvtEqCombineListViewItem__get_UserSvtId(
                               (SvtEqCombineListViewItem_o *)emptyListNoticeLabel,
                               *(const MethodInfo **)&type);
      selectedMtSvtList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._selectedMtSvtList_k__BackingField;
      if ( !selectedMtSvtList_k__BackingField )
        goto LABEL_112;
      if ( emptyListNoticeLabel == v132 )
        v136 = v134;
      ++v134;
      if ( emptyListNoticeLabel == v132 )
        v135 = 1;
      if ( v134 >= selectedMtSvtList_k__BackingField->fields._size )
        goto LABEL_96;
    }
  }
LABEL_108:
  SvtEqCombineListViewManager__RefrashListDisp(this, *(const MethodInfo **)&type);
  servantInfoLabel = this->fields.servantInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v153);
  v155 = LocalizationManager__Get((System_String_o *)StringLiteral_12532/*"SUM_INFO"*/, 0LL);
  LODWORD(v171.fields.currentCryptoKey) = v161;
  v156 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v171);
  svtEquipKeep = v164->fields.svtEquipKeep;
  v157 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtEquipKeep);
  emptyListNoticeLabel = (int64_t)System_String__Format_62415592(v155, v156, v157, 0LL);
  if ( !servantInfoLabel )
    goto LABEL_112;
  UILabel__set_text(servantInfoLabel, (System_String_o *)emptyListNoticeLabel, 0LL);
  SvtEqCombineListViewManager__SetMaterialSvtInfo(this, v158);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  SvtEqCombineListViewManager__SetFilterButtonImage(this, v159);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
}


void __fastcall SvtEqCombineListViewManager__SetSortButtonImage(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v17; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v19; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v21; // x8
  int32_t sortKind; // w9
  System_String_o **v23; // x8
  struct ListViewSort_o *v24; // x8
  System_String_o **v25; // x9
  System_String_o **v26; // x10
  System_String_o **v27; // x8
  System_String_o **v28; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v30; // x20

  if ( (byte_4B19EF9 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_17718/*"btn_sort_up"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_17806/*"btn_txt_up"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_17761/*"btn_txt_new"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_17751/*"btn_txt_down"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_17768/*"btn_txt_old"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_17715/*"btn_sort_down"*/, v14, v15);
    byte_4B19EF9 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_43;
    v19 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v19 )
      goto LABEL_43;
    UILabel__set_text(v19, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v21 = this->fields.sort;
    if ( !v21 )
      goto LABEL_43;
    sortKind = v21->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_43;
      v23 = (System_String_o **)(v21->fields.isAscendingOrder ? &StringLiteral_17768/*"btn_txt_old"*/ : &StringLiteral_17761/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v23, 0LL);
      v24 = this->fields.sort;
      if ( !v24 )
        goto LABEL_43;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_43;
      v25 = (System_String_o **)&StringLiteral_17715/*"btn_sort_down"*/;
      v26 = (System_String_o **)&StringLiteral_17718/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_43;
      v27 = (System_String_o **)(v21->fields.isAscendingOrder ? &StringLiteral_17806/*"btn_txt_up"*/ : &StringLiteral_17751/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v27, 0LL);
      v24 = this->fields.sort;
      if ( !v24 )
        goto LABEL_43;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_43;
      v25 = (System_String_o **)&StringLiteral_17718/*"btn_sort_up"*/;
      v26 = (System_String_o **)&StringLiteral_17715/*"btn_sort_down"*/;
    }
    if ( v24->fields.isAscendingOrder )
      v28 = v25;
    else
      v28 = v26;
    UISprite__set_spriteName((UISprite_o *)sort, *v28, 0LL);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( sort )
    {
      v30 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(
                                 sort,
                                 this->fields.alignedBonusFilterInfos,
                                 0,
                                 0LL);
      if ( v30 )
      {
        UILabel__set_text(v30, (System_String_o *)sort, 0LL);
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
LABEL_43:
    sub_1BCAA3C(sort, v17);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_Behaviour_o *statusTabButton; // x0
  __int64 *v26; // x8
  UICommonButton_o *v27; // x21
  bool enabled; // w0
  __int64 *v29; // x8
  UICommonButton_o *lockTabButton; // x21
  bool v31; // w0
  __int64 *v32; // x8
  UICommonButton_o *choiceTabButton; // x20
  bool v34; // w0
  __int64 v35; // x1
  int32_t currentType; // w8
  UILabel_o *combineInfoMsgLb; // x20
  __int64 *v38; // x8
  int32_t v39; // w8
  UILabel_o *v40; // x20
  __int64 *v41; // x8

  v3 = modeKind;
  if ( (byte_4B19ECE & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&modeKind, method);
    sub_1BCA7E0(&StringLiteral_17825/*"button_allchoice_reg"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_17828/*"button_alllock_unreg"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_11761/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_11762/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_17841/*"button_select_reg"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_7239/*"HEADER_MSG_SVTEQ_MATERIAL"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_7238/*"HEADER_MSG_SVTEQ_BASE"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_17842/*"button_select_unreg"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_17827/*"button_alllock_reg"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_17826/*"button_allchoice_unreg"*/, v23, v24);
    byte_4B19ECE = 1;
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
  v26 = &StringLiteral_17841/*"button_select_reg"*/;
  if ( v3 )
    v26 = &StringLiteral_17842/*"button_select_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v26, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_51;
  statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                 statusTabButton,
                                                 0LL,
                                                 0LL,
                                                 statusTabButton->klass[1]._1.interfaceOffsets);
  v27 = this->fields.statusTabButton;
  if ( !v27 )
    goto LABEL_51;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0LL);
  UICommonButton__SetColliderEnable(v27, enabled, 0, 0LL);
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
  v29 = &StringLiteral_17827/*"button_alllock_reg"*/;
  if ( v3 != 1 )
    v29 = &StringLiteral_17828/*"button_alllock_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v29, 0LL);
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
  v31 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
  UICommonButton__SetColliderEnable(lockTabButton, v31, 0, 0LL);
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
  v32 = &StringLiteral_17825/*"button_allchoice_reg"*/;
  if ( v3 != 2 )
    v32 = &StringLiteral_17826/*"button_allchoice_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v32, 0LL);
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
    sub_1BCAA3C(statusTabButton, *(_QWORD *)&modeKind);
  }
  v34 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
  UICommonButton__SetColliderEnable(choiceTabButton, v34, 0, 0LL);
  currentType = this->fields.currentType;
  if ( currentType == 1 )
  {
    combineInfoMsgLb = this->fields.combineInfoMsgLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35);
    v38 = &StringLiteral_7239/*"HEADER_MSG_SVTEQ_MATERIAL"*/;
  }
  else
  {
    if ( currentType )
      goto LABEL_34;
    combineInfoMsgLb = this->fields.combineInfoMsgLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35);
    v38 = &StringLiteral_7238/*"HEADER_MSG_SVTEQ_BASE"*/;
  }
  statusTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v38, 0LL);
  if ( !combineInfoMsgLb )
    goto LABEL_51;
  UILabel__set_text(combineInfoMsgLb, (System_String_o *)statusTabButton, 0LL);
LABEL_34:
  v39 = this->fields.modeKind;
  if ( v39 == 2 )
  {
    v40 = this->fields.combineInfoMsgLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35);
    v41 = &StringLiteral_11761/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
  }
  else
  {
    if ( v39 != 1 )
      goto LABEL_44;
    v40 = this->fields.combineInfoMsgLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35);
    v41 = &StringLiteral_11762/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
  }
  statusTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v41, 0LL);
  if ( !v40 )
    goto LABEL_51;
  UILabel__set_text(v40, (System_String_o *)statusTabButton, 0LL);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t modeKind; // w8
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  NetworkManager_ResultCallbackFunc_o *v22; // x20
  __int64 v23; // x1
  Il2CppObject *Request_object; // x0
  __int64 v25; // x1
  System_Int64_array *v26; // x1
  System_Int64_array *v27; // x2
  bool v28; // w4
  bool v29; // w5
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  NetworkManager_ResultCallbackFunc_o *v39; // x20
  __int64 v40; // x1
  System_Int64_array *v41; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B19F01 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SvtEqCombineListViewManager_EndStatusSync__, v10, v11);
    byte_4B19F01 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v41 = 0LL;
  choiceList = 0LL;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    if ( SvtEqCombineListViewManager__GetSwapChoiceList(this, &choiceList, &v41, v3) )
    {
      this->fields.requestCallback = callback;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.requestCallback,
        (int64_t)callback,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
      v39 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v36,
                                                     v37,
                                                     v38);
      NetworkManager_ResultCallbackFunc___ctor(
        v39,
        (Il2CppObject *)this,
        Method_SvtEqCombineListViewManager_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v40);
      Request_object = NetworkManager__getRequest_object_(
                         v39,
                         (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_object )
      {
        v27 = v41;
        v26 = choiceList;
        v29 = 1;
        v28 = 0;
        goto LABEL_15;
      }
LABEL_19:
      sub_1BCAA3C(Request_object, v25);
    }
  }
  else if ( modeKind == 1 && SvtEqCombineListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.requestCallback,
      (int64_t)callback,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    v22 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v19, v20, v21);
    NetworkManager_ResultCallbackFunc___ctor(
      v22,
      (Il2CppObject *)this,
      Method_SvtEqCombineListViewManager_EndStatusSync__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v23);
    Request_object = NetworkManager__getRequest_object_(
                       v22,
                       (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( Request_object )
    {
      v27 = unlockList;
      v26 = lockList;
      v28 = 1;
      v29 = 0;
LABEL_15:
      CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)Request_object, v26, v27, 0, v28, v29, 0LL);
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

  if ( (byte_4B19EC4 & 1) == 0 )
  {
    sub_1BCA7E0(&SvtEqCombineListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B19EC4 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
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

  if ( (byte_4B19EC6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B19EC6 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
  SvtEqCombineListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_SvtEqCombineListViewObject__o *__fastcall SvtEqCombineListViewManager__get_ClippingObjectList(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x21
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v29; // x1
  Il2CppObject *v30; // x21
  ListViewItem_o *Item; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  _BOOL8 v39; // x0
  __int64 v40; // x1
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B19ECC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_SvtEqCombineListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B19ECC = 1;
  }
  memset(&v47, 0, sizeof(v47));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_SvtEqCombineListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v47 = v46;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v47,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v47.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___);
      v30 = Component_object;
      if ( !Component_object )
        sub_1BCAA3C(0LL, v29);
      Item = (ListViewItem_o *)SvtEqCombineListViewObject__GetItem(
                                 (SvtEqCombineListViewObject_o *)Component_object,
                                 v29);
      if ( !Item )
        sub_1BCAA3C(0LL, v32);
      if ( Item->fields.isTermination )
      {
        v39 = ListViewManager__ClippingItem_41463120((ListViewManager_o *)this, Item, 0LL);
        if ( v39 )
        {
          if ( !v21 )
            sub_1BCAA3C(v39, v40);
          items = v21->fields._items;
          v42 = Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__;
          ++v21->fields._version;
          if ( !items )
            sub_1BCAA3C(v39, v40);
          size = v21->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            v30,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v21 )
          sub_1BCAA3C(Item, v32);
        items = v21->fields._items;
        v42 = Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__;
        ++v21->fields._version;
        if ( !items )
          sub_1BCAA3C(Item, v32);
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v44 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v44[4] = (Il2CppClass *)v30;
        sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 4), (int64_t)v30, v33, v34, v35, v36, v37, v38);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v47,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SvtEqCombineListViewObject__o *)v21;
}


System_Collections_Generic_List_SvtEqCombineListViewObject__o *__fastcall SvtEqCombineListViewManager__get_ObjectList(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x20
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x1
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B19ECB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_SvtEqCombineListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B19ECB = 1;
  }
  memset(&v42, 0, sizeof(v42));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_SvtEqCombineListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v42 = v41;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v42.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___);
      v35 = (int64_t)Component_object;
      if ( !v21 )
        sub_1BCAA3C(Component_object, Component_object);
      items = v21->fields._items;
      v37 = Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__;
      ++v21->fields._version;
      if ( !items )
        sub_1BCAA3C(Component_object, Component_object);
      size = v21->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          Component_object,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v35;
        sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 4), v35, v29, v30, v31, v32, v33, v34);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SvtEqCombineListViewObject__o *)v21;
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

  if ( (byte_4B19EC5 & 1) == 0 )
  {
    sub_1BCA7E0(&SvtEqCombineListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B19EC5 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
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

  if ( (byte_4B19EC7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B19EC7 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
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
  sub_1BCA784(
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A11B44;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A11AEC;
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
  if ( (byte_4B19F0B & 1) == 0 )
  {
    sub_1BCA7E0(&SvtEqCombineListViewManager_ResultKind_TypeInfo, *(_QWORD *)&kind, list);
    byte_4B19F0B = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(SvtEqCombineListViewManager_ResultKind_TypeInfo, &v12);
  v11[1] = (__int64)list;
  return (System_IAsyncResult_o *)sub_1BCA794(this, v11, callback, object);
}


void __fastcall SvtEqCombineListViewManager_CallbackFunc__EndInvoke(
        SvtEqCombineListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A11BBC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A11B74;
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
  if ( (byte_4B19F0C & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isRequest, callback);
    byte_4B19F0C = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall SvtEqCombineListViewManager_RequestCallbackFunc__EndInvoke(
        SvtEqCombineListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B19F0D & 1) == 0 )
  {
    sub_1BCA7E0(&SvtEqCombineListViewManager___c_TypeInfo, v1, v2);
    byte_4B19F0D = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(SvtEqCombineListViewManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  SvtEqCombineListViewManager___c_TypeInfo->static_fields->__9 = (struct SvtEqCombineListViewManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)SvtEqCombineListViewManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
  return a->fields.selectNum - b->fields.selectNum;
}