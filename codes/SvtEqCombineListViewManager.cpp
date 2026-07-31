void SvtEqCombineListViewManager___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  struct SvtEqCombineListViewManager_StaticFields *static_fields; // x0
  int32_t v8; // w1

  if ( (byte_593230A & 1) == 0 )
  {
    sub_21FFC50(&SvtEqCombineListViewManager_TypeInfo);
    sub_21FFC50(&StringLiteral_13716/*"SvtEqCombine"*/);
    byte_593230A = 1;
  }
  static_fields = SvtEqCombineListViewManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->COLOR_VAL = 0x13EC00000LL;
  v8 = StringLiteral_13716/*"SvtEqCombine"*/;
  static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_13716/*"SvtEqCombine"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->SORT_SAVE_KEY, v8, v1, v2, v3, v4, v5, v6);
  SvtEqCombineListViewManager_TypeInfo->static_fields->isInitSystem = 0;
}


void SvtEqCombineListViewManager___ctor(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_SvtEqCombineListViewItem__c *v3; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Collections_Generic_List_long__o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5932309 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    byte_5932309 = 1;
  }
  v3 = System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo;
  this->fields.selectMax = 20;
  v4 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(v3);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
  this->fields.tempMtSvtList = (struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v4;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.tempMtSvtList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v11,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.tempMaterialUsrSvtIdList = v11;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.tempMaterialUsrSvtIdList,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void SvtEqCombineListViewManager__CancelDragEnd(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
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
  this->fields.isDragSelect = 1;
  *(_QWORD *)&this->fields.dragSelectSum = 0xFFFFFFFF00000000LL;
}


// local variable allocation has failed, the output may be wrong!
void SvtEqCombineListViewManager__CancelDragSelect(
        SvtEqCombineListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemSortList; // x0
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 naturalAligment; // x9
  SvtEqCombineListViewManager_o *v9; // x0
  int32_t *v10; // x1
  System_Collections_Generic_List_ListViewItem__o *v11; // x2
  int32_t v12; // w3
  const MethodInfo *v13; // x4

  if ( (byte_5932307 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&SvtEqCombineListViewItem_TypeInfo);
    byte_5932307 = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList
    || (itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      itemSortList,
                                                                      index,
                                                                      (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__)) == 0 )
  {
    sub_21FFECC(itemSortList, *(_QWORD *)&index);
  }
  naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
  if ( itemSortList->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (SvtEqCombineListViewItem_c *)itemSortList->klass->_2.typeHierarchy[naturalAligment - 1] == SvtEqCombineListViewItem_TypeInfo )
  {
    HIDWORD(itemSortList[6].fields._items) = -1;
  }
  else
  {
    v9 = (SvtEqCombineListViewManager_o *)sub_220024C(itemSortList, SvtEqCombineListViewItem_TypeInfo, v6, v7);
    SvtEqCombineListViewManager__GetFocusItemIndex(v9, v10, v11, v12, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t SvtEqCombineListViewManager__CheckCompareQp(
        SvtEqCombineListViewManager_o *this,
        int32_t nowCombineQp,
        const MethodInfo *method)
{
  int32_t CombineQpSvtEq; // w19
  SvtEqCombineListViewManager_o *v4; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w23
  int32_t v7; // w21
  __int64 v8; // x2
  __int64 v9; // x3
  SvtEqCombineListViewManager_o *v10; // x22
  __int64 naturalAligment; // x9
  SvtEqCombineListViewManager_o *v13; // x0
  int32_t *v14; // x1
  int32_t *v15; // x2
  int32_t v16; // w3
  const MethodInfo *v17; // x4

  CombineQpSvtEq = nowCombineQp;
  v4 = this;
  if ( (byte_59322D2 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (SvtEqCombineListViewManager_o *)sub_21FFC50(&SvtEqCombineListViewItem_TypeInfo);
    byte_59322D2 = 1;
  }
  if ( !v4->fields.selectSum )
    return CombineQpSvtEq;
  itemList = v4->fields.itemList;
  if ( !itemList )
LABEL_19:
    sub_21FFECC(this, *(_QWORD *)&nowCombineQp);
  size = itemList->fields._size;
  if ( size < 1 )
    return CombineQpSvtEq;
  v7 = 0;
  while ( 1 )
  {
    this = (SvtEqCombineListViewManager_o *)v4->fields.itemList;
    if ( !this )
      goto LABEL_19;
    this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v7,
                                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !this )
      goto LABEL_19;
    v10 = this;
    naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
    if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (SvtEqCombineListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)this, 0) && BYTE1(v10->fields.topFocusOffset) )
    {
      this = (SvtEqCombineListViewManager_o *)v10->fields.dropList;
      if ( !this )
        goto LABEL_19;
      if ( CombineQpSvtEq < UserServantEntity__getCombineQpSvtEq((UserServantEntity_o *)this, 0) )
      {
        this = (SvtEqCombineListViewManager_o *)v10->fields.dropList;
        if ( !this )
          goto LABEL_19;
        CombineQpSvtEq = UserServantEntity__getCombineQpSvtEq((UserServantEntity_o *)this, 0);
      }
    }
    if ( size == ++v7 )
      return CombineQpSvtEq;
  }
  v13 = (SvtEqCombineListViewManager_o *)sub_220024C(this, SvtEqCombineListViewItem_TypeInfo, v8, v9);
  return SvtEqCombineListViewManager__CheckIncrementLv(v13, v14, v15, v16, v17);
}


void SvtEqCombineListViewManager__CheckDragMax(
        SvtEqCombineListViewManager_o *this,
        bool *isMaxLvSelected,
        const MethodInfo *method)
{
  void *itemList; // x0
  int v6; // w24
  int v7; // w25
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  SvtEqCombineListViewItem_o *current; // x21
  __int64 naturalAligment; // x9
  __int64 v14; // x1
  UserServantEntity_o *baseUsrSvtData; // x0
  const MethodInfo *v16; // x1
  UserServantEntity_o *v17; // x0
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_object__o *combineEventList; // x0
  _BOOL8 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  float v23; // s8
  float v24; // s0
  unsigned int v25; // w8
  __int64 v26; // x2
  struct UserServantEntity_o *v27; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v28; // x21
  __int64 v29; // x22
  __int64 v30; // x23
  int32_t v31; // w8
  int32_t v32; // w23
  int v33; // w22
  const MethodInfo *v34; // x4
  int32_t LevelMax; // w21
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+40h] [xbp-80h] BYREF
  int32_t increLv[2]; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_59322D4 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&SvtEqCombineListViewItem_TypeInfo);
    byte_59322D4 = 1;
  }
  *isMaxLvSelected = 0;
  itemList = this->fields.itemList;
  *(_QWORD *)increLv = 0;
  memset(&v38, 0, sizeof(v38));
  memset(&v37, 0, sizeof(v37));
  if ( !itemList )
    goto LABEL_50;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v6 = 0;
  v7 = 0;
  v38 = v36;
  v36.fields._list = 0;
  *(_QWORD *)&v36.fields._index = &v38;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v38,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v8 & 1) == 0 )
      break;
    current = (SvtEqCombineListViewItem_o *)v38.fields._current;
    if ( !v38.fields._current )
      goto LABEL_46;
    naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
    if ( v38.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (SvtEqCombineListViewItem_c *)v38.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      v8 = sub_220024C(v38.fields._current, SvtEqCombineListViewItem_TypeInfo, v10, v11);
LABEL_46:
      sub_21FFECC(v8, v9);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v38.fields._current, 0) || current->fields.dragSelectNum >= 1 )
    {
      baseUsrSvtData = this->fields.baseUsrSvtData;
      if ( !baseUsrSvtData )
        sub_21FFECC(0, v14);
      if ( !UserServantEntity__isLevelMax(baseUsrSvtData, 0) )
        goto LABEL_16;
      v17 = this->fields.baseUsrSvtData;
      if ( !v17 )
        sub_21FFECC(0, v16);
      if ( UserServantEntity__isLevelMax(v17, 0) && current->fields.isLimitCntTarget )
      {
LABEL_16:
        v7 += current->fields.materialExp;
        v6 += SvtEqCombineListViewItem__get_GetAddTotalExp(current, v16);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v38,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_50;
  combineEventList = (System_Collections_Generic_List_object__o *)menuListCtr->fields.combineEventList;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v36,
      combineEventList,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v37 = v36;
    v36.fields._list = 0;
    *(_QWORD *)&v36.fields._index = &v37;
    while ( 1 )
    {
      v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v37,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v20 )
        break;
      if ( !v37.fields._current )
        sub_21FFECC(v20, v21);
      if ( HIDWORD(v37.fields._current[1].klass) == 17 )
      {
        v23 = *(float *)&v37.fields._current[3].monitor;
        if ( !byte_5931FBB )
        {
          sub_21FFC50(&System_Math_TypeInfo);
          byte_5931FBB = 1;
        }
        if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v21, v22);
        v24 = v23 * (float)v7;
        v25 = vcvtps_s32_f32(v24);
        if ( ceilf(v24) == INFINITY )
          v7 = 0x80000000;
        else
          v7 = v25;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v37,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  if ( this->fields.baseUsrSvtData && this->fields.itemType == 1 )
  {
    itemList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( itemList )
    {
      itemList = DataManager__GetMasterData_object_(
                   (DataManager_o *)itemList,
                   (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
      v27 = this->fields.baseUsrSvtData;
      if ( v27 )
      {
        v28 = (DataMasterBase_TMaster__TEntity__PKType__o *)itemList;
        v29 = *(_QWORD *)&v27->fields.svtId.fields.currentCryptoKey;
        v30 = *(_QWORD *)&v27->fields.svtId.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, isMaxLvSelected, v26);
        *(_QWORD *)&v40.fields.currentCryptoKey = v29;
        *(_QWORD *)&v40.fields.fakeValue = v30;
        itemList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v40, 0);
        if ( v28 )
        {
          itemList = DataMasterBase_object__object__int___GetEntity(
                       v28,
                       (int32_t)itemList,
                       (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( itemList )
          {
            v31 = *((_DWORD *)itemList + 33);
            itemList = this->fields.baseUsrSvtData;
            this->fields.expType = v31;
            if ( itemList )
            {
              v33 = *((_DWORD *)itemList + 101);
              increLv[0] = *((_DWORD *)itemList + 100);
              v32 = increLv[0];
              LevelMax = UserServantEntity__getLevelMax((UserServantEntity_o *)itemList, 0);
              if ( v32 != LevelMax )
              {
                while ( !SvtEqCombineListViewManager__CheckIncrementLv(this, increLv, &increLv[1], v7 + v6 + v33, v34) )
                  ;
              }
              *isMaxLvSelected = increLv[1] >= LevelMax;
              return;
            }
          }
        }
      }
    }
LABEL_50:
    sub_21FFECC(itemList, isMaxLvSelected);
  }
}


bool SvtEqCombineListViewManager__CheckIncrementLv(
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

  if ( (byte_59322D5 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59322D5 = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_16;
  LevelMax = UserServantEntity__getLevelMax((UserServantEntity_o *)baseUsrSvtData, 0);
  if ( *checkLv >= LevelMax )
  {
    *increLv = LevelMax;
    return 1;
  }
  baseUsrSvtData = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUsrSvtData
    || (baseUsrSvtData = DataManager__GetMasterData_object_(
                           (DataManager_o *)baseUsrSvtData,
                           (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0
    || (baseUsrSvtData = ServantExpMaster__GetEntity(
                           (ServantExpMaster_o *)baseUsrSvtData,
                           this->fields.expType,
                           *checkLv,
                           0)) == 0 )
  {
LABEL_16:
    sub_21FFECC(baseUsrSvtData, checkLv);
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


bool SvtEqCombineListViewManager__CheckIsMaterialSelectSvt(
        SvtEqCombineListViewManager_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *selectMaterialUsrSvtIdList; // x0

  if ( (byte_59322F0 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Contains__);
    byte_59322F0 = 1;
  }
  selectMaterialUsrSvtIdList = this->fields.selectMaterialUsrSvtIdList;
  if ( selectMaterialUsrSvtIdList )
    LOBYTE(selectMaterialUsrSvtIdList) = System_Collections_Generic_List_long___Contains(
                                           selectMaterialUsrSvtIdList,
                                           userSvtId,
                                           (const MethodInfo_44384E4 *)Method_System_Collections_Generic_List_long__Contains__);
  return (char)selectMaterialUsrSvtIdList;
}


bool SvtEqCombineListViewManager__CheckIsSelectMaterial(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.isSelectMaterial;
}


bool SvtEqCombineListViewManager__CheckMaterialEquipped(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  SvtEqCombineListViewManager_o *v2; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w22
  int32_t v5; // w20
  bool v6; // w23
  __int64 v7; // x2
  __int64 v8; // x3
  SvtEqCombineListViewManager_o *v9; // x21
  __int64 naturalAligment; // x9
  SvtEqCombineListViewManager_o *v12; // x0
  const MethodInfo *v13; // x1

  v2 = this;
  if ( (byte_59322E3 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (SvtEqCombineListViewManager_o *)sub_21FFC50(&SvtEqCombineListViewItem_TypeInfo);
    byte_59322E3 = 1;
  }
  itemList = v2->fields.itemList;
  if ( !itemList )
LABEL_19:
    sub_21FFECC(this, method);
  size = itemList->fields._size;
  if ( size < 1 )
  {
    return 0;
  }
  else
  {
    v5 = 0;
    v6 = 1;
    while ( 1 )
    {
      this = (SvtEqCombineListViewManager_o *)v2->fields.itemList;
      if ( !this )
        goto LABEL_19;
      this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)this,
                                                v5,
                                                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        goto LABEL_19;
      v9 = this;
      naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (SvtEqCombineListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        break;
      }
      if ( !ListViewItem__get_IsSelect((ListViewItem_o *)this, 0)
        || !BYTE4(v9->fields.objectList)
        && !BYTE4(v9->fields.leftItem)
        && !BYTE5(v9->fields.leftItem)
        && !BYTE6(v9->fields.leftItem) )
      {
        v6 = ++v5 < size;
        if ( size != v5 )
          continue;
      }
      return v6;
    }
    v12 = (SvtEqCombineListViewManager_o *)sub_220024C(this, SvtEqCombineListViewItem_TypeInfo, v7, v8);
    return (unsigned __int8)SvtEqCombineListViewManager__GetSelectedMaterialList(v12, v13);
  }
}


void SvtEqCombineListViewManager__ClearSelectedSvtList(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *selectedMtSvtList_k__BackingField; // x8
  int32_t size; // w2
  int v5; // w9
  struct System_Collections_Generic_List_long__o *selectMaterialUsrSvtIdList; // x8
  int v7; // w9

  if ( (byte_59322E8 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__);
    byte_59322E8 = 1;
  }
  selectedMtSvtList_k__BackingField = this->fields._selectedMtSvtList_k__BackingField;
  if ( selectedMtSvtList_k__BackingField )
  {
    size = selectedMtSvtList_k__BackingField->fields._size;
    v5 = selectedMtSvtList_k__BackingField->fields._version + 1;
    selectedMtSvtList_k__BackingField->fields._size = 0;
    selectedMtSvtList_k__BackingField->fields._version = v5;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)selectedMtSvtList_k__BackingField->fields._items, 0, size, 0);
  }
  selectMaterialUsrSvtIdList = this->fields.selectMaterialUsrSvtIdList;
  if ( selectMaterialUsrSvtIdList )
  {
    v7 = selectMaterialUsrSvtIdList->fields._version + 1;
    selectMaterialUsrSvtIdList->fields._size = 0;
    selectMaterialUsrSvtIdList->fields._version = v7;
  }
}


// local variable allocation has failed, the output may be wrong!
void SvtEqCombineListViewManager__CloseServantCheckEquipDialog(
        SvtEqCombineListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantCheckEquipDialog_o *servantEquipCheckDialog; // x0
  const MethodInfo *v6; // x1

  servantEquipCheckDialog = this->fields.servantEquipCheckDialog;
  if ( !servantEquipCheckDialog )
    goto LABEL_6;
  ServantCheckEquipDialog__Close(servantEquipCheckDialog, 0);
  if ( isDecide )
  {
    SvtEqCombineListViewManager__SetSelectedMaterialInfo(this, v6);
    servantEquipCheckDialog = (ServantCheckEquipDialog_o *)this->fields.combineRootComponent;
    if ( servantEquipCheckDialog )
    {
      CombineRootComponent__SetSelectSvtEqMaterialList((CombineRootComponent_o *)servantEquipCheckDialog, 0);
      return;
    }
LABEL_6:
    sub_21FFECC(servantEquipCheckDialog, isDecide);
  }
}


// local variable allocation has failed, the output may be wrong!
void SvtEqCombineListViewManager__CreateList(
        SvtEqCombineListViewManager_o *this,
        int32_t type,
        int32_t modeKind,
        EventUpValSetupInfo_o *setupInfo,
        EventUpValSetupInfo_o *finishSetupInfo,
        const MethodInfo *method)
{
  SvtEqCombineListViewManager_c *v11; // x0
  ListViewSort_o *sort; // x0
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct ListViewSort_array *sortStatusList; // x8
  struct ListViewSort_o *v21; // x1
  struct ListViewSort_o **p_sort; // x22
  UnityEngine_GameObject_o *gameObject; // x25
  System_Collections_ICollection_o **p_alignedBonusFilterInfos; // x25
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Int32_array *servantEquipFilterEventCampaignIds; // x2
  System_Int32_array *servantEquipFilterEventIds; // x3
  System_Int32_array *v33; // x4
  ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  struct ListViewSort_o *v41; // x26
  UnityEngine_Component_o *scaleChangeButton; // x8
  const MethodInfo *v43; // x2
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x4
  __int64 v46; // x1
  __int64 v47; // x2
  UILabel_o *spendQpInfoLabel; // x23
  UILabel_o *getExpInfoLabel; // x23
  const MethodInfo *v50; // x2
  const MethodInfo *v51; // x4
  const MethodInfo *v52; // x2

  if ( (byte_59322CC & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&SvtEqCombineListViewManager_TypeInfo);
    sub_21FFC50(&StringLiteral_7221/*"GET_EXP_INFO"*/);
    sub_21FFC50(&StringLiteral_9610/*"NEED_QP_INFO"*/);
    byte_59322CC = 1;
  }
  v11 = SvtEqCombineListViewManager_TypeInfo;
  this->fields.currentType = type;
  if ( !*(&v11->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&type, *(_QWORD *)&modeKind);
  SvtEqCombineListViewManager__CreateSorteData((const MethodInfo *)v11);
  sortStatusList = SvtEqCombineListViewManager_TypeInfo->static_fields->sortStatusList;
  if ( !sortStatusList )
    goto LABEL_37;
  if ( LODWORD(sortStatusList->max_length) <= type )
    sub_21FFED4(sort);
  v21 = sortStatusList->m_Items[type];
  this->fields.sort = v21;
  p_sort = &this->fields.sort;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.sort, (int32_t)v21, v14, v15, v16, v17, v18, v19);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_37;
  sort->fields.listViewKind = 1;
  ListViewSort__Load(sort, 0);
  sort = (ListViewSort_o *)this->fields.bgTxtSprite;
  this->fields.dragEndIndex = -1;
  this->fields.isDragSelect = 1;
  *(_QWORD *)&this->fields.dragSelectSum = 0xFFFFFFFF00000000LL;
  if ( !sort )
    goto LABEL_37;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0);
  sort = (ListViewSort_o *)BgTxtManager__IsActiveBgTxt(0);
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)sort & 1, 0);
  p_alignedBonusFilterInfos = (System_Collections_ICollection_o **)&this->fields.alignedBonusFilterInfos;
  this->fields.alignedBonusFilterInfos = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.alignedBonusFilterInfos,
    0,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_37;
  sort->fields.isBonusKind = 0;
  if ( !setupInfo )
  {
    servantEquipFilterEventCampaignIds = 0;
    servantEquipFilterEventIds = 0;
    if ( finishSetupInfo )
      goto LABEL_13;
LABEL_15:
    v33 = 0;
    goto LABEL_16;
  }
  servantEquipFilterEventCampaignIds = setupInfo->fields.servantEquipFilterEventCampaignIds;
  servantEquipFilterEventIds = setupInfo->fields.servantEquipFilterEventIds;
  if ( !finishSetupInfo )
    goto LABEL_15;
LABEL_13:
  v33 = finishSetupInfo->fields.servantEquipFilterEventIds;
LABEL_16:
  AlignedBonusFilter = ListViewSort__GetAlignedBonusFilter(
                         sort,
                         0,
                         servantEquipFilterEventCampaignIds,
                         servantEquipFilterEventIds,
                         v33,
                         0,
                         0,
                         0);
  *p_alignedBonusFilterInfos = (System_Collections_ICollection_o *)AlignedBonusFilter;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.alignedBonusFilterInfos,
    (int32_t)AlignedBonusFilter,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v41 = *p_sort;
  sort = (ListViewSort_o *)BasicHelper__IsNullOrEmpty(*p_alignedBonusFilterInfos, 0);
  if ( !v41 )
    goto LABEL_37;
  scaleChangeButton = (UnityEngine_Component_o *)this->fields.scaleChangeButton;
  v41->fields.isBonusKind = ((unsigned __int8)sort & 1) == 0;
  if ( !scaleChangeButton )
    goto LABEL_37;
  sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject(scaleChangeButton, 0);
  if ( !sort )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0);
  if ( !type )
  {
    SvtEqCombineListViewManager__SetDispActive(this, 0, v43);
    SvtEqCombineListViewManager__SetBtnEnable(this, 0, v50);
    SvtEqCombineListViewManager__SetServantList(this, 0, setupInfo, finishSetupInfo, v51);
    sort = (ListViewSort_o *)this->fields.selectInfoLabel;
    if ( sort )
    {
      sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0);
      if ( sort )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 0, 0);
        goto LABEL_32;
      }
    }
    goto LABEL_37;
  }
  if ( type == 1 )
  {
    SvtEqCombineListViewManager__SetDispActive(this, 1, v43);
    SvtEqCombineListViewManager__SetBtnEnable(this, 0, v44);
    this->fields.selectMax = 20;
    SvtEqCombineListViewManager__SetServantList(this, 1, setupInfo, finishSetupInfo, v45);
    sort = (ListViewSort_o *)this->fields.selectInfoLabel;
    if ( sort )
    {
      sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0);
      if ( sort )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0);
        sort = (ListViewSort_o *)this->fields.getExpInfo;
        if ( sort )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0);
          spendQpInfoLabel = this->fields.spendQpInfoLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v46, v47);
          sort = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9610/*"NEED_QP_INFO"*/, 0);
          if ( spendQpInfoLabel )
          {
            UILabel__set_text(spendQpInfoLabel, (System_String_o *)sort, 0);
            getExpInfoLabel = this->fields.getExpInfoLabel;
            sort = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7221/*"GET_EXP_INFO"*/, 0);
            if ( getExpInfoLabel )
            {
              UILabel__set_text(getExpInfoLabel, (System_String_o *)sort, 0);
              goto LABEL_32;
            }
          }
        }
      }
    }
LABEL_37:
    sub_21FFECC(sort, v13);
  }
LABEL_32:
  sort = (ListViewSort_o *)this->fields.bonusFilterKindButton;
  if ( !sort )
    goto LABEL_37;
  sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0);
  if ( !*p_sort || !sort )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, (*p_sort)->fields.isBonusKind, 0);
  SvtEqCombineListViewManager__SetStatusKind(this, modeKind, v52);
  if ( !type )
    EventTutorialMaster__CheckTutorial(-1, 57, 0, 0, 0, 0, 0, 0);
}


void SvtEqCombineListViewManager__CreateSorteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  SvtEqCombineListViewManager_c *v3; // x0
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  SvtEqCombineListViewManager_c *v12; // x8
  __int64 v13; // x19
  struct SvtEqCombineListViewManager_StaticFields *static_fields; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  unsigned __int64 v17; // x23
  char v18; // w8
  SvtEqCombineListViewManager_c *v19; // x0
  char v20; // w24
  struct SvtEqCombineListViewManager_StaticFields *v21; // x8
  unsigned int *sortStatusList; // x25
  System_String_o *SORT_SAVE_KEY; // x19
  System_String_o *v24; // x0
  System_String_o *v25; // x20
  ListViewSort_o *v26; // x19
  __int64 v27; // x0
  __int64 v28; // x1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  __int64 v35; // x1
  unsigned int *v36; // x0
  SvtEqCombineListViewManager_c *v37; // x0
  __int64 v38; // x0
  int v39; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_59322C7 & 1) == 0 )
  {
    sub_21FFC50(&ListViewSort___TypeInfo);
    sub_21FFC50(&ListViewSort_TypeInfo);
    sub_21FFC50(&SvtEqCombineListViewManager_TypeInfo);
    byte_59322C7 = 1;
  }
  v3 = SvtEqCombineListViewManager_TypeInfo;
  v39 = 0;
  if ( !*(&SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo, v1, v2);
    v3 = SvtEqCombineListViewManager_TypeInfo;
  }
  if ( !v3->static_fields->isInitSystem )
  {
    v4 = sub_21FFD10(ListViewSort___TypeInfo, 2);
    v12 = SvtEqCombineListViewManager_TypeInfo;
    v13 = v4;
    if ( !*(&SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo, v5, v6);
      v12 = SvtEqCombineListViewManager_TypeInfo;
    }
    static_fields = v12->static_fields;
    static_fields->sortStatusList = (struct ListViewSort_array *)v13;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->sortStatusList, v13, v6, v7, v8, v9, v10, v11);
    v17 = 0;
    v18 = 1;
    do
    {
      v19 = SvtEqCombineListViewManager_TypeInfo;
      v20 = v18;
      if ( !*(&SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo, v15, v16);
        v19 = SvtEqCombineListViewManager_TypeInfo;
      }
      v21 = v19->static_fields;
      sortStatusList = (unsigned int *)v21->sortStatusList;
      SORT_SAVE_KEY = v21->SORT_SAVE_KEY;
      v39 = v17 + 1;
      v24 = System_Int32__ToString((int32_t)&v39, 0);
      v25 = System_String__Concat_75438412(SORT_SAVE_KEY, v24, 0);
      v26 = (ListViewSort_o *)sub_21FFEBC(ListViewSort_TypeInfo);
      ListViewSort___ctor_50784632(v26, v25, 3, 0, 0);
      if ( !sortStatusList )
        sub_21FFECC(v27, v28);
      if ( v26 )
      {
        v27 = sub_21FFDA4(v26, *(_QWORD *)(*(_QWORD *)sortStatusList + 64LL));
        if ( !v27 )
        {
          v38 = sub_21FFEF0(0, v35);
          sub_21FFD90(v38, 0);
        }
      }
      if ( v17 >= sortStatusList[6] )
        sub_21FFED4(v27);
      v36 = &sortStatusList[2 * v17];
      *((_QWORD *)v36 + 4) = v26;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v36 + 8), (int32_t)v26, v29, v30, v31, v32, v33, v34);
      v18 = 0;
      v17 = 1;
    }
    while ( (v20 & 1) != 0 );
    v37 = SvtEqCombineListViewManager_TypeInfo;
    if ( !*(&SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo, v15, v16);
      v37 = SvtEqCombineListViewManager_TypeInfo;
    }
    v37->static_fields->isInitSystem = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void SvtEqCombineListViewManager__DecideDragSelect(
        SvtEqCombineListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemSortList; // x0
  __int64 v6; // x2
  __int64 v7; // x3
  System_Collections_Generic_List_object__o *v8; // x19
  __int64 naturalAligment; // x9
  _BOOL4 isDragSelect; // w21
  bool IsSelect; // w0
  int32_t selectSum; // w8
  int items; // w21
  int32_t v14; // w8
  _BOOL8 v15; // x0
  __int64 v16; // x1
  int v17; // w9
  void *v18; // x0
  void *v19; // x20
  int v20; // w1
  __int64 v21; // x20
  __int64 v22; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_object__o *v23; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5932306 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&SvtEqCombineListViewItem_TypeInfo);
    byte_5932306 = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  memset(&v24, 0, sizeof(v24));
  if ( !itemSortList )
    goto LABEL_22;
  itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemSortList,
                                                                index,
                                                                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !itemSortList )
    goto LABEL_22;
  v8 = itemSortList;
  naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
  if ( itemSortList->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (SvtEqCombineListViewItem_c *)itemSortList->klass->_2.typeHierarchy[naturalAligment - 1] == SvtEqCombineListViewItem_TypeInfo )
  {
    if ( SHIDWORD(itemSortList[6].fields._items) < 1 )
      goto LABEL_20;
    isDragSelect = this->fields.isDragSelect;
    IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)itemSortList, 0);
    if ( isDragSelect )
    {
      if ( !IsSelect )
      {
        selectSum = this->fields.selectSum;
        if ( selectSum < this->fields.selectMax )
        {
          LODWORD(v8->fields._items) = selectSum;
          this->fields.selectSum = selectSum + 1;
        }
      }
      goto LABEL_20;
    }
    if ( !IsSelect )
      goto LABEL_20;
    items = (int)v8->fields._items;
    ListViewItem__set_IsSelect((ListViewItem_o *)v8, 0, 0);
    v14 = this->fields.selectSum;
    itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    BYTE2(v8[4].fields._items) = 0;
    this->fields.selectSum = v14 - 1;
    if ( itemSortList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v24,
        itemSortList,
        (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v22 = 0;
      v23 = &v24;
      while ( 1 )
      {
        v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v24,
                (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v15 )
          break;
        if ( !v24.fields._current )
          sub_21FFECC(v15, v16);
        v17 = *(_DWORD *)((char *)&v24.fields._current->klass + (unsigned __int64)&word_10);
        if ( v17 > items )
          *(_DWORD *)((char *)&v24.fields._current->klass + (unsigned __int64)&word_10) = v17 - 1;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v24,
        (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      goto LABEL_20;
    }
LABEL_22:
    sub_21FFECC(itemSortList, *(_QWORD *)&index);
  }
  v18 = (void *)sub_220024C(itemSortList, SvtEqCombineListViewItem_TypeInfo, v6, v7);
  v19 = v18;
  if ( v20 != 1 )
  {
    sub_1FEBF90(&v22);
    sub_22ED31C(v19);
  }
  v21 = *(_QWORD *)__cxa_begin_catch(v18);
  v22 = v21;
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_object___Dispose(
    v23,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( v21 )
    sub_21FFEC4(v21);
LABEL_20:
  HIDWORD(v8[6].fields._items) = -1;
}


void SvtEqCombineListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  SvtEqCombineListViewManager_c *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x20
  SvtEqCombineListViewManager_c *v7; // x0
  struct ListViewSort_array *sortStatusList; // x8

  if ( (byte_59322C8 & 1) == 0 )
  {
    sub_21FFC50(&SvtEqCombineListViewManager_TypeInfo);
    byte_59322C8 = 1;
  }
  v3 = SvtEqCombineListViewManager_TypeInfo;
  if ( !*(&SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo, v1, v2);
  SvtEqCombineListViewManager__CreateSorteData((const MethodInfo *)v3);
  v6 = 0;
  do
  {
    v7 = SvtEqCombineListViewManager_TypeInfo;
    if ( !*(&SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo, v4, v5);
      v7 = SvtEqCombineListViewManager_TypeInfo;
    }
    sortStatusList = v7->static_fields->sortStatusList;
    if ( !sortStatusList )
      goto LABEL_13;
    if ( (unsigned int)v6 >= LODWORD(sortStatusList->max_length) )
      sub_21FFED4(v7);
    v7 = (SvtEqCombineListViewManager_c *)sortStatusList->m_Items[v6];
    if ( !v7 )
LABEL_13:
      sub_21FFECC(v7, v4);
    ListViewSort__DeleteContinueData((ListViewSort_o *)v7, 0);
    ++v6;
  }
  while ( (_DWORD)v6 != 2 );
}


void SvtEqCombineListViewManager__DestroyList(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_21FFECC(0, v3);
  ListViewSort__Save(sort, 0);
  this->fields.alignedBonusFilterInfos = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.alignedBonusFilterInfos, 0, v5, v6, v7, v8, v9, v10);
}


void SvtEqCombineListViewManager__EndClickTabChoice(
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
  SvtEqCombineListViewManager__SetMode_37969712(this, 2, v6);
}


void SvtEqCombineListViewManager__EndClickTabLock(
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
  SvtEqCombineListViewManager__SetMode_37969712(this, 2, v6);
}


void SvtEqCombineListViewManager__EndClickTabStatus(
        SvtEqCombineListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  SvtEqCombineListViewManager__SetStatusKind(this, 0, method);
  SvtEqCombineListViewManager__ModifyList(this, 0, v4);
  SvtEqCombineListViewManager__SetMode_37969712(this, 2, v5);
}


void SvtEqCombineListViewManager__EndCloseSelectFilterKind(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void SvtEqCombineListViewManager__EndSelectFilterKind(
        SvtEqCombineListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_59322F2 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SvtEqCombineListViewManager_EndCloseSelectFilterKind__);
    byte_59322F2 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    SvtEqCombineListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SvtEqCombineListViewManager_EndCloseSelectFilterKind__, 0);
  if ( !Instance )
    sub_21FFECC(v8, v9);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v7, 0);
}


void SvtEqCombineListViewManager__EndSelectSortKind(
        SvtEqCombineListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_59322F7 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59322F7 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v6);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, 0, 0);
}


void SvtEqCombineListViewManager__EndStatusSync(
        SvtEqCombineListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct SvtEqCombineListViewManager_RequestCallbackFunc_o *requestCallback; // x19
  MissionNaviTransitionBoardItem_o *p_requestCallback; // x0

  requestCallback = this->fields.requestCallback;
  if ( requestCallback )
  {
    p_requestCallback = (MissionNaviTransitionBoardItem_o *)&this->fields.requestCallback;
    p_requestCallback->klass = 0;
    sub_21FFBF4(p_requestCallback, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))requestCallback->fields.invoke_impl)(
      requestCallback->fields.method_code,
      1,
      requestCallback->fields.method);
  }
}


// local variable allocation has failed, the output may be wrong!
int64_t SvtEqCombineListViewManager__GetAmountSortValue(
        SvtEqCombineListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  SvtEqCombineListViewManager_o *v4; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w23
  int64_t v7; // x21
  int32_t v8; // w22
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 naturalAligment; // x9
  SvtEqCombineListViewItem_o *v13; // x0
  ListViewSort_o *v14; // x1
  const MethodInfo *v15; // x2

  v3 = svtId;
  v4 = this;
  if ( (byte_59322FA & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (SvtEqCombineListViewManager_o *)sub_21FFC50(&SvtEqCombineListViewItem_TypeInfo);
    byte_59322FA = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_21FFECC(this, *(_QWORD *)&svtId);
  size = itemList->fields._size;
  if ( size < 1 )
  {
    return 0;
  }
  else
  {
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      this = (SvtEqCombineListViewManager_o *)v4->fields.itemList;
      if ( !this )
        goto LABEL_16;
      this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)this,
                                                v8,
                                                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        goto LABEL_16;
      *(_QWORD *)&svtId = SvtEqCombineListViewItem_TypeInfo;
      naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (SvtEqCombineListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        break;
      }
      ++v8;
      if ( LODWORD(this->fields.clipOffset.fields.x) == v3 )
        ++v7;
      if ( size == v8 )
        return v7;
    }
    v13 = (SvtEqCombineListViewItem_o *)sub_220024C(this, SvtEqCombineListViewItem_TypeInfo, v9, v10);
    return SvtEqCombineListViewItem__IsMatchFilter(v13, v14, v15);
  }
}


int32_t SvtEqCombineListViewManager__GetBaseCollectionLv(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  struct UserServantEntity_o *baseUsrSvtData; // x8
  UserServantCollectionMaster_o *v7; // x20
  __int128 v8; // q1
  __int64 v9; // x2
  struct UserServantEntity_o *v10; // x8
  int64_t v11; // x19
  __int64 v12; // x21
  __int64 v13; // x22
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_59322D7 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59322D7 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_14;
  v7 = (UserServantCollectionMaster_o *)Instance;
  v8 = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.fakeValue;
  *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v17.fields.fakeValue = v8;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4, v5);
  v16 = v17;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v16, 0);
  v10 = this->fields.baseUsrSvtData;
  if ( !v10 )
    goto LABEL_14;
  v11 = Instance;
  v12 = *(_QWORD *)&v10->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&v10->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v9);
  *(_QWORD *)&v18.fields.currentCryptoKey = v12;
  *(_QWORD *)&v18.fields.fakeValue = v13;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v18, 0);
  if ( !v7 )
LABEL_14:
    sub_21FFECC(Instance, v4);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v7, v11, Instance, 0);
  if ( EntityDefinitely )
    LODWORD(EntityDefinitely) = EntityDefinitely->fields.maxLv;
  return (int)EntityDefinitely;
}


int32_t SvtEqCombineListViewManager__GetCombineInfoMsgLbFontSize(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (unsigned int)(this->fields.modeKind - 1) < 2 )
    return 14;
  if ( this->fields.currentType )
    return 12;
  return 20;
}


bool SvtEqCombineListViewManager__GetDragSelect(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.isDragSelect;
}


bool SvtEqCombineListViewManager__GetFocusItemIndex(
        SvtEqCombineListViewManager_o *this,
        int32_t *index,
        System_Collections_Generic_List_ListViewItem__o *list,
        int32_t sum,
        const MethodInfo *method)
{
  int32_t v8; // w22
  __int64 naturalAligment; // x10

  if ( (byte_5932308 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (SvtEqCombineListViewManager_o *)sub_21FFC50(&SvtEqCombineListViewItem_TypeInfo);
    byte_5932308 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_15:
      sub_21FFECC(this, index);
    v8 = 0;
    while ( 1 )
    {
      this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)list,
                                                v8,
                                                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        goto LABEL_15;
      naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (SvtEqCombineListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        goto LABEL_15;
      }
      if ( BYTE1(this->fields.SortObject) || BYTE3(this->fields.SortObject) )
        break;
      if ( sum == ++v8 )
        return 1;
    }
    *index = v8;
  }
  return 1;
}


int32_t SvtEqCombineListViewManager__GetFriendShipSvtEquipNum(
        SvtEqCombineListViewManager_o *this,
        UserServantEntity_array *list,
        const MethodInfo *method)
{
  int max_length; // w8
  __int64 v5; // x21
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
      if ( (unsigned int)v5 >= max_length )
        sub_21FFED4(this);
      this = (SvtEqCombineListViewManager_o *)list->m_Items[v5];
      if ( !this )
        break;
      this = (SvtEqCombineListViewManager_o *)UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)this, 0);
      max_length = list->max_length;
      ++v5;
      v6 += (unsigned __int8)this & 1;
      if ( (int)v5 >= max_length )
        return v6;
    }
LABEL_10:
    sub_21FFECC(this, list);
  }
  return 0;
}


SvtEqCombineListViewItem_o *SvtEqCombineListViewManager__GetItem(
        SvtEqCombineListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  SvtEqCombineListViewItem_o *result; // x0
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 naturalAligment; // x9
  SvtEqCombineListViewManager_o *v9; // x0
  int64_t v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_59322D8 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&SvtEqCombineListViewItem_TypeInfo);
    byte_59322D8 = 1;
  }
  result = (SvtEqCombineListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (SvtEqCombineListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (SvtEqCombineListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        v9 = (SvtEqCombineListViewManager_o *)sub_220024C(result, SvtEqCombineListViewItem_TypeInfo, v6, v7);
        SvtEqCombineListViewManager__ModifyItem(v9, v10, v11);
      }
    }
  }
  return result;
}


UserServantEntity_o *SvtEqCombineListViewManager__GetSelectBaseSvtData(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  MissionNaviTransitionBoardItem_o *p_baseUsrSvtData; // x19
  __int64 v6; // x2
  MissionNaviTransitionBoardItem_c *klass; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  Il2CppType byval_arg; // q1
  Il2CppObject *Entity; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-40h]

  if ( (byte_59322D6 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59322D6 = 1;
  }
  if ( !this->fields.baseUsrSvtData )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  p_baseUsrSvtData = (MissionNaviTransitionBoardItem_o *)&this->fields.baseUsrSvtData;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  klass = p_baseUsrSvtData->klass;
  if ( !p_baseUsrSvtData->klass )
    goto LABEL_12;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  byval_arg = klass->_1.byval_arg;
  *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
  *(Il2CppType *)&v19.fields.fakeValue = byval_arg;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4, v6);
  v18 = v19;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v18, 0);
  if ( !v8 )
LABEL_12:
    sub_21FFECC(Instance, v4);
  Entity = DataMasterBase_object__object__long___GetEntity(
             v8,
             (int64_t)Instance,
             (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_baseUsrSvtData->klass = (MissionNaviTransitionBoardItem_c *)Entity;
  sub_21FFBF4(p_baseUsrSvtData, (int32_t)Entity, v11, v12, v13, v14, v15, v16);
  return (UserServantEntity_o *)p_baseUsrSvtData->klass;
}


SetCombineData_o *SvtEqCombineListViewManager__GetSelectCombineData(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.combineData;
}


UserServantEntity_o *SvtEqCombineListViewManager__GetSelectUsrSvtEntity(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.selectUsrSvtEntity;
}


System_Collections_Generic_List_SvtEqCombineListViewItem__o *SvtEqCombineListViewManager__GetSelectedMaterialList(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  void *Item; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w23
  int32_t v9; // w21
  __int64 v10; // x2
  __int64 v11; // x3
  Il2CppObject *v12; // x22
  __int64 naturalAligment; // x9
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  Il2CppClass **v22; // x0
  struct SvtEqCombineListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__141_0; // x21
  Il2CppObject *v25; // x22
  struct SvtEqCombineListViewManager___c_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  int v33; // w23
  int32_t v34; // w21
  System_Collections_Generic_List_SvtEqCombineListViewItem__o *result; // x0
  SvtEqCombineListViewManager_o *v36; // x0
  const MethodInfo *v37; // x1

  if ( (byte_59322E4 & 1) == 0 )
  {
    sub_21FFC50(&System_Comparison_SvtEqCombineListViewItem__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo);
    sub_21FFC50(&SvtEqCombineListViewItem_TypeInfo);
    sub_21FFC50(&Method_SvtEqCombineListViewManager___c__GetSelectedMaterialList_b__141_0__);
    sub_21FFC50(&SvtEqCombineListViewManager___c_TypeInfo);
    byte_59322E4 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( size < 1 )
  {
LABEL_17:
    Item = SvtEqCombineListViewManager___c_TypeInfo;
    if ( !*(&SvtEqCombineListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager___c_TypeInfo, v5, v6);
      Item = SvtEqCombineListViewManager___c_TypeInfo;
    }
    static_fields = (struct SvtEqCombineListViewManager___c_StaticFields *)*((_QWORD *)Item + 23);
    _9__141_0 = (System_Comparison_T__o *)static_fields->__9__141_0;
    if ( !_9__141_0 )
    {
      if ( !*((_DWORD *)Item + 57) )
      {
        j_il2cpp_runtime_class_init_0(Item, v5, v6);
        static_fields = SvtEqCombineListViewManager___c_TypeInfo->static_fields;
      }
      v25 = (Il2CppObject *)static_fields->__9;
      _9__141_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_SvtEqCombineListViewItem__TypeInfo);
      System_Comparison_object____ctor(
        _9__141_0,
        v25,
        Method_SvtEqCombineListViewManager___c__GetSelectedMaterialList_b__141_0__,
        0);
      v26 = SvtEqCombineListViewManager___c_TypeInfo->static_fields;
      v26->__9__141_0 = (struct System_Comparison_SvtEqCombineListViewItem__o *)_9__141_0;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v26->__9__141_0,
        (int32_t)_9__141_0,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
    }
    if ( v3 )
    {
      System_Collections_Generic_List_object___Sort_71636404(
        v3,
        _9__141_0,
        (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Sort__);
      if ( v3->fields._size < 1 )
        return (System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v3;
      v33 = 0;
      v34 = 0;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v3,
                 v34,
                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
        if ( !Item )
          break;
        if ( *((_DWORD *)Item + 41) > v33 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v3,
                   v34,
                   (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
          if ( !Item )
            break;
          v33 = *((_DWORD *)Item + 41);
          Item = System_Collections_Generic_List_object___get_Item(
                   v3,
                   v34,
                   (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
          if ( !Item )
            break;
          this->fields.lastSelectIndex = *((_DWORD *)Item + 6);
        }
        if ( ++v34 >= v3->fields._size )
          return (System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v3;
      }
    }
LABEL_33:
    sub_21FFECC(Item, v5);
  }
  v9 = 0;
  while ( 1 )
  {
    Item = this->fields.itemList;
    if ( !Item )
      goto LABEL_33;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Item,
             v9,
             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !Item )
      goto LABEL_33;
    v12 = (Il2CppObject *)Item;
    naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)naturalAligment
      || *(SvtEqCombineListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * naturalAligment - 8) != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    Item = (void *)ListViewItem__get_IsSelect((ListViewItem_o *)Item, 0);
    if ( ((unsigned __int8)Item & 1) != 0 )
    {
      if ( !v3 )
        goto LABEL_33;
      items = v3->fields._items;
      v20 = Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Add__;
      ++v3->fields._version;
      if ( !items )
        goto LABEL_33;
      v21 = v3->fields._size;
      if ( (unsigned int)v21 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          v12,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + v21;
        v3->fields._size = v21 + 1;
        v22[4] = (Il2CppClass *)v12;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v12, v6, v14, v15, v16, v17, v18);
      }
    }
    if ( size == ++v9 )
      goto LABEL_17;
  }
  v36 = (SvtEqCombineListViewManager_o *)sub_220024C(Item, SvtEqCombineListViewItem_TypeInfo, v10, v11);
  SvtEqCombineListViewManager__SetSelectedMaterialInfo(v36, v37);
  return result;
}


bool SvtEqCombineListViewManager__GetSwapChoiceList(
        SvtEqCombineListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x22
  System_Collections_Generic_List_long__o *v8; // x23
  int64_t Item; // x0
  SvtEqCombineListViewItem_c *v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w25
  int32_t v19; // w24
  __int64 naturalAligment; // x9
  __int64 v21; // x8
  __int128 v22; // q0
  __int128 v23; // q1
  int v24; // w8
  struct System_Int64_array *items; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x8
  __int128 v29; // q0
  __int128 v30; // q1
  int v31; // w8
  struct System_Int64_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x8
  System_Collections_Generic_List_long__o *v36; // x0
  int v37; // w21
  System_Int64_array *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Int64_array *v45; // x1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  bool result; // w0
  SvtEqCombineListViewManager_o *v53; // x0
  const MethodInfo *v54; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+40h] [xbp-80h]

  if ( (byte_59322FD & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&SvtEqCombineListViewItem_TypeInfo);
    byte_59322FD = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_36;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v19 = 0;
    do
    {
      Item = (int64_t)this->fields.itemList;
      if ( !Item )
        goto LABEL_36;
      Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)Item,
                        v19,
                        (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !Item )
        goto LABEL_36;
      v10 = SvtEqCombineListViewItem_TypeInfo;
      naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)naturalAligment
        || *(SvtEqCombineListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * naturalAligment - 8) != SvtEqCombineListViewItem_TypeInfo )
      {
        v53 = (SvtEqCombineListViewManager_o *)sub_220024C(Item, SvtEqCombineListViewItem_TypeInfo, v11, v12);
        SvtEqCombineListViewManager__OnClickNormalStatus(v53, v54);
        return result;
      }
      v21 = *(_QWORD *)(Item + 128);
      if ( v21 && *(_BYTE *)(Item + 256) )
      {
        if ( *(_BYTE *)(Item + 173) )
        {
          v22 = *(_OWORD *)(v21 + 16);
          v23 = *(_OWORD *)(v21 + 32);
          v24 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v57.fields.currentCryptoKey = v22;
          *(_OWORD *)&v57.fields.fakeValue = v23;
          if ( !v24 )
            j_il2cpp_runtime_class_init_0(
              CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
              SvtEqCombineListViewItem_TypeInfo,
              v11);
          v56 = v57;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v56, 0);
          if ( !v8 )
            goto LABEL_36;
          items = v8->fields._items;
          v26 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_36;
          v27 = v8->fields._size;
          v10 = (SvtEqCombineListViewItem_c *)Item;
          if ( (unsigned int)v27 >= LODWORD(items->max_length) )
          {
            v35 = v26[4];
            v36 = v8;
LABEL_28:
            System_Collections_Generic_List_long___AddWithResize(
              v36,
              (int64_t)v10,
              *(const MethodInfo_4438164 **)(*(_QWORD *)(v35 + 192) + 112LL));
            continue;
          }
          v28 = &items->obj.klass + v27;
          v8->fields._size = v27 + 1;
        }
        else
        {
          v29 = *(_OWORD *)(v21 + 16);
          v30 = *(_OWORD *)(v21 + 32);
          v31 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v57.fields.currentCryptoKey = v29;
          *(_OWORD *)&v57.fields.fakeValue = v30;
          if ( !v31 )
            j_il2cpp_runtime_class_init_0(
              CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
              SvtEqCombineListViewItem_TypeInfo,
              v11);
          v55 = v57;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v55, 0);
          if ( !v7 )
            goto LABEL_36;
          v32 = v7->fields._items;
          v33 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v32 )
            goto LABEL_36;
          v34 = v7->fields._size;
          v10 = (SvtEqCombineListViewItem_c *)Item;
          if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
          {
            v35 = v33[4];
            v36 = v7;
            goto LABEL_28;
          }
          v28 = &v32->obj.klass + v34;
          v7->fields._size = v34 + 1;
        }
        v28[4] = (Il2CppClass *)v10;
      }
    }
    while ( size != ++v19 );
  }
  if ( !v7 || !v8 )
LABEL_36:
    sub_21FFECC(Item, v10);
  v37 = v8->fields._size + v7->fields._size;
  if ( v37 < 1 )
  {
    *choiceList = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)choiceList, 0, v11, v12, v13, v14, v15, v16);
    v45 = 0;
  }
  else
  {
    v38 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_4439BE4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v38;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)choiceList, (int32_t)v38, v39, v40, v41, v42, v43, v44);
    v45 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_4439BE4 *)Method_System_Collections_Generic_List_long__ToArray__);
  }
  *unchoiceList = v45;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)unchoiceList, (int32_t)v45, v46, v47, v48, v49, v50, v51);
  return v37 > 0;
}


bool SvtEqCombineListViewManager__GetSwapLockList(
        SvtEqCombineListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x22
  System_Collections_Generic_List_long__o *v8; // x23
  int64_t Item; // x0
  SvtEqCombineListViewItem_c *v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w25
  int32_t v19; // w24
  __int64 naturalAligment; // x9
  __int64 v21; // x8
  __int128 v22; // q0
  __int128 v23; // q1
  int v24; // w8
  struct System_Int64_array *items; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x8
  __int128 v29; // q0
  __int128 v30; // q1
  int v31; // w8
  struct System_Int64_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x8
  System_Collections_Generic_List_long__o *v36; // x0
  int v37; // w21
  System_Int64_array *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Int64_array *v45; // x1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  SvtEqCombineListViewManager_o *v53; // x0
  System_Int64_array **v54; // x1
  System_Int64_array **v55; // x2
  const MethodInfo *v56; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+40h] [xbp-80h]

  if ( (byte_59322FC & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&SvtEqCombineListViewItem_TypeInfo);
    byte_59322FC = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_36;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v19 = 0;
    do
    {
      Item = (int64_t)this->fields.itemList;
      if ( !Item )
        goto LABEL_36;
      Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)Item,
                        v19,
                        (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !Item )
        goto LABEL_36;
      v10 = SvtEqCombineListViewItem_TypeInfo;
      naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)naturalAligment
        || *(SvtEqCombineListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * naturalAligment - 8) != SvtEqCombineListViewItem_TypeInfo )
      {
        v53 = (SvtEqCombineListViewManager_o *)sub_220024C(Item, SvtEqCombineListViewItem_TypeInfo, v11, v12);
        return SvtEqCombineListViewManager__GetSwapChoiceList(v53, v54, v55, v56);
      }
      v21 = *(_QWORD *)(Item + 128);
      if ( v21 && *(_BYTE *)(Item + 255) )
      {
        if ( *(_BYTE *)(Item + 168) )
        {
          v22 = *(_OWORD *)(v21 + 16);
          v23 = *(_OWORD *)(v21 + 32);
          v24 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v59.fields.currentCryptoKey = v22;
          *(_OWORD *)&v59.fields.fakeValue = v23;
          if ( !v24 )
            j_il2cpp_runtime_class_init_0(
              CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
              SvtEqCombineListViewItem_TypeInfo,
              v11);
          v58 = v59;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v58, 0);
          if ( !v8 )
            goto LABEL_36;
          items = v8->fields._items;
          v26 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_36;
          v27 = v8->fields._size;
          v10 = (SvtEqCombineListViewItem_c *)Item;
          if ( (unsigned int)v27 >= LODWORD(items->max_length) )
          {
            v35 = v26[4];
            v36 = v8;
LABEL_28:
            System_Collections_Generic_List_long___AddWithResize(
              v36,
              (int64_t)v10,
              *(const MethodInfo_4438164 **)(*(_QWORD *)(v35 + 192) + 112LL));
            continue;
          }
          v28 = &items->obj.klass + v27;
          v8->fields._size = v27 + 1;
        }
        else
        {
          v29 = *(_OWORD *)(v21 + 16);
          v30 = *(_OWORD *)(v21 + 32);
          v31 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v59.fields.currentCryptoKey = v29;
          *(_OWORD *)&v59.fields.fakeValue = v30;
          if ( !v31 )
            j_il2cpp_runtime_class_init_0(
              CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
              SvtEqCombineListViewItem_TypeInfo,
              v11);
          v57 = v59;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v57, 0);
          if ( !v7 )
            goto LABEL_36;
          v32 = v7->fields._items;
          v33 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v32 )
            goto LABEL_36;
          v34 = v7->fields._size;
          v10 = (SvtEqCombineListViewItem_c *)Item;
          if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
          {
            v35 = v33[4];
            v36 = v7;
            goto LABEL_28;
          }
          v28 = &v32->obj.klass + v34;
          v7->fields._size = v34 + 1;
        }
        v28[4] = (Il2CppClass *)v10;
      }
    }
    while ( size != ++v19 );
  }
  if ( !v7 || !v8 )
LABEL_36:
    sub_21FFECC(Item, v10);
  v37 = v8->fields._size + v7->fields._size;
  if ( v37 < 1 )
  {
    *lockList = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)lockList, 0, v11, v12, v13, v14, v15, v16);
    v45 = 0;
  }
  else
  {
    v38 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_4439BE4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v38;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)lockList, (int32_t)v38, v39, v40, v41, v42, v43, v44);
    v45 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_4439BE4 *)Method_System_Collections_Generic_List_long__ToArray__);
  }
  *unlockList = v45;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)unlockList, (int32_t)v45, v46, v47, v48, v49, v50, v51);
  return v37 > 0;
}


void SvtEqCombineListViewManager__InitBackListView(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  SvtEqCombineListViewManager__StatusRequest(this, 0, v2);
  SvtEqCombineListViewManager__SetStatusKind(this, 0, v4);
}


void SvtEqCombineListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  SvtEqCombineListViewManager_c *v3; // x0
  __int64 v4; // x20
  SvtEqCombineListViewManager_c *v5; // x0
  struct ListViewSort_array *sortStatusList; // x8

  if ( (byte_59322C9 & 1) == 0 )
  {
    sub_21FFC50(&SvtEqCombineListViewManager_TypeInfo);
    byte_59322C9 = 1;
  }
  v3 = SvtEqCombineListViewManager_TypeInfo;
  if ( !*(&SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo, v1, v2);
    v3 = SvtEqCombineListViewManager_TypeInfo;
  }
  if ( v3->static_fields->isInitSystem )
  {
    v4 = 0;
    do
    {
      v5 = SvtEqCombineListViewManager_TypeInfo;
      if ( !*(&SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo, v1, v2);
        v5 = SvtEqCombineListViewManager_TypeInfo;
      }
      sortStatusList = v5->static_fields->sortStatusList;
      if ( !sortStatusList )
        goto LABEL_14;
      if ( (unsigned int)v4 >= LODWORD(sortStatusList->max_length) )
        sub_21FFED4(v5);
      v5 = (SvtEqCombineListViewManager_c *)sortStatusList->m_Items[v4];
      if ( !v5 )
LABEL_14:
        sub_21FFECC(v5, v1);
      ListViewSort__InitLoad((ListViewSort_o *)v5, 0);
      ++v4;
    }
    while ( (_DWORD)v4 != 2 );
  }
}


bool SvtEqCombineListViewManager__IsDragEnable(
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
        && (ListViewItem__get_IsSelect((ListViewItem_o *)item, 0)
         || this->fields.modeKind
         || this->fields.selectSum < this->fields.selectMax);
  return result;
}


bool SvtEqCombineListViewManager__IsDragStart(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.dragStartIndex >= 0;
}


// local variable allocation has failed, the output may be wrong!
bool SvtEqCombineListViewManager__IsSelectEnable(
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


void SvtEqCombineListViewManager__ModifyItem(
        SvtEqCombineListViewManager_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 v6; // x1
  UserGameEntity_o *SelfUserGame; // x19
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  Il2CppObject *current; // x21
  SvtEqCombineListViewItem_c *v15; // x1
  __int64 naturalAligment; // x9
  Il2CppClass *klass; // x8
  Il2CppObject *v18; // x22
  __int128 v19; // q0
  Il2CppType byval_arg; // q1
  int v21; // w8
  int64_t v22; // x0
  Il2CppObject v23; // q1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  int64_t UserSvtId; // x0
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x1
  __int64 v33; // x1
  __int64 v34; // x2
  UnityEngine_Object_o *v35; // x22
  __int64 v36; // x1
  Il2CppClass *v37; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+40h] [xbp-B0h] BYREF
  __int64 v41; // [xsp+60h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_object__o *v42; // [xsp+68h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+70h] [xbp-80h] BYREF

  if ( (byte_59322D9 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&SvtEqCombineListViewItem_TypeInfo);
    byte_59322D9 = 1;
  }
  itemList = this->fields.itemList;
  memset(&v43, 0, sizeof(v43));
  if ( !itemList )
    return;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( usrSvtId < 1 )
  {
    Entity = 0;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
    {
LABEL_36:
      sub_21FFECC(Instance, v6);
    }
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               usrSvtId,
               (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_36;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v43.fields._current = (Il2CppObject *)v40.fields.fakeValue;
  *(_OWORD *)&v43.fields._list = *(_OWORD *)&v40.fields.currentCryptoKey;
  v41 = 0;
  v42 = &v43;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v43,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v10 & 1) == 0 )
      break;
    current = v43.fields._current;
    if ( !v43.fields._current )
      goto LABEL_30;
    v15 = SvtEqCombineListViewItem_TypeInfo;
    naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
    if ( v43.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (SvtEqCombineListViewItem_c *)v43.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      v10 = sub_220024C(v43.fields._current, SvtEqCombineListViewItem_TypeInfo, v12, v13);
LABEL_30:
      if ( !Entity )
        sub_21FFECC(v10, v11);
      sub_21FFECC(v10, v11);
    }
    if ( Entity )
    {
      v18 = v43.fields._current + 8;
      klass = v43.fields._current[8].klass;
      if ( !klass )
        sub_21FFECC(v10, SvtEqCombineListViewItem_TypeInfo);
      v19 = *(_OWORD *)&klass->_1.name;
      byval_arg = klass->_1.byval_arg;
      v21 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v40.fields.currentCryptoKey = v19;
      *(Il2CppType *)&v40.fields.fakeValue = byval_arg;
      if ( !v21 )
        j_il2cpp_runtime_class_init_0(
          CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
          SvtEqCombineListViewItem_TypeInfo,
          v12);
      v39 = v40;
      v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v39, 0);
      v23 = Entity[2];
      *(Il2CppObject *)&v38.fields.currentCryptoKey = Entity[1];
      *(Il2CppObject *)&v38.fields.fakeValue = v23;
      if ( v22 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v38, 0) )
      {
        v18->klass = (Il2CppClass *)Entity;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&current[8], (int32_t)Entity, v24, v25, v26, v27, v28, v29);
      }
    }
    UserSvtId = SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)current, (const MethodInfo *)v15);
    if ( !SelfUserGame )
      sub_21FFECC(UserSvtId, v31);
    BYTE4(current[10].monitor) = UserSvtId == SelfUserGame->fields.favoriteUserSvtId;
    SvtEqCombineListViewItem__ModifyLockItem((SvtEqCombineListViewItem_o *)current, v31);
    SvtEqCombineListViewItem__ModifyChoiceItem((SvtEqCombineListViewItem_o *)current, v32);
    v35 = (UnityEngine_Object_o *)current[7].klass;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33, v34);
    if ( UnityEngine_Object__op_Inequality(v35, 0, 0) )
    {
      v37 = current[7].klass;
      if ( !v37 )
        sub_21FFECC(0, v36);
      (*((void (__fastcall **)(Il2CppClass *, Il2CppObject *, _QWORD))v37->_1.image + 49))(
        v37,
        current,
        *((_QWORD *)v37->_1.image + 50));
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v43,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void SvtEqCombineListViewManager__ModifyList(
        SvtEqCombineListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  SvtEqCombineListViewManager_o *v3; // x20
  int32_t currentType; // w8
  System_Collections_Generic_IEnumerable_T__o *ServantEquipList; // x21
  System_Collections_Generic_List_object__o *v6; // x22
  System_Collections_Generic_List_object__o *v7; // x23
  System_String_o *v8; // x2
  int monitor; // w8
  __int64 v10; // x19
  __int64 v11; // x24
  __int128 v12; // q1
  int v13; // w8
  struct UserServantEntity_o *v14; // x8
  __int128 v15; // q1
  SvtEqCombineListViewManager_o *v16; // x25
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_Object_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_List_object__o *v26; // x22
  System_Collections_Generic_List_object__o *v27; // x23
  int32_t v28; // w21
  __int64 v29; // x2
  __int128 v30; // q1
  int v31; // w8
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v33; // q1
  int32_t v34; // w24
  System_String_o *v35; // x2
  SvtEqCombineListViewManager_o *v36; // x25
  unsigned int v37; // w19
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *dropList; // x8
  __int128 v39; // q0
  __int128 v40; // q1
  int v41; // w8
  __int64 v42; // x28
  __int128 v43; // q1
  SvtEqCombineListViewManager_o *v44; // x26
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  Il2CppClass **v53; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 monitor_low; // x25
  unsigned __int64 v56; // x19
  int v57; // w29
  __int64 v58; // x8
  __int128 v59; // q0
  __int128 v60; // q1
  int v61; // w8
  SvtEqCombineListViewManager_o *v62; // x23
  int32_t v63; // w24
  __int64 v64; // x3
  SvtEqCombineListViewItem_o *v65; // x22
  __int64 naturalAligment; // x9
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *v67; // x8
  __int128 v68; // q0
  __int128 v69; // q1
  int v70; // w8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v72; // q0
  __int128 v73; // q1
  int v74; // w8
  int64_t v75; // x0
  const MethodInfo *v76; // x5
  bool v77; // [xsp+Ch] [xbp-1A4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+10h] [xbp-1A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+30h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+50h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+70h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+90h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+B0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v84; // [xsp+D0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v85; // [xsp+F0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v86; // [xsp+110h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+130h] [xbp-80h]

  v3 = this;
  v77 = isIconSizeChange;
  if ( (byte_59322DC & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__Remove__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity___ctor___91444648);
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (SvtEqCombineListViewManager_o *)sub_21FFC50(&SvtEqCombineListViewItem_TypeInfo);
    byte_59322DC = 1;
  }
  currentType = v3->fields.currentType;
  if ( currentType == 1 )
  {
    this = (SvtEqCombineListViewManager_o *)v3->fields.userServantMaster;
    if ( !this )
      goto LABEL_69;
    ServantEquipList = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getServantEquipList(
                                                                        (UserServantMaster_o *)this,
                                                                        0);
    v26 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_71627776(
      v26,
      ServantEquipList,
      (const MethodInfo_444F400 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___91444648);
    v27 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v27,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( v3->fields.baseUsrSvtData )
    {
      if ( !v26 )
        goto LABEL_69;
      if ( v26->fields._size >= 1 )
      {
        v28 = 0;
        do
        {
          this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                    v26,
                                                    v28,
                                                    (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
          if ( !this )
            goto LABEL_69;
          v30 = *(_OWORD *)&this->fields.dropObjectList;
          v31 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(UnityEngine_MonoBehaviour_Fields *)&v87.fields.currentCryptoKey = this->fields.UnityEngine_MonoBehaviour_Fields;
          *(_OWORD *)&v87.fields.fakeValue = v30;
          if ( !v31 )
            j_il2cpp_runtime_class_init_0(
              CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
              isIconSizeChange,
              v29);
          v84 = v87;
          this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(
                                                    &v84,
                                                    0);
          baseUsrSvtData = v3->fields.baseUsrSvtData;
          if ( !baseUsrSvtData )
            goto LABEL_69;
          v33 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
          *(_OWORD *)&v83.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v83.fields.fakeValue = v33;
          if ( this == (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(
                                                          &v83,
                                                          0) )
            System_Collections_Generic_List_object___RemoveAt(
              v26,
              v28,
              (const MethodInfo_44512C4 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
          ++v28;
        }
        while ( v28 < v26->fields._size );
      }
      ServantEquipList = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_object___ToArray(
                                                                          v26,
                                                                          (const MethodInfo_445164C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    }
    this = (SvtEqCombineListViewManager_o *)v3->fields._selectedMtSvtList_k__BackingField;
    if ( this && SLODWORD(this->fields.m_CancellationTokenSource) >= 1 )
    {
      v34 = 0;
      while ( v34 < SLODWORD(this->fields.m_CancellationTokenSource) )
      {
        this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)this,
                                                  v34,
                                                  (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
        if ( !v26 )
          goto LABEL_69;
        if ( v26->fields._size >= 1 )
        {
          v36 = this;
          v37 = 0;
          while ( 1 )
          {
            if ( !ServantEquipList )
              goto LABEL_69;
            if ( v37 >= LODWORD(ServantEquipList[1].monitor) )
              break;
            if ( !v36 )
              goto LABEL_69;
            dropList = v36->fields.dropList;
            if ( !dropList )
              goto LABEL_69;
            v39 = *(_OWORD *)&dropList->fields._items;
            v40 = *(_OWORD *)&dropList->fields._syncRoot;
            v41 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
            v42 = *((_QWORD *)&ServantEquipList[2].klass + (int)v37);
            *(_OWORD *)&v87.fields.currentCryptoKey = v39;
            *(_OWORD *)&v87.fields.fakeValue = v40;
            if ( !v41 )
              j_il2cpp_runtime_class_init_0(
                CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                isIconSizeChange,
                v35);
            v82 = v87;
            this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(
                                                      &v82,
                                                      0);
            if ( !v42 )
              goto LABEL_69;
            v43 = *(_OWORD *)(v42 + 32);
            v44 = this;
            *(_OWORD *)&v81.fields.currentCryptoKey = *(_OWORD *)(v42 + 16);
            *(_OWORD *)&v81.fields.fakeValue = v43;
            this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(
                                                      &v81,
                                                      0);
            if ( v44 == this )
            {
              if ( !v27 )
                goto LABEL_69;
              items = v27->fields._items;
              *(_QWORD *)&isIconSizeChange = v36->fields.dropList;
              v51 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v27->fields._version;
              if ( !items )
                goto LABEL_69;
              size = v27->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v27,
                  (Il2CppObject *)isIconSizeChange,
                  *(const MethodInfo_444FB2C **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
              }
              else
              {
                v53 = &items->obj.klass + size;
                v27->fields._size = size + 1;
                v53[4] = (Il2CppClass *)isIconSizeChange;
                sub_21FFBF4(
                  (MissionNaviTransitionBoardItem_o *)(v53 + 4),
                  isIconSizeChange,
                  v35,
                  v45,
                  v46,
                  v47,
                  v48,
                  v49);
              }
              this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___Remove(
                                                        v26,
                                                        (Il2CppObject *)v36->fields.dropList,
                                                        (const MethodInfo_445101C *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
            }
            if ( (signed int)++v37 >= v26->fields._size )
              goto LABEL_68;
          }
LABEL_103:
          sub_21FFED4(this);
        }
LABEL_68:
        this = (SvtEqCombineListViewManager_o *)v3->fields._selectedMtSvtList_k__BackingField;
        ++v34;
        if ( !this )
          goto LABEL_69;
      }
      if ( !v27 )
        goto LABEL_69;
      System_Collections_Generic_List_object___AddRange(
        v27,
        (System_Collections_Generic_IEnumerable_T__o *)v26,
        (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___ToArray(
                                                v27,
                                                (const MethodInfo_445164C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      ServantEquipList = (System_Collections_Generic_IEnumerable_T__o *)this;
    }
    if ( !ServantEquipList )
      goto LABEL_69;
    if ( !ServantEquipList[1].monitor )
    {
      this = (SvtEqCombineListViewManager_o *)v3->fields.emptyListNoticeLabel;
      if ( !this )
        goto LABEL_69;
      this = (SvtEqCombineListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_69;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    }
  }
  else
  {
    if ( currentType )
      goto LABEL_69;
    this = (SvtEqCombineListViewManager_o *)v3->fields.levelUpInfoImg;
    if ( !this )
      goto LABEL_69;
    this = (SvtEqCombineListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = (SvtEqCombineListViewManager_o *)v3->fields.userServantMaster;
    if ( !this )
      goto LABEL_69;
    this = (SvtEqCombineListViewManager_o *)UserServantMaster__getServantEquipList((UserServantMaster_o *)this, 0);
    if ( !this )
      goto LABEL_69;
    ServantEquipList = (System_Collections_Generic_IEnumerable_T__o *)this;
    if ( !this->fields.m_CancellationTokenSource )
    {
      this = (SvtEqCombineListViewManager_o *)v3->fields.emptyListNoticeLabel;
      if ( !this )
        goto LABEL_69;
      this = (SvtEqCombineListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_69;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    }
    v6 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_71627776(
      v6,
      ServantEquipList,
      (const MethodInfo_444F400 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___91444648);
    v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v7,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( v3->fields.baseUsrSvtData )
    {
      monitor = (int)ServantEquipList[1].monitor;
      if ( monitor >= 1 )
      {
        v10 = 0;
        while ( (unsigned int)v10 < monitor )
        {
          v11 = *((_QWORD *)&ServantEquipList[2].klass + v10);
          if ( !v11 )
            goto LABEL_69;
          v12 = *(_OWORD *)(v11 + 32);
          v13 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v87.fields.currentCryptoKey = *(_OWORD *)(v11 + 16);
          *(_OWORD *)&v87.fields.fakeValue = v12;
          if ( !v13 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, isIconSizeChange, v8);
          v86 = v87;
          this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(
                                                    &v86,
                                                    0);
          v14 = v3->fields.baseUsrSvtData;
          if ( !v14 )
            goto LABEL_69;
          v15 = *(_OWORD *)&v14->fields.id.fields.fakeValue;
          v16 = this;
          *(_OWORD *)&v85.fields.currentCryptoKey = *(_OWORD *)&v14->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v85.fields.fakeValue = v15;
          this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(
                                                    &v85,
                                                    0);
          if ( v16 == this )
          {
            if ( !v7 )
              goto LABEL_69;
            v22 = v7->fields._items;
            v23 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v7->fields._version;
            if ( !v22 )
              goto LABEL_69;
            v24 = v7->fields._size;
            if ( (unsigned int)v24 >= LODWORD(v22->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v7,
                (Il2CppObject *)v11,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
            }
            else
            {
              v25 = &v22->obj.klass + v24;
              v7->fields._size = v24 + 1;
              v25[4] = (Il2CppClass *)v11;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v25 + 4), v11, v8, v17, v18, v19, v20, v21);
            }
            if ( !v6 )
              goto LABEL_69;
            this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___Remove(
                                                      v6,
                                                      (Il2CppObject *)v11,
                                                      (const MethodInfo_445101C *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
          }
          monitor = (int)ServantEquipList[1].monitor;
          if ( (int)++v10 >= monitor )
            goto LABEL_30;
        }
        goto LABEL_103;
      }
LABEL_30:
      if ( !v7 )
        goto LABEL_69;
      System_Collections_Generic_List_object___AddRange(
        v7,
        (System_Collections_Generic_IEnumerable_T__o *)v6,
        (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___ToArray(
                                                v7,
                                                (const MethodInfo_445164C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      ServantEquipList = (System_Collections_Generic_IEnumerable_T__o *)this;
      if ( !this )
        goto LABEL_69;
    }
  }
  itemList = v3->fields.itemList;
  if ( !itemList )
    goto LABEL_69;
  monitor_low = LODWORD(ServantEquipList[1].monitor);
  if ( (int)monitor_low >= 1 )
  {
    v56 = 0;
    v57 = itemList->fields._size;
    while ( 1 )
    {
      if ( v56 >= LODWORD(ServantEquipList[1].monitor) )
        goto LABEL_103;
      v58 = *((_QWORD *)&ServantEquipList[2].klass + v56);
      if ( !v58 )
        goto LABEL_69;
      v59 = *(_OWORD *)(v58 + 16);
      v60 = *(_OWORD *)(v58 + 32);
      v61 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v87.fields.currentCryptoKey = v59;
      *(_OWORD *)&v87.fields.fakeValue = v60;
      if ( !v61 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, isIconSizeChange, v8);
      v80 = v87;
      this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(
                                                &v80,
                                                0);
      if ( v57 >= 1 )
        break;
LABEL_100:
      if ( ++v56 == monitor_low )
        return;
    }
    v62 = this;
    v63 = 0;
    while ( 1 )
    {
      this = (SvtEqCombineListViewManager_o *)v3->fields.itemList;
      if ( !this )
        goto LABEL_69;
      this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)this,
                                                v63,
                                                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        goto LABEL_69;
      *(_QWORD *)&isIconSizeChange = SvtEqCombineListViewItem_TypeInfo;
      v65 = (SvtEqCombineListViewItem_o *)this;
      naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (SvtEqCombineListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        break;
      }
      v67 = this->fields.dropList;
      if ( v67 )
      {
        v68 = *(_OWORD *)&v67->fields._items;
        v69 = *(_OWORD *)&v67->fields._syncRoot;
        v70 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v87.fields.currentCryptoKey = v68;
        *(_OWORD *)&v87.fields.fakeValue = v69;
        if ( !v70 )
          j_il2cpp_runtime_class_init_0(
            CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
            SvtEqCombineListViewItem_TypeInfo,
            v8);
        v79 = v87;
        this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(
                                                  &v79,
                                                  0);
        if ( this == v62 )
        {
          userSvtEntity = v65->fields.userSvtEntity;
          if ( userSvtEntity )
          {
            v72 = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            v73 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            v74 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
            *(_OWORD *)&v87.fields.currentCryptoKey = v72;
            *(_OWORD *)&v87.fields.fakeValue = v73;
            if ( !v74 )
              j_il2cpp_runtime_class_init_0(
                CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                isIconSizeChange,
                v8);
            v78 = v87;
            v75 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v78, 0);
            SvtEqCombineListViewManager__ModifyLockItem_37967028(v3, v65, v75, 1, v77, v76);
            goto LABEL_100;
          }
LABEL_69:
          sub_21FFECC(this, isIconSizeChange);
        }
      }
      if ( v57 == ++v63 )
        goto LABEL_100;
    }
    this = (SvtEqCombineListViewManager_o *)sub_220024C(this, SvtEqCombineListViewItem_TypeInfo, v8, v64);
    goto LABEL_103;
  }
}


void SvtEqCombineListViewManager__ModifyLockItem(
        SvtEqCombineListViewManager_o *this,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 v10; // x1
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x21
  bool v13; // w25
  __int64 v14; // x0
  SvtEqCombineListViewItem_c *v15; // x1
  System_String_o *v16; // x2
  __int64 v17; // x3
  Il2CppObject *current; // x22
  __int64 naturalAligment; // x9
  Il2CppClass *klass; // x8
  Il2CppObject *v21; // x23
  __int128 v22; // q0
  Il2CppType byval_arg; // q1
  int v24; // w8
  int64_t v25; // x0
  Il2CppObject v26; // q1
  int64_t v27; // x24
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  const MethodInfo *v33; // x1
  UnityEngine_Object_o *v34; // x23
  __int64 v35; // x1
  Il2CppClass *v36; // x0
  __int64 v37; // x1
  ListViewObject_o *v38; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+40h] [xbp-B0h] BYREF
  __int64 v42; // [xsp+60h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_object__o *v43; // [xsp+68h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+70h] [xbp-80h] BYREF

  if ( (byte_59322DA & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&SvtEqCombineListViewItem_TypeInfo);
    byte_59322DA = 1;
  }
  itemList = this->fields.itemList;
  memset(&v44, 0, sizeof(v44));
  if ( !itemList )
    return;
  UserGameMaster__getSelfUserGame(0);
  if ( usrSvtId < 1 )
  {
    Entity = 0;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
    {
LABEL_43:
      sub_21FFECC(Instance, v10);
    }
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               usrSvtId,
               (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_43;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v13 = !isIconSizeChange && isInit;
  v44.fields._current = (Il2CppObject *)v41.fields.fakeValue;
  *(_OWORD *)&v44.fields._list = *(_OWORD *)&v41.fields.currentCryptoKey;
  v42 = 0;
  v43 = &v44;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v44,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v14 & 1) == 0 )
      break;
    current = v44.fields._current;
    if ( !v44.fields._current )
      goto LABEL_35;
    v15 = SvtEqCombineListViewItem_TypeInfo;
    naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
    if ( v44.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (SvtEqCombineListViewItem_c *)v44.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      v14 = sub_220024C(v44.fields._current, SvtEqCombineListViewItem_TypeInfo, v16, v17);
LABEL_35:
      if ( Entity )
        sub_21FFECC(v14, v15);
      if ( v13 )
LABEL_37:
        sub_21FFECC(v14, v15);
LABEL_38:
      sub_21FFECC(v14, v15);
    }
    if ( Entity )
    {
      v21 = v44.fields._current + 8;
      klass = v44.fields._current[8].klass;
      if ( !klass )
        sub_21FFECC(v14, SvtEqCombineListViewItem_TypeInfo);
      v22 = *(_OWORD *)&klass->_1.name;
      byval_arg = klass->_1.byval_arg;
      v24 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v41.fields.currentCryptoKey = v22;
      *(Il2CppType *)&v41.fields.fakeValue = byval_arg;
      if ( !v24 )
        j_il2cpp_runtime_class_init_0(
          CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
          SvtEqCombineListViewItem_TypeInfo,
          v16);
      v40 = v41;
      v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v40, 0);
      v26 = Entity[2];
      v27 = v25;
      *(Il2CppObject *)&v39.fields.currentCryptoKey = Entity[1];
      *(Il2CppObject *)&v39.fields.fakeValue = v26;
      v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v39, 0);
      if ( v27 == v14 )
      {
        v21->klass = (Il2CppClass *)Entity;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&current[8], (int32_t)Entity, v16, v28, v29, v30, v31, v32);
      }
    }
    if ( v13 )
    {
      if ( !current )
        goto LABEL_37;
      SvtEqCombineListViewItem__ModifyLockItem((SvtEqCombineListViewItem_o *)current, (const MethodInfo *)v15);
      SvtEqCombineListViewItem__ModifyChoiceItem((SvtEqCombineListViewItem_o *)current, v33);
    }
    else if ( !current )
    {
      goto LABEL_38;
    }
    v34 = (UnityEngine_Object_o *)current[7].klass;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
    if ( UnityEngine_Object__op_Inequality(v34, 0, 0) )
    {
      v36 = current[7].klass;
      if ( !v36 )
        sub_21FFECC(0, v35);
      (*((void (__fastcall **)(Il2CppClass *, Il2CppObject *, _QWORD))v36->_1.image + 49))(
        v36,
        current,
        *((_QWORD *)v36->_1.image + 50));
      if ( isIconSizeChange )
      {
        v38 = (ListViewObject_o *)current[7].klass;
        if ( !v38 )
          sub_21FFECC(0, v37);
        ListViewObject__SetItemSeed(v38, (ListViewItem_o *)current, this->fields.seed, 0);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v44,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void SvtEqCombineListViewManager__ModifyLockItem_37967028(
        SvtEqCombineListViewManager_o *this,
        SvtEqCombineListViewItem_o *servantItem,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  SvtEqCombineListViewManager_o *v10; // x20
  struct UserServantEntity_o *userSvtEntity; // x8
  SvtEqCombineListViewManager_o *v12; // x23
  __int128 v13; // q1
  int64_t v14; // x0
  __int128 v15; // q0
  SvtEqCombineListViewManager_o *v16; // x25
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  const MethodInfo *v22; // x1
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+40h] [xbp-60h]

  v10 = this;
  if ( (byte_59322DB & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (SvtEqCombineListViewManager_o *)sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59322DB = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (SvtEqCombineListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_26;
    this = (SvtEqCombineListViewManager_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_26;
    this = (SvtEqCombineListViewManager_o *)DataMasterBase_object__object__long___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              usrSvtId,
                                              (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( this )
    {
      if ( !servantItem )
        goto LABEL_26;
      userSvtEntity = servantItem->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_26;
      v12 = this;
      v13 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v26.fields.fakeValue = v13;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, servantItem, usrSvtId);
      v25 = v26;
      v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v25, 0);
      v15 = *(_OWORD *)&v12->fields.dropObjectList;
      v16 = (SvtEqCombineListViewManager_o *)v14;
      *(UnityEngine_MonoBehaviour_Fields *)&v24.fields.currentCryptoKey = v12->fields.UnityEngine_MonoBehaviour_Fields;
      *(_OWORD *)&v24.fields.fakeValue = v15;
      this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(
                                                &v24,
                                                0);
      if ( v16 == this )
      {
        servantItem->fields.userSvtEntity = (struct UserServantEntity_o *)v12;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&servantItem->fields.userSvtEntity,
          (int32_t)v12,
          (System_String_o *)usrSvtId,
          v17,
          v18,
          v19,
          v20,
          v21);
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
    SvtEqCombineListViewItem__ModifyChoiceItem(servantItem, v22);
  }
  viewObject = (UnityEngine_Object_o *)servantItem->fields.viewObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, servantItem, usrSvtId);
  if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
  {
    this = (SvtEqCombineListViewManager_o *)servantItem->fields.viewObject;
    if ( this )
    {
      ((void (__fastcall *)(SvtEqCombineListViewManager_o *, SvtEqCombineListViewItem_o *, const MethodInfo *))this->klass->vtable._5_SetSortButtonImage.methodPtr)(
        this,
        servantItem,
        this->klass->vtable._5_SetSortButtonImage.method);
      if ( !isIconSizeChange )
        return;
      this = (SvtEqCombineListViewManager_o *)servantItem->fields.viewObject;
      if ( this )
      {
        ListViewObject__SetItemSeed((ListViewObject_o *)this, (ListViewItem_o *)servantItem, v10->fields.seed, 0);
        return;
      }
    }
LABEL_26:
    sub_21FFECC(this, servantItem);
  }
}


void SvtEqCombineListViewManager__OnClickBonusFilterKind(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_59322F4 & 1) == 0 )
  {
    sub_21FFC50(&Method_SvtEqCombineListViewManager_OnClickBonusFilterKind__);
    byte_59322F4 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SvtEqCombineListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SvtEqCombineListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_21FFECC(0, v5);
    ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, 0, 0, 0);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void SvtEqCombineListViewManager__OnClickChoiceTab(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  SvtEqCombineListViewManager_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  if ( (byte_5932300 & 1) == 0 )
  {
    sub_21FFC50(&SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_SvtEqCombineListViewManager_EndClickTabChoice__);
    sub_21FFC50(&Method_SvtEqCombineListViewManager_OnClickChoiceTab__);
    byte_5932300 = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    v3 = Method_SvtEqCombineListViewManager_OnClickChoiceTab__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickChoiceTab__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SvtEqCombineListViewManager_OnClickChoiceTab__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( this->fields.modeKind )
    {
      v6 = (SvtEqCombineListViewManager_RequestCallbackFunc_o *)sub_21FFEBC(SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo);
      SvtEqCombineListViewManager_RequestCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_SvtEqCombineListViewManager_EndClickTabChoice__,
        v7);
      SvtEqCombineListViewManager__StatusRequest(this, v6, v8);
    }
    else
    {
      SvtEqCombineListViewManager__SetStatusKind(this, 2, v5);
      SvtEqCombineListViewManager__ReleaseAll(this, v9);
      SvtEqCombineListViewManager__ModifyList(this, 0, v10);
      SvtEqCombineListViewManager__SetMode_37969712(this, 2, v11);
    }
  }
}


void SvtEqCombineListViewManager__OnClickCollectLock(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  SvtEqCombineListViewManager_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  if ( (byte_59322FF & 1) == 0 )
  {
    sub_21FFC50(&SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_SvtEqCombineListViewManager_EndClickTabLock__);
    sub_21FFC50(&Method_SvtEqCombineListViewManager_OnClickCollectLock__);
    byte_59322FF = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    v3 = Method_SvtEqCombineListViewManager_OnClickCollectLock__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickCollectLock__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SvtEqCombineListViewManager_OnClickCollectLock__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( this->fields.modeKind )
    {
      v6 = (SvtEqCombineListViewManager_RequestCallbackFunc_o *)sub_21FFEBC(SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo);
      SvtEqCombineListViewManager_RequestCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_SvtEqCombineListViewManager_EndClickTabLock__,
        v7);
      SvtEqCombineListViewManager__StatusRequest(this, v6, v8);
    }
    else
    {
      SvtEqCombineListViewManager__SetStatusKind(this, 1, v5);
      SvtEqCombineListViewManager__ReleaseAll(this, v9);
      SvtEqCombineListViewManager__ModifyList(this, 0, v10);
      SvtEqCombineListViewManager__SetMode_37969712(this, 2, v11);
    }
  }
}


void SvtEqCombineListViewManager__OnClickDecide(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x1
  bool v7; // w8
  struct CombineRootComponent_o *combineRootComponent; // x0
  const MethodInfo *v9; // x1
  ServantCheckEquipDialog_o *servantEquipCheckDialog; // x20
  System_Collections_Generic_List_SvtEqCombineListViewItem__o *SelectedMaterialList; // x21
  ServantCheckEquipDialog_ClickDelegate_o *v12; // x22
  System_Reflection_MethodBase_o *v13; // x0

  if ( (byte_59322E2 & 1) == 0 )
  {
    sub_21FFC50(&ServantCheckEquipDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&Method_SvtEqCombineListViewManager_CloseServantCheckEquipDialog__);
    sub_21FFC50(&Method_SvtEqCombineListViewManager_OnClickDecide__);
    byte_59322E2 = 1;
  }
  v3 = Method_SvtEqCombineListViewManager_OnClickDecide__;
  if ( this->fields.isDecideFlg )
  {
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SvtEqCombineListViewManager_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v7 = SvtEqCombineListViewManager__CheckMaterialEquipped(this, v5);
    combineRootComponent = this->fields.combineRootComponent;
    this->fields._isOpenCheckEquipDialog_k__BackingField = v7;
    if ( !combineRootComponent )
      goto LABEL_17;
    CombineRootComponent__SetBackSelect(combineRootComponent, 1, 0);
    if ( this->fields._isOpenCheckEquipDialog_k__BackingField )
    {
      servantEquipCheckDialog = this->fields.servantEquipCheckDialog;
      SelectedMaterialList = SvtEqCombineListViewManager__GetSelectedMaterialList(this, v9);
      v12 = (ServantCheckEquipDialog_ClickDelegate_o *)sub_21FFEBC(ServantCheckEquipDialog_ClickDelegate_TypeInfo);
      ServantCheckEquipDialog_ClickDelegate___ctor(
        v12,
        (Il2CppObject *)this,
        Method_SvtEqCombineListViewManager_CloseServantCheckEquipDialog__,
        0);
      if ( servantEquipCheckDialog )
      {
        ServantCheckEquipDialog__Open(servantEquipCheckDialog, SelectedMaterialList, 0, v12, 0);
        return;
      }
LABEL_17:
      sub_21FFECC(combineRootComponent, v6);
    }
    SvtEqCombineListViewManager__SetSelectedMaterialInfo(this, v9);
    combineRootComponent = this->fields.combineRootComponent;
    if ( !combineRootComponent )
      goto LABEL_17;
    if ( combineRootComponent->fields.state == 4 )
      CombineRootComponent__SetSelectSvtEqMaterialList(combineRootComponent, 0);
  }
  else
  {
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SvtEqCombineListViewManager_OnClickDecide__);
    v13 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 2, 0, 0);
  }
}


void SvtEqCombineListViewManager__OnClickFilter2Kind(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct ListViewSort_o *sort; // x8
  int32_t filter2Kind; // w21
  int32_t v10; // w9

  if ( (byte_59322F5 & 1) == 0 )
  {
    sub_21FFC50(&Method_SvtEqCombineListViewManager_OnClickFilter2Kind__);
    sub_21FFC50(&SvtEqCombineListViewManager_TypeInfo);
    byte_59322F5 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SvtEqCombineListViewManager_OnClickFilter2Kind__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickFilter2Kind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SvtEqCombineListViewManager_OnClickFilter2Kind__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort
      || (filter2Kind = sort->fields.filter2Kind, !*(&SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished + 1))
      && (j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo, v6, v7), (sort = this->fields.sort) == 0) )
    {
      sub_21FFECC(v5, v6);
    }
    if ( filter2Kind + 1 <= SvtEqCombineListViewManager_TypeInfo->static_fields->FILTER2_MAX_KIND_NUM )
      v10 = filter2Kind + 1;
    else
      v10 = 0;
    sort->fields.filter2Kind = v10;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void SvtEqCombineListViewManager__OnClickFilterKind(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v7; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_59322F1 & 1) == 0 )
  {
    sub_21FFC50(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SvtEqCombineListViewManager_EndSelectFilterKind__);
    sub_21FFC50(&Method_SvtEqCombineListViewManager_OnClickFilterKind__);
    byte_59322F1 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SvtEqCombineListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SvtEqCombineListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_21FFEBC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_SvtEqCombineListViewManager_EndSelectFilterKind__,
      0);
    if ( !v7 )
      sub_21FFECC(v9, v10);
    CommonUI__OpenServantFilterSelectMenu_37298956(v7, 5, sort, (ListViewManager_o *)this, v8, -1, 0);
  }
}


void SvtEqCombineListViewManager__OnClickListView(
        SvtEqCombineListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void SvtEqCombineListViewManager__OnClickLockModeItem(
        SvtEqCombineListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  SvtEqCombineListViewManager_o *v5; // x19
  __int64 naturalAligment; // x9
  SvtEqCombineListViewItem_o *Item; // x0
  _QWORD *v8; // x8
  SvtEqCombineListViewItem_o *v9; // x20
  System_Reflection_MethodBase_o *v10; // x0
  __int64 v11; // x2
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

  v5 = this;
  if ( (byte_59322EE & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SvtEqCombineListViewManager_OnClickLockModeItem__);
    this = (SvtEqCombineListViewManager_o *)sub_21FFC50(&SvtEqCombineListViewObject_TypeInfo);
    byte_59322EE = 1;
  }
  if ( !obj )
    goto LABEL_13;
  naturalAligment = SvtEqCombineListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SvtEqCombineListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    v17 = (SvtEqCombineListViewManager_o *)sub_220024C(obj, SvtEqCombineListViewObject_TypeInfo, method, v3);
    SvtEqCombineListViewManager__IsDragEnable(v17, v18, v19);
    return;
  }
  Item = SvtEqCombineListViewObject__GetItem(
           (SvtEqCombineListViewObject_o *)obj,
           (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo);
  v8 = Method_SvtEqCombineListViewManager_OnClickLockModeItem__;
  v9 = Item;
  if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickLockModeItem__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_21FFC68(Method_SvtEqCombineListViewManager_OnClickLockModeItem__);
  v10 = (System_Reflection_MethodBase_o *)sub_21FFC34(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v10, 11, 0, 0);
  if ( !v9 || (userSvtEntity = v9->fields.userSvtEntity, v9->fields.isSwapLock ^= 1u, !userSvtEntity) )
LABEL_13:
    sub_21FFECC(this, obj);
  v13 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v21.fields.fakeValue = v13;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, obj, v11);
  v20 = v21;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v20, 0);
  SvtEqCombineListViewManager__ModifyLockItem(v5, v14, 0, 0, v15);
  SvtEqCombineListViewManager__SetMode_37969712(v5, 3, v16);
}


void SvtEqCombineListViewManager__OnClickNormalStatus(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  SvtEqCombineListViewManager_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_59322FE & 1) == 0 )
  {
    sub_21FFC50(&SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_SvtEqCombineListViewManager_EndClickTabStatus__);
    sub_21FFC50(&Method_SvtEqCombineListViewManager_OnClickNormalStatus__);
    byte_59322FE = 1;
  }
  if ( this->fields.modeKind )
  {
    v3 = Method_SvtEqCombineListViewManager_OnClickNormalStatus__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickNormalStatus__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SvtEqCombineListViewManager_OnClickNormalStatus__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (SvtEqCombineListViewManager_RequestCallbackFunc_o *)sub_21FFEBC(SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo);
    SvtEqCombineListViewManager_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_SvtEqCombineListViewManager_EndClickTabStatus__,
      v6);
    SvtEqCombineListViewManager__StatusRequest(this, v5, v7);
  }
}


void SvtEqCombineListViewManager__OnClickReleaseAll(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_59322E9 & 1) == 0 )
  {
    sub_21FFC50(&Method_SvtEqCombineListViewManager_OnClickReleaseAll__);
    byte_59322E9 = 1;
  }
  v3 = Method_SvtEqCombineListViewManager_OnClickReleaseAll__;
  if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickReleaseAll__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_SvtEqCombineListViewManager_OnClickReleaseAll__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  SvtEqCombineListViewManager__ReleaseAll(this, v5);
}


void SvtEqCombineListViewManager__OnClickScaleChange(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
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

  if ( (byte_59322FB & 1) == 0 )
  {
    sub_21FFC50(&Method_SvtEqCombineListViewManager_OnClickScaleChange__);
    byte_59322FB = 1;
  }
  v3 = Method_SvtEqCombineListViewManager_OnClickScaleChange__;
  if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_SvtEqCombineListViewManager_OnClickScaleChange__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
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
    *((_DWORD *)p_seed + 163) = v15;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_seed, (int32_t)smallSizeSeed, v6, v7, v8, v9, v10, v11);
  }
  sort = this->fields.sort;
  if ( !sort
    || (v18 = this->fields.scaleType,
        scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite,
        sort->fields.iconScaleKind = v18,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, v18, 0),
        !scaleChangeButtonSprite) )
  {
    sub_21FFECC(sort, v5);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0);
  SvtEqCombineListViewManager__ModifyList(this, 1, v20);
  SvtEqCombineListViewManager__SetMode_37969712(this, 2, v21);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void SvtEqCombineListViewManager__OnClickSelectBase(
        SvtEqCombineListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  SvtEqCombineListViewManager_o *v5; // x19
  __int64 naturalAligment; // x9
  __int64 v7; // x2
  struct UserServantEntity_o *baseUsrSvtData; // x8
  SvtEqCombineListViewItem_o *v9; // x21
  __int128 v10; // q1
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *tempMtSvtList; // x8
  int32_t size; // w2
  int v21; // w9
  struct System_Collections_Generic_List_long__o *tempMaterialUsrSvtIdList; // x8
  int v23; // w9
  int32_t v24; // w22
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  struct UserServantEntity_o *userSvtEntity; // x1
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  SvtEqCombineListViewManager_o *v34; // x0
  ListViewObject_o *v35; // x1
  const MethodInfo *v36; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-50h]

  v5 = this;
  if ( (byte_59322EC & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SvtEqCombineListViewManager_OnClickSelectBase__);
    this = (SvtEqCombineListViewManager_o *)sub_21FFC50(&SvtEqCombineListViewObject_TypeInfo);
    byte_59322EC = 1;
  }
  if ( !obj )
    goto LABEL_33;
  naturalAligment = SvtEqCombineListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SvtEqCombineListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    v34 = (SvtEqCombineListViewManager_o *)sub_220024C(obj, SvtEqCombineListViewObject_TypeInfo, method, v3);
    SvtEqCombineListViewManager__OnClickListView(v34, v35, v36);
    return;
  }
  this = (SvtEqCombineListViewManager_o *)SvtEqCombineListViewObject__GetItem(
                                            (SvtEqCombineListViewObject_o *)obj,
                                            (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo);
  baseUsrSvtData = v5->fields.baseUsrSvtData;
  v9 = (SvtEqCombineListViewItem_o *)this;
  if ( baseUsrSvtData )
  {
    v10 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v38.fields.fakeValue = v10;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, obj, v7);
    v37 = v38;
    this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(
                                              &v37,
                                              0);
    if ( !v9 )
      goto LABEL_33;
    if ( this == (SvtEqCombineListViewManager_o *)SvtEqCombineListViewItem__get_UserSvtId(v9, (const MethodInfo *)obj) )
    {
      v11 = Method_SvtEqCombineListViewManager_OnClickSelectBase__;
      if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickSelectBase__ + 83) & 2) != 0 )
        v11 = (_QWORD *)sub_21FFC68(Method_SvtEqCombineListViewManager_OnClickSelectBase__);
      v12 = (System_Reflection_MethodBase_o *)sub_21FFC34(v11, v11[4]);
      OverwriteAssetSoundName__PlaySystemSe(v12, 1, 0, 0);
      v5->fields.baseUsrSvtData = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v5->fields.baseUsrSvtData, 0, v13, v14, v15, v16, v17, v18);
      tempMtSvtList = v5->fields.tempMtSvtList;
      if ( tempMtSvtList )
      {
        size = tempMtSvtList->fields._size;
        v21 = tempMtSvtList->fields._version + 1;
        tempMtSvtList->fields._size = 0;
        tempMtSvtList->fields._version = v21;
        if ( size >= 1 )
          System_Array__Clear((System_Array_o *)tempMtSvtList->fields._items, 0, size, 0);
        tempMaterialUsrSvtIdList = v5->fields.tempMaterialUsrSvtIdList;
        if ( tempMaterialUsrSvtIdList )
        {
          v23 = tempMaterialUsrSvtIdList->fields._version + 1;
          tempMaterialUsrSvtIdList->fields._size = 0;
          tempMaterialUsrSvtIdList->fields._version = v23;
          goto LABEL_28;
        }
      }
LABEL_33:
      sub_21FFECC(this, obj);
    }
  }
  else if ( !this )
  {
    goto LABEL_33;
  }
  if ( !v9->fields.type && (v9->fields.isLvMax && v9->fields.isLimitCntMax || v9->fields.isSvtEqMaterial) )
    v24 = 2;
  else
    v24 = 0;
  v25 = Method_SvtEqCombineListViewManager_OnClickSelectBase__;
  if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickSelectBase__ + 83) & 2) != 0 )
    v25 = (_QWORD *)sub_21FFC68(Method_SvtEqCombineListViewManager_OnClickSelectBase__);
  v26 = (System_Reflection_MethodBase_o *)sub_21FFC34(v25, v25[4]);
  OverwriteAssetSoundName__PlaySystemSe(v26, v24, 0, 0);
  userSvtEntity = v9->fields.userSvtEntity;
  v5->fields.baseUsrSvtData = userSvtEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v5->fields.baseUsrSvtData,
    (int32_t)userSvtEntity,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
LABEL_28:
  this = (SvtEqCombineListViewManager_o *)v5->fields.combineRootComponent;
  if ( !this )
    goto LABEL_33;
  CombineRootComponent__SetBackSelect((CombineRootComponent_o *)this, v5->fields.baseUsrSvtData != 0, 0);
  this = (SvtEqCombineListViewManager_o *)v5->fields.combineRootComponent;
  if ( !this )
    goto LABEL_33;
  if ( HIDWORD(this->fields.nextExpLabel) == 4 )
    CombineRootComponent__ShowBaseSvtEq((CombineRootComponent_o *)this, 0);
}


void SvtEqCombineListViewManager__OnClickSelectMaterial(
        SvtEqCombineListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  SvtEqCombineListViewManager_o *v5; // x19
  __int64 naturalAligment; // x9
  ListViewItem_o *v7; // x20
  const MethodInfo *v8; // x1
  int32_t selectNum; // w21
  _BOOL8 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w9
  int32_t selectSum; // w8
  const MethodInfo *v14; // x1
  void *v15; // x0
  void *v16; // x20
  int v17; // w1
  __int64 v18; // x20
  __int64 v19; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_object__o *v20; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+18h] [xbp-48h] BYREF

  v5 = this;
  if ( (byte_59322ED & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    this = (SvtEqCombineListViewManager_o *)sub_21FFC50(&SvtEqCombineListViewObject_TypeInfo);
    byte_59322ED = 1;
  }
  memset(&v21, 0, sizeof(v21));
  if ( !obj )
    goto LABEL_21;
  naturalAligment = SvtEqCombineListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SvtEqCombineListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    v15 = (void *)sub_220024C(obj, SvtEqCombineListViewObject_TypeInfo, method, v3);
    v16 = v15;
    if ( v17 != 1 )
    {
      sub_1FEBF90(&v19);
      sub_22ED31C(v16);
    }
    v18 = *(_QWORD *)__cxa_begin_catch(v15);
    v19 = v18;
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_object___Dispose(
      v20,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( v18 )
      sub_21FFEC4(v18);
    goto LABEL_18;
  }
  this = (SvtEqCombineListViewManager_o *)SvtEqCombineListViewObject__GetItem(
                                            (SvtEqCombineListViewObject_o *)obj,
                                            (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo);
  if ( !this )
LABEL_21:
    sub_21FFECC(this, obj);
  v7 = (ListViewItem_o *)this;
  if ( ListViewItem__get_IsSelect((ListViewItem_o *)this, 0) )
  {
    selectNum = v7->fields.selectNum;
    ListViewItem__set_IsSelect(v7, 0, 0);
    this = (SvtEqCombineListViewManager_o *)v5->fields.itemList;
    --v5->fields.selectSum;
    if ( this )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v21,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v19 = 0;
      v20 = &v21;
      while ( 1 )
      {
        v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v21,
                (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v10 )
          break;
        if ( !v21.fields._current )
          sub_21FFECC(v10, v11);
        v12 = *(_DWORD *)((char *)&v21.fields._current->klass + (unsigned __int64)&word_10);
        if ( v12 > selectNum )
          *(_DWORD *)((char *)&v21.fields._current->klass + (unsigned __int64)&word_10) = v12 - 1;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v21,
        (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
LABEL_18:
      SvtEqCombineListViewManager__RefrashListDisp(v5, v14);
      return;
    }
    goto LABEL_21;
  }
  selectSum = v5->fields.selectSum;
  if ( v5->fields.modeKind || selectSum < v5->fields.selectMax )
  {
    v7->fields.selectNum = selectSum;
    v5->fields.selectSum = selectSum + 1;
    SvtEqCombineListViewManager__RefrashListDisp(v5, v8);
  }
}


void SvtEqCombineListViewManager__OnClickSortAscendingOrder(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_59322F8 & 1) == 0 )
  {
    sub_21FFC50(&Method_SvtEqCombineListViewManager_OnClickSortAscendingOrder__);
    byte_59322F8 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SvtEqCombineListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SvtEqCombineListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_21FFECC(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void SvtEqCombineListViewManager__OnClickSortKind(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t itemType; // w23
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v8; // x21
  ServantSortSelectMenu_CallbackFunc_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_59322F6 & 1) == 0 )
  {
    sub_21FFC50(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SvtEqCombineListViewManager_EndSelectSortKind__);
    sub_21FFC50(&Method_SvtEqCombineListViewManager_OnClickSortKind__);
    byte_59322F6 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SvtEqCombineListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SvtEqCombineListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    itemType = this->fields.itemType;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v9 = (ServantSortSelectMenu_CallbackFunc_o *)sub_21FFEBC(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_SvtEqCombineListViewManager_EndSelectSortKind__,
      0);
    if ( !v8 )
      sub_21FFECC(v10, v11);
    CommonUI__OpenServantSortSelectMenu(v8, 2, sort, itemType == 1, v9, 0);
  }
}


void SvtEqCombineListViewManager__OnLongPushListView(
        SvtEqCombineListViewManager_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  UnityEngine_Behaviour_o *scrollView; // x0
  SvtEqCombineListViewItem_c *v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 naturalAligment; // x9
  System_Collections_Generic_List_long__o *selectMaterialUsrSvtIdList; // x21
  int64_t UserSvtId; // x0
  struct UserServantEntity_o *monitor; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_Collections_Generic_List_long__o *v21; // x8
  __int64 v22; // x0
  __int64 v23; // x1

  if ( (byte_59322EF & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Contains__);
    sub_21FFC50(&SvtEqCombineListViewItem_TypeInfo);
    sub_21FFC50(&Method_SvtEqCombineListViewManager_OnLongPushListView__);
    byte_59322EF = 1;
  }
  if ( (unsigned int)(this->fields.modeKind - 1) >= 2 )
  {
    v5 = Method_SvtEqCombineListViewManager_OnLongPushListView__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_21FFC68(Method_SvtEqCombineListViewManager_OnLongPushListView__);
    v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    if ( item )
    {
      v8 = SvtEqCombineListViewItem_TypeInfo;
      naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
      if ( item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (SvtEqCombineListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] == SvtEqCombineListViewItem_TypeInfo )
      {
        selectMaterialUsrSvtIdList = this->fields.selectMaterialUsrSvtIdList;
        this->fields.isSelectMaterial = 0;
        if ( selectMaterialUsrSvtIdList )
        {
          UserSvtId = SvtEqCombineListViewItem__get_UserSvtId(
                        (SvtEqCombineListViewItem_o *)item,
                        (const MethodInfo *)v8);
          if ( System_Collections_Generic_List_long___Contains(
                 selectMaterialUsrSvtIdList,
                 UserSvtId,
                 (const MethodInfo_44384E4 *)Method_System_Collections_Generic_List_long__Contains__) )
          {
            this->fields.isSelectMaterial = 1;
          }
        }
        scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
        if ( scrollView )
        {
          UnityEngine_Behaviour__set_enabled(scrollView, 0, 0);
          monitor = (struct UserServantEntity_o *)item[1].monitor;
          this->fields.selectUsrSvtEntity = monitor;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&this->fields.selectUsrSvtEntity,
            (int32_t)monitor,
            v15,
            v16,
            v17,
            v18,
            v19,
            v20);
          scrollView = (UnityEngine_Behaviour_o *)this->fields.combineRootComponent;
          if ( scrollView )
          {
            if ( HIDWORD(scrollView[19].fields.m_CachedPtr) == 4 )
              CombineRootComponent__SelectShowServant((CombineRootComponent_o *)scrollView, 0);
            return;
          }
        }
LABEL_20:
        sub_21FFECC(scrollView, v8);
      }
      scrollView = (UnityEngine_Behaviour_o *)sub_220024C(item, SvtEqCombineListViewItem_TypeInfo, v9, v10);
    }
    v21 = this->fields.selectMaterialUsrSvtIdList;
    this->fields.isSelectMaterial = 0;
    if ( !v21 )
    {
      scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
      if ( scrollView )
      {
        UnityEngine_Behaviour__set_enabled(scrollView, 0, 0);
        sub_21FFECC(v22, v23);
      }
    }
    goto LABEL_20;
  }
}


void SvtEqCombineListViewManager__OnMoveEnd(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  UIScrollView_o *v15; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_59322E1 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59322E1 = 1;
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v15 = this->fields.scrollView;
        if ( !v15
          || (((void (__fastcall *)(UIScrollView_o *, __int64, const MethodInfo *))v15->klass->vtable._8_UpdateScrollbars.methodPtr)(
                v15,
                1,
                v15->klass->vtable._8_UpdateScrollbars.method),
              (v15 = this->fields.scrollView) == 0) )
        {
          sub_21FFECC(v15, v8);
        }
        UIScrollView__UpdatePosition(v15, 0);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2, 0, v9, v10, v11, v12, v13, v14);
      if ( callbackFunc2 )
        ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
          callbackFunc2->fields.method_code,
          callbackFunc2->fields.method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void SvtEqCombineListViewManager__RefrashListDisp(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x20
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t *p_selectQp; // x25
  int32_t CombineQpSvtEq; // w0
  const MethodInfo *v8; // x2
  int32_t v9; // w21
  __int64 itemList; // x0
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  SvtEqCombineListViewItem_o *current; // x22
  __int64 naturalAligment; // x9
  __int64 v17; // x1
  UserServantEntity_o *v18; // x0
  const MethodInfo *v19; // x1
  UserServantEntity_o *v20; // x0
  int32_t addTotalExp; // w24
  __int64 v22; // x1
  __int64 v23; // x2
  UILabel_o *selectInfoLabel; // x21
  System_String_o *v25; // x22
  Il2CppObject *v26; // x23
  Il2CppObject *v27; // x0
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_object__o *combineEventList; // x0
  _BOOL8 v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  Il2CppObject *v33; // x29
  int klass_high; // w8
  float v35; // s8
  int32_t selectExp; // s9
  float v37; // s0
  int32_t v38; // w8
  float v39; // s8
  int v40; // s9
  float v41; // s0
  unsigned int v42; // w8
  UILabel_o *spendQpLabel; // x21
  Il2CppObject *v44; // x0
  float v45; // s1 OVERLAPPED
  float v46; // s3
  float v47; // s0
  float v48; // s2
  UILabel_o *getBasicExpLabel; // x21
  Il2CppObject *v50; // x0
  UILabel_o *getAccExpLabel; // x21
  Il2CppObject *v52; // x0
  const MethodInfo *v53; // x2
  __int64 v54; // x2
  struct UserServantEntity_o *v55; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v56; // x21
  __int64 v57; // x22
  __int64 v58; // x23
  int32_t v59; // w8
  const MethodInfo *v60; // x4
  int32_t LevelMax; // w21
  struct UserServantEntity_o *v62; // x8
  bool v63; // w1
  bool v64; // w22
  _BOOL8 v65; // x0
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  Il2CppObject *v69; // x21
  __int64 v70; // x9
  SvtEqCombineListViewManager_o *v71; // x0
  bool v72; // w1
  struct System_Collections_Generic_List_long__o *tempMaterialUsrSvtIdList; // x8
  int32_t size; // w8
  int32_t v75; // w21
  int32_t selectMax; // [xsp+4h] [xbp-CCh] BYREF
  System_Collections_Generic_List_Enumerator_object__o v77; // [xsp+8h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v78; // [xsp+20h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v79; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16

  if ( (byte_59322D3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Item__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&SvtEqCombineListViewItem_TypeInfo);
    sub_21FFC50(&StringLiteral_26423/*"{0:N0}"*/);
    sub_21FFC50(&StringLiteral_12979/*"SUM_INFO"*/);
    byte_59322D3 = 1;
  }
  memset(&v79, 0, sizeof(v79));
  memset(&v78, 0, sizeof(v78));
  ObjectList = (System_Collections_Generic_List_object__o *)SvtEqCombineListViewManager__get_ObjectList(this, method);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  p_selectQp = &this->fields.selectQp;
  this->fields.addTotalExp = 0;
  this->fields.isAllUpMax = 0;
  *(_QWORD *)&this->fields.selectQp = 0;
  if ( baseUsrSvtData && this->fields.itemType == 1 )
  {
    CombineQpSvtEq = UserServantEntity__getCombineQpSvtEq(baseUsrSvtData, 0);
    v9 = SvtEqCombineListViewManager__CheckCompareQp(this, CombineQpSvtEq, v8);
  }
  else
  {
    v9 = 0;
  }
  itemList = (__int64)this->fields.itemList;
  if ( !itemList )
    goto LABEL_100;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v77,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v79 = v77;
  v77.fields._list = 0;
  *(_QWORD *)&v77.fields._index = &v79;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v79,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v11 & 1) == 0 )
      break;
    current = (SvtEqCombineListViewItem_o *)v79.fields._current;
    if ( !v79.fields._current )
      goto LABEL_99;
    naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
    if ( v79.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (SvtEqCombineListViewItem_c *)v79.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      v11 = sub_220024C(v79.fields._current, SvtEqCombineListViewItem_TypeInfo, v13, v14);
LABEL_99:
      sub_21FFECC(v11, v12);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v79.fields._current, 0) )
    {
      v18 = this->fields.baseUsrSvtData;
      this->fields.selectQp += v9;
      if ( !v18 )
        goto LABEL_102;
      if ( !UserServantEntity__isLevelMax(v18, 0) )
        goto LABEL_19;
      v20 = this->fields.baseUsrSvtData;
      if ( !v20 )
        sub_21FFECC(0, v19);
      if ( UserServantEntity__isLevelMax(v20, 0) && current->fields.isLimitCntTarget )
      {
LABEL_19:
        addTotalExp = this->fields.addTotalExp;
        this->fields.selectExp += current->fields.materialExp;
        this->fields.addTotalExp = SvtEqCombineListViewItem__get_GetAddTotalExp(current, v19) + addTotalExp;
      }
    }
    else
    {
      current->fields.isMaxSelect = this->fields.selectSum >= this->fields.selectMax;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v79,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  selectInfoLabel = this->fields.selectInfoLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22, v23);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_12979/*"SUM_INFO"*/, 0);
  LODWORD(v77.fields._list) = this->fields.selectSum;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v77);
  selectMax = this->fields.selectMax;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &selectMax);
  itemList = (__int64)System_String__Format_75484576(v25, v26, v27, 0);
  if ( !selectInfoLabel )
    goto LABEL_100;
  UILabel__set_text(selectInfoLabel, (System_String_o *)itemList, 0);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_100;
  combineEventList = (System_Collections_Generic_List_object__o *)menuListCtr->fields.combineEventList;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v77,
      combineEventList,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v78 = v77;
    v77.fields._list = 0;
    *(_QWORD *)&v77.fields._index = &v78;
    while ( 1 )
    {
      v30 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v78,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v30 )
        break;
      v33 = v78.fields._current;
      if ( !v78.fields._current )
        sub_21FFECC(v30, v31);
      klass_high = HIDWORD(v78.fields._current[1].klass);
      if ( klass_high == 17 )
      {
        v35 = *(float *)&v78.fields._current[3].monitor;
        selectExp = this->fields.selectExp;
        if ( !byte_5931FBB )
        {
          sub_21FFC50(&System_Math_TypeInfo);
          byte_5931FBB = 1;
        }
        if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v31, v32);
        v37 = v35 * (float)selectExp;
        v38 = vcvtps_s32_f32(v37);
        if ( ceilf(v37) == INFINITY )
          v38 = 0x80000000;
        this->fields.selectExp = v38;
        klass_high = HIDWORD(v33[1].klass);
      }
      if ( klass_high == 16 )
      {
        v39 = *(float *)&v33[3].monitor;
        v40 = *p_selectQp;
        if ( !byte_5931FBB )
        {
          sub_21FFC50(&System_Math_TypeInfo);
          byte_5931FBB = 1;
        }
        if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v31, v32);
        v41 = v39 * (float)v40;
        v42 = vcvtps_s32_f32(v41);
        if ( ceilf(v41) == INFINITY )
          v42 = 0x80000000;
        *p_selectQp = v42;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v78,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  spendQpLabel = this->fields.spendQpLabel;
  LODWORD(v77.fields._list) = this->fields.selectQp;
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v77);
  itemList = (__int64)System_String__Format((System_String_o *)StringLiteral_26423/*"{0:N0}"*/, v44, 0);
  if ( !spendQpLabel )
    goto LABEL_100;
  UILabel__set_text(spendQpLabel, (System_String_o *)itemList, 0);
  if ( this->fields.itemType == 1 )
  {
    itemList = (__int64)this->fields.spendQpLabel;
    if ( !itemList )
      goto LABEL_100;
    v45 = 1.0;
    v46 = 1.0;
    if ( this->fields.userQP < this->fields.selectQp )
      v45 = 0.0;
    v47 = 1.0;
    v48 = v45;
    UIWidget__set_color((UIWidget_o *)itemList, *(UnityEngine_Color_o *)(&v45 - 1), 0);
  }
  getBasicExpLabel = this->fields.getBasicExpLabel;
  LODWORD(v77.fields._list) = this->fields.selectExp;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v77);
  itemList = (__int64)System_String__Format((System_String_o *)StringLiteral_26423/*"{0:N0}"*/, v50, 0);
  if ( !getBasicExpLabel
    || (UILabel__set_text(getBasicExpLabel, (System_String_o *)itemList, 0),
        getAccExpLabel = this->fields.getAccExpLabel,
        selectMax = this->fields.addTotalExp,
        v52 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &selectMax),
        itemList = (__int64)System_String__Format((System_String_o *)StringLiteral_26423/*"{0:N0}"*/, v52, 0),
        !getAccExpLabel) )
  {
LABEL_100:
    sub_21FFECC(itemList, v3);
  }
  UILabel__set_text(getAccExpLabel, (System_String_o *)itemList, 0);
  if ( this->fields.baseUsrSvtData && this->fields.itemType == 1 )
  {
    itemList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !itemList )
      goto LABEL_100;
    itemList = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)itemList,
                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
    v55 = this->fields.baseUsrSvtData;
    if ( !v55 )
      goto LABEL_100;
    v56 = (DataMasterBase_TMaster__TEntity__PKType__o *)itemList;
    v57 = *(_QWORD *)&v55->fields.svtId.fields.currentCryptoKey;
    v58 = *(_QWORD *)&v55->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3, v54);
    *(_QWORD *)&v80.fields.currentCryptoKey = v57;
    *(_QWORD *)&v80.fields.fakeValue = v58;
    itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v80, 0);
    if ( !v56 )
      goto LABEL_100;
    itemList = (__int64)DataMasterBase_object__object__int___GetEntity(
                          v56,
                          itemList,
                          (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !itemList )
      goto LABEL_100;
    v59 = *(_DWORD *)(itemList + 132);
    itemList = (__int64)this->fields.baseUsrSvtData;
    this->fields.expType = v59;
    if ( !itemList )
      goto LABEL_100;
    this->fields.totalExp = *(_DWORD *)(itemList + 404) + this->fields.selectExp + this->fields.addTotalExp;
    this->fields.checkLv = *(_DWORD *)(itemList + 400);
    LevelMax = UserServantEntity__getLevelMax((UserServantEntity_o *)itemList, 0);
    if ( this->fields.checkLv != LevelMax )
    {
      do
        itemList = SvtEqCombineListViewManager__CheckIncrementLv(
                     this,
                     &this->fields.checkLv,
                     &this->fields.increLv,
                     this->fields.totalExp,
                     v60);
      while ( (itemList & 1) == 0 );
      v62 = this->fields.baseUsrSvtData;
      if ( !v62 )
        goto LABEL_100;
      itemList = (__int64)this->fields.levelUpInfoImg;
      if ( this->fields.increLv - v62->fields.lv < 1 )
      {
        if ( !itemList )
          goto LABEL_100;
        itemList = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemList, 0);
        if ( !itemList )
          goto LABEL_100;
        v63 = 0;
      }
      else
      {
        if ( !itemList )
          goto LABEL_100;
        itemList = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemList, 0);
        if ( !itemList )
          goto LABEL_100;
        v63 = 1;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, v63, 0);
    }
    itemList = (__int64)this->fields.itemList;
    if ( !itemList )
      goto LABEL_100;
    v64 = this->fields.increLv >= LevelMax;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v77,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v79 = v77;
    v77.fields._list = 0;
    *(_QWORD *)&v77.fields._index = &v79;
    while ( 1 )
    {
      v65 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v79,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v65 )
        break;
      v69 = v79.fields._current;
      if ( !v79.fields._current )
        sub_21FFECC(v65, v66);
      v70 = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
      if ( v79.fields._current->klass->_2.naturalAligment < (unsigned int)v70
        || (SvtEqCombineListViewItem_c *)v79.fields._current->klass->_2.typeHierarchy[v70 - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        v18 = (UserServantEntity_o *)sub_220024C(v79.fields._current, SvtEqCombineListViewItem_TypeInfo, v67, v68);
LABEL_102:
        sub_21FFECC(v18, v17);
      }
      if ( !ListViewItem__get_IsSelect((ListViewItem_o *)v79.fields._current, 0) )
        BYTE2(v69[15].monitor) = v64;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v79,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  if ( this->fields.selectSum >= 1 )
  {
    v71 = this;
    v72 = 1;
    goto LABEL_86;
  }
  tempMaterialUsrSvtIdList = this->fields.tempMaterialUsrSvtIdList;
  if ( !tempMaterialUsrSvtIdList )
    goto LABEL_100;
  if ( tempMaterialUsrSvtIdList->fields._size <= 0 )
  {
    v71 = this;
    v72 = 0;
LABEL_86:
    SvtEqCombineListViewManager__SetBtnEnable(v71, v72, v53);
    if ( !ObjectList )
      goto LABEL_100;
    goto LABEL_92;
  }
  itemList = (__int64)this->fields.allReleaseButton;
  if ( !itemList )
    goto LABEL_100;
  itemList = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)itemList + 536LL))(
               itemList,
               3,
               1,
               *(_QWORD *)(*(_QWORD *)itemList + 544LL));
  if ( !ObjectList )
    goto LABEL_100;
LABEL_92:
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    v75 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      itemList = (__int64)System_Collections_Generic_List_object___get_Item(
                            ObjectList,
                            v75,
                            (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Item__);
      if ( !itemList )
        break;
      (*(void (__fastcall **)(__int64, bool, _QWORD))(*(_QWORD *)itemList + 456LL))(
        itemList,
        this->fields.isInput,
        *(_QWORD *)(*(_QWORD *)itemList + 464LL));
      if ( ++v75 >= ObjectList->fields._size )
        return;
    }
    goto LABEL_100;
  }
}


void SvtEqCombineListViewManager__ReleaseAll(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  int32_t selectSum; // w8
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  Il2CppObject *current; // x20
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 naturalAligment; // x9
  const MethodInfo *v11; // x1
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_59322EA & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_21FFC50(&SvtEqCombineListViewItem_TypeInfo);
    byte_59322EA = 1;
  }
  selectSum = this->fields.selectSum;
  memset(&v12, 0, sizeof(v12));
  if ( selectSum >= 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_17;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      itemList,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    while ( 1 )
    {
      v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v12,
             (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( (v5 & 1) == 0 )
        break;
      current = v12.fields._current;
      if ( !v12.fields._current )
        goto LABEL_16;
      ListViewItem__set_IsSelect((ListViewItem_o *)v12.fields._current, 0, 0);
      naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
      if ( current->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (SvtEqCombineListViewItem_c *)current->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        v5 = sub_220024C(current, SvtEqCombineListViewItem_TypeInfo, v8, v9);
LABEL_16:
        sub_21FFECC(v5, v6);
      }
      *((_BYTE *)&dword_B0 + (_QWORD)current + 2) = 0;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    itemList = (System_Collections_Generic_List_object__o *)this->fields.levelUpInfoImg;
    this->fields.selectSum = 0;
    if ( !itemList
      || (itemList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)itemList,
                                                                    0)) == 0 )
    {
LABEL_17:
      sub_21FFECC(itemList, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, 0, 0);
    this->fields.totalExp = 0;
    *(_QWORD *)&this->fields.increLv = 0;
    SvtEqCombineListViewManager__RefrashListDisp(this, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void SvtEqCombineListViewManager__RequestListObject(
        SvtEqCombineListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  const MethodInfo_4450604 *v10; // x1
  Il2CppObject *current; // x21
  System_Action_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_59322DF & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Count__);
    sub_21FFC50(&Method_SvtEqCombineListViewManager_OnMoveEnd__);
    sub_21FFC50(&StringLiteral_10331/*"OnMoveEnd"*/);
    byte_59322DF = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)SvtEqCombineListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_21FFECC(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10331/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    v10 = (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v10);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v12 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_SvtEqCombineListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_21FFECC(v13, v14);
      SvtEqCombineListViewObject__Init_37971800((SvtEqCombineListViewObject_o *)current, mode, v12, delay, v15);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void SvtEqCombineListViewManager__RequestListObject_37970796(
        SvtEqCombineListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  const MethodInfo_4450604 *v8; // x1
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  __int64 v14; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v15; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_59322E0 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Count__);
    sub_21FFC50(&Method_SvtEqCombineListViewManager_OnMoveEnd__);
    sub_21FFC50(&StringLiteral_10331/*"OnMoveEnd"*/);
    byte_59322E0 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)SvtEqCombineListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_21FFECC(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10331/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    v8 = (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v8);
    v14 = 0;
    v15 = &v16;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v10 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_SvtEqCombineListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_21FFECC(v11, v12);
      SvtEqCombineListViewObject__Init_37971884((SvtEqCombineListViewObject_o *)current, mode, v10, v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__Dispose__);
  }
}


void SvtEqCombineListViewManager__ResetInit(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v9; // x1
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *selectedMtSvtList_k__BackingField; // x8
  int32_t size; // w2
  int v12; // w9
  struct System_Collections_Generic_List_long__o *selectMaterialUsrSvtIdList; // x8
  int v14; // w9
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *tempMtSvtList; // x8
  int32_t v16; // w2
  int v17; // w9
  struct System_Collections_Generic_List_long__o *tempMaterialUsrSvtIdList; // x8
  int v19; // w9
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v21; // x1
  UnityEngine_Component_o *levelUpInfoImg; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_59322EB & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_59322EB = 1;
  }
  memset(&v23, 0, sizeof(v23));
  this->fields.baseUsrSvtData = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.baseUsrSvtData, 0, v2, v3, v4, v5, v6, v7);
  selectedMtSvtList_k__BackingField = this->fields._selectedMtSvtList_k__BackingField;
  if ( selectedMtSvtList_k__BackingField )
  {
    size = selectedMtSvtList_k__BackingField->fields._size;
    v12 = selectedMtSvtList_k__BackingField->fields._version + 1;
    selectedMtSvtList_k__BackingField->fields._size = 0;
    selectedMtSvtList_k__BackingField->fields._version = v12;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)selectedMtSvtList_k__BackingField->fields._items, 0, size, 0);
  }
  selectMaterialUsrSvtIdList = this->fields.selectMaterialUsrSvtIdList;
  if ( selectMaterialUsrSvtIdList )
  {
    v14 = selectMaterialUsrSvtIdList->fields._version + 1;
    selectMaterialUsrSvtIdList->fields._size = 0;
    selectMaterialUsrSvtIdList->fields._version = v14;
  }
  tempMtSvtList = this->fields.tempMtSvtList;
  if ( tempMtSvtList )
  {
    v16 = tempMtSvtList->fields._size;
    v17 = tempMtSvtList->fields._version + 1;
    tempMtSvtList->fields._size = 0;
    tempMtSvtList->fields._version = v17;
    if ( v16 >= 1 )
      System_Array__Clear((System_Array_o *)tempMtSvtList->fields._items, 0, v16, 0);
  }
  tempMaterialUsrSvtIdList = this->fields.tempMaterialUsrSvtIdList;
  if ( tempMaterialUsrSvtIdList )
  {
    v19 = tempMaterialUsrSvtIdList->fields._version + 1;
    tempMaterialUsrSvtIdList->fields._size = 0;
    tempMaterialUsrSvtIdList->fields._version = v19;
  }
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v23,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v23,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( !v23.fields._current )
        sub_21FFECC(0, v21);
      ListViewItem__set_IsSelect((ListViewItem_o *)v23.fields._current, 0, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v23,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  levelUpInfoImg = (UnityEngine_Component_o *)this->fields.levelUpInfoImg;
  this->fields.selectSum = 0;
  if ( !levelUpInfoImg
    || (levelUpInfoImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(levelUpInfoImg, 0)) == 0 )
  {
    sub_21FFECC(levelUpInfoImg, v9);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelUpInfoImg, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void SvtEqCombineListViewManager__SetBtnEnable(
        SvtEqCombineListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  bool v4; // w21
  UnityEngine_Component_o *decideBtnBg; // x0
  float v6; // s0 OVERLAPPED
  float v7; // s3
  float v8; // s1
  float v9; // s2

  v4 = isEnable;
  if ( (byte_59322CF & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_59322CF = 1;
  }
  decideBtnBg = (UnityEngine_Component_o *)this->fields.decideBtnBg;
  this->fields.isDecideFlg = v4;
  if ( !decideBtnBg )
    goto LABEL_9;
  decideBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                             decideBtnBg,
                                             (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !decideBtnBg )
    goto LABEL_9;
  v6 = 1.0;
  v7 = 1.0;
  if ( !this->fields.isDecideFlg )
    v6 = 0.5;
  v8 = v6;
  v9 = v6;
  UIWidget__set_color((UIWidget_o *)decideBtnBg, *(UnityEngine_Color_o *)&v6, 0);
  decideBtnBg = (UnityEngine_Component_o *)this->fields.allReleaseButton;
  if ( !decideBtnBg )
LABEL_9:
    sub_21FFECC(decideBtnBg, isEnable);
  ((void (*)(void))decideBtnBg->klass[1]._1.nestedTypes)();
}


// local variable allocation has failed, the output may be wrong!
void SvtEqCombineListViewManager__SetDispActive(
        SvtEqCombineListViewManager_o *this,
        bool isShow,
        const MethodInfo *method)
{
  void *allReleaseButton; // x0
  __int64 v6; // x2
  float v7; // s8
  float v8; // s3 OVERLAPPED
  float v9; // s0
  float v10; // s1
  float v11; // s2
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
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_59322CE & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_21FFC50(&SvtEqCombineListViewManager_TypeInfo);
    byte_59322CE = 1;
  }
  allReleaseButton = this->fields.allReleaseButton;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allReleaseButton, 0);
  if ( !allReleaseButton )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allReleaseButton, isShow, 0);
  allReleaseButton = this->fields.decideButton;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allReleaseButton, 0);
  if ( !allReleaseButton )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allReleaseButton, isShow, 0);
  allReleaseButton = SvtEqCombineListViewManager_TypeInfo;
  if ( !*(&SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo, isShow, v6);
    allReleaseButton = SvtEqCombineListViewManager_TypeInfo;
  }
  if ( !this->fields.spendQpBg )
    goto LABEL_40;
  v7 = **((float **)allReleaseButton + 23);
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this->fields.spendQpBg,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v8 = 1.0;
  if ( isShow )
    v7 = 1.0;
  v9 = v7;
  v10 = v7;
  v11 = v7;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, *(UnityEngine_Color_o *)(&v8 - 3), 0);
  allReleaseButton = this->fields.spendQpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v12.fields.r = v7;
  v12.fields.g = v7;
  v12.fields.b = v7;
  v12.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v12, 0);
  allReleaseButton = this->fields.spendQpLabel;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v13.fields.r = v7;
  v13.fields.g = v7;
  v13.fields.b = v7;
  v13.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v13, 0);
  allReleaseButton = this->fields.getExpBg;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v14.fields.r = v7;
  v14.fields.g = v7;
  v14.fields.b = v7;
  v14.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v14, 0);
  allReleaseButton = this->fields.getExpBgImg;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v15.fields.r = v7;
  v15.fields.g = v7;
  v15.fields.b = v7;
  v15.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v15, 0);
  allReleaseButton = this->fields.getExpLabel;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v16.fields.r = v7;
  v16.fields.g = v7;
  v16.fields.b = v7;
  v16.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v16, 0);
  allReleaseButton = this->fields.getBasicExpLabel;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v17.fields.r = v7;
  v17.fields.g = v7;
  v17.fields.b = v7;
  v17.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v17, 0);
  allReleaseButton = this->fields.getAccExpLabel;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v18.fields.r = v7;
  v18.fields.g = v7;
  v18.fields.b = v7;
  v18.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v18, 0);
  allReleaseButton = this->fields.haveQpBg;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v19.fields.r = v7;
  v19.fields.g = v7;
  v19.fields.b = v7;
  v19.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v19, 0);
  allReleaseButton = this->fields.haveQpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v20.fields.r = v7;
  v20.fields.g = v7;
  v20.fields.b = v7;
  v20.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v20, 0);
  allReleaseButton = this->fields.haveQpLabel;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v21.fields.r = v7;
  v21.fields.g = v7;
  v21.fields.b = v7;
  v21.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v21, 0);
  allReleaseButton = this->fields.nextExpBg;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v22.fields.r = v7;
  v22.fields.g = v7;
  v22.fields.b = v7;
  v22.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v22, 0);
  allReleaseButton = this->fields.nextExpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton
    || (v23.fields.r = v7,
        v23.fields.g = v7,
        v23.fields.b = v7,
        v23.fields.a = 1.0,
        UIWidget__set_color((UIWidget_o *)allReleaseButton, v23, 0),
        (allReleaseButton = this->fields.nextExpLabel) == 0)
    || (allReleaseButton = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)allReleaseButton,
                             (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0 )
  {
LABEL_40:
    sub_21FFECC(allReleaseButton, isShow);
  }
  v24.fields.a = 1.0;
  v24.fields.r = v7;
  v24.fields.g = v7;
  v24.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v24, 0);
}


void SvtEqCombineListViewManager__SetDragEnd(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  int32_t dragStartIndex; // w20
  int32_t dragEndIndex; // w21

  if ( (byte_5932305 & 1) == 0 )
  {
    sub_21FFC50(&Method_SvtEqCombineListViewManager_SetDragEnd__);
    byte_5932305 = 1;
  }
  v3 = Method_SvtEqCombineListViewManager_SetDragEnd__;
  if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_SetDragEnd__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_SvtEqCombineListViewManager_SetDragEnd__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
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
  this->fields.isDragSelect = 1;
  *(_QWORD *)&this->fields.dragSelectSum = 0xFFFFFFFF00000000LL;
}


void SvtEqCombineListViewManager__SetDragMove(
        SvtEqCombineListViewManager_o *this,
        int32_t moveIndex,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( this->fields.dragEndIndex != moveIndex )
    SvtEqCombineListViewManager__SetDragSelectItem(this, this->fields.dragStartIndex, moveIndex, v3);
}


// local variable allocation has failed, the output may be wrong!
bool SvtEqCombineListViewManager__SetDragSelect(
        SvtEqCombineListViewManager_o *this,
        int32_t index,
        bool isDragSelect,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemSortList; // x0
  __int64 v8; // x2
  __int64 v9; // x3
  ListViewItem_o *v10; // x19
  const MethodInfo *v11; // x1
  __int64 naturalAligment; // x9
  int items_high; // w8
  int v14; // w21
  _BOOL4 v15; // w21
  bool IsSelect; // w0
  const MethodInfo *v17; // x4
  int32_t *p_dragSelectSum; // x8
  UnityEngine_Object_o *viewObject; // x20
  __int64 v20; // x9
  bool result; // w0
  SvtEqCombineListViewObject_o *v22; // x0
  const MethodInfo *v23; // x1

  if ( (byte_5932303 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SvtEqCombineListViewItem_TypeInfo);
    sub_21FFC50(&SvtEqCombineListViewObject_TypeInfo);
    byte_5932303 = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_32;
  itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemSortList,
                                                                index,
                                                                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !itemSortList )
    goto LABEL_32;
  v10 = (ListViewItem_o *)itemSortList;
  v11 = (const MethodInfo *)SvtEqCombineListViewItem_TypeInfo;
  naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
  if ( itemSortList->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SvtEqCombineListViewItem_c *)itemSortList->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewItem_TypeInfo )
  {
    goto LABEL_33;
  }
  items_high = HIDWORD(itemSortList[6].fields._items);
  if ( isDragSelect )
  {
    if ( items_high < 0 )
    {
      HIDWORD(itemSortList[6].fields._items) = 0;
      LOBYTE(v14) = 0;
      if ( SvtEqCombineListViewItem__get_IsCanNotSelect((SvtEqCombineListViewItem_o *)itemSortList, v11) )
        goto LABEL_22;
      v15 = this->fields.isDragSelect;
      IsSelect = ListViewItem__get_IsSelect(v10, 0);
      if ( !v15 )
      {
        if ( !IsSelect )
          goto LABEL_21;
        v14 = 1;
        goto LABEL_20;
      }
      if ( !IsSelect )
      {
        v14 = 1;
        if ( !SvtEqCombineListViewManager__IsSelectEnable(
                this,
                (SvtEqCombineListViewItem_o *)v10,
                this->fields.dragSelectSum,
                1,
                v17) )
          goto LABEL_22;
        p_dragSelectSum = &this->fields.dragSelectSum;
        goto LABEL_18;
      }
    }
  }
  else if ( (items_high & 0x80000000) == 0 )
  {
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)itemSortList, 0) || v10[2].fields.index < 1 )
    {
      v14 = -1;
      goto LABEL_20;
    }
    p_dragSelectSum = &this->fields.dragSelectSum;
    v14 = -1;
LABEL_18:
    *p_dragSelectSum += v14;
LABEL_20:
    v10[2].fields.index = v14;
  }
LABEL_21:
  LOBYTE(v14) = 0;
LABEL_22:
  viewObject = (UnityEngine_Object_o *)v10->fields.viewObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v8);
  if ( !UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
    return v14;
  itemSortList = (System_Collections_Generic_List_object__o *)v10->fields.viewObject;
  if ( !itemSortList )
LABEL_32:
    sub_21FFECC(itemSortList, *(_QWORD *)&index);
  v11 = (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo;
  v20 = SvtEqCombineListViewObject_TypeInfo->_2.naturalAligment;
  if ( itemSortList->klass->_2.naturalAligment >= (unsigned int)v20
    && (SvtEqCombineListViewObject_c *)itemSortList->klass->_2.typeHierarchy[v20 - 1] == SvtEqCombineListViewObject_TypeInfo )
  {
    SvtEqCombineListViewObject__SetupDisp(
      (SvtEqCombineListViewObject_o *)itemSortList,
      (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo);
    return v14;
  }
LABEL_33:
  v22 = (SvtEqCombineListViewObject_o *)sub_220024C(itemSortList, v11, v8, v9);
  SvtEqCombineListViewObject__SetupDisp(v22, v23);
  return result;
}


// local variable allocation has failed, the output may be wrong!
void SvtEqCombineListViewManager__SetDragSelectItem(
        SvtEqCombineListViewManager_o *this,
        int32_t startIndex,
        int32_t endIndex,
        const MethodInfo *method)
{
  int v5; // w22
  int32_t dragStartIndex; // w8
  int32_t dragEndIndex; // w9
  int32_t v9; // w25
  int32_t v10; // w26
  int32_t v11; // w8
  int32_t v12; // w20
  int v13; // w24
  int v14; // w27
  int32_t v15; // w23
  int v16; // w28
  System_Collections_Generic_List_object__o *itemSortList; // x0
  __int64 v18; // x2
  __int64 v19; // x3
  System_Collections_Generic_List_object__o *v20; // x21
  __int64 naturalAligment; // x9
  UnityEngine_Object_c *v22; // x0
  UnityEngine_Object_o *syncRoot; // x22
  __int64 v24; // x9
  SvtEqCombineListViewManager_o *v25; // x0
  int32_t v26; // w1
  bool v27; // w2
  const MethodInfo *v28; // x3

  v5 = startIndex;
  if ( (byte_5932302 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SvtEqCombineListViewItem_TypeInfo);
    sub_21FFC50(&SvtEqCombineListViewObject_TypeInfo);
    byte_5932302 = 1;
  }
  dragStartIndex = this->fields.dragStartIndex;
  if ( dragStartIndex < 0 )
  {
    v9 = -1;
    v10 = -1;
  }
  else
  {
    dragEndIndex = this->fields.dragEndIndex;
    if ( dragStartIndex <= dragEndIndex )
      v9 = this->fields.dragEndIndex;
    else
      v9 = this->fields.dragStartIndex;
    if ( dragStartIndex >= dragEndIndex )
      v10 = this->fields.dragEndIndex;
    else
      v10 = this->fields.dragStartIndex;
  }
  this->fields.dragStartIndex = v5;
  if ( v5 <= endIndex )
    v11 = endIndex;
  else
    v11 = v5;
  if ( v5 >= endIndex )
    v12 = endIndex;
  else
    v12 = v5;
  if ( v5 < 0 )
    v13 = -1;
  else
    v13 = v11;
  if ( v5 < 0 )
    v14 = -1;
  else
    v14 = v12;
  this->fields.dragEndIndex = endIndex;
  if ( (v10 & 0x80000000) == 0 && v10 <= v9 )
  {
    v15 = v10;
    do
    {
      if ( v15 > v13 || v14 < 0 || v15 < v14 )
        SvtEqCombineListViewManager__SetDragSelect(this, v15, 0, method);
      ++v15;
    }
    while ( v15 <= v9 );
  }
  if ( (v5 & 0x80000000) == 0 )
  {
    if ( v5 <= endIndex )
    {
      do
      {
        if ( v10 < 0 || v5 < v10 || v5 > v9 )
          SvtEqCombineListViewManager__SetDragSelect(this, v5, 1, method);
        ++v5;
      }
      while ( v5 <= endIndex );
    }
    else
    {
      do
      {
        if ( v10 < 0 || v5 < v10 || v5 > v9 )
          SvtEqCombineListViewManager__SetDragSelect(this, v5, 1, method);
        --v5;
      }
      while ( v5 >= endIndex );
    }
    if ( (v14 & 0x80000000) == 0 && this->fields.isDragSelect && v14 <= v13 )
    {
      v16 = this->fields.selectSum + 1;
      while ( 1 )
      {
        itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
        if ( !itemSortList
          || (itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                            itemSortList,
                                                                            v12,
                                                                            (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__)) == 0 )
        {
LABEL_62:
          sub_21FFECC(itemSortList, *(_QWORD *)&startIndex);
        }
        *(_QWORD *)&startIndex = SvtEqCombineListViewItem_TypeInfo;
        v20 = itemSortList;
        naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
        if ( itemSortList->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (SvtEqCombineListViewItem_c *)itemSortList->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewItem_TypeInfo )
        {
          break;
        }
        if ( SHIDWORD(itemSortList[6].fields._items) >= 1 )
        {
          v22 = UnityEngine_Object_TypeInfo;
          syncRoot = (UnityEngine_Object_o *)v20[2].fields._syncRoot;
          HIDWORD(v20[6].fields._items) = v16;
          if ( !*(&v22->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(v22, *(_QWORD *)&startIndex, v18);
          ++v16;
          if ( UnityEngine_Object__op_Inequality(syncRoot, 0, 0) )
          {
            itemSortList = (System_Collections_Generic_List_object__o *)v20[2].fields._syncRoot;
            if ( !itemSortList )
              goto LABEL_62;
            *(_QWORD *)&startIndex = SvtEqCombineListViewObject_TypeInfo;
            v24 = SvtEqCombineListViewObject_TypeInfo->_2.naturalAligment;
            if ( itemSortList->klass->_2.naturalAligment < (unsigned int)v24
              || (SvtEqCombineListViewObject_c *)itemSortList->klass->_2.typeHierarchy[v24 - 1] != SvtEqCombineListViewObject_TypeInfo )
            {
              break;
            }
            SvtEqCombineListViewObject__SetupDisp(
              (SvtEqCombineListViewObject_o *)itemSortList,
              (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo);
          }
        }
        if ( ++v12 > v13 )
          return;
      }
      v25 = (SvtEqCombineListViewManager_o *)sub_220024C(itemSortList, *(_QWORD *)&startIndex, v18, v19);
      SvtEqCombineListViewManager__SetDragSelect(v25, v26, v27, v28);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void SvtEqCombineListViewManager__SetDragStart(
        SvtEqCombineListViewManager_o *this,
        int32_t startIndex,
        bool isDragSelect,
        const MethodInfo *method)
{
  int32_t v4; // w20
  SvtEqCombineListViewManager_o *v5; // x19
  bool v6; // w21
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  int size; // w22
  int32_t v9; // w21
  __int64 v10; // x2
  __int64 naturalAligment; // x9
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_o *scrollView; // x20
  SvtEqCombineListViewManager_o *v15; // x0
  int32_t v16; // w1
  const MethodInfo *v17; // x2

  v4 = startIndex;
  v5 = this;
  v6 = isDragSelect;
  if ( (byte_5932304 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    this = (SvtEqCombineListViewManager_o *)sub_21FFC50(&SvtEqCombineListViewItem_TypeInfo);
    byte_5932304 = 1;
  }
  itemSortList = v5->fields.itemSortList;
  v5->fields.dragEndIndex = -1;
  v5->fields.isDragSelect = v6;
  *(_QWORD *)&v5->fields.dragSelectSum = 0xFFFFFFFF00000000LL;
  if ( !itemSortList )
    goto LABEL_17;
  size = itemSortList->fields._size;
  if ( size < 1 )
  {
LABEL_11:
    SvtEqCombineListViewManager__SetDragSelectItem(v5, v4, v4, method);
    scrollView = (UnityEngine_Object_o *)v5->fields.scrollView;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
    if ( !UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      return;
    this = (SvtEqCombineListViewManager_o *)v5->fields.scrollView;
    if ( this )
    {
      UIScrollView__Press((UIScrollView_o *)this, 0, 0);
      return;
    }
LABEL_17:
    sub_21FFECC(this, *(_QWORD *)&startIndex);
  }
  v9 = 0;
  while ( 1 )
  {
    this = (SvtEqCombineListViewManager_o *)v5->fields.itemSortList;
    if ( !this )
      goto LABEL_17;
    this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v9,
                                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !this )
      goto LABEL_17;
    *(_QWORD *)&startIndex = SvtEqCombineListViewItem_TypeInfo;
    naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
    if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (SvtEqCombineListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    ++v9;
    HIDWORD(this->fields.rightItem) = -1;
    if ( size == v9 )
      goto LABEL_11;
  }
  v15 = (SvtEqCombineListViewManager_o *)sub_220024C(this, SvtEqCombineListViewItem_TypeInfo, v10, method);
  SvtEqCombineListViewManager__SetDragMove(v15, v16, v17);
}


void SvtEqCombineListViewManager__SetFilterButtonImage(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_59322F3 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18217/*"btn_filter_on"*/);
    sub_21FFC50(&StringLiteral_18216/*"btn_filter"*/);
    byte_59322F3 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !filterSprite) )
  {
    sub_21FFECC(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_18216/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_18217/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0);
}


void SvtEqCombineListViewManager__SetMaterialSvtInfo(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  SvtEqCombineListViewManager___c_c *v6; // x0
  struct SvtEqCombineListViewManager___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__118_0; // x21
  Il2CppObject *v9; // x22
  struct SvtEqCombineListViewManager___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_IEnumerable_T__o *v17; // x20
  System_Action_object__o *v18; // x21

  if ( (byte_59322D1 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_SvtEqCombineListViewItem__TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ForEach_SvtEqCombineListViewItem___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_ListViewItem__SvtEqCombineListViewItem___);
    sub_21FFC50(&System_Func_ListViewItem__SvtEqCombineListViewItem__TypeInfo);
    sub_21FFC50(&Method_SvtEqCombineListViewManager__SetMaterialSvtInfo_b__118_1__);
    sub_21FFC50(&Method_SvtEqCombineListViewManager___c__SetMaterialSvtInfo_b__118_0__);
    sub_21FFC50(&SvtEqCombineListViewManager___c_TypeInfo);
    byte_59322D1 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.itemList, 0)
    && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.selectMaterialUsrSvtIdList, 0) )
  {
    itemList = this->fields.itemList;
    v6 = SvtEqCombineListViewManager___c_TypeInfo;
    if ( !*(&SvtEqCombineListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager___c_TypeInfo, v3, v4);
      v6 = SvtEqCombineListViewManager___c_TypeInfo;
    }
    static_fields = v6->static_fields;
    _9__118_0 = (System_Func_object__object__o *)static_fields->__9__118_0;
    if ( !_9__118_0 )
    {
      if ( !*(&v6->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v6, v3, v4);
        static_fields = SvtEqCombineListViewManager___c_TypeInfo->static_fields;
      }
      v9 = (Il2CppObject *)static_fields->__9;
      _9__118_0 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_ListViewItem__SvtEqCombineListViewItem__TypeInfo);
      System_Func_object__object____ctor(
        _9__118_0,
        v9,
        Method_SvtEqCombineListViewManager___c__SetMaterialSvtInfo_b__118_0__,
        0);
      v10 = SvtEqCombineListViewManager___c_TypeInfo->static_fields;
      v10->__9__118_0 = (struct System_Func_ListViewItem__SvtEqCombineListViewItem__o *)_9__118_0;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v10->__9__118_0,
        (int32_t)_9__118_0,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
    }
    v17 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)itemList,
                                                           (System_Func_TSource__TResult__o *)_9__118_0,
                                                           (const MethodInfo_385DD00 *)Method_System_Linq_Enumerable_Select_ListViewItem__SvtEqCombineListViewItem___);
    v18 = (System_Action_object__o *)sub_21FFEBC(System_Action_SvtEqCombineListViewItem__TypeInfo);
    System_Action_object____ctor(
      v18,
      (Il2CppObject *)this,
      Method_SvtEqCombineListViewManager__SetMaterialSvtInfo_b__118_1__,
      0);
    BasicHelper__ForEach_object_(
      v17,
      (System_Action_T__o *)v18,
      (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_SvtEqCombineListViewItem___);
  }
}


void SvtEqCombineListViewManager__SetMode(
        SvtEqCombineListViewManager_o *this,
        int32_t mode,
        SvtEqCombineListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  SvtEqCombineListViewManager__SetMode_37969712(this, mode, v10);
}


void SvtEqCombineListViewManager__SetMode_37969712(
        SvtEqCombineListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *scrollView; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  UnityEngine_Behaviour_o *itemList; // x0
  char v11; // w24
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  ListViewItem_o *current; // x21
  __int64 naturalAligment; // x9
  const MethodInfo *v18; // x1
  int32_t selectNum; // w22
  __int64 v20; // x1
  struct System_Collections_Generic_List_ListViewItem__o *v21; // x0
  __int128 v22; // q0
  _BOOL8 v23; // x0
  __int64 v24; // x1
  int32_t klass; // w9
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x2
  int32_t v28; // w1
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_59322DE & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SvtEqCombineListViewItem_TypeInfo);
    byte_59322DE = 1;
  }
  memset(&v31, 0, sizeof(v31));
  memset(&v30, 0, sizeof(v30));
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, (mode & 0xFFFFFFFE) == 2, 0);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    itemList = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !itemList )
      goto LABEL_39;
    if ( !UnityEngine_Behaviour__get_enabled(itemList, 0) )
    {
      itemList = (UnityEngine_Behaviour_o *)this->fields.scrollView;
      if ( !itemList )
        goto LABEL_39;
      UnityEngine_Behaviour__set_enabled(itemList, 1, 0);
      itemList = (UnityEngine_Behaviour_o *)this->fields.scrollView;
      if ( !itemList )
        goto LABEL_39;
      UIScrollView__UpdatePosition((UIScrollView_o *)itemList, 0);
    }
  }
  if ( (unsigned int)(mode - 3) <= 0xFFFFFFFD )
  {
    if ( mode == 3 )
      SvtEqCombineListViewManager__RequestListObject_37970796(this, 5, v9);
    return;
  }
  itemList = (UnityEngine_Behaviour_o *)this->fields.itemList;
  if ( !itemList )
LABEL_39:
    sub_21FFECC(itemList, v8);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v31 = v29;
  v11 = 0;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v12 & 1) == 0 )
      break;
    current = (ListViewItem_o *)v31.fields._current;
    if ( !v31.fields._current )
      goto LABEL_38;
    naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
    if ( v31.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (SvtEqCombineListViewItem_c *)v31.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      v12 = sub_220024C(v31.fields._current, SvtEqCombineListViewItem_TypeInfo, v14, v15);
LABEL_38:
      sub_21FFECC(v12, v13);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v31.fields._current, 0)
      && SvtEqCombineListViewItem__get_IsCanNotSelect((SvtEqCombineListViewItem_o *)current, v18) )
    {
      selectNum = current->fields.selectNum;
      ListViewItem__set_IsSelect(current, 0, 0);
      v21 = this->fields.itemList;
      --this->fields.selectSum;
      if ( !v21 )
        sub_21FFECC(0, v20);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v29,
        (System_Collections_Generic_List_object__o *)v21,
        (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v22 = *(_OWORD *)&v29.fields._list;
      v29.fields._list = 0;
      *(_QWORD *)&v29.fields._index = &v30;
      *(_OWORD *)&v30.fields._list = v22;
      v30.fields._current = v29.fields._current;
      while ( 1 )
      {
        v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v30,
                (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v23 )
          break;
        if ( !v30.fields._current )
          sub_21FFECC(v23, v24);
        klass = (int32_t)v30.fields._current[1].klass;
        if ( klass > selectNum )
          LODWORD(v30.fields._current[1].klass) = klass - 1;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v30,
        (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      v11 = 1;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( (v11 & 1) != 0 )
    SvtEqCombineListViewManager__RefrashListDisp(this, v26);
  if ( mode == 2 )
    v28 = 4;
  else
    v28 = 2;
  SvtEqCombineListViewManager__RequestListObject_37970796(this, v28, v27);
}


void SvtEqCombineListViewManager__SetMode_37970744(
        SvtEqCombineListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  SvtEqCombineListViewManager__SetMode_37969712(this, mode, v10);
}


void SvtEqCombineListViewManager__SetObjectItem(
        SvtEqCombineListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  SvtEqCombineListViewManager_o *v5; // x20
  __int64 naturalAligment; // x9
  int32_t v7; // w1

  v5 = this;
  if ( (byte_59322DD & 1) == 0 )
  {
    this = (SvtEqCombineListViewManager_o *)sub_21FFC50(&SvtEqCombineListViewObject_TypeInfo);
    byte_59322DD = 1;
  }
  if ( !obj )
LABEL_11:
    sub_21FFECC(this, obj);
  naturalAligment = SvtEqCombineListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SvtEqCombineListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    this = (SvtEqCombineListViewManager_o *)sub_220024C(obj, SvtEqCombineListViewObject_TypeInfo, item, method);
    goto LABEL_11;
  }
  if ( v5->fields.initMode == 2 )
    v7 = 4;
  else
    v7 = 2;
  SvtEqCombineListViewObject__Init_37969588((SvtEqCombineListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void SvtEqCombineListViewManager__SetRecommendedSelectedMaterialList(
        SvtEqCombineListViewManager_o *this,
        System_Int64_array *recommendedUserSvtIdIdList,
        SetCombineData_o *recommendedCombineData,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_long__o *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  void *tempMaterialUsrSvtIdList; // x0
  System_Collections_Generic_IEnumerable_T__o *selectMaterialUsrSvtIdList; // x1
  int v17; // w8
  const MethodInfo_4438370 *v18; // x2
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *selectedMtSvtList_k__BackingField; // x8
  System_Collections_Generic_List_object__o *v26; // x21
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  int32_t size; // w2
  int v34; // w9
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o **p_tempMtSvtList; // x20
  System_Collections_Generic_List_object__o *v36; // x21
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  int32_t v43; // w2
  int v44; // w8

  if ( (byte_59322E7 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_long___);
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo);
    byte_59322E7 = 1;
  }
  v7 = (struct System_Collections_Generic_List_long__o *)System_Linq_Enumerable__ToList_long_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)recommendedUserSvtIdIdList,
                                                           (const MethodInfo_386D7A8 *)Method_System_Linq_Enumerable_ToList_long___);
  this->fields.selectMaterialUsrSvtIdList = v7;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selectMaterialUsrSvtIdList,
    (int32_t)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  tempMaterialUsrSvtIdList = this->fields.tempMaterialUsrSvtIdList;
  if ( !tempMaterialUsrSvtIdList )
    goto LABEL_13;
  selectMaterialUsrSvtIdList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.selectMaterialUsrSvtIdList;
  v17 = *((_DWORD *)tempMaterialUsrSvtIdList + 7) + 1;
  v18 = (const MethodInfo_4438370 *)Method_System_Collections_Generic_List_long__AddRange__;
  *((_DWORD *)tempMaterialUsrSvtIdList + 6) = 0;
  *((_DWORD *)tempMaterialUsrSvtIdList + 7) = v17;
  System_Collections_Generic_List_long___AddRange(
    (System_Collections_Generic_List_long__o *)tempMaterialUsrSvtIdList,
    selectMaterialUsrSvtIdList,
    v18);
  this->fields.combineData = recommendedCombineData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.combineData,
    (int32_t)recommendedCombineData,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  selectedMtSvtList_k__BackingField = this->fields._selectedMtSvtList_k__BackingField;
  if ( !selectedMtSvtList_k__BackingField )
  {
    v26 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v26,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
    this->fields._selectedMtSvtList_k__BackingField = (struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v26;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields._selectedMtSvtList_k__BackingField,
      (int32_t)v26,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
    selectedMtSvtList_k__BackingField = this->fields._selectedMtSvtList_k__BackingField;
    if ( !selectedMtSvtList_k__BackingField )
      goto LABEL_13;
  }
  size = selectedMtSvtList_k__BackingField->fields._size;
  v34 = selectedMtSvtList_k__BackingField->fields._version + 1;
  selectedMtSvtList_k__BackingField->fields._size = 0;
  selectedMtSvtList_k__BackingField->fields._version = v34;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)selectedMtSvtList_k__BackingField->fields._items, 0, size, 0);
  tempMaterialUsrSvtIdList = this->fields.tempMtSvtList;
  p_tempMtSvtList = &this->fields.tempMtSvtList;
  if ( !tempMaterialUsrSvtIdList )
  {
    v36 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v36,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
    *p_tempMtSvtList = (struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v36;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.tempMtSvtList,
      (int32_t)v36,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    tempMaterialUsrSvtIdList = *p_tempMtSvtList;
    if ( !*p_tempMtSvtList )
      goto LABEL_13;
  }
  v43 = *((_DWORD *)tempMaterialUsrSvtIdList + 6);
  v44 = *((_DWORD *)tempMaterialUsrSvtIdList + 7) + 1;
  *((_DWORD *)tempMaterialUsrSvtIdList + 6) = 0;
  *((_DWORD *)tempMaterialUsrSvtIdList + 7) = v44;
  if ( v43 >= 1 )
  {
    System_Array__Clear(*((System_Array_o **)tempMaterialUsrSvtIdList + 2), 0, v43, 0);
    tempMaterialUsrSvtIdList = *p_tempMtSvtList;
    if ( !*p_tempMtSvtList )
LABEL_13:
      sub_21FFECC(tempMaterialUsrSvtIdList, v14);
  }
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)tempMaterialUsrSvtIdList,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields._selectedMtSvtList_k__BackingField,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__AddRange__);
  this->fields._isOpenCheckEquipDialog_k__BackingField = 0;
}


// local variable allocation has failed, the output may be wrong!
void SvtEqCombineListViewManager__SetReleaseBtnEnable(
        SvtEqCombineListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct UICommonButton_o *allReleaseButton; // x0

  allReleaseButton = this->fields.allReleaseButton;
  if ( !allReleaseButton )
    sub_21FFECC(0, isEnable);
  allReleaseButton->klass->vtable._14_SetState.methodPtr();
}


void SvtEqCombineListViewManager__SetSelectBaseSvtData(
        SvtEqCombineListViewManager_o *this,
        UserServantEntity_o *resData,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.baseUsrSvtData = resData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)resData,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SvtEqCombineListViewManager__SetSelectMaterialList(
        SvtEqCombineListViewManager_o *this,
        System_Collections_Generic_List_SvtEqCombineListViewItem__o *selectedItems,
        const MethodInfo *method)
{
  SetCombineData_o *v5; // x22
  struct SetCombineData_o **p_combineData; // x19
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  char *combineData; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x1
  struct SetCombineData_o *v22; // x8
  System_Collections_Generic_Dictionary_long__bool__c *v23; // x0
  System_Collections_Generic_Dictionary_long__bool__o *v24; // x20
  _BOOL8 v25; // x0
  const MethodInfo *v26; // x1
  SvtEqCombineListViewItem_o *current; // x21
  const MethodInfo *v28; // x1
  int64_t UserSvtId; // x0
  char isUseGrandServantEquip; // w2
  struct SetCombineData_o *v31; // x21
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_59322E6 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_long__bool__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_long__bool___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_long__bool__get_Keys__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_long__bool__TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__);
    sub_21FFC50(&SetCombineData_TypeInfo);
    byte_59322E6 = 1;
  }
  memset(&v46, 0, sizeof(v46));
  v5 = (SetCombineData_o *)sub_21FFEBC(SetCombineData_TypeInfo);
  SetCombineData___ctor(v5, 0);
  p_combineData = &this->fields.combineData;
  this->fields.combineData = v5;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.combineData, (int32_t)v5, v7, v8, v9, v10, v11, v12);
  combineData = (char *)this->fields.combineData;
  if ( !combineData )
    goto LABEL_24;
  baseUsrSvtData = this->fields.baseUsrSvtData;
  *((_QWORD *)combineData + 2) = baseUsrSvtData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)(combineData + 16),
    (int32_t)baseUsrSvtData,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v22 = this->fields.combineData;
  if ( !v22 )
    goto LABEL_24;
  *(_OWORD *)&v22->fields.selectSum = *(_OWORD *)&this->fields.selectSum;
  *(_QWORD *)&v22->fields.getHpAdjustVal = *(_QWORD *)&this->fields.getHpUpVal;
  v23 = System_Collections_Generic_Dictionary_long__bool__TypeInfo;
  v22->fields.isAdjustMax = this->fields.isAllUpMax;
  v24 = (System_Collections_Generic_Dictionary_long__bool__o *)sub_21FFEBC(v23);
  System_Collections_Generic_Dictionary_long__bool____ctor(
    v24,
    (const MethodInfo_3F8E860 *)Method_System_Collections_Generic_Dictionary_long__bool___ctor__);
  if ( !selectedItems )
    goto LABEL_24;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v45,
    (System_Collections_Generic_List_object__o *)selectedItems,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__);
  v46 = v45;
  v45.fields._list = 0;
  *(_QWORD *)&v45.fields._index = &v46;
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v46,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__);
    if ( !v25 )
      break;
    current = (SvtEqCombineListViewItem_o *)v46.fields._current;
    if ( !v46.fields._current )
      sub_21FFECC(v25, v26);
    if ( SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)v46.fields._current, v26) >= 1 )
    {
      UserSvtId = SvtEqCombineListViewItem__get_UserSvtId(current, v28);
      if ( current->fields.isEquiped || current->fields.isUseSupportEquip || current->fields.isUseRecommendSupportEquip )
      {
        isUseGrandServantEquip = 1;
        if ( !v24 )
          goto LABEL_16;
      }
      else
      {
        isUseGrandServantEquip = current->fields.isUseGrandServantEquip;
        if ( !v24 )
LABEL_16:
          sub_21FFECC(UserSvtId, UserSvtId);
      }
      System_Collections_Generic_Dictionary_long__bool___Add(
        v24,
        UserSvtId,
        isUseGrandServantEquip,
        (const MethodInfo_3F8F21C *)Method_System_Collections_Generic_Dictionary_long__bool__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v46,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
  if ( !v24 )
    goto LABEL_24;
  if ( System_Collections_Generic_Dictionary_long__bool___get_Count(
         v24,
         (const MethodInfo_3F8EEAC *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__) <= 0 )
    return;
  v31 = *p_combineData;
  Keys = System_Collections_Generic_Dictionary_long__bool___get_Keys(
           v24,
           (const MethodInfo_3F8EEBC *)Method_System_Collections_Generic_Dictionary_long__bool__get_Keys__);
  combineData = (char *)System_Linq_Enumerable__ToArray_long_(
                          (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                          (const MethodInfo_38685DC *)Method_System_Linq_Enumerable_ToArray_long___);
  if ( !v31
    || (v31->fields.materialUsrSvtIdList = (struct System_Int64_array *)combineData,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v31->fields.materialUsrSvtIdList,
          (int32_t)combineData,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38),
        (combineData = (char *)*p_combineData) == 0) )
  {
LABEL_24:
    sub_21FFECC(combineData, v13);
  }
  *((_QWORD *)combineData + 8) = v24;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(combineData + 64), (int32_t)v24, v39, v40, v41, v42, v43, v44);
}


void SvtEqCombineListViewManager__SetSelectedMaterialInfo(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o **p_selectedMtSvtList_k__BackingField; // x22
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  int64_t tempMaterialUsrSvtIdList; // x0
  SvtEqCombineListViewItem_c *v12; // x1
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *tempMtSvtList; // x8
  int32_t size; // w2
  int v15; // w9
  System_Collections_Generic_List_SvtEqCombineListViewItem__o *SelectedMaterialList; // x20
  System_Collections_Generic_List_long__o *v17; // x21
  int v18; // w24
  int32_t v19; // w23
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 naturalAligment; // x9
  struct System_Int64_array *items; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x1
  __int64 v27; // x2
  SvtEqCombineListViewManager___c_c *v28; // x0
  struct SvtEqCombineListViewManager___c_StaticFields *static_fields; // x8
  System_Func_object__long__o *_9__142_0; // x22
  Il2CppObject *v31; // x23
  struct SvtEqCombineListViewManager___c_StaticFields *v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  struct System_Collections_Generic_List_long__o *v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  System_Collections_Generic_IEnumerable_T__o *selectMaterialUsrSvtIdList; // x1
  int v48; // w8
  const MethodInfo_4438370 *v49; // x2
  struct System_Int64_array *v50; // x0
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  const MethodInfo *v57; // x2
  SvtEqCombineListViewManager_o *v58; // x0
  System_Collections_Generic_List_SvtEqCombineListViewItem__o *v59; // x1

  if ( (byte_59322E5 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_SvtEqCombineListViewItem__long___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_long___);
    sub_21FFC50(&System_Func_SvtEqCombineListViewItem__long__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&SvtEqCombineListViewItem_TypeInfo);
    sub_21FFC50(&Method_SvtEqCombineListViewManager___c__SetSelectedMaterialInfo_b__142_0__);
    sub_21FFC50(&SvtEqCombineListViewManager___c_TypeInfo);
    byte_59322E5 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
  p_selectedMtSvtList_k__BackingField = &this->fields._selectedMtSvtList_k__BackingField;
  this->fields._selectedMtSvtList_k__BackingField = (struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v3;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._selectedMtSvtList_k__BackingField,
    (int32_t)v3,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  tempMtSvtList = this->fields.tempMtSvtList;
  if ( !tempMtSvtList )
    goto LABEL_32;
  size = tempMtSvtList->fields._size;
  v15 = tempMtSvtList->fields._version + 1;
  tempMtSvtList->fields._size = 0;
  tempMtSvtList->fields._version = v15;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)tempMtSvtList->fields._items, 0, size, 0);
  SelectedMaterialList = SvtEqCombineListViewManager__GetSelectedMaterialList(this, (const MethodInfo *)v12);
  v17 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v17,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( !SelectedMaterialList )
    goto LABEL_32;
  v18 = SelectedMaterialList->fields._size;
  if ( v18 < 1 )
  {
LABEL_20:
    tempMaterialUsrSvtIdList = (int64_t)this->fields.tempMtSvtList;
    if ( tempMaterialUsrSvtIdList )
    {
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)tempMaterialUsrSvtIdList,
        (System_Collections_Generic_IEnumerable_T__o *)SelectedMaterialList,
        (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__AddRange__);
      tempMaterialUsrSvtIdList = (int64_t)*p_selectedMtSvtList_k__BackingField;
      if ( *p_selectedMtSvtList_k__BackingField )
      {
        System_Collections_Generic_List_object___AddRange(
          (System_Collections_Generic_List_object__o *)tempMaterialUsrSvtIdList,
          (System_Collections_Generic_IEnumerable_T__o *)SelectedMaterialList,
          (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__AddRange__);
        v28 = SvtEqCombineListViewManager___c_TypeInfo;
        if ( !*(&SvtEqCombineListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager___c_TypeInfo, v26, v27);
          v28 = SvtEqCombineListViewManager___c_TypeInfo;
        }
        static_fields = v28->static_fields;
        _9__142_0 = (System_Func_object__long__o *)static_fields->__9__142_0;
        if ( !_9__142_0 )
        {
          if ( !*(&v28->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v28, v26, v27);
            static_fields = SvtEqCombineListViewManager___c_TypeInfo->static_fields;
          }
          v31 = (Il2CppObject *)static_fields->__9;
          _9__142_0 = (System_Func_object__long__o *)sub_21FFEBC(System_Func_SvtEqCombineListViewItem__long__TypeInfo);
          System_Func_object__long____ctor(
            _9__142_0,
            v31,
            Method_SvtEqCombineListViewManager___c__SetSelectedMaterialInfo_b__142_0__,
            0);
          v32 = SvtEqCombineListViewManager___c_TypeInfo->static_fields;
          v32->__9__142_0 = (struct System_Func_SvtEqCombineListViewItem__long__o *)_9__142_0;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v32->__9__142_0,
            (int32_t)_9__142_0,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38);
        }
        v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__long_(
                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)SelectedMaterialList,
                                                                     (System_Func_TSource__TResult__o *)_9__142_0,
                                                                     (const MethodInfo_385D9DC *)Method_System_Linq_Enumerable_Select_SvtEqCombineListViewItem__long___);
        v40 = (struct System_Collections_Generic_List_long__o *)System_Linq_Enumerable__ToList_long_(
                                                                  v39,
                                                                  (const MethodInfo_386D7A8 *)Method_System_Linq_Enumerable_ToList_long___);
        this->fields.selectMaterialUsrSvtIdList = v40;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.selectMaterialUsrSvtIdList,
          (int32_t)v40,
          v41,
          v42,
          v43,
          v44,
          v45,
          v46);
        tempMaterialUsrSvtIdList = (int64_t)this->fields.tempMaterialUsrSvtIdList;
        if ( tempMaterialUsrSvtIdList )
        {
          selectMaterialUsrSvtIdList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.selectMaterialUsrSvtIdList;
          v48 = *(_DWORD *)(tempMaterialUsrSvtIdList + 28) + 1;
          v49 = (const MethodInfo_4438370 *)Method_System_Collections_Generic_List_long__AddRange__;
          *(_DWORD *)(tempMaterialUsrSvtIdList + 24) = 0;
          *(_DWORD *)(tempMaterialUsrSvtIdList + 28) = v48;
          System_Collections_Generic_List_long___AddRange(
            (System_Collections_Generic_List_long__o *)tempMaterialUsrSvtIdList,
            selectMaterialUsrSvtIdList,
            v49);
          if ( v17 )
          {
            v50 = System_Collections_Generic_List_long___ToArray(
                    v17,
                    (const MethodInfo_4439BE4 *)Method_System_Collections_Generic_List_long__ToArray__);
            this->fields.highRarityList = v50;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&this->fields.highRarityList,
              (int32_t)v50,
              v51,
              v52,
              v53,
              v54,
              v55,
              v56);
            v58 = this;
            v59 = SelectedMaterialList;
            goto LABEL_31;
          }
        }
      }
    }
LABEL_32:
    sub_21FFECC(tempMaterialUsrSvtIdList, v12);
  }
  v19 = 0;
  while ( 1 )
  {
    tempMaterialUsrSvtIdList = (int64_t)this->fields.itemList;
    if ( !tempMaterialUsrSvtIdList )
      goto LABEL_32;
    tempMaterialUsrSvtIdList = (int64_t)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)tempMaterialUsrSvtIdList,
                                          v19,
                                          (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !tempMaterialUsrSvtIdList )
      goto LABEL_32;
    v12 = SvtEqCombineListViewItem_TypeInfo;
    naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)tempMaterialUsrSvtIdList + 304LL) < (unsigned int)naturalAligment
      || *(SvtEqCombineListViewItem_c **)(*(_QWORD *)(*(_QWORD *)tempMaterialUsrSvtIdList + 200LL)
                                        + 8 * naturalAligment
                                        - 8) != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    if ( *(int *)(tempMaterialUsrSvtIdList + 164) >= 3 )
    {
      tempMaterialUsrSvtIdList = SvtEqCombineListViewItem__get_UserSvtId(
                                   (SvtEqCombineListViewItem_o *)tempMaterialUsrSvtIdList,
                                   (const MethodInfo *)SvtEqCombineListViewItem_TypeInfo);
      if ( !v17 )
        goto LABEL_32;
      items = v17->fields._items;
      v24 = Method_System_Collections_Generic_List_long__Add__;
      ++v17->fields._version;
      if ( !items )
        goto LABEL_32;
      v25 = v17->fields._size;
      v12 = (SvtEqCombineListViewItem_c *)tempMaterialUsrSvtIdList;
      if ( (unsigned int)v25 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v17,
          tempMaterialUsrSvtIdList,
          *(const MethodInfo_4438164 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v17->fields._size = v25 + 1;
        items->m_Items[v25] = tempMaterialUsrSvtIdList;
      }
    }
    if ( v18 == ++v19 )
      goto LABEL_20;
  }
  v58 = (SvtEqCombineListViewManager_o *)sub_220024C(
                                           tempMaterialUsrSvtIdList,
                                           SvtEqCombineListViewItem_TypeInfo,
                                           v20,
                                           v21);
LABEL_31:
  SvtEqCombineListViewManager__SetSelectMaterialList(v58, v59, v57);
}


void SvtEqCombineListViewManager__SetSelectedSvtList(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *tempMtSvtList; // x1

  tempMtSvtList = this->fields.tempMtSvtList;
  if ( tempMtSvtList )
  {
    this->fields._selectedMtSvtList_k__BackingField = tempMtSvtList;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields._selectedMtSvtList_k__BackingField,
      (int32_t)tempMtSvtList,
      v2,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void SvtEqCombineListViewManager__SetServantList(
        SvtEqCombineListViewManager_o *this,
        int32_t type,
        EventUpValSetupInfo_o *setupInfo,
        EventUpValSetupInfo_o *finishSetupInfo,
        const MethodInfo *method)
{
  int64_t emptyListNoticeLabel; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct ListViewSort_o *sort; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeButtonSprite; // x23
  Il2CppObject *MasterData_object; // x0
  struct UserServantMaster_o **p_userServantMaster; // x25
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  UserGameEntity_o *SelfUserGame; // x20
  int64_t qp; // x8
  UILabel_o *haveQpLabel; // x24
  Il2CppObject *v28; // x0
  __int64 v29; // x0
  UILabel_o *nextExpLabel; // x24
  Il2CppObject *v31; // x0
  System_String_o *v32; // x2
  UserServantEntity_array *ServantEquipList; // x24
  const MethodInfo *v34; // x2
  int v35; // w20
  int32_t FriendShipSvtEquipNum; // w0
  System_Collections_Generic_List_object__o *v37; // x26
  System_Collections_Generic_List_object__o *v38; // x27
  int max_length; // w8
  __int64 v40; // x20
  UserServantEntity_o *v41; // x28
  __int128 v42; // q1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v44; // q1
  int64_t v45; // x29
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x0
  UILabel_o *v55; // x26
  Il2CppObject *v56; // x0
  System_Collections_Generic_List_object__o *v57; // x25
  System_Collections_Generic_List_object__o *v58; // x0
  const MethodInfo *v59; // x2
  int32_t v60; // w24
  __int64 v61; // x2
  __int128 v62; // q1
  struct UserServantEntity_o *v63; // x8
  __int128 v64; // q1
  int v65; // w20
  int32_t v66; // w0
  int v67; // w20
  UILabel_o *v68; // x25
  Il2CppObject *v69; // x0
  int v70; // w8
  unsigned int v71; // w25
  Il2CppClass **v72; // x28
  Il2CppClass *v73; // x8
  UserServantEntity_o **v74; // x28
  Il2CppClass *v75; // t1
  Il2CppType byval_arg; // q1
  int64_t v77; // x26
  char v78; // w23
  int32_t v79; // w22
  UserServantEntity_o *v80; // x28
  UserServantEntity_o *v81; // x29
  int64_t favoriteUserSvtId; // x20
  SvtEqCombineListViewItem_o *v83; // x27
  System_String_o *v84; // x2
  System_String_o *v85; // x3
  int32_t v86; // w4
  int32_t v87; // w5
  bool v88; // w6
  bool v89; // w7
  struct System_Collections_Generic_List_long__o *selectMaterialUsrSvtIdList; // x8
  __int64 v91; // x8
  _QWORD *v92; // x9
  __int64 v93; // x10
  __int64 v94; // x8
  int32_t v95; // w27
  int64_t Item; // x8
  bool v97; // w8
  __int64 v98; // x1
  __int64 v99; // x2
  UILabel_o *servantInfoLabel; // x20
  System_String_o *v101; // x21
  Il2CppObject *v102; // x22
  Il2CppObject *v103; // x0
  const MethodInfo *v104; // x1
  const MethodInfo *v105; // x1
  const MethodInfo *v106; // [xsp+8h] [xbp-178h]
  int v107; // [xsp+24h] [xbp-15Ch]
  int v110; // [xsp+3Ch] [xbp-144h]
  UserGameEntity_o *v111; // [xsp+40h] [xbp-140h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v113; // [xsp+50h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v114; // [xsp+70h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v115; // [xsp+90h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v116; // [xsp+B0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v117; // [xsp+D0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v118; // [xsp+F0h] [xbp-90h] BYREF
  int32_t svtEquipKeep; // [xsp+110h] [xbp-70h] BYREF
  float barExp; // [xsp+114h] [xbp-6Ch] BYREF
  int32_t lateExp[2]; // [xsp+118h] [xbp-68h] BYREF

  if ( (byte_59322D0 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__Remove__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity___ctor___91444648);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&SvtEqCombineListViewItem_TypeInfo);
    sub_21FFC50(&StringLiteral_26423/*"{0:N0}"*/);
    sub_21FFC50(&StringLiteral_12979/*"SUM_INFO"*/);
    byte_59322D0 = 1;
  }
  emptyListNoticeLabel = (int64_t)this->fields.emptyListNoticeLabel;
  *(_QWORD *)lateExp = 0;
  barExp = 0.0;
  if ( !emptyListNoticeLabel )
    goto LABEL_104;
  emptyListNoticeLabel = (int64_t)UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)emptyListNoticeLabel,
                                    0);
  if ( !emptyListNoticeLabel )
    goto LABEL_104;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 0, 0);
  sort = this->fields.sort;
  this->fields.itemType = type;
  if ( !sort )
    goto LABEL_104;
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
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.seed,
      (int32_t)normalSizeSeed,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  emptyListNoticeLabel = (int64_t)this->fields.sort;
  if ( !emptyListNoticeLabel )
    goto LABEL_104;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  emptyListNoticeLabel = (int64_t)ListViewSort__GetScaleKindSpriteName(
                                    (ListViewSort_o *)emptyListNoticeLabel,
                                    this->fields.scaleType,
                                    0);
  if ( !scaleChangeButtonSprite )
    goto LABEL_104;
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)emptyListNoticeLabel, 0);
  emptyListNoticeLabel = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !emptyListNoticeLabel )
    goto LABEL_104;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)emptyListNoticeLabel,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = &this->fields.userServantMaster;
  this->fields.userServantMaster = (struct UserServantMaster_o *)MasterData_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userServantMaster,
    (int32_t)MasterData_object,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !SelfUserGame )
    goto LABEL_104;
  v111 = SelfUserGame;
  qp = SelfUserGame->fields.qp;
  haveQpLabel = this->fields.haveQpLabel;
  this->fields.userQP = qp;
  v118.fields.currentCryptoKey = qp;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v118);
  emptyListNoticeLabel = (int64_t)System_String__Format((System_String_o *)StringLiteral_26423/*"{0:N0}"*/, v28, 0);
  if ( !haveQpLabel )
    goto LABEL_104;
  UILabel__set_text(haveQpLabel, (System_String_o *)emptyListNoticeLabel, 0);
  v29 = qword_594C070;
  nextExpLabel = this->fields.nextExpLabel;
  *(_QWORD *)&this->fields.getHpUpVal = 0;
  this->fields.isAllUpMax = 0;
  lateExp[0] = 0;
  *(_OWORD *)&this->fields.selectSum = 0u;
  svtEquipKeep = 0;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(v29, &svtEquipKeep);
  emptyListNoticeLabel = (int64_t)System_String__Format((System_String_o *)StringLiteral_26423/*"{0:N0}"*/, v31, 0);
  if ( !nextExpLabel )
    goto LABEL_104;
  UILabel__set_text(nextExpLabel, (System_String_o *)emptyListNoticeLabel, 0);
  if ( type )
  {
    v107 = 0;
    ServantEquipList = 0;
  }
  else
  {
    emptyListNoticeLabel = (int64_t)this->fields.levelUpInfoImg;
    if ( !emptyListNoticeLabel )
      goto LABEL_104;
    emptyListNoticeLabel = (int64_t)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)emptyListNoticeLabel,
                                      0);
    if ( !emptyListNoticeLabel )
      goto LABEL_104;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 0, 0);
    emptyListNoticeLabel = (int64_t)*p_userServantMaster;
    if ( !*p_userServantMaster )
      goto LABEL_104;
    emptyListNoticeLabel = (int64_t)UserServantMaster__getServantEquipList(
                                      (UserServantMaster_o *)emptyListNoticeLabel,
                                      0);
    if ( !emptyListNoticeLabel )
      goto LABEL_104;
    v35 = *(_DWORD *)(emptyListNoticeLabel + 24);
    ServantEquipList = (UserServantEntity_array *)emptyListNoticeLabel;
    FriendShipSvtEquipNum = SvtEqCombineListViewManager__GetFriendShipSvtEquipNum(
                              (SvtEqCombineListViewManager_o *)emptyListNoticeLabel,
                              (UserServantEntity_array *)emptyListNoticeLabel,
                              v34);
    v107 = v35 - FriendShipSvtEquipNum;
    if ( FriendShipSvtEquipNum <= 0 && v107 <= 0 )
    {
      emptyListNoticeLabel = (int64_t)this->fields.emptyListNoticeLabel;
      if ( !emptyListNoticeLabel )
        goto LABEL_104;
      emptyListNoticeLabel = (int64_t)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)emptyListNoticeLabel,
                                        0);
      if ( !emptyListNoticeLabel )
        goto LABEL_104;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 1, 0);
    }
    v37 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_71627776(
      v37,
      (System_Collections_Generic_IEnumerable_T__o *)ServantEquipList,
      (const MethodInfo_444F400 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___91444648);
    v38 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v38,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( !this->fields.baseUsrSvtData )
      goto LABEL_75;
    max_length = ServantEquipList->max_length;
    if ( max_length >= 1 )
    {
      v40 = 0;
      while ( (unsigned int)v40 < max_length )
      {
        v41 = ServantEquipList->m_Items[v40];
        if ( !v41 )
          goto LABEL_104;
        v42 = *(_OWORD *)&v41->fields.id.fields.fakeValue;
        *(_OWORD *)&v118.fields.currentCryptoKey = *(_OWORD *)&v41->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v118.fields.fakeValue = v42;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&type, v32);
        v117 = v118;
        emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v117, 0);
        baseUsrSvtData = this->fields.baseUsrSvtData;
        if ( !baseUsrSvtData )
          goto LABEL_104;
        v44 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
        v45 = emptyListNoticeLabel;
        *(_OWORD *)&v116.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v116.fields.fakeValue = v44;
        emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v116, 0);
        if ( v45 == emptyListNoticeLabel )
        {
          if ( !v38 )
            goto LABEL_104;
          items = v38->fields._items;
          v52 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v38->fields._version;
          if ( !items )
            goto LABEL_104;
          size = v38->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v38,
              (Il2CppObject *)v41,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
          }
          else
          {
            v54 = &items->obj.klass + size;
            v38->fields._size = size + 1;
            v54[4] = (Il2CppClass *)v41;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v54 + 4), (int32_t)v41, v32, v46, v47, v48, v49, v50);
          }
          if ( !v37 )
            goto LABEL_104;
          emptyListNoticeLabel = System_Collections_Generic_List_object___Remove(
                                   v37,
                                   (Il2CppObject *)v41,
                                   (const MethodInfo_445101C *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
        }
        max_length = ServantEquipList->max_length;
        if ( (int)++v40 >= max_length )
          goto LABEL_47;
      }
LABEL_109:
      sub_21FFED4(emptyListNoticeLabel);
    }
LABEL_47:
    if ( !v38 )
      goto LABEL_104;
    System_Collections_Generic_List_object___AddRange(
      v38,
      (System_Collections_Generic_IEnumerable_T__o *)v37,
      (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    emptyListNoticeLabel = (int64_t)System_Collections_Generic_List_object___ToArray(
                                      v38,
                                      (const MethodInfo_445164C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    if ( !this->fields.baseUsrSvtData )
      goto LABEL_104;
    ServantEquipList = (UserServantEntity_array *)emptyListNoticeLabel;
    UserServantEntity__getExpInfo(this->fields.baseUsrSvtData, &lateExp[1], lateExp, &barExp, 0);
    v55 = this->fields.nextExpLabel;
    LODWORD(v118.fields.currentCryptoKey) = lateExp[0];
    v56 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v118);
    emptyListNoticeLabel = (int64_t)System_String__Format((System_String_o *)StringLiteral_26423/*"{0:N0}"*/, v56, 0);
    if ( !v55 )
      goto LABEL_104;
    UILabel__set_text(v55, (System_String_o *)emptyListNoticeLabel, 0);
  }
  if ( type != 1 )
  {
    if ( !ServantEquipList )
      goto LABEL_104;
LABEL_75:
    v110 = 0;
    goto LABEL_76;
  }
  emptyListNoticeLabel = (int64_t)*p_userServantMaster;
  if ( !*p_userServantMaster )
    goto LABEL_104;
  ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)emptyListNoticeLabel, 0);
  v57 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_71627776(
    v57,
    (System_Collections_Generic_IEnumerable_T__o *)ServantEquipList,
    (const MethodInfo_444F400 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___91444648);
  v58 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v58,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( this->fields.baseUsrSvtData )
  {
    if ( !v57 )
      goto LABEL_104;
    if ( v57->fields._size >= 1 )
    {
      v60 = 0;
      while ( 1 )
      {
        emptyListNoticeLabel = (int64_t)System_Collections_Generic_List_object___get_Item(
                                          v57,
                                          v60,
                                          (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
        if ( !emptyListNoticeLabel )
          break;
        v62 = *(_OWORD *)(emptyListNoticeLabel + 32);
        *(_OWORD *)&v118.fields.currentCryptoKey = *(_OWORD *)(emptyListNoticeLabel + 16);
        *(_OWORD *)&v118.fields.fakeValue = v62;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&type, v61);
        v115 = v118;
        emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v115, 0);
        v63 = this->fields.baseUsrSvtData;
        if ( !v63 )
          break;
        v64 = *(_OWORD *)&v63->fields.id.fields.fakeValue;
        *(_OWORD *)&v114.fields.currentCryptoKey = *(_OWORD *)&v63->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v114.fields.fakeValue = v64;
        if ( emptyListNoticeLabel == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v114, 0) )
          System_Collections_Generic_List_object___RemoveAt(
            v57,
            v60,
            (const MethodInfo_44512C4 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
        if ( ++v60 >= v57->fields._size )
          goto LABEL_64;
      }
LABEL_104:
      sub_21FFECC(emptyListNoticeLabel, *(_QWORD *)&type);
    }
LABEL_64:
    emptyListNoticeLabel = (int64_t)System_Collections_Generic_List_object___ToArray(
                                      v57,
                                      (const MethodInfo_445164C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    ServantEquipList = (UserServantEntity_array *)emptyListNoticeLabel;
  }
  if ( !ServantEquipList )
    goto LABEL_104;
  v65 = ServantEquipList->max_length;
  v66 = SvtEqCombineListViewManager__GetFriendShipSvtEquipNum(
          (SvtEqCombineListViewManager_o *)emptyListNoticeLabel,
          ServantEquipList,
          v59);
  v67 = v65 - v66;
  if ( v66 <= 0 && v67 <= 0 )
  {
    emptyListNoticeLabel = (int64_t)this->fields.emptyListNoticeLabel;
    if ( !emptyListNoticeLabel )
      goto LABEL_104;
    emptyListNoticeLabel = (int64_t)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)emptyListNoticeLabel,
                                      0);
    if ( !emptyListNoticeLabel )
      goto LABEL_104;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 1, 0);
  }
  emptyListNoticeLabel = (int64_t)this->fields.baseUsrSvtData;
  v107 = v67;
  if ( !emptyListNoticeLabel )
    goto LABEL_104;
  UserServantEntity__getExpInfo((UserServantEntity_o *)emptyListNoticeLabel, &lateExp[1], lateExp, &barExp, 0);
  v68 = this->fields.nextExpLabel;
  LODWORD(v118.fields.currentCryptoKey) = lateExp[0];
  v69 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v118);
  emptyListNoticeLabel = (int64_t)System_String__Format((System_String_o *)StringLiteral_26423/*"{0:N0}"*/, v69, 0);
  if ( !v68 )
    goto LABEL_104;
  UILabel__set_text(v68, (System_String_o *)emptyListNoticeLabel, 0);
  v110 = 1;
LABEL_76:
  v70 = ServantEquipList->max_length;
  if ( v70 >= 1 )
  {
    v71 = 0;
    while ( v71 < v70 )
    {
      v72 = &ServantEquipList->obj.klass + (int)v71;
      v75 = v72[4];
      v74 = (UserServantEntity_o **)(v72 + 4);
      v73 = v75;
      if ( !v75 )
        goto LABEL_104;
      byval_arg = v73->_1.byval_arg;
      *(_OWORD *)&v118.fields.currentCryptoKey = *(_OWORD *)&v73->_1.name;
      *(Il2CppType *)&v118.fields.fakeValue = byval_arg;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&type, v32);
      v113 = v118;
      emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v113, 0);
      v77 = emptyListNoticeLabel;
      if ( v110
        && (emptyListNoticeLabel = BasicHelper__IsNullOrEmpty(
                                     (System_Collections_ICollection_o *)this->fields.selectMaterialUsrSvtIdList,
                                     0),
            (emptyListNoticeLabel & 1) == 0) )
      {
        emptyListNoticeLabel = (int64_t)this->fields.selectMaterialUsrSvtIdList;
        if ( !emptyListNoticeLabel )
          goto LABEL_104;
        v79 = 0;
        v78 = 0;
        v95 = 0;
        while ( v95 < *(_DWORD *)(emptyListNoticeLabel + 24) )
        {
          Item = System_Collections_Generic_List_long___get_Item(
                   (System_Collections_Generic_List_long__o *)emptyListNoticeLabel,
                   v95,
                   (const MethodInfo_4437E70 *)Method_System_Collections_Generic_List_long__get_Item__);
          emptyListNoticeLabel = (int64_t)this->fields.selectMaterialUsrSvtIdList;
          v97 = Item == v77;
          if ( v97 )
            v79 = v95;
          ++v95;
          v78 |= v97;
          if ( !emptyListNoticeLabel )
            goto LABEL_104;
        }
      }
      else
      {
        v78 = 0;
        v79 = 0;
      }
      if ( v71 >= LODWORD(ServantEquipList->max_length) )
        goto LABEL_109;
      v80 = *v74;
      v81 = this->fields.baseUsrSvtData;
      favoriteUserSvtId = v111->fields.favoriteUserSvtId;
      v83 = (SvtEqCombineListViewItem_o *)sub_21FFEBC(SvtEqCombineListViewItem_TypeInfo);
      SvtEqCombineListViewItem___ctor(
        v83,
        type,
        v71,
        v80,
        v77 == favoriteUserSvtId,
        v81,
        v78 & 1,
        setupInfo,
        finishSetupInfo,
        v106);
      if ( (v78 & 1) != 0 )
      {
        if ( !v83 )
          goto LABEL_104;
        v83->fields.selectNum = v79;
        selectMaterialUsrSvtIdList = this->fields.selectMaterialUsrSvtIdList;
        ++this->fields.selectSum;
        if ( !selectMaterialUsrSvtIdList )
          goto LABEL_104;
        if ( v79 == selectMaterialUsrSvtIdList->fields._size - 1 )
          v83->fields.isLastSelectMaterial = 1;
      }
      emptyListNoticeLabel = (int64_t)this->fields.itemList;
      if ( !emptyListNoticeLabel )
        goto LABEL_104;
      v91 = *(_QWORD *)(emptyListNoticeLabel + 16);
      v92 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(emptyListNoticeLabel + 28);
      if ( !v91 )
        goto LABEL_104;
      v93 = *(int *)(emptyListNoticeLabel + 24);
      if ( (unsigned int)v93 >= *(_DWORD *)(v91 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)emptyListNoticeLabel,
          (Il2CppObject *)v83,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
      }
      else
      {
        v94 = v91 + 8 * v93;
        *(_DWORD *)(emptyListNoticeLabel + 24) = v93 + 1;
        *(_QWORD *)(v94 + 32) = v83;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v94 + 32), (int32_t)v83, v84, v85, v86, v87, v88, v89);
      }
      v70 = ServantEquipList->max_length;
      if ( (int)++v71 >= v70 )
        goto LABEL_105;
    }
    goto LABEL_109;
  }
LABEL_105:
  SvtEqCombineListViewManager__RefrashListDisp(this, *(const MethodInfo **)&type);
  servantInfoLabel = this->fields.servantInfoLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v98, v99);
  v101 = LocalizationManager__Get((System_String_o *)StringLiteral_12979/*"SUM_INFO"*/, 0);
  LODWORD(v118.fields.currentCryptoKey) = v107;
  v102 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v118);
  svtEquipKeep = v111->fields.svtEquipKeep;
  v103 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &svtEquipKeep);
  emptyListNoticeLabel = (int64_t)System_String__Format_75484576(v101, v102, v103, 0);
  if ( !servantInfoLabel )
    goto LABEL_104;
  UILabel__set_text(servantInfoLabel, (System_String_o *)emptyListNoticeLabel, 0);
  SvtEqCombineListViewManager__SetMaterialSvtInfo(this, v104);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  SvtEqCombineListViewManager__SetFilterButtonImage(this, v105);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0);
}


void SvtEqCombineListViewManager__SetSortButtonImage(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  ListViewSort_o *sort; // x0
  UILabel_o *v8; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  __int64 v10; // x2
  struct ListViewSort_o *v11; // x8
  int32_t sortKind; // w9
  System_String_o **v13; // x8
  struct ListViewSort_o *v14; // x8
  System_String_o **v15; // x9
  System_String_o **v16; // x10
  System_String_o **v17; // x8
  System_String_o **v18; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v20; // x20

  if ( (byte_59322F9 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_18253/*"btn_sort_up"*/);
    sub_21FFC50(&StringLiteral_18357/*"btn_txt_up"*/);
    sub_21FFC50(&StringLiteral_18306/*"btn_txt_new"*/);
    sub_21FFC50(&StringLiteral_18296/*"btn_txt_down"*/);
    sub_21FFC50(&StringLiteral_18314/*"btn_txt_old"*/);
    sub_21FFC50(&StringLiteral_18250/*"btn_sort_down"*/);
    byte_59322F9 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_43;
    v8 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v8 )
      goto LABEL_43;
    UILabel__set_text(v8, (System_String_o *)sort, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v11 = this->fields.sort;
    if ( !v11 )
      goto LABEL_43;
    sortKind = v11->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_43;
      v13 = (System_String_o **)(v11->fields.isAscendingOrder ? &StringLiteral_18314/*"btn_txt_old"*/ : &StringLiteral_18306/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v13, 0);
      v14 = this->fields.sort;
      if ( !v14 )
        goto LABEL_43;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_43;
      v15 = (System_String_o **)&StringLiteral_18250/*"btn_sort_down"*/;
      v16 = (System_String_o **)&StringLiteral_18253/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_43;
      v17 = (System_String_o **)(v11->fields.isAscendingOrder ? &StringLiteral_18357/*"btn_txt_up"*/ : &StringLiteral_18296/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v17, 0);
      v14 = this->fields.sort;
      if ( !v14 )
        goto LABEL_43;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_43;
      v15 = (System_String_o **)&StringLiteral_18253/*"btn_sort_up"*/;
      v16 = (System_String_o **)&StringLiteral_18250/*"btn_sort_down"*/;
    }
    if ( v14->fields.isAscendingOrder )
      v18 = v15;
    else
      v18 = v16;
    UISprite__set_spriteName((UISprite_o *)sort, *v18, 0);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v10);
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( sort )
    {
      v20 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(sort, this->fields.alignedBonusFilterInfos, 0, 0);
      if ( v20 )
      {
        UILabel__set_text(v20, (System_String_o *)sort, 0);
        sort = (ListViewSort_o *)this->fields.bonusFilterKindLabel;
        if ( sort )
        {
          UIWidget__set_width((UIWidget_o *)sort, 144, 0);
          sort = (ListViewSort_o *)this->fields.bonusFilterKindLabel;
          if ( sort )
          {
            ((void (__fastcall *)(ListViewSort_o *, void *))sort->klass[2]._1.parent)(
              sort,
              sort->klass[2]._1.generic_class);
            sort = (ListViewSort_o *)this->fields.bonusFilterKindLabel;
            if ( sort )
            {
              UILabel__SetCondensedScale((UILabel_o *)sort, 144, 0, 0);
              return;
            }
          }
        }
      }
    }
LABEL_43:
    sub_21FFECC(sort, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void SvtEqCombineListViewManager__SetStatusKind(
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
  __int64 v15; // x1
  __int64 v16; // x2
  int32_t currentType; // w8
  UILabel_o *combineInfoMsgLb; // x20
  __int64 *v19; // x8
  int32_t v20; // w8
  UILabel_o *v21; // x20
  __int64 *v22; // x8

  v3 = modeKind;
  if ( (byte_59322CD & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_18379/*"button_allchoice_reg"*/);
    sub_21FFC50(&StringLiteral_18382/*"button_alllock_unreg"*/);
    sub_21FFC50(&StringLiteral_12141/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_21FFC50(&StringLiteral_12142/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_21FFC50(&StringLiteral_18395/*"button_select_reg"*/);
    sub_21FFC50(&StringLiteral_7500/*"HEADER_MSG_SVTEQ_MATERIAL"*/);
    sub_21FFC50(&StringLiteral_7499/*"HEADER_MSG_SVTEQ_BASE"*/);
    sub_21FFC50(&StringLiteral_18396/*"button_select_unreg"*/);
    sub_21FFC50(&StringLiteral_18381/*"button_alllock_reg"*/);
    sub_21FFC50(&StringLiteral_18380/*"button_allchoice_unreg"*/);
    byte_59322CD = 1;
  }
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  this->fields.modeKind = v3;
  if ( !statusTabButton )
    goto LABEL_51;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))statusTabButton->klass[1]._1.name)(
    statusTabButton,
    1,
    statusTabButton->klass[1]._1.namespaze);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_51;
  UnityEngine_Behaviour__set_enabled(statusTabButton, v3 != 0, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabSprite;
  if ( !statusTabButton )
    goto LABEL_51;
  v6 = &StringLiteral_18395/*"button_select_reg"*/;
  if ( v3 )
    v6 = &StringLiteral_18396/*"button_select_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v6, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_51;
  statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppClass **))statusTabButton->klass[1]._1.nestedTypes)(
                                                 statusTabButton,
                                                 0,
                                                 0,
                                                 statusTabButton->klass[1]._1.implementedInterfaces);
  v7 = this->fields.statusTabButton;
  if ( !v7 )
    goto LABEL_51;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0);
  UICommonButton__SetColliderEnable(v7, enabled, 0, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_51;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))statusTabButton->klass[1]._1.name)(
    statusTabButton,
    1,
    statusTabButton->klass[1]._1.namespaze);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_51;
  UnityEngine_Behaviour__set_enabled(statusTabButton, v3 != 1, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
  if ( !statusTabButton )
    goto LABEL_51;
  v9 = &StringLiteral_18382/*"button_alllock_unreg"*/;
  if ( v3 == 1 )
    v9 = &StringLiteral_18381/*"button_alllock_reg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v9, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_51;
  statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppClass **))statusTabButton->klass[1]._1.nestedTypes)(
                                                 statusTabButton,
                                                 0,
                                                 0,
                                                 statusTabButton->klass[1]._1.implementedInterfaces);
  lockTabButton = this->fields.lockTabButton;
  if ( !lockTabButton )
    goto LABEL_51;
  v11 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0);
  UICommonButton__SetColliderEnable(lockTabButton, v11, 0, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_51;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))statusTabButton->klass[1]._1.name)(
    statusTabButton,
    1,
    statusTabButton->klass[1]._1.namespaze);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_51;
  UnityEngine_Behaviour__set_enabled(statusTabButton, v3 != 2, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
  if ( !statusTabButton )
    goto LABEL_51;
  v12 = &StringLiteral_18380/*"button_allchoice_unreg"*/;
  if ( v3 == 2 )
    v12 = &StringLiteral_18379/*"button_allchoice_reg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v12, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton
    || (statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppClass **))statusTabButton->klass[1]._1.nestedTypes)(
                                                       statusTabButton,
                                                       0,
                                                       0,
                                                       statusTabButton->klass[1]._1.implementedInterfaces),
        (choiceTabButton = this->fields.choiceTabButton) == 0) )
  {
LABEL_51:
    sub_21FFECC(statusTabButton, *(_QWORD *)&modeKind);
  }
  v14 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0);
  UICommonButton__SetColliderEnable(choiceTabButton, v14, 0, 0);
  currentType = this->fields.currentType;
  if ( currentType == 1 )
  {
    combineInfoMsgLb = this->fields.combineInfoMsgLb;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15, v16);
    v19 = &StringLiteral_7500/*"HEADER_MSG_SVTEQ_MATERIAL"*/;
  }
  else
  {
    if ( currentType )
      goto LABEL_34;
    combineInfoMsgLb = this->fields.combineInfoMsgLb;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15, v16);
    v19 = &StringLiteral_7499/*"HEADER_MSG_SVTEQ_BASE"*/;
  }
  statusTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v19, 0);
  if ( !combineInfoMsgLb )
    goto LABEL_51;
  UILabel__set_text(combineInfoMsgLb, (System_String_o *)statusTabButton, 0);
LABEL_34:
  v20 = this->fields.modeKind;
  if ( v20 == 2 )
  {
    v21 = this->fields.combineInfoMsgLb;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15, v16);
    v22 = &StringLiteral_12141/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
  }
  else
  {
    if ( v20 != 1 )
      goto LABEL_44;
    v21 = this->fields.combineInfoMsgLb;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15, v16);
    v22 = &StringLiteral_12142/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
  }
  statusTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v22, 0);
  if ( !v21 )
    goto LABEL_51;
  UILabel__set_text(v21, (System_String_o *)statusTabButton, 0);
LABEL_44:
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.combineInfoMsgLb;
  if ( (unsigned int)(this->fields.modeKind - 1) >= 2 )
  {
    if ( this->fields.currentType )
      *(_QWORD *)&modeKind = 12;
    else
      *(_QWORD *)&modeKind = 20;
  }
  else
  {
    *(_QWORD *)&modeKind = 14;
  }
  if ( !statusTabButton )
    goto LABEL_51;
  UILabel__set_fontSize((UILabel_o *)statusTabButton, modeKind, 0);
}


void SvtEqCombineListViewManager__StatusRequest(
        SvtEqCombineListViewManager_o *this,
        SvtEqCombineListViewManager_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t modeKind; // w8
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *Request_object; // x0
  __int64 v17; // x1
  System_Int64_array *v18; // x1
  System_Int64_array *v19; // x2
  bool v20; // w4
  bool v21; // w5
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  NetworkManager_ResultCallbackFunc_o *v28; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  System_Int64_array *v31; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_5932301 & 1) == 0 )
  {
    sub_21FFC50(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_SvtEqCombineListViewManager_EndStatusSync__);
    byte_5932301 = 1;
  }
  modeKind = this->fields.modeKind;
  unlockList = 0;
  lockList = 0;
  v31 = 0;
  choiceList = 0;
  if ( modeKind == 2 )
  {
    if ( SvtEqCombineListViewManager__GetSwapChoiceList(this, &choiceList, &v31, v3) )
    {
      this->fields.requestCallback = callback;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.requestCallback,
        (int32_t)callback,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      v28 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v28,
        (Il2CppObject *)this,
        Method_SvtEqCombineListViewManager_EndStatusSync__,
        0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v29, v30);
      Request_object = NetworkManager__getRequest_object_(
                         v28,
                         (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_object )
      {
        v19 = v31;
        v18 = choiceList;
        v20 = 0;
        v21 = 1;
        goto LABEL_15;
      }
LABEL_19:
      sub_21FFECC(Request_object, v17);
    }
  }
  else if ( modeKind == 1 && SvtEqCombineListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.requestCallback,
      (int32_t)callback,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    v13 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_SvtEqCombineListViewManager_EndStatusSync__,
      0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14, v15);
    Request_object = NetworkManager__getRequest_object_(
                       v13,
                       (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( Request_object )
    {
      v19 = unlockList;
      v18 = lockList;
      v20 = 1;
      v21 = 0;
LABEL_15:
      CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)Request_object, v18, v19, 0, v20, v21, 0);
      return;
    }
    goto LABEL_19;
  }
  if ( callback )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      0,
      callback->fields.method);
}


void SvtEqCombineListViewManager___SetMaterialSvtInfo_b__118_1(
        SvtEqCombineListViewManager_o *this,
        SvtEqCombineListViewItem_o *x,
        const MethodInfo *method)
{
  SvtEqCombineListViewManager_o *v4; // x20
  System_Collections_Generic_List_long__o *selectMaterialUsrSvtIdList; // x20

  v4 = this;
  if ( (byte_593230B & 1) == 0 )
  {
    this = (SvtEqCombineListViewManager_o *)sub_21FFC50(&Method_System_Collections_Generic_List_long__Contains__);
    byte_593230B = 1;
  }
  if ( !x
    || (selectMaterialUsrSvtIdList = v4->fields.selectMaterialUsrSvtIdList,
        this = (SvtEqCombineListViewManager_o *)SvtEqCombineListViewItem__get_UserSvtId(x, (const MethodInfo *)x),
        !selectMaterialUsrSvtIdList) )
  {
    sub_21FFECC(this, x);
  }
  if ( System_Collections_Generic_List_long___Contains(
         selectMaterialUsrSvtIdList,
         (int64_t)this,
         (const MethodInfo_44384E4 *)Method_System_Collections_Generic_List_long__Contains__) )
  {
    x->fields.isCanNotLock = 1;
  }
}


void SvtEqCombineListViewManager__add_callbackFunc(
        SvtEqCombineListViewManager_o *this,
        SvtEqCombineListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  SvtEqCombineListViewManager_o *v11; // x0
  SvtEqCombineListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_59322C3 & 1) == 0 )
  {
    sub_21FFC50(&SvtEqCombineListViewManager_CallbackFunc_TypeInfo);
    byte_59322C3 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (SvtEqCombineListViewManager_CallbackFunc_c *)v6->klass != SvtEqCombineListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SvtEqCombineListViewManager_o *)sub_220024C(v6, SvtEqCombineListViewManager_CallbackFunc_TypeInfo, v7, v8);
  SvtEqCombineListViewManager__remove_callbackFunc(v11, v12, v13);
}


void SvtEqCombineListViewManager__add_callbackFunc2(
        SvtEqCombineListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  SvtEqCombineListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_59322C5 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_59322C5 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SvtEqCombineListViewManager_o *)sub_220024C(v6, System_Action_TypeInfo, v7, v8);
  SvtEqCombineListViewManager__remove_callbackFunc2(v11, v12, v13);
}


System_Collections_Generic_List_SvtEqCombineListViewObject__o *SvtEqCombineListViewManager__get_ClippingObjectList(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v12; // x1
  Il2CppObject *v13; // x21
  ListViewItem_o *Item; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  _BOOL8 v21; // x0
  __int64 v22; // x1
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_59322CB & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_SvtEqCombineListViewObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59322CB = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_SvtEqCombineListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_21FFECC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  v28.fields._list = 0;
  *(_QWORD *)&v28.fields._index = &v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_21FFECC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___);
      v13 = Component_object;
      if ( !Component_object )
        sub_21FFECC(0, v12);
      Item = (ListViewItem_o *)SvtEqCombineListViewObject__GetItem(
                                 (SvtEqCombineListViewObject_o *)Component_object,
                                 v12);
      if ( !Item )
        sub_21FFECC(0, 0);
      if ( Item->fields.isTermination )
      {
        v21 = ListViewManager__ClippingItem_50765052((ListViewManager_o *)this, Item, 0);
        if ( v21 )
        {
          if ( !v3
            || (items = v3->fields._items,
                v24 = Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__,
                ++v3->fields._version,
                !items) )
          {
            sub_21FFECC(v21, v22);
          }
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v13,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3
          || (items = v3->fields._items,
              v24 = Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__,
              ++v3->fields._version,
              !items) )
        {
          sub_21FFECC(Item, Item);
        }
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v26 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v13;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v13, v15, v16, v17, v18, v19, v20);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SvtEqCombineListViewObject__o *)v3;
}


System_Collections_Generic_List_SvtEqCombineListViewObject__o *SvtEqCombineListViewManager__get_ObjectList(
        SvtEqCombineListViewManager_o *this,
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

  if ( (byte_59322CA & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_SvtEqCombineListViewObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59322CA = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_SvtEqCombineListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_21FFECC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_21FFECC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_21FFECC(Component_object, Component_object);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v18, v12, v13, v14, v15, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SvtEqCombineListViewObject__o *)v3;
}


int32_t SvtEqCombineListViewManager__get_getModeKind(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.modeKind;
}


bool SvtEqCombineListViewManager__get_isOpenCheckEquipDialog(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields._isOpenCheckEquipDialog_k__BackingField;
}


System_Collections_Generic_List_SvtEqCombineListViewItem__o *SvtEqCombineListViewManager__get_selectedMtSvtList(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields._selectedMtSvtList_k__BackingField;
}


void SvtEqCombineListViewManager__remove_callbackFunc(
        SvtEqCombineListViewManager_o *this,
        SvtEqCombineListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  SvtEqCombineListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_59322C4 & 1) == 0 )
  {
    sub_21FFC50(&SvtEqCombineListViewManager_CallbackFunc_TypeInfo);
    byte_59322C4 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (SvtEqCombineListViewManager_CallbackFunc_c *)v6->klass != SvtEqCombineListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SvtEqCombineListViewManager_o *)sub_220024C(v6, SvtEqCombineListViewManager_CallbackFunc_TypeInfo, v7, v8);
  SvtEqCombineListViewManager__add_callbackFunc2(v11, v12, v13);
}


void SvtEqCombineListViewManager__remove_callbackFunc2(
        SvtEqCombineListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  SvtEqCombineListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_59322C6 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_59322C6 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SvtEqCombineListViewManager_o *)sub_220024C(v6, System_Action_TypeInfo, v7, v8);
  SvtEqCombineListViewManager__get_isOpenCheckEquipDialog(v11, v12);
}


void SvtEqCombineListViewManager__set_isOpenCheckEquipDialog(
        SvtEqCombineListViewManager_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isOpenCheckEquipDialog_k__BackingField = value;
}


void SvtEqCombineListViewManager__set_selectedMtSvtList(
        SvtEqCombineListViewManager_o *this,
        System_Collections_Generic_List_SvtEqCombineListViewItem__o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._selectedMtSvtList_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._selectedMtSvtList_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SvtEqCombineListViewManager_CallbackFunc___ctor(
        SvtEqCombineListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FEC3FC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_1FEC3A4;
}


System_IAsyncResult_o *SvtEqCombineListViewManager_CallbackFunc__BeginInvoke(
        SvtEqCombineListViewManager_CallbackFunc_o *this,
        int32_t kind,
        System_Int32_array *list,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = kind;
  if ( (byte_593230C & 1) == 0 )
  {
    sub_21FFC50(&SvtEqCombineListViewManager_ResultKind_TypeInfo);
    byte_593230C = 1;
  }
  v11[2] = 0;
  v11[0] = j_il2cpp_value_box_0(SvtEqCombineListViewManager_ResultKind_TypeInfo, &v12);
  v11[1] = list;
  return (System_IAsyncResult_o *)sub_21FFC04(this, v11, callback, object);
}


void SvtEqCombineListViewManager_CallbackFunc__EndInvoke(
        SvtEqCombineListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void SvtEqCombineListViewManager_CallbackFunc__Invoke(
        SvtEqCombineListViewManager_CallbackFunc_o *this,
        int32_t kind,
        System_Int32_array *list,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, System_Int32_array *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    kind,
    list,
    this->fields.method);
}


void SvtEqCombineListViewManager_RequestCallbackFunc___ctor(
        SvtEqCombineListViewManager_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FEC474;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FEC42C;
}


System_IAsyncResult_o *SvtEqCombineListViewManager_RequestCallbackFunc__BeginInvoke(
        SvtEqCombineListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isRequest;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_594C050, v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void SvtEqCombineListViewManager_RequestCallbackFunc__EndInvoke(
        SvtEqCombineListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void SvtEqCombineListViewManager_RequestCallbackFunc__Invoke(
        SvtEqCombineListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isRequest,
    this->fields.method);
}


void SvtEqCombineListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593230D & 1) == 0 )
  {
    sub_21FFC50(&SvtEqCombineListViewManager___c_TypeInfo);
    byte_593230D = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(SvtEqCombineListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SvtEqCombineListViewManager___c_TypeInfo->static_fields->__9 = (struct SvtEqCombineListViewManager___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)SvtEqCombineListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SvtEqCombineListViewManager___c___ctor(SvtEqCombineListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t SvtEqCombineListViewManager___c___GetSelectedMaterialList_b__141_0(
        SvtEqCombineListViewManager___c_o *this,
        SvtEqCombineListViewItem_o *a,
        SvtEqCombineListViewItem_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_21FFECC(this, a);
  return a->fields.selectNum - b->fields.selectNum;
}


SvtEqCombineListViewItem_o *SvtEqCombineListViewManager___c___SetMaterialSvtInfo_b__118_0(
        SvtEqCombineListViewManager___c_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 naturalAligment; // x9
  SvtEqCombineListViewManager___c_o *v7; // x0
  SvtEqCombineListViewItem_o *v8; // x1
  SvtEqCombineListViewItem_o *v9; // x2
  const MethodInfo *v10; // x3

  if ( (byte_593230E & 1) == 0 )
  {
    sub_21FFC50(&SvtEqCombineListViewItem_TypeInfo);
    byte_593230E = 1;
  }
  if ( !item )
    return (SvtEqCombineListViewItem_o *)item;
  naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
  if ( item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (SvtEqCombineListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] == SvtEqCombineListViewItem_TypeInfo )
  {
    return (SvtEqCombineListViewItem_o *)item;
  }
  v7 = (SvtEqCombineListViewManager___c_o *)sub_220024C(item, SvtEqCombineListViewItem_TypeInfo, method, v3);
  return (SvtEqCombineListViewItem_o *)SvtEqCombineListViewManager___c___GetSelectedMaterialList_b__141_0(
                                         v7,
                                         v8,
                                         v9,
                                         v10);
}


int64_t SvtEqCombineListViewManager___c___SetSelectedMaterialInfo_b__142_0(
        SvtEqCombineListViewManager___c_o *this,
        SvtEqCombineListViewItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return SvtEqCombineListViewItem__get_UserSvtId(x, (const MethodInfo *)x);
}